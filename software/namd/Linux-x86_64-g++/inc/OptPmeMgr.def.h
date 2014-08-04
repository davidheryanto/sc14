
/* DEFS: group OptPmeMgr: IrrGroup{
OptPmeMgr(void);
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void recvUngrid(OptPmeGridMsg* impl_msg);
void ungridCalc(OptPmeDummyMsg* impl_msg);
void recvEvir(CkReductionMsg* impl_msg);
void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmeMgr::__idx=0;
/* DEFS: OptPmeMgr(void);
 */

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxyElement_OptPmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxyElement_OptPmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxyElement_OptPmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
void CProxyElement_OptPmeMgr::recvUngrid(OptPmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
void CProxyElement_OptPmeMgr::ungridCalc(OptPmeDummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvEvir(CkReductionMsg* impl_msg);
 */
void CProxyElement_OptPmeMgr::recvEvir(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
void CProxyElement_OptPmeMgr::recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: OptPmeMgr(void);
 */
CkGroupID CProxy_OptPmeMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_OptPmeMgr::__idx, CkIndex_OptPmeMgr::__idx_OptPmeMgr_void, impl_msg);
}
 int CkIndex_OptPmeMgr::__idx_OptPmeMgr_void=0;
void CkIndex_OptPmeMgr::_call_OptPmeMgr_void(void* impl_msg,OptPmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) OptPmeMgr();
}

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxy_OptPmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::initialize(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::initialize(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg=0;
void CkIndex_OptPmeMgr::_call_initialize_CkQdMsg(void* impl_msg,OptPmeMgr * impl_obj)
{
  impl_obj->initialize((CkQdMsg*)impl_msg);
}

/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxy_OptPmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::initialize_pencils(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::initialize_pencils(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg=0;
void CkIndex_OptPmeMgr::_call_initialize_pencils_CkQdMsg(void* impl_msg,OptPmeMgr * impl_obj)
{
  impl_obj->initialize_pencils((CkQdMsg*)impl_msg);
}

/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxy_OptPmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::activate_pencils(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::activate_pencils(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg=0;
void CkIndex_OptPmeMgr::_call_activate_pencils_CkQdMsg(void* impl_msg,OptPmeMgr * impl_obj)
{
  impl_obj->activate_pencils((CkQdMsg*)impl_msg);
}

/* DEFS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
void CProxy_OptPmeMgr::recvUngrid(OptPmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::recvUngrid(OptPmeGridMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::recvUngrid(OptPmeGridMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg=0;
void CkIndex_OptPmeMgr::_call_recvUngrid_OptPmeGridMsg(void* impl_msg,OptPmeMgr * impl_obj)
{
  impl_obj->recvUngrid((OptPmeGridMsg*)impl_msg);
}

/* DEFS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
void CProxy_OptPmeMgr::ungridCalc(OptPmeDummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::ungridCalc(OptPmeDummyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::ungridCalc(OptPmeDummyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg=0;
void CkIndex_OptPmeMgr::_call_ungridCalc_OptPmeDummyMsg(void* impl_msg,OptPmeMgr * impl_obj)
{
  impl_obj->ungridCalc((OptPmeDummyMsg*)impl_msg);
}

/* DEFS: void recvEvir(CkReductionMsg* impl_msg);
 */
void CProxy_OptPmeMgr::recvEvir(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::recvEvir(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::recvEvir(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg=0;
void CkIndex_OptPmeMgr::_call_recvEvir_CkReductionMsg(void* impl_msg,OptPmeMgr * impl_obj)
{
  impl_obj->recvEvir((CkReductionMsg*)impl_msg);
}

/* DEFS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
void CProxy_OptPmeMgr::recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID(),0);
}
void CProxy_OptPmeMgr::recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_OptPmeMgr::recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_OptPmeMgr::__idx_recvArrays_marshall8=0;
void CkIndex_OptPmeMgr::_call_recvArrays_marshall8(void* impl_msg,OptPmeMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  CProxy_OptPmeXPencil impl_noname_0; implP|impl_noname_0;
  CProxy_OptPmeYPencil impl_noname_1; implP|impl_noname_1;
  CProxy_OptPmeZPencil impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvArrays(impl_noname_0, impl_noname_1, impl_noname_2);
}
int CkIndex_OptPmeMgr::_callmarshall_recvArrays_marshall8(char* impl_buf,OptPmeMgr * impl_obj) {
  /*Unmarshall pup'd fields: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  CProxy_OptPmeXPencil impl_noname_0; implP|impl_noname_0;
  CProxy_OptPmeYPencil impl_noname_1; implP|impl_noname_1;
  CProxy_OptPmeZPencil impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvArrays(impl_noname_0, impl_noname_1, impl_noname_2);
  return implP.size();
}
void CkIndex_OptPmeMgr::_marshallmessagepup_recvArrays_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  CProxy_OptPmeXPencil impl_noname_0; implP|impl_noname_0;
  CProxy_OptPmeYPencil impl_noname_1; implP|impl_noname_1;
  CProxy_OptPmeZPencil impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}

/* DEFS: OptPmeMgr(void);
 */

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxySection_OptPmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_initialize_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxySection_OptPmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxySection_OptPmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
void CProxySection_OptPmeMgr::recvUngrid(OptPmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_recvUngrid_OptPmeGridMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
void CProxySection_OptPmeMgr::ungridCalc(OptPmeDummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_ungridCalc_OptPmeDummyMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvEvir(CkReductionMsg* impl_msg);
 */
void CProxySection_OptPmeMgr::recvEvir(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_recvEvir_CkReductionMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
void CProxySection_OptPmeMgr::recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_OptPmeZPencil &)impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_OptPmeMgr::__idx_recvArrays_marshall8, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,OptPmeMgr::isIrreducible());
// REG: OptPmeMgr(void);
  __idx_OptPmeMgr_void = CkRegisterEp("OptPmeMgr(void)",
     (CkCallFnPtr)_call_OptPmeMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_OptPmeMgr_void);

// REG: void initialize(CkQdMsg* impl_msg);
  __idx_initialize_CkQdMsg = CkRegisterEp("initialize(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_initialize_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void initialize_pencils(CkQdMsg* impl_msg);
  __idx_initialize_pencils_CkQdMsg = CkRegisterEp("initialize_pencils(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_initialize_pencils_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void activate_pencils(CkQdMsg* impl_msg);
  __idx_activate_pencils_CkQdMsg = CkRegisterEp("activate_pencils(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_activate_pencils_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void recvUngrid(OptPmeGridMsg* impl_msg);
  __idx_recvUngrid_OptPmeGridMsg = CkRegisterEp("recvUngrid(OptPmeGridMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUngrid_OptPmeGridMsg, CMessage_OptPmeGridMsg::__idx, __idx, 0);

// REG: void ungridCalc(OptPmeDummyMsg* impl_msg);
  __idx_ungridCalc_OptPmeDummyMsg = CkRegisterEp("ungridCalc(OptPmeDummyMsg* impl_msg)",
     (CkCallFnPtr)_call_ungridCalc_OptPmeDummyMsg, CMessage_OptPmeDummyMsg::__idx, __idx, 0);

// REG: void recvEvir(CkReductionMsg* impl_msg);
  __idx_recvEvir_CkReductionMsg = CkRegisterEp("recvEvir(CkReductionMsg* impl_msg)",
     (CkCallFnPtr)_call_recvEvir_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);

// REG: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
  __idx_recvArrays_marshall8 = CkRegisterEp("recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2)",
     (CkCallFnPtr)_call_recvArrays_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvArrays_marshall8,(CkMarshallUnpackFn)_callmarshall_recvArrays_marshall8);
  CkRegisterMessagePupFn(__idx_recvArrays_marshall8,(CkMessagePupFn)_marshallmessagepup_recvArrays_marshall8);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerOptPmeMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
      _registerPmeFFTLib();

/* REG: group OptPmeMgr: IrrGroup{
OptPmeMgr(void);
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void recvUngrid(OptPmeGridMsg* impl_msg);
void ungridCalc(OptPmeDummyMsg* impl_msg);
void recvEvir(CkReductionMsg* impl_msg);
void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
};
*/
  CkIndex_OptPmeMgr::__register("OptPmeMgr", sizeof(OptPmeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
