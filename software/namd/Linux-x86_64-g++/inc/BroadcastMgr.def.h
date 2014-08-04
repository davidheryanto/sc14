/* DEFS: message BroadcastMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_BroadcastMsg::operator new(size_t s){
  return BroadcastMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_BroadcastMsg::operator new(size_t s, int* sz){
  return BroadcastMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_BroadcastMsg::operator new(size_t s, int* sz,const int pb){
  return BroadcastMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_BroadcastMsg::operator new(size_t s, const int p) {
  return BroadcastMsg::alloc(__idx, s, 0, p);
}
void* CMessage_BroadcastMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_BroadcastMsg::CMessage_BroadcastMsg() {
BroadcastMsg *newmsg = (BroadcastMsg *)this;
}
void CMessage_BroadcastMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_BroadcastMsg::pack(BroadcastMsg *msg) {
  return (void *) msg;
}
BroadcastMsg* CMessage_BroadcastMsg::unpack(void* buf) {
  BroadcastMsg *msg = (BroadcastMsg *) buf;
  return msg;
}
int CMessage_BroadcastMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group BroadcastMgr: IrrGroup{
BroadcastMgr(void);
void recvBroadcast(BroadcastMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_BroadcastMgr::__idx=0;
/* DEFS: BroadcastMgr(void);
 */

/* DEFS: void recvBroadcast(BroadcastMsg* impl_msg);
 */
void CProxyElement_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: BroadcastMgr(void);
 */
CkGroupID CProxy_BroadcastMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_BroadcastMgr::__idx, CkIndex_BroadcastMgr::__idx_BroadcastMgr_void, impl_msg);
}
 int CkIndex_BroadcastMgr::__idx_BroadcastMgr_void=0;
void CkIndex_BroadcastMgr::_call_BroadcastMgr_void(void* impl_msg,BroadcastMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) BroadcastMgr();
}

/* DEFS: void recvBroadcast(BroadcastMsg* impl_msg);
 */
void CProxy_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg=0;
void CkIndex_BroadcastMgr::_call_recvBroadcast_BroadcastMsg(void* impl_msg,BroadcastMgr * impl_obj)
{
  impl_obj->recvBroadcast((BroadcastMsg*)impl_msg);
}

/* DEFS: BroadcastMgr(void);
 */

/* DEFS: void recvBroadcast(BroadcastMsg* impl_msg);
 */
void CProxySection_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_BroadcastMgr::__idx_recvBroadcast_BroadcastMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_BroadcastMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,BroadcastMgr::isIrreducible());
// REG: BroadcastMgr(void);
  __idx_BroadcastMgr_void = CkRegisterEp("BroadcastMgr(void)",
     (CkCallFnPtr)_call_BroadcastMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_BroadcastMgr_void);

// REG: void recvBroadcast(BroadcastMsg* impl_msg);
  __idx_recvBroadcast_BroadcastMsg = CkRegisterEp("recvBroadcast(BroadcastMsg* impl_msg)",
     (CkCallFnPtr)_call_recvBroadcast_BroadcastMsg, CMessage_BroadcastMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerBroadcastMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message BroadcastMsg;
*/
CMessage_BroadcastMsg::__register("BroadcastMsg", sizeof(BroadcastMsg),(CkPackFnPtr) BroadcastMsg::pack,(CkUnpackFnPtr) BroadcastMsg::unpack);

/* REG: group BroadcastMgr: IrrGroup{
BroadcastMgr(void);
void recvBroadcast(BroadcastMsg* impl_msg);
};
*/
  CkIndex_BroadcastMgr::__register("BroadcastMgr", sizeof(BroadcastMgr));

}
#endif /* CK_TEMPLATES_ONLY */
