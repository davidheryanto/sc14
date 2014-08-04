





/* DEFS: message LocalLBInfoMsg{
MigrateInfo moves[];
double cpuloads[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LocalLBInfoMsg::operator new(size_t s){
  return LocalLBInfoMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int* sz){
  return LocalLBInfoMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int* sz,const int pb){
  return LocalLBInfoMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LocalLBInfoMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LocalLBInfoMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_LocalLBInfoMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(MigrateInfo)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(double)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_LocalLBInfoMsg::CMessage_LocalLBInfoMsg() {
LocalLBInfoMsg *newmsg = (LocalLBInfoMsg *)this;
  newmsg->moves = (MigrateInfo *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->cpuloads = (double *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_LocalLBInfoMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LocalLBInfoMsg::pack(LocalLBInfoMsg *msg) {
  msg->moves = (MigrateInfo *) ((char *)msg->moves - (char *)msg);
  msg->cpuloads = (double *) ((char *)msg->cpuloads - (char *)msg);
  return (void *) msg;
}
LocalLBInfoMsg* CMessage_LocalLBInfoMsg::unpack(void* buf) {
  LocalLBInfoMsg *msg = (LocalLBInfoMsg *) buf;
  msg->moves = (MigrateInfo *) ((size_t)msg->moves + (char *)msg);
  msg->cpuloads = (double *) ((size_t)msg->cpuloads + (char *)msg);
  return msg;
}
int CMessage_LocalLBInfoMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group NamdHybridLB: HybridBaseLB{
NamdHybridLB(CkMigrateMessage* impl_msg);
void NamdHybridLB(void);
void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NamdHybridLB::__idx=0;
/* DEFS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

/* DEFS: void NamdHybridLB(void);
 */

/* DEFS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
void CProxyElement_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */
 int CkIndex_NamdHybridLB::__idx_NamdHybridLB_CkMigrateMessage=0;
void CkIndex_NamdHybridLB::_call_NamdHybridLB_CkMigrateMessage(void* impl_msg,NamdHybridLB * impl_obj)
{
  new (impl_obj) NamdHybridLB((CkMigrateMessage*)impl_msg);
}

/* DEFS: void NamdHybridLB(void);
 */
CkGroupID CProxy_NamdHybridLB::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_NamdHybridLB::__idx, CkIndex_NamdHybridLB::__idx_NamdHybridLB_void, impl_msg);
}
 int CkIndex_NamdHybridLB::__idx_NamdHybridLB_void=0;
void CkIndex_NamdHybridLB::_call_NamdHybridLB_void(void* impl_msg,NamdHybridLB * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) NamdHybridLB();
}

/* DEFS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
void CProxy_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg=0;
void CkIndex_NamdHybridLB::_call_UpdateLocalLBInfo_LocalLBInfoMsg(void* impl_msg,NamdHybridLB * impl_obj)
{
  impl_obj->UpdateLocalLBInfo((LocalLBInfoMsg*)impl_msg);
}

/* DEFS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

/* DEFS: void NamdHybridLB(void);
 */

/* DEFS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
void CProxySection_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_NamdHybridLB::__idx_UpdateLocalLBInfo_LocalLBInfoMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NamdHybridLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_HybridBaseLB::__idx);
   CkRegisterGroupIrr(__idx,NamdHybridLB::isIrreducible());
// REG: NamdHybridLB(CkMigrateMessage* impl_msg);
  __idx_NamdHybridLB_CkMigrateMessage = CkRegisterEp("NamdHybridLB(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_NamdHybridLB_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_NamdHybridLB_CkMigrateMessage);

// REG: void NamdHybridLB(void);
  __idx_NamdHybridLB_void = CkRegisterEp("NamdHybridLB(void)",
     (CkCallFnPtr)_call_NamdHybridLB_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_NamdHybridLB_void);

// REG: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
  __idx_UpdateLocalLBInfo_LocalLBInfoMsg = CkRegisterEp("UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)",
     (CkCallFnPtr)_call_UpdateLocalLBInfo_LocalLBInfoMsg, CMessage_LocalLBInfoMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNamdHybridLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
      _registerHybridBaseLB();

      _registerLBDatabase();

      _registerBaseLB();




/* REG: message LocalLBInfoMsg{
MigrateInfo moves[];
double cpuloads[];
}
;
*/
CMessage_LocalLBInfoMsg::__register("LocalLBInfoMsg", sizeof(LocalLBInfoMsg),(CkPackFnPtr) LocalLBInfoMsg::pack,(CkUnpackFnPtr) LocalLBInfoMsg::unpack);

/* REG: group NamdHybridLB: HybridBaseLB{
NamdHybridLB(CkMigrateMessage* impl_msg);
void NamdHybridLB(void);
void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
};
*/
  CkIndex_NamdHybridLB::__register("NamdHybridLB", sizeof(NamdHybridLB));

}
#endif /* CK_TEMPLATES_ONLY */
