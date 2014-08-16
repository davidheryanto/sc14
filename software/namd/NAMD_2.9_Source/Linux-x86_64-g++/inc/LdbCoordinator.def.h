



/* DEFS: message LdbMigrateMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LdbMigrateMsg::operator new(size_t s){
  return LdbMigrateMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, int* sz){
  return LdbMigrateMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, int* sz,const int pb){
  return LdbMigrateMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, const int p) {
  return LdbMigrateMsg::alloc(__idx, s, 0, p);
}
void* CMessage_LdbMigrateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_LdbMigrateMsg::CMessage_LdbMigrateMsg() {
LdbMigrateMsg *newmsg = (LdbMigrateMsg *)this;
}
void CMessage_LdbMigrateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LdbMigrateMsg::pack(LdbMigrateMsg *msg) {
  return (void *) msg;
}
LdbMigrateMsg* CMessage_LdbMigrateMsg::unpack(void* buf) {
  LdbMigrateMsg *msg = (LdbMigrateMsg *) buf;
  return msg;
}
int CMessage_LdbMigrateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group LdbCoordinator: IrrGroup{
LdbCoordinator(void);
void barrier(void);
void nodeDone(CkReductionMsg* impl_msg);
void resume(void);
void resumeReady(CkQdMsg* impl_msg);
void resume2(void);
void RecvMigrate(LdbMigrateMsg* impl_msg);
void ExpectMigrate(LdbMigrateMsg* impl_msg);
void updateComputesReady(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LdbCoordinator::__idx=0;
/* DEFS: LdbCoordinator(void);
 */

/* DEFS: void barrier(void);
 */
void CProxyElement_LdbCoordinator::barrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void nodeDone(CkReductionMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void resume(void);
 */
void CProxyElement_LdbCoordinator::resume(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void resumeReady(CkQdMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::resumeReady(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void resume2(void);
 */
void CProxyElement_LdbCoordinator::resume2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateComputesReady(void);
 */
void CProxyElement_LdbCoordinator::updateComputesReady(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: LdbCoordinator(void);
 */
CkGroupID CProxy_LdbCoordinator::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_LdbCoordinator::__idx, CkIndex_LdbCoordinator::__idx_LdbCoordinator_void, impl_msg);
}
 int CkIndex_LdbCoordinator::__idx_LdbCoordinator_void=0;
void CkIndex_LdbCoordinator::_call_LdbCoordinator_void(void* impl_msg,LdbCoordinator * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) LdbCoordinator();
}

/* DEFS: void barrier(void);
 */
void CProxy_LdbCoordinator::barrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::barrier(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::barrier(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_barrier_void=0;
void CkIndex_LdbCoordinator::_call_barrier_void(void* impl_msg,LdbCoordinator * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->barrier();
}

/* DEFS: void nodeDone(CkReductionMsg* impl_msg);
 */
void CProxy_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg=0;
void CkIndex_LdbCoordinator::_call_nodeDone_CkReductionMsg(void* impl_msg,LdbCoordinator * impl_obj)
{
  impl_obj->nodeDone((CkReductionMsg*)impl_msg);
}

/* DEFS: void resume(void);
 */
void CProxy_LdbCoordinator::resume(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::resume(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::resume(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_resume_void=0;
void CkIndex_LdbCoordinator::_call_resume_void(void* impl_msg,LdbCoordinator * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->resume();
}

/* DEFS: void resumeReady(CkQdMsg* impl_msg);
 */
void CProxy_LdbCoordinator::resumeReady(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::resumeReady(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::resumeReady(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg=0;
void CkIndex_LdbCoordinator::_call_resumeReady_CkQdMsg(void* impl_msg,LdbCoordinator * impl_obj)
{
  impl_obj->resumeReady((CkQdMsg*)impl_msg);
}

/* DEFS: void resume2(void);
 */
void CProxy_LdbCoordinator::resume2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::resume2(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::resume2(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_resume2_void=0;
void CkIndex_LdbCoordinator::_call_resume2_void(void* impl_msg,LdbCoordinator * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->resume2();
}

/* DEFS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxy_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg=0;
void CkIndex_LdbCoordinator::_call_RecvMigrate_LdbMigrateMsg(void* impl_msg,LdbCoordinator * impl_obj)
{
  impl_obj->RecvMigrate((LdbMigrateMsg*)impl_msg);
}

/* DEFS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxy_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg=0;
void CkIndex_LdbCoordinator::_call_ExpectMigrate_LdbMigrateMsg(void* impl_msg,LdbCoordinator * impl_obj)
{
  impl_obj->ExpectMigrate((LdbMigrateMsg*)impl_msg);
}

/* DEFS: void updateComputesReady(void);
 */
void CProxy_LdbCoordinator::updateComputesReady(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::updateComputesReady(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::updateComputesReady(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_LdbCoordinator::__idx_updateComputesReady_void=0;
void CkIndex_LdbCoordinator::_call_updateComputesReady_void(void* impl_msg,LdbCoordinator * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->updateComputesReady();
}

/* DEFS: LdbCoordinator(void);
 */

/* DEFS: void barrier(void);
 */
void CProxySection_LdbCoordinator::barrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_barrier_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void nodeDone(CkReductionMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_nodeDone_CkReductionMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void resume(void);
 */
void CProxySection_LdbCoordinator::resume(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resume_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_resume_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void resumeReady(CkQdMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::resumeReady(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_resumeReady_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void resume2(void);
 */
void CProxySection_LdbCoordinator::resume2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_resume2_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_RecvMigrate_LdbMigrateMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_ExpectMigrate_LdbMigrateMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateComputesReady(void);
 */
void CProxySection_LdbCoordinator::updateComputesReady(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::__idx_updateComputesReady_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LdbCoordinator::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LdbCoordinator::isIrreducible());
// REG: LdbCoordinator(void);
  __idx_LdbCoordinator_void = CkRegisterEp("LdbCoordinator(void)",
     (CkCallFnPtr)_call_LdbCoordinator_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_LdbCoordinator_void);

// REG: void barrier(void);
  __idx_barrier_void = CkRegisterEp("barrier(void)",
     (CkCallFnPtr)_call_barrier_void, 0, __idx, 0);

// REG: void nodeDone(CkReductionMsg* impl_msg);
  __idx_nodeDone_CkReductionMsg = CkRegisterEp("nodeDone(CkReductionMsg* impl_msg)",
     (CkCallFnPtr)_call_nodeDone_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);

// REG: void resume(void);
  __idx_resume_void = CkRegisterEp("resume(void)",
     (CkCallFnPtr)_call_resume_void, 0, __idx, 0);

// REG: void resumeReady(CkQdMsg* impl_msg);
  __idx_resumeReady_CkQdMsg = CkRegisterEp("resumeReady(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_resumeReady_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void resume2(void);
  __idx_resume2_void = CkRegisterEp("resume2(void)",
     (CkCallFnPtr)_call_resume2_void, 0, __idx, 0);

// REG: void RecvMigrate(LdbMigrateMsg* impl_msg);
  __idx_RecvMigrate_LdbMigrateMsg = CkRegisterEp("RecvMigrate(LdbMigrateMsg* impl_msg)",
     (CkCallFnPtr)_call_RecvMigrate_LdbMigrateMsg, CMessage_LdbMigrateMsg::__idx, __idx, 0);

// REG: void ExpectMigrate(LdbMigrateMsg* impl_msg);
  __idx_ExpectMigrate_LdbMigrateMsg = CkRegisterEp("ExpectMigrate(LdbMigrateMsg* impl_msg)",
     (CkCallFnPtr)_call_ExpectMigrate_LdbMigrateMsg, CMessage_LdbMigrateMsg::__idx, __idx, 0);

// REG: void updateComputesReady(void);
  __idx_updateComputesReady_void = CkRegisterEp("updateComputesReady(void)",
     (CkCallFnPtr)_call_updateComputesReady_void, 0, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerLdbCoordinator(void)
{
  static int _done = 0; if(_done) return; _done = 1;
      _registerNamdCentLB();

      _registerNamdNborLB();

      _registerNamdHybridLB();

      _registerNamdDummyLB();

/* REG: message LdbMigrateMsg;
*/
CMessage_LdbMigrateMsg::__register("LdbMigrateMsg", sizeof(LdbMigrateMsg),(CkPackFnPtr) LdbMigrateMsg::pack,(CkUnpackFnPtr) LdbMigrateMsg::unpack);

      _registerInitCall(LdbCoordinator_initproc,0);

/* REG: group LdbCoordinator: IrrGroup{
LdbCoordinator(void);
void barrier(void);
void nodeDone(CkReductionMsg* impl_msg);
void resume(void);
void resumeReady(CkQdMsg* impl_msg);
void resume2(void);
void RecvMigrate(LdbMigrateMsg* impl_msg);
void ExpectMigrate(LdbMigrateMsg* impl_msg);
void updateComputesReady(void);
};
*/
  CkIndex_LdbCoordinator::__register("LdbCoordinator", sizeof(LdbCoordinator));

}
#endif /* CK_TEMPLATES_ONLY */
