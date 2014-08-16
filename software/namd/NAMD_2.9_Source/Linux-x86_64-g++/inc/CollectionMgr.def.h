/* DEFS: message SlaveInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SlaveInitMsg::operator new(size_t s){
  return SlaveInitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_SlaveInitMsg::operator new(size_t s, int* sz){
  return SlaveInitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_SlaveInitMsg::operator new(size_t s, int* sz,const int pb){
  return SlaveInitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_SlaveInitMsg::operator new(size_t s, const int p) {
  return SlaveInitMsg::alloc(__idx, s, 0, p);
}
void* CMessage_SlaveInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_SlaveInitMsg::CMessage_SlaveInitMsg() {
SlaveInitMsg *newmsg = (SlaveInitMsg *)this;
}
void CMessage_SlaveInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SlaveInitMsg::pack(SlaveInitMsg *msg) {
  return (void *) msg;
}
SlaveInitMsg* CMessage_SlaveInitMsg::unpack(void* buf) {
  SlaveInitMsg *msg = (SlaveInitMsg *) buf;
  return msg;
}
int CMessage_SlaveInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CollectionMgr: IrrGroup{
CollectionMgr(SlaveInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CollectionMgr::__idx=0;
/* DEFS: CollectionMgr(SlaveInitMsg* impl_msg);
 */

/* DEFS: CollectionMgr(SlaveInitMsg* impl_msg);
 */
CkGroupID CProxy_CollectionMgr::ckNew(SlaveInitMsg* impl_msg)
{
  return CkCreateGroup(CkIndex_CollectionMgr::__idx, CkIndex_CollectionMgr::__idx_CollectionMgr_SlaveInitMsg, impl_msg);
}
  CProxy_CollectionMgr::CProxy_CollectionMgr(SlaveInitMsg* impl_msg)
{
  ckSetGroupID(CkCreateGroup(CkIndex_CollectionMgr::__idx, CkIndex_CollectionMgr::__idx_CollectionMgr_SlaveInitMsg, impl_msg));
}
 int CkIndex_CollectionMgr::__idx_CollectionMgr_SlaveInitMsg=0;
void CkIndex_CollectionMgr::_call_CollectionMgr_SlaveInitMsg(void* impl_msg,CollectionMgr * impl_obj)
{
  new (impl_obj) CollectionMgr((SlaveInitMsg*)impl_msg);
}

/* DEFS: CollectionMgr(SlaveInitMsg* impl_msg);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CollectionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CollectionMgr::isIrreducible());
// REG: CollectionMgr(SlaveInitMsg* impl_msg);
  __idx_CollectionMgr_SlaveInitMsg = CkRegisterEp("CollectionMgr(SlaveInitMsg* impl_msg)",
     (CkCallFnPtr)_call_CollectionMgr_SlaveInitMsg, CMessage_SlaveInitMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCollectionMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message SlaveInitMsg;
*/
CMessage_SlaveInitMsg::__register("SlaveInitMsg", sizeof(SlaveInitMsg),(CkPackFnPtr) SlaveInitMsg::pack,(CkUnpackFnPtr) SlaveInitMsg::unpack);

/* REG: group CollectionMgr: IrrGroup{
CollectionMgr(SlaveInitMsg* impl_msg);
};
*/
  CkIndex_CollectionMgr::__register("CollectionMgr", sizeof(CollectionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
