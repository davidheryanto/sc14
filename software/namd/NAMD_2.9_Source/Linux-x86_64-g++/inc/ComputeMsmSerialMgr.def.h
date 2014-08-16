/* DEFS: message MsmSerialCoordMsg{
ComputeMsmSerialAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmSerialCoordMsg::operator new(size_t s){
  return MsmSerialCoordMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int* sz){
  return MsmSerialCoordMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int* sz,const int pb){
  return MsmSerialCoordMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialCoordMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialCoordMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_MsmSerialCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(ComputeMsmSerialAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_MsmSerialCoordMsg::CMessage_MsmSerialCoordMsg() {
MsmSerialCoordMsg *newmsg = (MsmSerialCoordMsg *)this;
  newmsg->coord = (ComputeMsmSerialAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MsmSerialCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmSerialCoordMsg::pack(MsmSerialCoordMsg *msg) {
  msg->coord = (ComputeMsmSerialAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
MsmSerialCoordMsg* CMessage_MsmSerialCoordMsg::unpack(void* buf) {
  MsmSerialCoordMsg *msg = (MsmSerialCoordMsg *) buf;
  msg->coord = (ComputeMsmSerialAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_MsmSerialCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmSerialForceMsg{
MsmSerialForce force[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmSerialForceMsg::operator new(size_t s){
  return MsmSerialForceMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int* sz){
  return MsmSerialForceMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int* sz,const int pb){
  return MsmSerialForceMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialForceMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialForceMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_MsmSerialForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(MsmSerialForce)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_MsmSerialForceMsg::CMessage_MsmSerialForceMsg() {
MsmSerialForceMsg *newmsg = (MsmSerialForceMsg *)this;
  newmsg->force = (MsmSerialForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MsmSerialForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmSerialForceMsg::pack(MsmSerialForceMsg *msg) {
  msg->force = (MsmSerialForce *) ((char *)msg->force - (char *)msg);
  return (void *) msg;
}
MsmSerialForceMsg* CMessage_MsmSerialForceMsg::unpack(void* buf) {
  MsmSerialForceMsg *msg = (MsmSerialForceMsg *) buf;
  msg->force = (MsmSerialForce *) ((size_t)msg->force + (char *)msg);
  return msg;
}
int CMessage_MsmSerialForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeMsmSerialMgr: IrrGroup{
ComputeMsmSerialMgr(void);
void recvCoord(MsmSerialCoordMsg* impl_msg);
void recvForce(MsmSerialForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMsmSerialMgr::__idx=0;
/* DEFS: ComputeMsmSerialMgr(void);
 */

/* DEFS: void recvCoord(MsmSerialCoordMsg* impl_msg);
 */
void CProxyElement_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvForce(MsmSerialForceMsg* impl_msg);
 */
void CProxyElement_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeMsmSerialMgr(void);
 */
CkGroupID CProxy_ComputeMsmSerialMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputeMsmSerialMgr::__idx, CkIndex_ComputeMsmSerialMgr::__idx_ComputeMsmSerialMgr_void, impl_msg);
}
 int CkIndex_ComputeMsmSerialMgr::__idx_ComputeMsmSerialMgr_void=0;
void CkIndex_ComputeMsmSerialMgr::_call_ComputeMsmSerialMgr_void(void* impl_msg,ComputeMsmSerialMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeMsmSerialMgr();
}

/* DEFS: void recvCoord(MsmSerialCoordMsg* impl_msg);
 */
void CProxy_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg=0;
void CkIndex_ComputeMsmSerialMgr::_call_recvCoord_MsmSerialCoordMsg(void* impl_msg,ComputeMsmSerialMgr * impl_obj)
{
  impl_obj->recvCoord((MsmSerialCoordMsg*)impl_msg);
}

/* DEFS: void recvForce(MsmSerialForceMsg* impl_msg);
 */
void CProxy_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg=0;
void CkIndex_ComputeMsmSerialMgr::_call_recvForce_MsmSerialForceMsg(void* impl_msg,ComputeMsmSerialMgr * impl_obj)
{
  impl_obj->recvForce((MsmSerialForceMsg*)impl_msg);
}

/* DEFS: ComputeMsmSerialMgr(void);
 */

/* DEFS: void recvCoord(MsmSerialCoordMsg* impl_msg);
 */
void CProxySection_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::__idx_recvCoord_MsmSerialCoordMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvForce(MsmSerialForceMsg* impl_msg);
 */
void CProxySection_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::__idx_recvForce_MsmSerialForceMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMsmSerialMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMsmSerialMgr::isIrreducible());
// REG: ComputeMsmSerialMgr(void);
  __idx_ComputeMsmSerialMgr_void = CkRegisterEp("ComputeMsmSerialMgr(void)",
     (CkCallFnPtr)_call_ComputeMsmSerialMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeMsmSerialMgr_void);

// REG: void recvCoord(MsmSerialCoordMsg* impl_msg);
  __idx_recvCoord_MsmSerialCoordMsg = CkRegisterEp("recvCoord(MsmSerialCoordMsg* impl_msg)",
     (CkCallFnPtr)_call_recvCoord_MsmSerialCoordMsg, CMessage_MsmSerialCoordMsg::__idx, __idx, 0);

// REG: void recvForce(MsmSerialForceMsg* impl_msg);
  __idx_recvForce_MsmSerialForceMsg = CkRegisterEp("recvForce(MsmSerialForceMsg* impl_msg)",
     (CkCallFnPtr)_call_recvForce_MsmSerialForceMsg, CMessage_MsmSerialForceMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMsmSerialMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MsmSerialCoordMsg{
ComputeMsmSerialAtom coord[];
}
;
*/
CMessage_MsmSerialCoordMsg::__register("MsmSerialCoordMsg", sizeof(MsmSerialCoordMsg),(CkPackFnPtr) MsmSerialCoordMsg::pack,(CkUnpackFnPtr) MsmSerialCoordMsg::unpack);

/* REG: message MsmSerialForceMsg{
MsmSerialForce force[];
}
;
*/
CMessage_MsmSerialForceMsg::__register("MsmSerialForceMsg", sizeof(MsmSerialForceMsg),(CkPackFnPtr) MsmSerialForceMsg::pack,(CkUnpackFnPtr) MsmSerialForceMsg::unpack);

/* REG: group ComputeMsmSerialMgr: IrrGroup{
ComputeMsmSerialMgr(void);
void recvCoord(MsmSerialCoordMsg* impl_msg);
void recvForce(MsmSerialForceMsg* impl_msg);
};
*/
  CkIndex_ComputeMsmSerialMgr::__register("ComputeMsmSerialMgr", sizeof(ComputeMsmSerialMgr));

}
#endif /* CK_TEMPLATES_ONLY */
