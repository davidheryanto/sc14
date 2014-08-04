
/* DEFS: group NamdCentLB: CentralLB{
void NamdCentLB(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NamdCentLB::__idx=0;
/* DEFS: void NamdCentLB(void);
 */

/* DEFS: void NamdCentLB(void);
 */
CkGroupID CProxy_NamdCentLB::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_NamdCentLB::__idx, CkIndex_NamdCentLB::__idx_NamdCentLB_void, impl_msg);
}
 int CkIndex_NamdCentLB::__idx_NamdCentLB_void=0;
void CkIndex_NamdCentLB::_call_NamdCentLB_void(void* impl_msg,NamdCentLB * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) NamdCentLB();
}

/* DEFS: void NamdCentLB(void);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NamdCentLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,NamdCentLB::isIrreducible());
// REG: void NamdCentLB(void);
  __idx_NamdCentLB_void = CkRegisterEp("NamdCentLB(void)",
     (CkCallFnPtr)_call_NamdCentLB_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_NamdCentLB_void);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNamdCentLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
      _registerCentralLB();

/* REG: group NamdCentLB: CentralLB{
void NamdCentLB(void);
};
*/
  CkIndex_NamdCentLB::__register("NamdCentLB", sizeof(NamdCentLB));

}
#endif /* CK_TEMPLATES_ONLY */
