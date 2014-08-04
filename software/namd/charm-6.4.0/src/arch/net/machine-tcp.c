/** @file
 * TCP implementation of Converse NET version
 * @ingroup NET
 * contains only TCP specific code for:
 * - CmiMachineInit()
 * - CmiCommunicationInit()
 * - CheckSocketsReady()
 * - CmiNotifyIdle()
 * - DeliverViaNetwork()
 * - CommunicationServer()

  written by 
  Gengbin Zheng, 12/21/2001
  gzheng@uiuc.edu

  now also works with SMP version  //  Gengbin 6/18/2003
*/

/**
 * @addtogroup NET
 * @{
 */

#if !defined(_WIN32) || defined(__CYGWIN__)
#include <netinet/tcp.h>
#include <sys/types.h>
#include <sys/socket.h>
#endif

#define NO_NAGLE_ALG		1
#define FRAGMENTATION		1

#if FRAGMENTATION
#define PACKET_MAX		32767
#else
#define PACKET_MAX		1000000000
#endif

void ReceiveDatagram(int node);
int TransmitDatagram(int pe);

/******************************************************************************
 *
 * CmiNotifyIdle()-- wait until a packet comes in
 *
 *****************************************************************************/
typedef struct {
  int sleepMs; /*Milliseconds to sleep while idle*/
  int nIdles; /*Number of times we've been idle in a row*/
  CmiState cs; /*Machine state*/
} CmiIdleState;


static CmiIdleState *CmiNotifyGetState(void) 
{
  CmiIdleState *s=(CmiIdleState *)malloc(sizeof(CmiIdleState));
  s->sleepMs=0;
  s->nIdles=0;
  s->cs=CmiGetState();
  return s;
}

static void CmiNotifyBeginIdle(CmiIdleState *s)
{
  s->sleepMs=0;
  s->nIdles=0;
}

static void CmiNotifyStillIdle(CmiIdleState *s)
{
#if CMK_SHARED_VARS_UNAVAILABLE
  CommunicationServer(10, COMM_SERVER_FROM_SMP);
#else
  int nSpins=20; /*Number of times to spin before sleeping*/
  s->nIdles++;
  if (s->nIdles>nSpins) { /*Start giving some time back to the OS*/
    s->sleepMs+=2;
    if (s->sleepMs>10) s->sleepMs=10;
  }
  /*Comm. thread will listen on sockets-- just sleep*/
  if (s->sleepMs>0) {
    MACHSTATE1(3,"idle lock(%d) {",CmiMyPe())
    CmiIdleLock_sleep(&s->cs->idle,s->sleepMs);
    CsdResetPeriodic();		/* check ccd callbacks when I am awakened */
    MACHSTATE1(3,"} idle lock(%d)",CmiMyPe())
  }
#endif
}

void CmiNotifyIdle(void) {
  CmiIdleState s;
  s.sleepMs=5; 
  CmiNotifyStillIdle(&s);
}

/****************************************************************************
 *                                                                          
 * CheckSocketsReady
 *
 * Checks both sockets to see which are readable and which are writeable.
 * We check all these things at the same time since this can be done for
 * free with ``select.'' The result is stored in global variables, since
 * this is essentially global state information and several routines need it.
 *
 ***************************************************************************/

/*
  FIXME !
  current tcp version only allow the program to run on <= 1000 nodes
  due to the static fixed size array below.
  This can be easily fixed, however, I suspect tcp version won't scale well
  on large number of processors due to the checking of sockets, 
  so I don't bother.
*/

static char sockReadStates[1000] = {0};
static char sockWriteStates[1000] = {0};

#if CMK_USE_POLL

#undef CMK_PIPE_DECL
#define CMK_PIPE_DECL(delayMs)  \
	struct pollfd  fds[1000];	\
	int nFds_sto=0; int *nFds=&nFds_sto; \
	int pollDelayMs=delayMs;

#define CMK_PIPE_ADDREADWRITE(afd)	\
      CMK_PIPE_ADDREAD(afd);	\
      if (nodes[i].send_queue_h) fds[(*nFds)-1].events |= POLLOUT;
	
#undef CMK_PIPE_CHECKWRITE
#define CMK_PIPE_CHECKWRITE(afd)	\
	fds[*nFds].revents&POLLOUT

#define CMK_PIPE_SETUP	\
	CmiStdoutAdd(CMK_PIPE_SUB);	\
  	if (Cmi_charmrun_fd!=-1) { CMK_PIPE_ADDREAD(Cmi_charmrun_fd); }	\
  	if (dataskt!=-1) {	\
    	  for (i=0; i<CmiNumNodes(); i++)	\
    	  {	\
      	    if (i == CmiMyNode()) continue;	\
      	    CMK_PIPE_ADDREADWRITE(nodes[i].sock);	\
   	  }	\
  	} 	

#else

#define CMK_PIPE_SETUP	\
  	CmiStdoutAdd(CMK_PIPE_SUB);	\
	if (Cmi_charmrun_fd!=-1) { CMK_PIPE_ADDREAD(Cmi_charmrun_fd); }	\
  	if (dataskt!=-1) {	\
    	  for (i=0; i<CmiNumNodes(); i++)	\
    	  {	\
      	    if (i == CmiMyNode()) continue;	\
      	    CMK_PIPE_ADDREAD(nodes[i].sock);	\
      	    if (nodes[i].send_queue_h) CMK_PIPE_ADDWRITE(nodes[i].sock);\
    	  }	\
  	}	 	

#endif

/* check data sockets and invoking functions */
static void CmiCheckSocks()
{
  int node;
  if (dataskt!=-1) {
    for (node=0; node<CmiNumNodes(); node++)
    {
      if (node == CmiMyNode()) continue;
      if (sockReadStates[node]) {
        MACHSTATE1(2,"go to ReceiveDatagram %d", node)
	ReceiveDatagram(node);
      }
      if (sockWriteStates[node]) {
        MACHSTATE1(2,"go to TransmitDatagram %d", node)
	TransmitDatagram(node);
      }
    }
  }
}

/*
  when output = 1, this function is not thread safe
*/
int CheckSocketsReady(int withDelayMs, int output)
{   
  int nreadable,i;
  CMK_PIPE_DECL(withDelayMs);

  CMK_PIPE_SETUP;
  nreadable=CMK_PIPE_CALL();

  ctrlskt_ready_read = 0;
  dataskt_ready_read = 0;
  dataskt_ready_write = 0;

  if (nreadable == 0) {
    MACHSTATE(1,"} CheckSocketsReady (nothing readable)")
    return nreadable;
  }
  if (nreadable==-1) {
#if defined(_WIN32) && !defined(__CYGWIN__)
/* Win32 socket seems to randomly return inexplicable errors
here-- WSAEINVAL, WSAENOTSOCK-- yet everything is actually OK. 
	int err=WSAGetLastError();
	CmiPrintf("(%d)Select returns -1; errno=%d, WSAerr=%d\n",withDelayMs,errno,err);
*/
#else
	if (errno!=EINTR)
		KillEveryone("Socket error in CheckSocketsReady!\n");
#endif
    MACHSTATE(2,"} CheckSocketsReady (INTERRUPTED!)")
    return CheckSocketsReady(0, output);
  }

  if (output) {

    CmiStdoutCheck(CMK_PIPE_SUB);
    if (Cmi_charmrun_fd!=-1)
	ctrlskt_ready_read = CMK_PIPE_CHECKREAD(Cmi_charmrun_fd);
    if (dataskt!=-1) {
      for (i=0; i<CmiNumNodes(); i++)
      {
        if (i == CmiMyNode()) continue;
        if (nodes[i].send_queue_h) {
          sockWriteStates[i] = CMK_PIPE_CHECKWRITE(nodes[i].sock);
          if (sockWriteStates[i]) dataskt_ready_write = 1;
	  /* sockWriteStates[i] = dataskt_ready_write = 1; */
        }
        else
          sockWriteStates[i] = 0;
        sockReadStates[i] = CMK_PIPE_CHECKREAD(nodes[i].sock);
        if (sockReadStates[i])  dataskt_ready_read = 1;
      }
    }
  }
  MACHSTATE(1,"} CheckSocketsReady")
  return nreadable;
}

/***********************************************************************
 * CommunicationServer()
 * 
 * This function does the scheduling of the tasks related to the
 * message sends and receives. 
 * It first check the charmrun port for message, and poll the gm event
 * for send complete and outcoming messages.
 *
 ***********************************************************************/

static void CommunicationServer(int sleepTime, int where)
{
  unsigned int nTimes=0; /* Loop counter */
  CmiCommLockOrElse({
    MACHSTATE(4,"Attempted to re-enter comm. server!") 
    return;
  });
  LOG(GetClock(), Cmi_nodestart, 'I', 0, 0);
  MACHSTATE2(sleepTime?3:2,"CommunicationsServer(%d,%d) {",
	     sleepTime,writeableAcks||writeableDgrams)  
#if !CMK_SHARED_VARS_UNAVAILABLE /*SMP mode: comm. lock is precious*/
  if (sleepTime!=0) {/*Sleep *without* holding the comm. lock*/
    MACHSTATE(2,"CommServer going to sleep (NO LOCK)");
    if (CheckSocketsReady(sleepTime, 0)<=0) {
      MACHSTATE(2,"CommServer finished without anything happening.");
    }
  }
  sleepTime=0;
#endif
  CmiCommLock();
  /* in netpoll mode, only perform service to stdout */
  if (Cmi_netpoll && where == COMM_SERVER_FROM_INTERRUPT) {
    if (CmiStdoutNeedsService()) {CmiStdoutService();}
    CmiCommUnlock();
    return;
  }
  CommunicationsClock();
  /*Don't sleep if a signal has stored messages for us*/
  if (sleepTime&&CmiGetState()->idle.hasMessages) sleepTime=0;
  while (CheckSocketsReady(sleepTime, 1)>0) {
    int again=0;
    sleepTime=0;
    CmiCheckSocks();
    if (ctrlskt_ready_read) {again=1;ctrl_getone();}
    if (dataskt_ready_read || dataskt_ready_write) {again=1;}
    if (CmiStdoutNeedsService()) {CmiStdoutService();}
    if (!again) break; /* Nothing more to do */
    if ((nTimes++ &16)==15) {
      /*We just grabbed a whole pile of packets-- try to retire a few*/
      CommunicationsClock();
      break;
    }
  }
  CmiCommUnlock();

  /* when called by communication thread or in interrupt */
  if (where == COMM_SERVER_FROM_SMP || where == COMM_SERVER_FROM_INTERRUPT)
  {
#if CMK_IMMEDIATE_MSG
  CmiHandleImmediate();
#endif
  }

  MACHSTATE(2,"} CommunicationServer") 
}


#if FRAGMENTATION
/* keep one buffer of PACKET_MAX size to ensure copy free operation 
   1. for short message that is less than PACKET_MAX, 
      buffer of that size is allocated and directly pass up
   2. for long messages,
      for first packet, buffer of PACKET_MAX is allocated and can be reused
      as recv buffer, asm_msg of actual message size.
      for afterwards packets, recv buffer will not allocated and the real 
      message is used as recv buffer
*/
static char * maxbuf = NULL;

static char * getMaxBuf() {
  char *buf;
  if (maxbuf == NULL)
    buf = (char *)CmiAlloc(PACKET_MAX);
  else {
    buf = maxbuf; 
    maxbuf = NULL;
  }
  return buf;
}

static void freeMaxBuf(char *buf) {
  if (maxbuf) CmiFree(buf);
  else maxbuf = buf;
}

#endif

static void IntegrateMessageDatagram(char **msg, int len)
{
  char *newmsg;
  int rank, srcpe, seqno, magic, broot, i;
  int size;
  
  if (len >= DGRAM_HEADER_SIZE) {
    DgramHeaderBreak(*msg, rank, srcpe, magic, seqno, broot);
    if (magic == (Cmi_charmrun_pid&DGRAM_MAGIC_MASK)) {
      OtherNode node = nodes_by_pe[srcpe];
      newmsg = node->asm_msg;
      if (newmsg == NULL) {
        size = CmiMsgHeaderGetLength(*msg);
        if (size < len) KillEveryoneCode(4559312);
#if FRAGMENTATION
        if (size == len) {		/* whole message in one packet */
	  newmsg = *msg;		/* directly use the buffer */
	}
	else {
          newmsg = (char *)CmiAlloc(size);
          if (!newmsg)
            fprintf(stderr, "%d: Out of mem\n", _Cmi_mynode);
          memcpy(newmsg, *msg, len);
	  if (len == PACKET_MAX) 
	      freeMaxBuf(*msg);		/* free buffer, must be max size */
	  else 
	      CmiFree(*msg);
	}
#else
        newmsg = *msg;
#endif
        node->asm_rank = rank;
        node->asm_total = size;
        node->asm_fill = len;
        node->asm_msg = newmsg;
      } else {
#if ! FRAGMENTATION
	CmiAssert(0);
#else
        size = len - DGRAM_HEADER_SIZE;
        memcpy(newmsg + node->asm_fill, (*msg)+DGRAM_HEADER_SIZE, size);
        node->asm_fill += size;
	if (len == PACKET_MAX) 
	      freeMaxBuf(*msg);		/* free buffer, must be max size */
	else 
	      CmiFree(*msg);
#endif
      }
      if (node->asm_fill > node->asm_total)
         CmiAbort("\n\n\t\tLength mismatch!!\n\n");
      if (node->asm_fill == node->asm_total) {
        /* do it at integration - the following function may re-entrant */
#if CMK_BROADCAST_SPANNING_TREE
        if (rank == DGRAM_BROADCAST
#if CMK_NODE_QUEUE_AVAILABLE
          || rank == DGRAM_NODEBROADCAST
#endif
           )
          SendSpanningChildren(NULL, 0, node->asm_total, newmsg, broot, rank);
#elif CMK_BROADCAST_HYPERCUBE
        if (rank == DGRAM_BROADCAST
#if CMK_NODE_QUEUE_AVAILABLE
          || rank == DGRAM_NODEBROADCAST
#endif
           )
          SendHypercube(NULL, 0, node->asm_total, newmsg, broot, rank);
#endif
        if (rank == DGRAM_BROADCAST) {
          for (i=1; i<_Cmi_mynodesize; i++)
            CmiPushPE(i, CopyMsg(newmsg, node->asm_total));
          CmiPushPE(0, newmsg);
        } else {
#if CMK_NODE_QUEUE_AVAILABLE
           if (rank==DGRAM_NODEMESSAGE || rank==DGRAM_NODEBROADCAST) {
             CmiPushNode(newmsg);
           }
           else
#endif
             CmiPushPE(rank, newmsg);
        }
        node->asm_msg = 0;
      }
    } 
    else {
      CmiPrintf("message ignored1: magic not agree:%d != %d!\n", magic, Cmi_charmrun_pid&DGRAM_MAGIC_MASK);
      CmiPrintf("recv: rank:%d src:%d mag:%d\n", rank, srcpe, magic);
    }
  } 
  else CmiPrintf("message ignored2!\n");
}


void ReceiveDatagram(int node)
{
  static char *buf = NULL;
  int size;
  DgramHeader *head, temp;
  int newmsg = 0;

  OtherNode nodeptr = &nodes[node];

  SOCKET fd = nodeptr->sock;
  if (-1 == skt_recvN(fd, &size, sizeof(int)))
    KillEveryoneCode(4559318);

#if FRAGMENTATION
  if (size == PACKET_MAX)
      buf = getMaxBuf();
  else
      buf = (char *)CmiAlloc(size);
#if 0
   /* buggy code */
  CmiAssert(size<=PACKET_MAX);
  if (nodeptr->asm_msg == NULL) {
    if (size == PACKET_MAX)
      buf = getMaxBuf();
    else
      buf = (char *)CmiAlloc(size);
  }
  else {
      /* this is not the first packet of a message */
    CmiAssert(nodeptr->asm_fill+size-DGRAM_HEADER_SIZE <= nodeptr->asm_total);
      /* find the dgram header start and save the header to temp */
    buf = (char*)nodeptr->asm_msg + nodeptr->asm_fill - DGRAM_HEADER_SIZE;
    head = (DgramHeader *)buf;
    temp = *head;
    newmsg = 1;
  }
#endif
#else
  buf = (char *)CmiAlloc(size);
#endif

  if (-1==skt_recvN(fd, buf, size))
    KillEveryoneCode(4559319);

  IntegrateMessageDatagram(&buf, size);

#if FRAGMENTATION
    /* restore header */
  if (newmsg) *head = temp;
#endif

}


/***********************************************************************
 * DeliverViaNetwork()
 *
 * This function is responsible for all non-local transmission. It
 * first allocate a send token, if fails, put the send message to
 * penging message queue, otherwise invoke the GM send.
 ***********************************************************************/

int TransmitImplicitDgram(ImplicitDgram dg)
{
  ChMessageHeader msg;
  char *data; DgramHeader *head; int len; DgramHeader temp;
  OtherNode dest;
  int retval;
  
  MACHSTATE2(2,"  TransmitImplicitDgram (%d bytes) [%d]",dg->datalen,dg->seqno)
  len = dg->datalen+DGRAM_HEADER_SIZE;
  data = dg->dataptr;
  head = (DgramHeader *)(data - DGRAM_HEADER_SIZE);
  temp = *head;
  dest = dg->dest;
  /* first int is len of the packet */
  DgramHeaderMake(head, dg->rank, dg->srcpe, Cmi_charmrun_pid, len, dg->broot);
  LOG(Cmi_clock, Cmi_nodestart, 'T', dest->nodestart, dg->seqno);
  /*
  ChMessageHeader_new("data", len, &msg);
  if (-1==skt_sendN(dest->sock,(const char *)&msg,sizeof(msg))) 
    CmiAbort("EnqueueOutgoingDgram"); 
  if (-1==skt_sendN(dest->sock,head,len))
    CmiAbort("EnqueueOutgoingDgram"); 
  */
  if (-1==skt_sendN(dest->sock,(const char *)&len,sizeof(len))) 
    CmiAbort("EnqueueOutgoingDgram"); 
  if (-1==skt_sendN(dest->sock,(const char *)head,len)) 
    CmiAbort("EnqueueOutgoingDgram"); 
    
  *head = temp;
  dest->stat_send_pkt++;
  return 1;
}

int TransmitDatagram(int pe)
{
  ImplicitDgram dg; OtherNode node;
  int count;
  unsigned int seqno;
  
  node = nodes+pe;
  dg = node->send_queue_h;
  if (dg) {
    if (TransmitImplicitDgram(dg)) {
      node->send_queue_h = dg->next;
      if (node->send_queue_h == NULL) node->send_queue_t = NULL;
      DiscardImplicitDgram(dg);
    }
  }
  return 0;
}

void EnqueueOutgoingDgram
        (OutgoingMsg ogm, char *ptr, int len, OtherNode node, int rank, int broot)
{
  int seqno, dst, src; ImplicitDgram dg;
  src = ogm->src;
  dst = ogm->dst;
  seqno = node->send_next;
  node->send_next = ((seqno+1)&DGRAM_SEQNO_MASK);
  MallocImplicitDgram(dg);
  dg->dest = node;
  dg->srcpe = src;
  dg->rank = rank;
  dg->seqno = seqno;
  dg->broot = broot;
  dg->dataptr = ptr;
  dg->datalen = len;
  dg->ogm = ogm;
  ogm->refcount++;
  dg->next = 0;
  if (node->send_queue_h == 0) {
    node->send_queue_h = dg;
    node->send_queue_t = dg;
  } else {
    node->send_queue_t->next = dg;
    node->send_queue_t = dg;
  }
}

/* ignore copy, because it is safe to reuse the msg buffer after send */
void DeliverViaNetwork(OutgoingMsg ogm, OtherNode node, int rank, unsigned int broot, int copy)
{
  int size; char *data;

/*CmiPrintf("DeliverViaNetwork to %d\n", node->nodestart);*/
/*CmiPrintf("send time: %fus\n", (CmiWallTimer()-t)*1.0e6); */
 
  size = ogm->size - DGRAM_HEADER_SIZE;
  data = ogm->data + DGRAM_HEADER_SIZE;
  while (size > Cmi_dgram_max_data) {
    EnqueueOutgoingDgram(ogm, data, Cmi_dgram_max_data, node, rank, broot);
    data += Cmi_dgram_max_data;
    size -= Cmi_dgram_max_data;
  }
  EnqueueOutgoingDgram(ogm, data, size, node, rank, broot);
}

/***********************************************************************
 * CmiMachineInit()
 *
 * This function intialize the GM board. Set receive buffer
 *
 ***********************************************************************/

void CmiMachineInit(char **argv)
{
#if FRAGMENTATION
  Cmi_dgram_max_data = PACKET_MAX - DGRAM_HEADER_SIZE; 
#else
  Cmi_dgram_max_data = PACKET_MAX;
#endif
}

void CmiMachineExit()
{
}

static void open_tcp_sockets()
{
  int i, ok, pe, flag;
  int mype, numpes;
  SOCKET skt;
  int val;

  mype = _Cmi_mynode;
  numpes = _Cmi_numnodes;
  MACHSTATE2(2,"  open_tcp_sockets (%d:%d)", mype, numpes);
  for (i=0; i<mype; i++) {
    unsigned int clientPort;
    skt_ip_t clientIP;
    skt = skt_accept(dataskt, &clientIP,&clientPort);
    if (skt<0) KillEveryoneCode(98246554);
#if NO_NAGLE_ALG
    skt_tcp_no_nagle(skt);
#endif
    ok = skt_recvN(skt, &pe, sizeof(int));
    if (ok<0) KillEveryoneCode(98246556);
    nodes[pe].sock = skt;
#if FRAGMENTATION
    skt_setSockBuf(skt, PACKET_MAX*4);
#endif
#if 0
#if !defined(_WIN32) || defined(__CYGWIN__)
    if ((val = fcntl(skt, F_GETFL, 0)) < 0) KillEveryoneCode(98246557);
    if (fcntl(skt, F_SETFL, val|O_NONBLOCK) < 0) KillEveryoneCode(98246558);
#endif
#endif
  }
  for (pe=mype+1; pe<numpes; pe++) {
    skt = skt_connect(nodes[pe].IP, nodes[pe].dataport, 300);
    if (skt<0) KillEveryoneCode(894788843);
#if NO_NAGLE_ALG
    skt_tcp_no_nagle(skt);
#endif
    ok = skt_sendN(skt, &mype, sizeof(int));
    if (ok<0) KillEveryoneCode(98246556);
    nodes[pe].sock = skt;
#if FRAGMENTATION
    skt_setSockBuf(skt, PACKET_MAX*4);
#endif
#if 0
#if !defined(_WIN32) || defined(__CYGWIN__)
    if ((val = fcntl(skt, F_GETFL, 0)) < 0) KillEveryoneCode(98246557);
    if (fcntl(skt, F_SETFL, val|O_NONBLOCK) < 0) KillEveryoneCode(98246558);
#endif
#endif
  }
}

void CmiCommunicationInit(char **argv)
{
  open_tcp_sockets();
}

/*@}*/
