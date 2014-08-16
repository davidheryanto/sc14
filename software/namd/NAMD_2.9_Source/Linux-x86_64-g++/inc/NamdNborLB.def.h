
/* DEFS: group NamdNborLB: NeighborLB{
void NamdNborLB(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NamdNborLB::__idx=0;
/* DEFS: void NamdNborLB(void);
 */

/* DEFS: void NamdNborLB(void);
 */
CkGroupID CProxy_NamdNborLB::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_NamdNborLB::__idx, CkIndex_NamdNborLB::__idx_NamdNborLB_void, impl_msg);
}
 int CkIndex_NamdNborLB::__idx_NamdNborLB_void=0;
void CkIndex_NamdNborLB::_call_NamdNborLB_void(void* impl_msg,NamdNborLB * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) NamdNborLB();
}

/* DEFS: void NamdNborLB(void);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NamdNborLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NeighborLB::__idx);
   CkRegisterGroupIrr(__idx,NamdNborLB::isIrreducible());
// REG: void NamdNborLB(void);
  __idx_NamdNborLB_void = CkRegisterEp("NamdNborLB(void)",
     (CkCallFnPtr)_call_NamdNborLB_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_NamdNborLB_void);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNamdNborLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
      _registerNeighborLB();

/* REG: group NamdNborLB: NeighborLB{
void NamdNborLB(void);
};
*/
  CkIndex_NamdNborLB::__register("NamdNborLB", sizeof(NamdNborLB));

}
#endif /* CK_TEMPLATES_ONLY */
