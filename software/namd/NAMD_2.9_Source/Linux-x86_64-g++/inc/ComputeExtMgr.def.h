/* DEFS: message ExtCoordMsg{
ComputeExtAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ExtCoordMsg::operator new(size_t s){
  return ExtCoordMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int* sz){
  return ExtCoordMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int* sz,const int pb){
  return ExtCoordMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtCoordMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtCoordMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ExtCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(ComputeExtAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ExtCoordMsg::CMessage_ExtCoordMsg() {
ExtCoordMsg *newmsg = (ExtCoordMsg *)this;
  newmsg->coord = (ComputeExtAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ExtCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ExtCoordMsg::pack(ExtCoordMsg *msg) {
  msg->coord = (ComputeExtAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
ExtCoordMsg* CMessage_ExtCoordMsg::unpack(void* buf) {
  ExtCoordMsg *msg = (ExtCoordMsg *) buf;
  msg->coord = (ComputeExtAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_ExtCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ExtForceMsg{
ExtForce force[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ExtForceMsg::operator new(size_t s){
  return ExtForceMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ExtForceMsg::operator new(size_t s, int* sz){
  return ExtForceMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ExtForceMsg::operator new(size_t s, int* sz,const int pb){
  return ExtForceMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ExtForceMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtForceMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ExtForceMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtForceMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ExtForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(ExtForce)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ExtForceMsg::CMessage_ExtForceMsg() {
ExtForceMsg *newmsg = (ExtForceMsg *)this;
  newmsg->force = (ExtForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ExtForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ExtForceMsg::pack(ExtForceMsg *msg) {
  msg->force = (ExtForce *) ((char *)msg->force - (char *)msg);
  return (void *) msg;
}
ExtForceMsg* CMessage_ExtForceMsg::unpack(void* buf) {
  ExtForceMsg *msg = (ExtForceMsg *) buf;
  msg->force = (ExtForce *) ((size_t)msg->force + (char *)msg);
  return msg;
}
int CMessage_ExtForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeExtMgr: IrrGroup{
ComputeExtMgr(void);
void recvCoord(ExtCoordMsg* impl_msg);
void recvForce(ExtForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeExtMgr::__idx=0;
/* DEFS: ComputeExtMgr(void);
 */

/* DEFS: void recvCoord(ExtCoordMsg* impl_msg);
 */
void CProxyElement_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvForce(ExtForceMsg* impl_msg);
 */
void CProxyElement_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeExtMgr(void);
 */
CkGroupID CProxy_ComputeExtMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputeExtMgr::__idx, CkIndex_ComputeExtMgr::__idx_ComputeExtMgr_void, impl_msg);
}
 int CkIndex_ComputeExtMgr::__idx_ComputeExtMgr_void=0;
void CkIndex_ComputeExtMgr::_call_ComputeExtMgr_void(void* impl_msg,ComputeExtMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeExtMgr();
}

/* DEFS: void recvCoord(ExtCoordMsg* impl_msg);
 */
void CProxy_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg=0;
void CkIndex_ComputeExtMgr::_call_recvCoord_ExtCoordMsg(void* impl_msg,ComputeExtMgr * impl_obj)
{
  impl_obj->recvCoord((ExtCoordMsg*)impl_msg);
}

/* DEFS: void recvForce(ExtForceMsg* impl_msg);
 */
void CProxy_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg=0;
void CkIndex_ComputeExtMgr::_call_recvForce_ExtForceMsg(void* impl_msg,ComputeExtMgr * impl_obj)
{
  impl_obj->recvForce((ExtForceMsg*)impl_msg);
}

/* DEFS: ComputeExtMgr(void);
 */

/* DEFS: void recvCoord(ExtCoordMsg* impl_msg);
 */
void CProxySection_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::__idx_recvCoord_ExtCoordMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvForce(ExtForceMsg* impl_msg);
 */
void CProxySection_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::__idx_recvForce_ExtForceMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeExtMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeExtMgr::isIrreducible());
// REG: ComputeExtMgr(void);
  __idx_ComputeExtMgr_void = CkRegisterEp("ComputeExtMgr(void)",
     (CkCallFnPtr)_call_ComputeExtMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeExtMgr_void);

// REG: void recvCoord(ExtCoordMsg* impl_msg);
  __idx_recvCoord_ExtCoordMsg = CkRegisterEp("recvCoord(ExtCoordMsg* impl_msg)",
     (CkCallFnPtr)_call_recvCoord_ExtCoordMsg, CMessage_ExtCoordMsg::__idx, __idx, 0);

// REG: void recvForce(ExtForceMsg* impl_msg);
  __idx_recvForce_ExtForceMsg = CkRegisterEp("recvForce(ExtForceMsg* impl_msg)",
     (CkCallFnPtr)_call_recvForce_ExtForceMsg, CMessage_ExtForceMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeExtMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message ExtCoordMsg{
ComputeExtAtom coord[];
}
;
*/
CMessage_ExtCoordMsg::__register("ExtCoordMsg", sizeof(ExtCoordMsg),(CkPackFnPtr) ExtCoordMsg::pack,(CkUnpackFnPtr) ExtCoordMsg::unpack);

/* REG: message ExtForceMsg{
ExtForce force[];
}
;
*/
CMessage_ExtForceMsg::__register("ExtForceMsg", sizeof(ExtForceMsg),(CkPackFnPtr) ExtForceMsg::pack,(CkUnpackFnPtr) ExtForceMsg::unpack);

/* REG: group ComputeExtMgr: IrrGroup{
ComputeExtMgr(void);
void recvCoord(ExtCoordMsg* impl_msg);
void recvForce(ExtForceMsg* impl_msg);
};
*/
  CkIndex_ComputeExtMgr::__register("ComputeExtMgr", sizeof(ComputeExtMgr));

}
#endif /* CK_TEMPLATES_ONLY */
