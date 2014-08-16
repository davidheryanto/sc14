/* DEFS: message GroupInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GroupInitMsg::operator new(size_t s){
  return GroupInitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GroupInitMsg::operator new(size_t s, int* sz){
  return GroupInitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GroupInitMsg::operator new(size_t s, int* sz,const int pb){
  return GroupInitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GroupInitMsg::operator new(size_t s, const int p) {
  return GroupInitMsg::alloc(__idx, s, 0, p);
}
void* CMessage_GroupInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_GroupInitMsg::CMessage_GroupInitMsg() {
GroupInitMsg *newmsg = (GroupInitMsg *)this;
}
void CMessage_GroupInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GroupInitMsg::pack(GroupInitMsg *msg) {
  return (void *) msg;
}
GroupInitMsg* CMessage_GroupInitMsg::unpack(void* buf) {
  GroupInitMsg *msg = (GroupInitMsg *) buf;
  return msg;
}
int CMessage_GroupInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ScriptParamMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ScriptParamMsg::operator new(size_t s){
  return ScriptParamMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ScriptParamMsg::operator new(size_t s, int* sz){
  return ScriptParamMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ScriptParamMsg::operator new(size_t s, int* sz,const int pb){
  return ScriptParamMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ScriptParamMsg::operator new(size_t s, const int p) {
  return ScriptParamMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ScriptParamMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ScriptParamMsg::CMessage_ScriptParamMsg() {
ScriptParamMsg *newmsg = (ScriptParamMsg *)this;
}
void CMessage_ScriptParamMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ScriptParamMsg::pack(ScriptParamMsg *msg) {
  return (void *) msg;
}
ScriptParamMsg* CMessage_ScriptParamMsg::unpack(void* buf) {
  ScriptParamMsg *msg = (ScriptParamMsg *) buf;
  return msg;
}
int CMessage_ScriptParamMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Node: IrrGroup{
Node(GroupInitMsg* impl_msg);
void startUp(CkQdMsg* impl_msg);
void startup(void);
void mallocTest(int impl_noname_0);
void mallocTestQd(CkQdMsg* impl_msg);
void run(void);
void scriptBarrier(CkQdMsg* impl_msg);
void scriptParam(ScriptParamMsg* impl_msg);
void reloadCharges(const float *charge, int n);
void reloadGridforceGrid(int gridnum);
void recvEnableExitScheduler(CkQdMsg* impl_msg);
void exitScheduler(CkQdMsg* impl_msg);
void recvEnableEarlyExit(CkQdMsg* impl_msg);
void earlyExit(CkQdMsg* impl_msg);
void startHPM(void);
void stopHPM(void);
void traceBarrier(int impl_noname_1, int impl_noname_2);
void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Node::__idx=0;
/* DEFS: Node(GroupInitMsg* impl_msg);
 */

/* DEFS: void startUp(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::startUp(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void startup(void);
 */
void CProxyElement_Node::startup(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void mallocTest(int impl_noname_0);
 */
void CProxyElement_Node::mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void mallocTestQd(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::mallocTestQd(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void run(void);
 */
void CProxyElement_Node::run(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void scriptBarrier(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::scriptBarrier(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void scriptParam(ScriptParamMsg* impl_msg);
 */
void CProxyElement_Node::scriptParam(ScriptParamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void reloadCharges(const float *charge, int n);
 */
void CProxyElement_Node::reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void reloadGridforceGrid(int gridnum);
 */
void CProxyElement_Node::reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::recvEnableExitScheduler(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void exitScheduler(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::exitScheduler(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::recvEnableEarlyExit(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void earlyExit(CkQdMsg* impl_msg);
 */
void CProxyElement_Node::earlyExit(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void startHPM(void);
 */
void CProxyElement_Node::startHPM(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void stopHPM(void);
 */
void CProxyElement_Node::stopHPM(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
void CProxyElement_Node::traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
void CProxyElement_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
void CProxyElement_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
void CProxyElement_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: Node(GroupInitMsg* impl_msg);
 */
CkGroupID CProxy_Node::ckNew(GroupInitMsg* impl_msg)
{
  return CkCreateGroup(CkIndex_Node::__idx, CkIndex_Node::__idx_Node_GroupInitMsg, impl_msg);
}
  CProxy_Node::CProxy_Node(GroupInitMsg* impl_msg)
{
  ckSetGroupID(CkCreateGroup(CkIndex_Node::__idx, CkIndex_Node::__idx_Node_GroupInitMsg, impl_msg));
}
 int CkIndex_Node::__idx_Node_GroupInitMsg=0;
void CkIndex_Node::_call_Node_GroupInitMsg(void* impl_msg,Node * impl_obj)
{
  new (impl_obj) Node((GroupInitMsg*)impl_msg);
}

/* DEFS: void startUp(CkQdMsg* impl_msg);
 */
void CProxy_Node::startUp(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::startUp(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::startUp(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_startUp_CkQdMsg=0;
void CkIndex_Node::_call_startUp_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->startUp((CkQdMsg*)impl_msg);
}

/* DEFS: void startup(void);
 */
void CProxy_Node::startup(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::startup(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::startup(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_startup_void=0;
void CkIndex_Node::_call_startup_void(void* impl_msg,Node * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->startup();
}

/* DEFS: void mallocTest(int impl_noname_0);
 */
void CProxy_Node::mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::mallocTest(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::mallocTest(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_mallocTest_marshall4=0;
void CkIndex_Node::_call_mallocTest_marshall4(void* impl_msg,Node * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->mallocTest(impl_noname_0);
}
int CkIndex_Node::_callmarshall_mallocTest_marshall4(char* impl_buf,Node * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->mallocTest(impl_noname_0);
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_mallocTest_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}

/* DEFS: void mallocTestQd(CkQdMsg* impl_msg);
 */
void CProxy_Node::mallocTestQd(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::mallocTestQd(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::mallocTestQd(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_mallocTestQd_CkQdMsg=0;
void CkIndex_Node::_call_mallocTestQd_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->mallocTestQd((CkQdMsg*)impl_msg);
}

/* DEFS: void run(void);
 */
void CProxy_Node::run(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::run(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::run(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_run_void=0;
void CkIndex_Node::_call_run_void(void* impl_msg,Node * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->run();
}

/* DEFS: void scriptBarrier(CkQdMsg* impl_msg);
 */
void CProxy_Node::scriptBarrier(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::scriptBarrier(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::scriptBarrier(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_scriptBarrier_CkQdMsg=0;
void CkIndex_Node::_call_scriptBarrier_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->scriptBarrier((CkQdMsg*)impl_msg);
}

/* DEFS: void scriptParam(ScriptParamMsg* impl_msg);
 */
void CProxy_Node::scriptParam(ScriptParamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::scriptParam(ScriptParamMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::scriptParam(ScriptParamMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_scriptParam_ScriptParamMsg=0;
void CkIndex_Node::_call_scriptParam_ScriptParamMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->scriptParam((ScriptParamMsg*)impl_msg);
}

/* DEFS: void reloadCharges(const float *charge, int n);
 */
void CProxy_Node::reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::reloadCharges(const float *charge, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  CkSendMsgBranchMulti(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::reloadCharges(const float *charge, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  CkSendMsgBranchGroup(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_reloadCharges_marshall9=0;
void CkIndex_Node::_call_reloadCharges_marshall9(void* impl_msg,Node * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const float *charge, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge; 
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  float *charge=(float *)(impl_buf+impl_off_charge);
  impl_obj->reloadCharges(charge, n);
}
int CkIndex_Node::_callmarshall_reloadCharges_marshall9(char* impl_buf,Node * impl_obj) {
  /*Unmarshall pup'd fields: const float *charge, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge; 
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  float *charge=(float *)(impl_buf+impl_off_charge);
  impl_obj->reloadCharges(charge, n);
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_reloadCharges_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const float *charge, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge; 
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  float *charge=(float *)(impl_buf+impl_off_charge);
  if (implDestP.hasComments()) implDestP.comment("charge");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*charge))<impl_cnt_charge;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|charge[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}

/* DEFS: void reloadGridforceGrid(int gridnum);
 */
void CProxy_Node::reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::reloadGridforceGrid(int gridnum, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  CkSendMsgBranchMulti(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::reloadGridforceGrid(int gridnum, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  CkSendMsgBranchGroup(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_reloadGridforceGrid_marshall10=0;
void CkIndex_Node::_call_reloadGridforceGrid_marshall10(void* impl_msg,Node * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int gridnum*/
  PUP::fromMem implP(impl_buf);
  int gridnum; implP|gridnum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reloadGridforceGrid(gridnum);
}
int CkIndex_Node::_callmarshall_reloadGridforceGrid_marshall10(char* impl_buf,Node * impl_obj) {
  /*Unmarshall pup'd fields: int gridnum*/
  PUP::fromMem implP(impl_buf);
  int gridnum; implP|gridnum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reloadGridforceGrid(gridnum);
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_reloadGridforceGrid_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int gridnum*/
  PUP::fromMem implP(impl_buf);
  int gridnum; implP|gridnum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gridnum");
  implDestP|gridnum;
}

/* DEFS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
void CProxy_Node::recvEnableExitScheduler(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::recvEnableExitScheduler(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::recvEnableExitScheduler(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg=0;
void CkIndex_Node::_call_recvEnableExitScheduler_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->recvEnableExitScheduler((CkQdMsg*)impl_msg);
}

/* DEFS: void exitScheduler(CkQdMsg* impl_msg);
 */
void CProxy_Node::exitScheduler(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::exitScheduler(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::exitScheduler(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_exitScheduler_CkQdMsg=0;
void CkIndex_Node::_call_exitScheduler_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->exitScheduler((CkQdMsg*)impl_msg);
}

/* DEFS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
void CProxy_Node::recvEnableEarlyExit(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::recvEnableEarlyExit(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::recvEnableEarlyExit(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg=0;
void CkIndex_Node::_call_recvEnableEarlyExit_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->recvEnableEarlyExit((CkQdMsg*)impl_msg);
}

/* DEFS: void earlyExit(CkQdMsg* impl_msg);
 */
void CProxy_Node::earlyExit(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::earlyExit(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::earlyExit(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_earlyExit_CkQdMsg=0;
void CkIndex_Node::_call_earlyExit_CkQdMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->earlyExit((CkQdMsg*)impl_msg);
}

/* DEFS: void startHPM(void);
 */
void CProxy_Node::startHPM(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::startHPM(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::startHPM(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_startHPM_void=0;
void CkIndex_Node::_call_startHPM_void(void* impl_msg,Node * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->startHPM();
}

/* DEFS: void stopHPM(void);
 */
void CProxy_Node::stopHPM(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::stopHPM(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::stopHPM(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_stopHPM_void=0;
void CkIndex_Node::_call_stopHPM_void(void* impl_msg,Node * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->stopHPM();
}

/* DEFS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
void CProxy_Node::traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::traceBarrier(int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::traceBarrier(int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_traceBarrier_marshall17=0;
void CkIndex_Node::_call_traceBarrier_marshall17(void* impl_msg,Node * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceBarrier(impl_noname_1, impl_noname_2);
}
int CkIndex_Node::_callmarshall_traceBarrier_marshall17(char* impl_buf,Node * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceBarrier(impl_noname_1, impl_noname_2);
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_traceBarrier_marshall17(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}

/* DEFS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
void CProxy_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg=0;
void CkIndex_Node::_call_resumeAfterTraceBarrier_CkReductionMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->resumeAfterTraceBarrier((CkReductionMsg*)impl_msg);
}

/* DEFS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
void CProxy_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  CkSendMsgBranchMulti(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  CkSendMsgBranchGroup(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_papiMeasureBarrier_marshall19=0;
void CkIndex_Node::_call_papiMeasureBarrier_marshall19(void* impl_msg,Node * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->papiMeasureBarrier(impl_noname_3, impl_noname_4);
}
int CkIndex_Node::_callmarshall_papiMeasureBarrier_marshall19(char* impl_buf,Node * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->papiMeasureBarrier(impl_noname_3, impl_noname_4);
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_papiMeasureBarrier_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_3; implP|impl_noname_3;
  int impl_noname_4; implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}

/* DEFS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
void CProxy_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg=0;
void CkIndex_Node::_call_resumeAfterPapiMeasureBarrier_CkReductionMsg(void* impl_msg,Node * impl_obj)
{
  impl_obj->resumeAfterPapiMeasureBarrier((CkReductionMsg*)impl_msg);
}

/* DEFS: Node(GroupInitMsg* impl_msg);
 */

/* DEFS: void startUp(CkQdMsg* impl_msg);
 */
void CProxySection_Node::startUp(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_startUp_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void startup(void);
 */
void CProxySection_Node::startup(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startup_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_startup_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_startup_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void mallocTest(int impl_noname_0);
 */
void CProxySection_Node::mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_mallocTest_marshall4, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_mallocTest_marshall4, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void mallocTestQd(CkQdMsg* impl_msg);
 */
void CProxySection_Node::mallocTestQd(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_mallocTestQd_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void run(void);
 */
void CProxySection_Node::run(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_run_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_run_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_run_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void scriptBarrier(CkQdMsg* impl_msg);
 */
void CProxySection_Node::scriptBarrier(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_scriptBarrier_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void scriptParam(ScriptParamMsg* impl_msg);
 */
void CProxySection_Node::scriptParam(ScriptParamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_scriptParam_ScriptParamMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void reloadCharges(const float *charge, int n);
 */
void CProxySection_Node::reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_reloadCharges_marshall9, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void reloadGridforceGrid(int gridnum);
 */
void CProxySection_Node::reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_reloadGridforceGrid_marshall10, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
void CProxySection_Node::recvEnableExitScheduler(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_recvEnableExitScheduler_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void exitScheduler(CkQdMsg* impl_msg);
 */
void CProxySection_Node::exitScheduler(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_exitScheduler_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
void CProxySection_Node::recvEnableEarlyExit(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_recvEnableEarlyExit_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void earlyExit(CkQdMsg* impl_msg);
 */
void CProxySection_Node::earlyExit(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_earlyExit_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void startHPM(void);
 */
void CProxySection_Node::startHPM(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_startHPM_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_startHPM_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void stopHPM(void);
 */
void CProxySection_Node::stopHPM(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_stopHPM_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_stopHPM_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
void CProxySection_Node::traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_traceBarrier_marshall17, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
void CProxySection_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_resumeAfterTraceBarrier_CkReductionMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
void CProxySection_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_papiMeasureBarrier_marshall19, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
void CProxySection_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::__idx_resumeAfterPapiMeasureBarrier_CkReductionMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Node::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Node::isIrreducible());
// REG: Node(GroupInitMsg* impl_msg);
  __idx_Node_GroupInitMsg = CkRegisterEp("Node(GroupInitMsg* impl_msg)",
     (CkCallFnPtr)_call_Node_GroupInitMsg, CMessage_GroupInitMsg::__idx, __idx, 0);

// REG: void startUp(CkQdMsg* impl_msg);
  __idx_startUp_CkQdMsg = CkRegisterEp("startUp(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_startUp_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void startup(void);
  __idx_startup_void = CkRegisterEp("startup(void)",
     (CkCallFnPtr)_call_startup_void, 0, __idx, 0);

// REG: void mallocTest(int impl_noname_0);
  __idx_mallocTest_marshall4 = CkRegisterEp("mallocTest(int impl_noname_0)",
     (CkCallFnPtr)_call_mallocTest_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_mallocTest_marshall4,(CkMarshallUnpackFn)_callmarshall_mallocTest_marshall4);
  CkRegisterMessagePupFn(__idx_mallocTest_marshall4,(CkMessagePupFn)_marshallmessagepup_mallocTest_marshall4);

// REG: void mallocTestQd(CkQdMsg* impl_msg);
  __idx_mallocTestQd_CkQdMsg = CkRegisterEp("mallocTestQd(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_mallocTestQd_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void run(void);
  __idx_run_void = CkRegisterEp("run(void)",
     (CkCallFnPtr)_call_run_void, 0, __idx, 0);

// REG: void scriptBarrier(CkQdMsg* impl_msg);
  __idx_scriptBarrier_CkQdMsg = CkRegisterEp("scriptBarrier(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_scriptBarrier_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void scriptParam(ScriptParamMsg* impl_msg);
  __idx_scriptParam_ScriptParamMsg = CkRegisterEp("scriptParam(ScriptParamMsg* impl_msg)",
     (CkCallFnPtr)_call_scriptParam_ScriptParamMsg, CMessage_ScriptParamMsg::__idx, __idx, 0);

// REG: void reloadCharges(const float *charge, int n);
  __idx_reloadCharges_marshall9 = CkRegisterEp("reloadCharges(const float *charge, int n)",
     (CkCallFnPtr)_call_reloadCharges_marshall9, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_reloadCharges_marshall9,(CkMarshallUnpackFn)_callmarshall_reloadCharges_marshall9);
  CkRegisterMessagePupFn(__idx_reloadCharges_marshall9,(CkMessagePupFn)_marshallmessagepup_reloadCharges_marshall9);

// REG: void reloadGridforceGrid(int gridnum);
  __idx_reloadGridforceGrid_marshall10 = CkRegisterEp("reloadGridforceGrid(int gridnum)",
     (CkCallFnPtr)_call_reloadGridforceGrid_marshall10, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_reloadGridforceGrid_marshall10,(CkMarshallUnpackFn)_callmarshall_reloadGridforceGrid_marshall10);
  CkRegisterMessagePupFn(__idx_reloadGridforceGrid_marshall10,(CkMessagePupFn)_marshallmessagepup_reloadGridforceGrid_marshall10);

// REG: void recvEnableExitScheduler(CkQdMsg* impl_msg);
  __idx_recvEnableExitScheduler_CkQdMsg = CkRegisterEp("recvEnableExitScheduler(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_recvEnableExitScheduler_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void exitScheduler(CkQdMsg* impl_msg);
  __idx_exitScheduler_CkQdMsg = CkRegisterEp("exitScheduler(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_exitScheduler_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void recvEnableEarlyExit(CkQdMsg* impl_msg);
  __idx_recvEnableEarlyExit_CkQdMsg = CkRegisterEp("recvEnableEarlyExit(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_recvEnableEarlyExit_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void earlyExit(CkQdMsg* impl_msg);
  __idx_earlyExit_CkQdMsg = CkRegisterEp("earlyExit(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_earlyExit_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void startHPM(void);
  __idx_startHPM_void = CkRegisterEp("startHPM(void)",
     (CkCallFnPtr)_call_startHPM_void, 0, __idx, 0);

// REG: void stopHPM(void);
  __idx_stopHPM_void = CkRegisterEp("stopHPM(void)",
     (CkCallFnPtr)_call_stopHPM_void, 0, __idx, 0);

// REG: void traceBarrier(int impl_noname_1, int impl_noname_2);
  __idx_traceBarrier_marshall17 = CkRegisterEp("traceBarrier(int impl_noname_1, int impl_noname_2)",
     (CkCallFnPtr)_call_traceBarrier_marshall17, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_traceBarrier_marshall17,(CkMarshallUnpackFn)_callmarshall_traceBarrier_marshall17);
  CkRegisterMessagePupFn(__idx_traceBarrier_marshall17,(CkMessagePupFn)_marshallmessagepup_traceBarrier_marshall17);

// REG: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
  __idx_resumeAfterTraceBarrier_CkReductionMsg = CkRegisterEp("resumeAfterTraceBarrier(CkReductionMsg* impl_msg)",
     (CkCallFnPtr)_call_resumeAfterTraceBarrier_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);

// REG: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
  __idx_papiMeasureBarrier_marshall19 = CkRegisterEp("papiMeasureBarrier(int impl_noname_3, int impl_noname_4)",
     (CkCallFnPtr)_call_papiMeasureBarrier_marshall19, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_papiMeasureBarrier_marshall19,(CkMarshallUnpackFn)_callmarshall_papiMeasureBarrier_marshall19);
  CkRegisterMessagePupFn(__idx_papiMeasureBarrier_marshall19,(CkMessagePupFn)_marshallmessagepup_papiMeasureBarrier_marshall19);

// REG: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
  __idx_resumeAfterPapiMeasureBarrier_CkReductionMsg = CkRegisterEp("resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)",
     (CkCallFnPtr)_call_resumeAfterPapiMeasureBarrier_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNode(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message GroupInitMsg;
*/
CMessage_GroupInitMsg::__register("GroupInitMsg", sizeof(GroupInitMsg),(CkPackFnPtr) GroupInitMsg::pack,(CkUnpackFnPtr) GroupInitMsg::unpack);

/* REG: message ScriptParamMsg;
*/
CMessage_ScriptParamMsg::__register("ScriptParamMsg", sizeof(ScriptParamMsg),(CkPackFnPtr) ScriptParamMsg::pack,(CkUnpackFnPtr) ScriptParamMsg::unpack);

/* REG: group Node: IrrGroup{
Node(GroupInitMsg* impl_msg);
void startUp(CkQdMsg* impl_msg);
void startup(void);
void mallocTest(int impl_noname_0);
void mallocTestQd(CkQdMsg* impl_msg);
void run(void);
void scriptBarrier(CkQdMsg* impl_msg);
void scriptParam(ScriptParamMsg* impl_msg);
void reloadCharges(const float *charge, int n);
void reloadGridforceGrid(int gridnum);
void recvEnableExitScheduler(CkQdMsg* impl_msg);
void exitScheduler(CkQdMsg* impl_msg);
void recvEnableEarlyExit(CkQdMsg* impl_msg);
void earlyExit(CkQdMsg* impl_msg);
void startHPM(void);
void stopHPM(void);
void traceBarrier(int impl_noname_1, int impl_noname_2);
void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
};
*/
  CkIndex_Node::__register("Node", sizeof(Node));

}
#endif /* CK_TEMPLATES_ONLY */
