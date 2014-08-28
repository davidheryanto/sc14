/**
\file
\brief Charm Kernel--the groups and chares level of Charm++.
*/
#ifndef CHARM_H
#define CHARM_H

#include "converse.h"
#include <sys/types.h> /* for size_t */

#ifdef __cplusplus
#include "pup.h"
extern "C" {
#endif


/******************************************************************************
 *
 * Converse Concepts, renamed to CK
 *
 *****************************************************************************/

/** Queueing types, for use with CkSetQueueing: */
#define CK_QUEUEING_FIFO   CQS_QUEUEING_FIFO
#define CK_QUEUEING_LIFO   CQS_QUEUEING_LIFO
#define CK_QUEUEING_IFIFO  CQS_QUEUEING_IFIFO
#define CK_QUEUEING_ILIFO  CQS_QUEUEING_ILIFO
#define CK_QUEUEING_BFIFO  CQS_QUEUEING_BFIFO
#define CK_QUEUEING_BLIFO  CQS_QUEUEING_BLIFO
#define CK_QUEUEING_LFIFO  CQS_QUEUEING_LFIFO
#define CK_QUEUEING_LLIFO  CQS_QUEUEING_LLIFO

#define CkTimer  	CmiTimer
#define CkWallTimer  	CmiWallTimer
#define CkCpuTimer  	CmiCpuTimer

#define CkMyPe		CmiMyPe
#define CkMyRank	CmiMyRank
#define CkMyNode	CmiMyNode
#define CkNumPes	CmiNumPes
#define CkNumNodes	CmiNumNodes
#define CkNodeFirst	CmiNodeFirst
#define CkNodeSize	CmiNodeSize
#define CkMyNodeSize	CmiMyNodeSize
#define CkNodeOf	CmiNodeOf
#define CkRankOf	CmiRankOf

#define CkPrintf                CmiPrintf
#define CkScanf                 CmiScanf
#define CkError                 CmiError
#define CkAbort                 CmiAbort
#define CkAssert                CmiAssert

extern void  CkExit(void);
extern char **CkGetArgv(void);
extern int  CkGetArgc(void);

/******************************************************************************
 *
 * Miscellaneous Constants
 *
 *****************************************************************************/

#define CK_PE_ALL        CLD_BROADCAST_ALL
#define CK_PE_ALL_BUT_ME CLD_BROADCAST
#define CK_PE_ANY        CLD_ANYWHERE

/******************************************************************************
 *
 * Message Allocation Calls
 *
 *****************************************************************************/

extern void* CkAllocSysMsg(void);
extern void  CkFreeSysMsg(void *msg);
extern void* CkAllocMsg(int msgIdx, int msgBytes, int prioBits);
extern void* CkAllocBuffer(void *msg, int bufsize);
extern void  CkFreeMsg(void *msg);
extern void* CkCopyMsg(void **pMsg);
extern void  CkSetQueueing(void *msg, int strategy);
extern void* CkPriorityPtr(void *msg);

/*********************************************************/
/**
\addtogroup CkRegister
\brief Charm Registration--keeps track of the possible chare and method types.

These are implemented in register.C.
*/
/*@{*/
/** Message pack function: convert a message into a buffer. */
typedef void* (*CkPackFnPtr)(void *msg);
/** Message unpack function: convert a buffer into a message. */
typedef void* (*CkUnpackFnPtr)(void *buf);
/** Message dealloc function: deletes a message. */
typedef void (*CkDeallocFnPtr)(void *msg);

/** Register this message name, with this basic size and pack and unpack functions. */
extern int CkRegisterMsg(const char *name, CkPackFnPtr pack, 
                       CkUnpackFnPtr unpack, CkDeallocFnPtr dealloc, size_t size);

/** This entry point flag indicates the method does not keep the passed-in message. */
#define CK_EP_NOKEEP        (1<<2) 
#define CK_EP_INTRINSIC     (1<<3) 
#define CK_EP_TRACEDISABLE  (1<<4) 

#define CK_EP_MEMCRITICAL (1<<5)

/** type of a chare */
typedef enum{
	TypeInvalid=0,
	TypeChare,
	TypeMainChare,
	TypeGroup,
	TypeNodeGroup,
	TypeArray
} ChareType;

/** A "call function" to invoke a method on an object. See EntryInfo */
typedef void  (*CkCallFnPtr) (void *msg, void *obj);
/** Register this entry point, with this call function and flags.
    Returns the entry point's index in the _entryTable. */
extern int CkRegisterEp(const char *name, CkCallFnPtr call, int msgIdx, 
                        int chareIdx,int ck_ep_flags);

/** Register this type of chare (group, or array), with this size.
    Returns the Chare's index in the _chareTable. */
extern int CkRegisterChare(const char *name, size_t dataSz, ChareType chareType);
/** Register this chare as internal to Charm++.*/
extern void CkRegisterChareInCharm(int chareIndex);
/** Register this chare as a mainchare, with this entry point as its constructor.*/
extern int CkRegisterMainChare(int chareIndex, int epIndex);
/** Register a default constructor for this chare.*/
extern void CkRegisterDefaultCtor(int chareIndex, int ctorEpIndex);
/** Register a migration constructor for this chare.*/
extern void CkRegisterMigCtor(int chareIndex, int ctorEpIndex);
/** Indicate whether this group is an IrrGroup. */
extern void CkRegisterGroupIrr(int chareIndex,int isIrr);
/** Register the chare baseIdx as a base class of the chare derivedIdx. */
extern void CkRegisterBase(int derivedIdx, int baseIdx);

/** This function pup's a global variable.*/
typedef void (*CkPupReadonlyFnPtr)(void *pup_er);
/** Register this readonly global variable.*/
extern void CkRegisterReadonly(const char *name,const char *type,
	int size, void *ptr,CkPupReadonlyFnPtr pup_fn);
/** Register this readonly message.*/
extern void CkRegisterReadonlyMsg(const char *name,const char *type,
	void** pMsg);

/** A "marshall unpack" function: pups out parameters and calls a method. */
typedef int (*CkMarshallUnpackFn)(char *marshall_buf,void *object);
/** Register this marshall unpack function with this entry point.*/
extern void CkRegisterMarshallUnpackFn(int epIndex,CkMarshallUnpackFn m);
/** Lookup the marshall unpack function, if any, for this entry point.*/
extern CkMarshallUnpackFn CkLookupMarshallUnpackFn(int epIndex);

#ifdef __cplusplus
/** A "message pup" function: pups message data for debugger display. */
typedef void (*CkMessagePupFn)(PUP::er &p,void *userMessage);
/** Register this message pup function with this entry point.*/
extern void CkRegisterMessagePupFn(int epIndex,CkMessagePupFn m);
#endif
/*@}*/

/*********************************************************/
/**
\addtogroup Ck
\brief Charm Kernel--the groups and chares level of Charm++.

These routines are implemented in ck.C.
*/
/*@{*/

typedef struct {
  int   onPE;
  void* objPtr;
} CkChareID;

typedef struct _ckGroupID{
  int idx;		/* pe(processor number) is removed from the structure */
#ifdef __cplusplus
  inline void pup(PUP::er &p) {  p|idx; }
  inline int isZero(void) const { return (idx==0); }
  inline void setZero(void) { idx=0; }
  inline int operator==(const struct _ckGroupID& gid) const {
    return (gid.idx==idx);
  }
  inline int operator<(const struct _ckGroupID& gid) const {
    return (gid.idx<idx);
  }
#endif
} CkGroupID;

typedef CkGroupID CkNodeGroupID;

/******************************************************************************
 *
 * Object Creation Calls
 *
 *****************************************************************************/
#ifdef __cplusplus
class envelope;
#else
typedef struct envelope envelope;
#endif
extern void CkCreateChare(int chareIdx, int constructorIdx, void *msg,
                          CkChareID *vid, int destPE);
extern CkGroupID CkCreateGroup(int chareIdx, int constructorIdx, void *msg);
extern CkGroupID CkCreateNodeGroup(int chareIdx, int constructorIdx, void *msg);
extern void CkCreateLocalGroup(CkGroupID groupID, int constructorIdx, envelope *env);
extern void CkCreateLocalNodeGroup(CkGroupID groupID, int constructorIdx, envelope *env);



/******************************************************************************

 This set of message type (mtype) constants
 defines the basic class of charm++ message.
 
 It is very questionable whether bizarre stuff like
 "ExitMsg", "StatMsg", "ROMsgMsg" should actually
 share the envelope with regular user messages;
 but it doesn't waste any space so it's probably OK.

 These were formerly in envelope.h

 *****************************************************************************/
/*** WARNING!!!! The following enum is linked to charmdebug finals in MsgInfo.java.
 *   Make sure the two remain synchronized if changing this one.
 ***/
typedef enum {
  NewChareMsg    =1,
  NewVChareMsg   =2,
  BocInitMsg     =3,
  ForChareMsg    =4,
  ForBocMsg      =5,
  ForVidMsg      =6,
  FillVidMsg     =7,
  DeleteVidMsg   =8,
  RODataMsg      =9,
  ROMsgMsg       =10,
  StartExitMsg   =11,
  ExitMsg        =12,
  ReqStatMsg     =13,
  StatMsg        =14,
  NodeBocInitMsg =15,
  ForNodeBocMsg  =16,
  ArrayEltInitMsg =17,
  ForArrayEltMsg  =18,
  LAST_CK_ENVELOPE_TYPE =19
} CkEnvelopeType;



/******************************************************************************
 *
 * Asynchronous Remote Method Invocation Calls
 *
 *****************************************************************************/

#define CK_MSG_INLINE      	0x1
#define CK_MSG_IMMEDIATE   	0x2
#define CK_MSG_EXPEDITED	0x4
#define CK_MSG_KEEP		0x8    /* send without freeing message */
#define CK_MSG_LB_NOTRACE	0x10   /* load balancer doesn't trace */

#ifdef __cplusplus
#define CK_MSGOPTIONAL =0
#else
#define CK_MSGOPTIONAL
#endif

extern void CkSendMsg(int entryIndex, void *msg, const CkChareID *chare, int opts CK_MSGOPTIONAL);
extern void CkSendMsgBranch(int eIdx, void *msg, int destPE, CkGroupID gID, int opts CK_MSGOPTIONAL);
extern void CkSendMsgInline(int entryIndex, void *msg, const CkChareID *chare, int opts CK_MSGOPTIONAL);
extern void CkSendMsgBranchInline(int eIdx, void *msg, int destPE, CkGroupID gID, int opts CK_MSGOPTIONAL);
extern void CkSendMsgBranchMulti(int eIdx, void *msg, CkGroupID gID, int npes, int *pes, int opts CK_MSGOPTIONAL);
extern void CkSendMsgBranchGroup(int eIdx,void *msg,CkGroupID gID,CmiGroup grp, int opts CK_MSGOPTIONAL);
extern void CkSendMsgNodeBranch(int eIdx, void *msg, int destNode, CkGroupID gID, int opts CK_MSGOPTIONAL);
extern void CkSendMsgNodeBranchInline(int eIdx, void *msg, int destNode, CkGroupID gID, int opts CK_MSGOPTIONAL);
extern void CkSendMsgNodeBranchMulti(int eIdx, void *msg, CkGroupID gID, int npes, int *nodes, int opts CK_MSGOPTIONAL);
extern void CkBroadcastMsgBranch(int eIdx, void *msg, CkGroupID gID, int opts CK_MSGOPTIONAL);
extern void CkBroadcastMsgNodeBranch(int eIdx, void *msg, CkGroupID gID, int opts CK_MSGOPTIONAL);

extern int  CkChareMsgPrep(int eIdx, void *msg,const CkChareID *pCid);
extern void CkGroupMsgPrep(int eIdx, void *msg, CkGroupID gID);
extern void CkNodeGroupMsgPrep(int eIdx, void *msg, CkGroupID gID);

extern void CkSetRefNum(void *msg, CMK_REFNUM_TYPE ref);
extern CMK_REFNUM_TYPE  CkGetRefNum(void *msg);
extern int  CkGetSrcPe(void *msg);
extern int  CkGetSrcNode(void *msg);

extern void CkDeliverMessageFree(int epIdx,void *msg,void *object);
extern void CkDeliverMessageReadonly(int epIdx,const void *msg,void *object);

extern void *CkLocalBranch(CkGroupID gID);
extern void *CkLocalNodeBranch(CkGroupID gID);
extern void *CkLocalChare(const CkChareID *chare);

extern void CkArrayManagerInsert(int onPe,void *msg,CkGroupID aID);
extern void CkArrayManagerDeliver(int onPe,void *msg, int opts CK_MSGOPTIONAL);

/*@}*/



/******************************************************************************
 *
 * Semaphore calls
 *
 *****************************************************************************/

typedef struct _ckSemaID {
  int pe;
  int idx;
#ifdef __cplusplus
  public:
    void pup(PUP::er &p) { p(pe); p(idx); }
#endif
} CkSemaID;

extern CkSemaID CkSemaCreate(void);
extern void *CkSemaWait(CkSemaID id);
extern void CkSemaWaitN(CkSemaID id, int n, void *marray[]);
extern void CkSemaSignal(CkSemaID id, void *m);
extern void CkSemaDestroy(CkSemaID id);
/*@}*/


/******************************************************************************
 *
 * Quiescence Calls
 *
 *****************************************************************************/
/**
\addtogroup CkQD
\brief Quiescence Detection--a way to tell when nothing is happening.

These routines are implemented in qd.C and waitqd.C.
*/
/*@{*/

/** When quiescence occurs, send a message to this entry point of this Chare. */
extern void CkStartQD(int eIdx,const CkChareID *chare);
/** Block until quiescence occurs. */
extern void CkWaitQD(void);
/*@}*/

/******************************************************************************
 *
 * Miscellaneous Calls
 *
 *****************************************************************************/

extern int CkMessageToEpIdx(void *msg);
extern void CkPrintEntryMethod(int epIdx);
extern void CkPrintChareName(int chareIdx);
extern void CkSummary_MarkEvent(int);
extern void CkSummary_StartPhase(int);
extern int CkDisableTracing(int epIdx);
extern void CkEnableTracing(int epIdx);

#ifdef __cplusplus
}
#endif
#endif
