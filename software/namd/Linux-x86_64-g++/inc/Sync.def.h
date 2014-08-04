/* DEFS: group Sync: IrrGroup{
Sync(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Sync::__idx=0;
/* DEFS: Sync(void);
 */

/* DEFS: Sync(void);
 */
CkGroupID CProxy_Sync::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_Sync::__idx, CkIndex_Sync::__idx_Sync_void, impl_msg);
}
 int CkIndex_Sync::__idx_Sync_void=0;
void CkIndex_Sync::_call_Sync_void(void* impl_msg,Sync * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Sync();
}

/* DEFS: Sync(void);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Sync::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Sync::isIrreducible());
// REG: Sync(void);
  __idx_Sync_void = CkRegisterEp("Sync(void)",
     (CkCallFnPtr)_call_Sync_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_Sync_void);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerSync(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: group Sync: IrrGroup{
Sync(void);
};
*/
  CkIndex_Sync::__register("Sync", sizeof(Sync));

}
#endif /* CK_TEMPLATES_ONLY */
