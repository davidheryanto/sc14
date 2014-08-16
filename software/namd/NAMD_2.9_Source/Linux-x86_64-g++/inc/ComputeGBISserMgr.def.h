/* DEFS: message GBISCoordMsg{
ComputeGBISAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GBISCoordMsg::operator new(size_t s){
  return GBISCoordMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int* sz){
  return GBISCoordMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int* sz,const int pb){
  return GBISCoordMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return GBISCoordMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return GBISCoordMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_GBISCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(ComputeGBISAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_GBISCoordMsg::CMessage_GBISCoordMsg() {
GBISCoordMsg *newmsg = (GBISCoordMsg *)this;
  newmsg->coord = (ComputeGBISAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_GBISCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GBISCoordMsg::pack(GBISCoordMsg *msg) {
  msg->coord = (ComputeGBISAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
GBISCoordMsg* CMessage_GBISCoordMsg::unpack(void* buf) {
  GBISCoordMsg *msg = (GBISCoordMsg *) buf;
  msg->coord = (ComputeGBISAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_GBISCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GBISForceMsg{
ExtForce force[];
ExtForce slowForce[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GBISForceMsg::operator new(size_t s){
  return GBISForceMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GBISForceMsg::operator new(size_t s, int* sz){
  return GBISForceMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GBISForceMsg::operator new(size_t s, int* sz,const int pb){
  return GBISForceMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GBISForceMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GBISForceMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_GBISForceMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GBISForceMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_GBISForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(ExtForce)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(ExtForce)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_GBISForceMsg::CMessage_GBISForceMsg() {
GBISForceMsg *newmsg = (GBISForceMsg *)this;
  newmsg->force = (ExtForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->slowForce = (ExtForce *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_GBISForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GBISForceMsg::pack(GBISForceMsg *msg) {
  msg->force = (ExtForce *) ((char *)msg->force - (char *)msg);
  msg->slowForce = (ExtForce *) ((char *)msg->slowForce - (char *)msg);
  return (void *) msg;
}
GBISForceMsg* CMessage_GBISForceMsg::unpack(void* buf) {
  GBISForceMsg *msg = (GBISForceMsg *) buf;
  msg->force = (ExtForce *) ((size_t)msg->force + (char *)msg);
  msg->slowForce = (ExtForce *) ((size_t)msg->slowForce + (char *)msg);
  return msg;
}
int CMessage_GBISForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeGBISserMgr: IrrGroup{
ComputeGBISserMgr(void);
void recvCoord(GBISCoordMsg* impl_msg);
void recvForce(GBISForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeGBISserMgr::__idx=0;
/* DEFS: ComputeGBISserMgr(void);
 */

/* DEFS: void recvCoord(GBISCoordMsg* impl_msg);
 */
void CProxyElement_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvForce(GBISForceMsg* impl_msg);
 */
void CProxyElement_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeGBISserMgr(void);
 */
CkGroupID CProxy_ComputeGBISserMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputeGBISserMgr::__idx, CkIndex_ComputeGBISserMgr::__idx_ComputeGBISserMgr_void, impl_msg);
}
 int CkIndex_ComputeGBISserMgr::__idx_ComputeGBISserMgr_void=0;
void CkIndex_ComputeGBISserMgr::_call_ComputeGBISserMgr_void(void* impl_msg,ComputeGBISserMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeGBISserMgr();
}

/* DEFS: void recvCoord(GBISCoordMsg* impl_msg);
 */
void CProxy_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg=0;
void CkIndex_ComputeGBISserMgr::_call_recvCoord_GBISCoordMsg(void* impl_msg,ComputeGBISserMgr * impl_obj)
{
  impl_obj->recvCoord((GBISCoordMsg*)impl_msg);
}

/* DEFS: void recvForce(GBISForceMsg* impl_msg);
 */
void CProxy_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg=0;
void CkIndex_ComputeGBISserMgr::_call_recvForce_GBISForceMsg(void* impl_msg,ComputeGBISserMgr * impl_obj)
{
  impl_obj->recvForce((GBISForceMsg*)impl_msg);
}

/* DEFS: ComputeGBISserMgr(void);
 */

/* DEFS: void recvCoord(GBISCoordMsg* impl_msg);
 */
void CProxySection_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::__idx_recvCoord_GBISCoordMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvForce(GBISForceMsg* impl_msg);
 */
void CProxySection_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::__idx_recvForce_GBISForceMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeGBISserMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeGBISserMgr::isIrreducible());
// REG: ComputeGBISserMgr(void);
  __idx_ComputeGBISserMgr_void = CkRegisterEp("ComputeGBISserMgr(void)",
     (CkCallFnPtr)_call_ComputeGBISserMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeGBISserMgr_void);

// REG: void recvCoord(GBISCoordMsg* impl_msg);
  __idx_recvCoord_GBISCoordMsg = CkRegisterEp("recvCoord(GBISCoordMsg* impl_msg)",
     (CkCallFnPtr)_call_recvCoord_GBISCoordMsg, CMessage_GBISCoordMsg::__idx, __idx, 0);

// REG: void recvForce(GBISForceMsg* impl_msg);
  __idx_recvForce_GBISForceMsg = CkRegisterEp("recvForce(GBISForceMsg* impl_msg)",
     (CkCallFnPtr)_call_recvForce_GBISForceMsg, CMessage_GBISForceMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeGBISserMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message GBISCoordMsg{
ComputeGBISAtom coord[];
}
;
*/
CMessage_GBISCoordMsg::__register("GBISCoordMsg", sizeof(GBISCoordMsg),(CkPackFnPtr) GBISCoordMsg::pack,(CkUnpackFnPtr) GBISCoordMsg::unpack);

/* REG: message GBISForceMsg{
ExtForce force[];
ExtForce slowForce[];
}
;
*/
CMessage_GBISForceMsg::__register("GBISForceMsg", sizeof(GBISForceMsg),(CkPackFnPtr) GBISForceMsg::pack,(CkUnpackFnPtr) GBISForceMsg::unpack);

/* REG: group ComputeGBISserMgr: IrrGroup{
ComputeGBISserMgr(void);
void recvCoord(GBISCoordMsg* impl_msg);
void recvForce(GBISForceMsg* impl_msg);
};
*/
  CkIndex_ComputeGBISserMgr::__register("ComputeGBISserMgr", sizeof(ComputeGBISserMgr));

}
#endif /* CK_TEMPLATES_ONLY */
