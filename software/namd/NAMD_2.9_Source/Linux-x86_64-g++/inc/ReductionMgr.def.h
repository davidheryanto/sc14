/* DEFS: message ReductionRegisterMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ReductionRegisterMsg::operator new(size_t s){
  return ReductionRegisterMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, int* sz){
  return ReductionRegisterMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, int* sz,const int pb){
  return ReductionRegisterMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, const int p) {
  return ReductionRegisterMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ReductionRegisterMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ReductionRegisterMsg::CMessage_ReductionRegisterMsg() {
ReductionRegisterMsg *newmsg = (ReductionRegisterMsg *)this;
}
void CMessage_ReductionRegisterMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ReductionRegisterMsg::pack(ReductionRegisterMsg *msg) {
  return (void *) msg;
}
ReductionRegisterMsg* CMessage_ReductionRegisterMsg::unpack(void* buf) {
  ReductionRegisterMsg *msg = (ReductionRegisterMsg *) buf;
  return msg;
}
int CMessage_ReductionRegisterMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ReductionSubmitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ReductionSubmitMsg::operator new(size_t s){
  return ReductionSubmitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int* sz){
  return ReductionSubmitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int* sz,const int pb){
  return ReductionSubmitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, const int p) {
  return ReductionSubmitMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ReductionSubmitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ReductionSubmitMsg::CMessage_ReductionSubmitMsg() {
ReductionSubmitMsg *newmsg = (ReductionSubmitMsg *)this;
}
void CMessage_ReductionSubmitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ReductionSubmitMsg::pack(ReductionSubmitMsg *msg) {
  return (void *) msg;
}
ReductionSubmitMsg* CMessage_ReductionSubmitMsg::unpack(void* buf) {
  ReductionSubmitMsg *msg = (ReductionSubmitMsg *) buf;
  return msg;
}
int CMessage_ReductionSubmitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ReductionMgr: IrrGroup{
ReductionMgr(void);
void remoteRegister(ReductionRegisterMsg* impl_msg);
void remoteUnregister(ReductionRegisterMsg* impl_msg);
void remoteSubmit(ReductionSubmitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ReductionMgr::__idx=0;
/* DEFS: ReductionMgr(void);
 */

/* DEFS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
void CProxyElement_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
void CProxyElement_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
void CProxyElement_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ReductionMgr(void);
 */
CkGroupID CProxy_ReductionMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ReductionMgr::__idx, CkIndex_ReductionMgr::__idx_ReductionMgr_void, impl_msg);
}
 int CkIndex_ReductionMgr::__idx_ReductionMgr_void=0;
void CkIndex_ReductionMgr::_call_ReductionMgr_void(void* impl_msg,ReductionMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ReductionMgr();
}

/* DEFS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
void CProxy_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg=0;
void CkIndex_ReductionMgr::_call_remoteRegister_ReductionRegisterMsg(void* impl_msg,ReductionMgr * impl_obj)
{
  impl_obj->remoteRegister((ReductionRegisterMsg*)impl_msg);
}

/* DEFS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
void CProxy_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg=0;
void CkIndex_ReductionMgr::_call_remoteUnregister_ReductionRegisterMsg(void* impl_msg,ReductionMgr * impl_obj)
{
  impl_obj->remoteUnregister((ReductionRegisterMsg*)impl_msg);
}

/* DEFS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
void CProxy_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg=0;
void CkIndex_ReductionMgr::_call_remoteSubmit_ReductionSubmitMsg(void* impl_msg,ReductionMgr * impl_obj)
{
  impl_obj->remoteSubmit((ReductionSubmitMsg*)impl_msg);
}

/* DEFS: ReductionMgr(void);
 */

/* DEFS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
void CProxySection_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionMgr::__idx_remoteRegister_ReductionRegisterMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
void CProxySection_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionMgr::__idx_remoteUnregister_ReductionRegisterMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
void CProxySection_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionMgr::__idx_remoteSubmit_ReductionSubmitMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ReductionMgr::isIrreducible());
// REG: ReductionMgr(void);
  __idx_ReductionMgr_void = CkRegisterEp("ReductionMgr(void)",
     (CkCallFnPtr)_call_ReductionMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ReductionMgr_void);

// REG: void remoteRegister(ReductionRegisterMsg* impl_msg);
  __idx_remoteRegister_ReductionRegisterMsg = CkRegisterEp("remoteRegister(ReductionRegisterMsg* impl_msg)",
     (CkCallFnPtr)_call_remoteRegister_ReductionRegisterMsg, CMessage_ReductionRegisterMsg::__idx, __idx, 0);

// REG: void remoteUnregister(ReductionRegisterMsg* impl_msg);
  __idx_remoteUnregister_ReductionRegisterMsg = CkRegisterEp("remoteUnregister(ReductionRegisterMsg* impl_msg)",
     (CkCallFnPtr)_call_remoteUnregister_ReductionRegisterMsg, CMessage_ReductionRegisterMsg::__idx, __idx, 0);

// REG: void remoteSubmit(ReductionSubmitMsg* impl_msg);
  __idx_remoteSubmit_ReductionSubmitMsg = CkRegisterEp("remoteSubmit(ReductionSubmitMsg* impl_msg)",
     (CkCallFnPtr)_call_remoteSubmit_ReductionSubmitMsg, CMessage_ReductionSubmitMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerReductionMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message ReductionRegisterMsg;
*/
CMessage_ReductionRegisterMsg::__register("ReductionRegisterMsg", sizeof(ReductionRegisterMsg),(CkPackFnPtr) ReductionRegisterMsg::pack,(CkUnpackFnPtr) ReductionRegisterMsg::unpack);

/* REG: message ReductionSubmitMsg;
*/
CMessage_ReductionSubmitMsg::__register("ReductionSubmitMsg", sizeof(ReductionSubmitMsg),(CkPackFnPtr) ReductionSubmitMsg::pack,(CkUnpackFnPtr) ReductionSubmitMsg::unpack);

/* REG: group ReductionMgr: IrrGroup{
ReductionMgr(void);
void remoteRegister(ReductionRegisterMsg* impl_msg);
void remoteUnregister(ReductionRegisterMsg* impl_msg);
void remoteSubmit(ReductionSubmitMsg* impl_msg);
};
*/
  CkIndex_ReductionMgr::__register("ReductionMgr", sizeof(ReductionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
