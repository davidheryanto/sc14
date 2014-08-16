
/* DEFS: group NamdDummyLB: CentralLB{
void NamdDummyLB(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NamdDummyLB::__idx=0;
/* DEFS: void NamdDummyLB(void);
 */

/* DEFS: void NamdDummyLB(void);
 */
CkGroupID CProxy_NamdDummyLB::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_NamdDummyLB::__idx, CkIndex_NamdDummyLB::__idx_NamdDummyLB_void, impl_msg);
}
 int CkIndex_NamdDummyLB::__idx_NamdDummyLB_void=0;
void CkIndex_NamdDummyLB::_call_NamdDummyLB_void(void* impl_msg,NamdDummyLB * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) NamdDummyLB();
}

/* DEFS: void NamdDummyLB(void);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NamdDummyLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,NamdDummyLB::isIrreducible());
// REG: void NamdDummyLB(void);
  __idx_NamdDummyLB_void = CkRegisterEp("NamdDummyLB(void)",
     (CkCallFnPtr)_call_NamdDummyLB_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_NamdDummyLB_void);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNamdDummyLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
      _registerCentralLB();

/* REG: group NamdDummyLB: CentralLB{
void NamdDummyLB(void);
};
*/
  CkIndex_NamdDummyLB::__register("NamdDummyLB", sizeof(NamdDummyLB));

}
#endif /* CK_TEMPLATES_ONLY */
