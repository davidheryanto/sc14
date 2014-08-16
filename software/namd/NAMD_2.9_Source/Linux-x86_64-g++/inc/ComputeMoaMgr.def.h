/* DEFS: group ComputeMoaMgr: IrrGroup{
ComputeMoaMgr(void);
void initialize(CkQdMsg* impl_msg);
void initWorkers(CkQdMsg* impl_msg);
void startWorkers(CkQdMsg* impl_msg);
void recvMoaData(const MoaData &impl_noname_0);
void recvQ(int nq, const double *q);
void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
void recvSGrid(int ns, const double *sg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMoaMgr::__idx=0;
/* DEFS: ComputeMoaMgr(void);
 */

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMoaMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void initWorkers(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void startWorkers(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvMoaData(const MoaData &impl_noname_0);
 */
void CProxyElement_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvQ(int nq, const double *q);
 */
void CProxyElement_ComputeMoaMgr::recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
void CProxyElement_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvSGrid(int ns, const double *sg);
 */
void CProxyElement_ComputeMoaMgr::recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeMoaMgr(void);
 */
CkGroupID CProxy_ComputeMoaMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputeMoaMgr::__idx, CkIndex_ComputeMoaMgr::__idx_ComputeMoaMgr_void, impl_msg);
}
 int CkIndex_ComputeMoaMgr::__idx_ComputeMoaMgr_void=0;
void CkIndex_ComputeMoaMgr::_call_ComputeMoaMgr_void(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeMoaMgr();
}

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMoaMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::initialize(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::initialize(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg=0;
void CkIndex_ComputeMoaMgr::_call_initialize_CkQdMsg(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  impl_obj->initialize((CkQdMsg*)impl_msg);
}

/* DEFS: void initWorkers(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg=0;
void CkIndex_ComputeMoaMgr::_call_initWorkers_CkQdMsg(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  impl_obj->initWorkers((CkQdMsg*)impl_msg);
}

/* DEFS: void startWorkers(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg=0;
void CkIndex_ComputeMoaMgr::_call_startWorkers_CkQdMsg(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  impl_obj->startWorkers((CkQdMsg*)impl_msg);
}

/* DEFS: void recvMoaData(const MoaData &impl_noname_0);
 */
void CProxy_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5=0;
void CkIndex_ComputeMoaMgr::_call_recvMoaData_marshall5(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MoaData &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  MoaData impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvMoaData(impl_noname_0);
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvMoaData_marshall5(char* impl_buf,ComputeMoaMgr * impl_obj) {
  /*Unmarshall pup'd fields: const MoaData &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  MoaData impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvMoaData(impl_noname_0);
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvMoaData_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const MoaData &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  MoaData impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}

/* DEFS: void recvQ(int nq, const double *q);
 */
void CProxy_ComputeMoaMgr::recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvQ(int nq, const double *q, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvQ(int nq, const double *q, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6=0;
void CkIndex_ComputeMoaMgr::_call_recvQ_marshall6(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int nq, const double *q*/
  PUP::fromMem implP(impl_buf);
  int nq; implP|nq;
  int impl_off_q, impl_cnt_q; 
  implP|impl_off_q;
  implP|impl_cnt_q;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *q=(double *)(impl_buf+impl_off_q);
  impl_obj->recvQ(nq, q);
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvQ_marshall6(char* impl_buf,ComputeMoaMgr * impl_obj) {
  /*Unmarshall pup'd fields: int nq, const double *q*/
  PUP::fromMem implP(impl_buf);
  int nq; implP|nq;
  int impl_off_q, impl_cnt_q; 
  implP|impl_off_q;
  implP|impl_cnt_q;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *q=(double *)(impl_buf+impl_off_q);
  impl_obj->recvQ(nq, q);
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvQ_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int nq, const double *q*/
  PUP::fromMem implP(impl_buf);
  int nq; implP|nq;
  int impl_off_q, impl_cnt_q; 
  implP|impl_off_q;
  implP|impl_cnt_q;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *q=(double *)(impl_buf+impl_off_q);
  if (implDestP.hasComments()) implDestP.comment("nq");
  implDestP|nq;
  if (implDestP.hasComments()) implDestP.comment("q");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*q))<impl_cnt_q;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|q[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
}

/* DEFS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
void CProxy_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_recvB_marshall7=0;
void CkIndex_ComputeMoaMgr::_call_recvB_marshall7(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order*/
  PUP::fromMem implP(impl_buf);
  int K2_start; implP|K2_start;
  int K2_end; implP|K2_end;
  int K3_start; implP|K3_start;
  int K3_end; implP|K3_end;
  int K1_len; implP|K1_len;
  int K2_len; implP|K2_len;
  int K3_len; implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1; 
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2; 
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3; 
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  int order; implP|order;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *bm1=(double *)(impl_buf+impl_off_bm1);
  double *bm2=(double *)(impl_buf+impl_off_bm2);
  double *bm3=(double *)(impl_buf+impl_off_bm3);
  impl_obj->recvB(K2_start, K2_end, K3_start, K3_end, K1_len, K2_len, K3_len, bm1, bm2, bm3, order);
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvB_marshall7(char* impl_buf,ComputeMoaMgr * impl_obj) {
  /*Unmarshall pup'd fields: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order*/
  PUP::fromMem implP(impl_buf);
  int K2_start; implP|K2_start;
  int K2_end; implP|K2_end;
  int K3_start; implP|K3_start;
  int K3_end; implP|K3_end;
  int K1_len; implP|K1_len;
  int K2_len; implP|K2_len;
  int K3_len; implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1; 
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2; 
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3; 
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  int order; implP|order;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *bm1=(double *)(impl_buf+impl_off_bm1);
  double *bm2=(double *)(impl_buf+impl_off_bm2);
  double *bm3=(double *)(impl_buf+impl_off_bm3);
  impl_obj->recvB(K2_start, K2_end, K3_start, K3_end, K1_len, K2_len, K3_len, bm1, bm2, bm3, order);
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvB_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order*/
  PUP::fromMem implP(impl_buf);
  int K2_start; implP|K2_start;
  int K2_end; implP|K2_end;
  int K3_start; implP|K3_start;
  int K3_end; implP|K3_end;
  int K1_len; implP|K1_len;
  int K2_len; implP|K2_len;
  int K3_len; implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1; 
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2; 
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3; 
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  int order; implP|order;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *bm1=(double *)(impl_buf+impl_off_bm1);
  double *bm2=(double *)(impl_buf+impl_off_bm2);
  double *bm3=(double *)(impl_buf+impl_off_bm3);
  if (implDestP.hasComments()) implDestP.comment("K2_start");
  implDestP|K2_start;
  if (implDestP.hasComments()) implDestP.comment("K2_end");
  implDestP|K2_end;
  if (implDestP.hasComments()) implDestP.comment("K3_start");
  implDestP|K3_start;
  if (implDestP.hasComments()) implDestP.comment("K3_end");
  implDestP|K3_end;
  if (implDestP.hasComments()) implDestP.comment("K1_len");
  implDestP|K1_len;
  if (implDestP.hasComments()) implDestP.comment("K2_len");
  implDestP|K2_len;
  if (implDestP.hasComments()) implDestP.comment("K3_len");
  implDestP|K3_len;
  if (implDestP.hasComments()) implDestP.comment("bm1");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*bm1))<impl_cnt_bm1;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|bm1[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bm2");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*bm2))<impl_cnt_bm2;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|bm2[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bm3");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*bm3))<impl_cnt_bm3;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|bm3[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("order");
  implDestP|order;
}

/* DEFS: void recvSGrid(int ns, const double *sg);
 */
void CProxy_ComputeMoaMgr::recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvSGrid(int ns, const double *sg, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvSGrid(int ns, const double *sg, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8=0;
void CkIndex_ComputeMoaMgr::_call_recvSGrid_marshall8(void* impl_msg,ComputeMoaMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int ns, const double *sg*/
  PUP::fromMem implP(impl_buf);
  int ns; implP|ns;
  int impl_off_sg, impl_cnt_sg; 
  implP|impl_off_sg;
  implP|impl_cnt_sg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *sg=(double *)(impl_buf+impl_off_sg);
  impl_obj->recvSGrid(ns, sg);
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvSGrid_marshall8(char* impl_buf,ComputeMoaMgr * impl_obj) {
  /*Unmarshall pup'd fields: int ns, const double *sg*/
  PUP::fromMem implP(impl_buf);
  int ns; implP|ns;
  int impl_off_sg, impl_cnt_sg; 
  implP|impl_off_sg;
  implP|impl_cnt_sg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *sg=(double *)(impl_buf+impl_off_sg);
  impl_obj->recvSGrid(ns, sg);
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvSGrid_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int ns, const double *sg*/
  PUP::fromMem implP(impl_buf);
  int ns; implP|ns;
  int impl_off_sg, impl_cnt_sg; 
  implP|impl_off_sg;
  implP|impl_cnt_sg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *sg=(double *)(impl_buf+impl_off_sg);
  if (implDestP.hasComments()) implDestP.comment("ns");
  implDestP|ns;
  if (implDestP.hasComments()) implDestP.comment("sg");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*sg))<impl_cnt_sg;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|sg[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
}

/* DEFS: ComputeMoaMgr(void);
 */

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMoaMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_initialize_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void initWorkers(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_initWorkers_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void startWorkers(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_startWorkers_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvMoaData(const MoaData &impl_noname_0);
 */
void CProxySection_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(MoaData &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvMoaData_marshall5, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvQ(int nq, const double *q);
 */
void CProxySection_ComputeMoaMgr::recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvQ_marshall6, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
void CProxySection_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvB_marshall7, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvSGrid(int ns, const double *sg);
 */
void CProxySection_ComputeMoaMgr::recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::__idx_recvSGrid_marshall8, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMoaMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMoaMgr::isIrreducible());
// REG: ComputeMoaMgr(void);
  __idx_ComputeMoaMgr_void = CkRegisterEp("ComputeMoaMgr(void)",
     (CkCallFnPtr)_call_ComputeMoaMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeMoaMgr_void);

// REG: void initialize(CkQdMsg* impl_msg);
  __idx_initialize_CkQdMsg = CkRegisterEp("initialize(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_initialize_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void initWorkers(CkQdMsg* impl_msg);
  __idx_initWorkers_CkQdMsg = CkRegisterEp("initWorkers(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_initWorkers_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void startWorkers(CkQdMsg* impl_msg);
  __idx_startWorkers_CkQdMsg = CkRegisterEp("startWorkers(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_startWorkers_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void recvMoaData(const MoaData &impl_noname_0);
  __idx_recvMoaData_marshall5 = CkRegisterEp("recvMoaData(const MoaData &impl_noname_0)",
     (CkCallFnPtr)_call_recvMoaData_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvMoaData_marshall5,(CkMarshallUnpackFn)_callmarshall_recvMoaData_marshall5);
  CkRegisterMessagePupFn(__idx_recvMoaData_marshall5,(CkMessagePupFn)_marshallmessagepup_recvMoaData_marshall5);

// REG: void recvQ(int nq, const double *q);
  __idx_recvQ_marshall6 = CkRegisterEp("recvQ(int nq, const double *q)",
     (CkCallFnPtr)_call_recvQ_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvQ_marshall6,(CkMarshallUnpackFn)_callmarshall_recvQ_marshall6);
  CkRegisterMessagePupFn(__idx_recvQ_marshall6,(CkMessagePupFn)_marshallmessagepup_recvQ_marshall6);

// REG: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
  __idx_recvB_marshall7 = CkRegisterEp("recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order)",
     (CkCallFnPtr)_call_recvB_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvB_marshall7,(CkMarshallUnpackFn)_callmarshall_recvB_marshall7);
  CkRegisterMessagePupFn(__idx_recvB_marshall7,(CkMessagePupFn)_marshallmessagepup_recvB_marshall7);

// REG: void recvSGrid(int ns, const double *sg);
  __idx_recvSGrid_marshall8 = CkRegisterEp("recvSGrid(int ns, const double *sg)",
     (CkCallFnPtr)_call_recvSGrid_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvSGrid_marshall8,(CkMarshallUnpackFn)_callmarshall_recvSGrid_marshall8);
  CkRegisterMessagePupFn(__idx_recvSGrid_marshall8,(CkMessagePupFn)_marshallmessagepup_recvSGrid_marshall8);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MoaS: ArrayElement{
MoaS(CkMigrateMessage* impl_msg);
MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
threaded void compute(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MoaS::__idx=0;
/* DEFS: MoaS(CkMigrateMessage* impl_msg);
 */

/* DEFS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
void CProxyElement_MoaS::insert(const Moa3Grid &qh, const Moa3Grid &bh, int onPE, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)bh;
  }
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MoaS::__idx_MoaS_marshall1,onPE);
}

/* DEFS: threaded void compute(void);
 */
void CProxyElement_MoaS::compute(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MoaS::__idx_compute_void,0);
}

/* DEFS: MoaS(CkMigrateMessage* impl_msg);
 */
 int CkIndex_MoaS::__idx_MoaS_CkMigrateMessage=0;
void CkIndex_MoaS::_call_MoaS_CkMigrateMessage(void* impl_msg,MoaS * impl_obj)
{
  new (impl_obj) MoaS((CkMigrateMessage*)impl_msg);
}

/* DEFS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
CkArrayID CProxy_MoaS::ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)bh;
  }
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_MoaS::__idx_MoaS_marshall1,opts);
}
CkArrayID CProxy_MoaS::ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const int s1, const CkEntryOptions *impl_e_opts)
{ 
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(Moa3Grid &)bh;
  }
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_MoaS::__idx_MoaS_marshall1,CkArrayOptions(s1));
}
 int CkIndex_MoaS::__idx_MoaS_marshall1=0;
void CkIndex_MoaS::_call_MoaS_marshall1(void* impl_msg,MoaS * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Moa3Grid &qh, const Moa3Grid &bh*/
  PUP::fromMem implP(impl_buf);
  Moa3Grid qh; implP|qh;
  Moa3Grid bh; implP|bh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MoaS(qh, bh);
}
int CkIndex_MoaS::_callmarshall_MoaS_marshall1(char* impl_buf,MoaS * impl_obj) {
  /*Unmarshall pup'd fields: const Moa3Grid &qh, const Moa3Grid &bh*/
  PUP::fromMem implP(impl_buf);
  Moa3Grid qh; implP|qh;
  Moa3Grid bh; implP|bh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) MoaS(qh, bh);
  return implP.size();
}
void CkIndex_MoaS::_marshallmessagepup_MoaS_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Moa3Grid &qh, const Moa3Grid &bh*/
  PUP::fromMem implP(impl_buf);
  Moa3Grid qh; implP|qh;
  Moa3Grid bh; implP|bh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("qh");
  implDestP|qh;
  if (implDestP.hasComments()) implDestP.comment("bh");
  implDestP|bh;
}

/* DEFS: threaded void compute(void);
 */
void CProxy_MoaS::compute(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MoaS::__idx_compute_void,0);
}
 int CkIndex_MoaS::__idx_compute_void=0;
void CkIndex_MoaS::_call_compute_void(void* impl_msg,MoaS * impl_obj)
{
  CthThread tid = CthCreate((CthVoidFn)_callthr_compute_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthAwaken(tid);
}
void CkIndex_MoaS::_callthr_compute_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  MoaS *impl_obj = (MoaS *) impl_arg->obj;
  delete impl_arg;
  CkFreeSysMsg(impl_msg);
  impl_obj->compute();
}

/* DEFS: MoaS(CkMigrateMessage* impl_msg);
 */

/* DEFS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */

/* DEFS: threaded void compute(void);
 */
void CProxySection_MoaS::compute(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MoaS::__idx_compute_void,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MoaS::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: MoaS(CkMigrateMessage* impl_msg);
  __idx_MoaS_CkMigrateMessage = CkRegisterEp("MoaS(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_MoaS_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_MoaS_CkMigrateMessage);

// REG: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
  __idx_MoaS_marshall1 = CkRegisterEp("MoaS(const Moa3Grid &qh, const Moa3Grid &bh)",
     (CkCallFnPtr)_call_MoaS_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_MoaS_marshall1,(CkMarshallUnpackFn)_callmarshall_MoaS_marshall1);
  CkRegisterMessagePupFn(__idx_MoaS_marshall1,(CkMessagePupFn)_marshallmessagepup_MoaS_marshall1);

// REG: threaded void compute(void);
  __idx_compute_void = CkRegisterEp("compute(void)",
     (CkCallFnPtr)_call_compute_void, 0, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MSA_CacheGroup<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMoaMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: group ComputeMoaMgr: IrrGroup{
ComputeMoaMgr(void);
void initialize(CkQdMsg* impl_msg);
void initWorkers(CkQdMsg* impl_msg);
void startWorkers(CkQdMsg* impl_msg);
void recvMoaData(const MoaData &impl_noname_0);
void recvQ(int nq, const double *q);
void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
void recvSGrid(int ns, const double *sg);
};
*/
  CkIndex_ComputeMoaMgr::__register("ComputeMoaMgr", sizeof(ComputeMoaMgr));

/* REG: array MoaS: ArrayElement{
MoaS(CkMigrateMessage* impl_msg);
MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
threaded void compute(void);
};
*/
  CkIndex_MoaS::__register("MoaS", sizeof(MoaS));

/* REG: group MSA_CacheGroup<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >::__register("MSA_CacheGroup<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >", sizeof(MSA_CacheGroup<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >));

/* REG: array MSA_PageArray<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >: ArrayElement;
*/
  CkIndex_MSA_PageArray<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >::__register("MSA_PageArray<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >", sizeof(MSA_PageArray<double,DefaultEntry<double >,MSA_DEFAULT_ENTRIES_PER_PAGE >));

}
#endif /* CK_TEMPLATES_ONLY */
