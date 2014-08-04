/* DEFS: message GridAckMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridAckMsg::operator new(size_t s){
  return GridAckMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GridAckMsg::operator new(size_t s, int* sz){
  return GridAckMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GridAckMsg::operator new(size_t s, int* sz,const int pb){
  return GridAckMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GridAckMsg::operator new(size_t s, const int p) {
  return GridAckMsg::alloc(__idx, s, 0, p);
}
void* CMessage_GridAckMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_GridAckMsg::CMessage_GridAckMsg() {
GridAckMsg *newmsg = (GridAckMsg *)this;
}
void CMessage_GridAckMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridAckMsg::pack(GridAckMsg *msg) {
  return (void *) msg;
}
GridAckMsg* CMessage_GridAckMsg::unpack(void* buf) {
  GridAckMsg *msg = (GridAckMsg *) buf;
  return msg;
}
int CMessage_GridAckMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridDepositMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridDepositMsg::operator new(size_t s){
  return GridDepositMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GridDepositMsg::operator new(size_t s, int* sz){
  return GridDepositMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GridDepositMsg::operator new(size_t s, int* sz,const int pb){
  return GridDepositMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GridDepositMsg::operator new(size_t s, const int p) {
  return GridDepositMsg::alloc(__idx, s, 0, p);
}
void* CMessage_GridDepositMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_GridDepositMsg::CMessage_GridDepositMsg() {
GridDepositMsg *newmsg = (GridDepositMsg *)this;
}
void CMessage_GridDepositMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridDepositMsg::pack(GridDepositMsg *msg) {
  return (void *) msg;
}
GridDepositMsg* CMessage_GridDepositMsg::unpack(void* buf) {
  GridDepositMsg *msg = (GridDepositMsg *) buf;
  return msg;
}
int CMessage_GridDepositMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridSegmentMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridSegmentMsg::operator new(size_t s){
  return GridSegmentMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GridSegmentMsg::operator new(size_t s, int* sz){
  return GridSegmentMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GridSegmentMsg::operator new(size_t s, int* sz,const int pb){
  return GridSegmentMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GridSegmentMsg::operator new(size_t s, const int p) {
  return GridSegmentMsg::alloc(__idx, s, 0, p);
}
void* CMessage_GridSegmentMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_GridSegmentMsg::CMessage_GridSegmentMsg() {
GridSegmentMsg *newmsg = (GridSegmentMsg *)this;
}
void CMessage_GridSegmentMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridSegmentMsg::pack(GridSegmentMsg *msg) {
  return (void *) msg;
}
GridSegmentMsg* CMessage_GridSegmentMsg::unpack(void* buf) {
  GridSegmentMsg *msg = (GridSegmentMsg *) buf;
  return msg;
}
int CMessage_GridSegmentMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SubReqMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SubReqMsg::operator new(size_t s){
  return SubReqMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_SubReqMsg::operator new(size_t s, int* sz){
  return SubReqMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_SubReqMsg::operator new(size_t s, int* sz,const int pb){
  return SubReqMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_SubReqMsg::operator new(size_t s, const int p) {
  return SubReqMsg::alloc(__idx, s, 0, p);
}
void* CMessage_SubReqMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_SubReqMsg::CMessage_SubReqMsg() {
SubReqMsg *newmsg = (SubReqMsg *)this;
}
void CMessage_SubReqMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SubReqMsg::pack(SubReqMsg *msg) {
  return (void *) msg;
}
SubReqMsg* CMessage_SubReqMsg::unpack(void* buf) {
  SubReqMsg *msg = (SubReqMsg *) buf;
  return msg;
}
int CMessage_SubReqMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridRequestMsg{
int gridStartIndex[];
int gridIndexList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridRequestMsg::operator new(size_t s){
  return GridRequestMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GridRequestMsg::operator new(size_t s, int* sz){
  return GridRequestMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GridRequestMsg::operator new(size_t s, int* sz,const int pb){
  return GridRequestMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GridRequestMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridRequestMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_GridRequestMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridRequestMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_GridRequestMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(int)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_GridRequestMsg::CMessage_GridRequestMsg() {
GridRequestMsg *newmsg = (GridRequestMsg *)this;
  newmsg->gridStartIndex = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->gridIndexList = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_GridRequestMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridRequestMsg::pack(GridRequestMsg *msg) {
  msg->gridStartIndex = (int *) ((char *)msg->gridStartIndex - (char *)msg);
  msg->gridIndexList = (int *) ((char *)msg->gridIndexList - (char *)msg);
  return (void *) msg;
}
GridRequestMsg* CMessage_GridRequestMsg::unpack(void* buf) {
  GridRequestMsg *msg = (GridRequestMsg *) buf;
  msg->gridStartIndex = (int *) ((size_t)msg->gridStartIndex + (char *)msg);
  msg->gridIndexList = (int *) ((size_t)msg->gridIndexList + (char *)msg);
  return msg;
}
int CMessage_GridRequestMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridValuesMsg{
int gridStartIndex[];
GridVal gridVals[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridValuesMsg::operator new(size_t s){
  return GridValuesMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_GridValuesMsg::operator new(size_t s, int* sz){
  return GridValuesMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_GridValuesMsg::operator new(size_t s, int* sz,const int pb){
  return GridValuesMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_GridValuesMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridValuesMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_GridValuesMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridValuesMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_GridValuesMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(GridVal)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_GridValuesMsg::CMessage_GridValuesMsg() {
GridValuesMsg *newmsg = (GridValuesMsg *)this;
  newmsg->gridStartIndex = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->gridVals = (GridVal *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_GridValuesMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridValuesMsg::pack(GridValuesMsg *msg) {
  msg->gridStartIndex = (int *) ((char *)msg->gridStartIndex - (char *)msg);
  msg->gridVals = (GridVal *) ((char *)msg->gridVals - (char *)msg);
  return (void *) msg;
}
GridValuesMsg* CMessage_GridValuesMsg::unpack(void* buf) {
  GridValuesMsg *msg = (GridValuesMsg *) buf;
  msg->gridStartIndex = (int *) ((size_t)msg->gridStartIndex + (char *)msg);
  msg->gridVals = (GridVal *) ((size_t)msg->gridVals + (char *)msg);
  return msg;
}
int CMessage_GridValuesMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeGridForceMgr: IrrGroup{
ComputeGridForceMgr(void);
void finishWork(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeGridForceMgr::__idx=0;
/* DEFS: ComputeGridForceMgr(void);
 */

/* DEFS: void finishWork(void);
 */
void CProxyElement_ComputeGridForceMgr::finishWork(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeGridForceMgr(void);
 */
CkGroupID CProxy_ComputeGridForceMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputeGridForceMgr::__idx, CkIndex_ComputeGridForceMgr::__idx_ComputeGridForceMgr_void, impl_msg);
}
 int CkIndex_ComputeGridForceMgr::__idx_ComputeGridForceMgr_void=0;
void CkIndex_ComputeGridForceMgr::_call_ComputeGridForceMgr_void(void* impl_msg,ComputeGridForceMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeGridForceMgr();
}

/* DEFS: void finishWork(void);
 */
void CProxy_ComputeGridForceMgr::finishWork(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeGridForceMgr::finishWork(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeGridForceMgr::finishWork(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeGridForceMgr::__idx_finishWork_void=0;
void CkIndex_ComputeGridForceMgr::_call_finishWork_void(void* impl_msg,ComputeGridForceMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->finishWork();
}

/* DEFS: ComputeGridForceMgr(void);
 */

/* DEFS: void finishWork(void);
 */
void CProxySection_ComputeGridForceMgr::finishWork(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeGridForceMgr::__idx_finishWork_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeGridForceMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeGridForceMgr::isIrreducible());
// REG: ComputeGridForceMgr(void);
  __idx_ComputeGridForceMgr_void = CkRegisterEp("ComputeGridForceMgr(void)",
     (CkCallFnPtr)_call_ComputeGridForceMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeGridForceMgr_void);

// REG: void finishWork(void);
  __idx_finishWork_void = CkRegisterEp("finishWork(void)",
     (CkCallFnPtr)_call_finishWork_void, 0, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup ComputeGridForceNodeMgr: NodeGroup{
ComputeGridForceNodeMgr(void);
void depositInitialGrid(GridDepositMsg* impl_msg);
void requestInitialGridData(void);
void submitRequest(SubReqMsg* impl_msg);
void fetchGridValues(GridRequestMsg* impl_msg);
void recvGridValues(GridValuesMsg* impl_msg);
void ack(GridAckMsg* impl_msg);
void recv(GridSegmentMsg* impl_msg);
void broadcastInitialGridData(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeGridForceNodeMgr::__idx=0;
/* DEFS: ComputeGridForceNodeMgr(void);
 */

/* DEFS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::depositInitialGrid(GridDepositMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void requestInitialGridData(void);
 */
void CProxyElement_ComputeGridForceNodeMgr::requestInitialGridData(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void submitRequest(SubReqMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::submitRequest(SubReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::fetchGridValues(GridRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvGridValues(GridValuesMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::recvGridValues(GridValuesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void ack(GridAckMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::ack(GridAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recv(GridSegmentMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::recv(GridSegmentMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void broadcastInitialGridData(void);
 */
void CProxyElement_ComputeGridForceNodeMgr::broadcastInitialGridData(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeGridForceNodeMgr(void);
 */
CkGroupID CProxy_ComputeGridForceNodeMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateNodeGroup(CkIndex_ComputeGridForceNodeMgr::__idx, CkIndex_ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_void, impl_msg);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_void=0;
void CkIndex_ComputeGridForceNodeMgr::_call_ComputeGridForceNodeMgr_void(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeGridForceNodeMgr();
}

/* DEFS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::depositInitialGrid(GridDepositMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg=0;
void CkIndex_ComputeGridForceNodeMgr::_call_depositInitialGrid_GridDepositMsg(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->depositInitialGrid((GridDepositMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void requestInitialGridData(void);
 */
void CProxy_ComputeGridForceNodeMgr::requestInitialGridData(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void=0;
void CkIndex_ComputeGridForceNodeMgr::_call_requestInitialGridData_void(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  CkFreeSysMsg(impl_msg);
  impl_obj->requestInitialGridData();
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void submitRequest(SubReqMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::submitRequest(SubReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg=0;
void CkIndex_ComputeGridForceNodeMgr::_call_submitRequest_SubReqMsg(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->submitRequest((SubReqMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::fetchGridValues(GridRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg=0;
void CkIndex_ComputeGridForceNodeMgr::_call_fetchGridValues_GridRequestMsg(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->fetchGridValues((GridRequestMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void recvGridValues(GridValuesMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::recvGridValues(GridValuesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg=0;
void CkIndex_ComputeGridForceNodeMgr::_call_recvGridValues_GridValuesMsg(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->recvGridValues((GridValuesMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void ack(GridAckMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::ack(GridAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg=0;
void CkIndex_ComputeGridForceNodeMgr::_call_ack_GridAckMsg(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->ack((GridAckMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void recv(GridSegmentMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::recv(GridSegmentMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg=0;
void CkIndex_ComputeGridForceNodeMgr::_call_recv_GridSegmentMsg(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->recv((GridSegmentMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: void broadcastInitialGridData(void);
 */
void CProxy_ComputeGridForceNodeMgr::broadcastInitialGridData(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void=0;
void CkIndex_ComputeGridForceNodeMgr::_call_broadcastInitialGridData_void(void* impl_msg,ComputeGridForceNodeMgr * impl_obj)
{
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void,impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  CkFreeSysMsg(impl_msg);
  impl_obj->broadcastInitialGridData();
  CmiUnlock(impl_obj->__nodelock);
}

/* DEFS: ComputeGridForceNodeMgr(void);
 */

/* DEFS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::depositInitialGrid(GridDepositMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_depositInitialGrid_GridDepositMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void requestInitialGridData(void);
 */
void CProxySection_ComputeGridForceNodeMgr::requestInitialGridData(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_requestInitialGridData_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void submitRequest(SubReqMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::submitRequest(SubReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_submitRequest_SubReqMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::fetchGridValues(GridRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_fetchGridValues_GridRequestMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvGridValues(GridValuesMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::recvGridValues(GridValuesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_recvGridValues_GridValuesMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void ack(GridAckMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::ack(GridAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_ack_GridAckMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recv(GridSegmentMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::recv(GridSegmentMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_recv_GridSegmentMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void broadcastInitialGridData(void);
 */
void CProxySection_ComputeGridForceNodeMgr::broadcastInitialGridData(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::__idx_broadcastInitialGridData_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeGridForceNodeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeGridForceNodeMgr::isIrreducible());
// REG: ComputeGridForceNodeMgr(void);
  __idx_ComputeGridForceNodeMgr_void = CkRegisterEp("ComputeGridForceNodeMgr(void)",
     (CkCallFnPtr)_call_ComputeGridForceNodeMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeGridForceNodeMgr_void);

// REG: void depositInitialGrid(GridDepositMsg* impl_msg);
  __idx_depositInitialGrid_GridDepositMsg = CkRegisterEp("depositInitialGrid(GridDepositMsg* impl_msg)",
     (CkCallFnPtr)_call_depositInitialGrid_GridDepositMsg, CMessage_GridDepositMsg::__idx, __idx, 0);

// REG: void requestInitialGridData(void);
  __idx_requestInitialGridData_void = CkRegisterEp("requestInitialGridData(void)",
     (CkCallFnPtr)_call_requestInitialGridData_void, 0, __idx, 0);

// REG: void submitRequest(SubReqMsg* impl_msg);
  __idx_submitRequest_SubReqMsg = CkRegisterEp("submitRequest(SubReqMsg* impl_msg)",
     (CkCallFnPtr)_call_submitRequest_SubReqMsg, CMessage_SubReqMsg::__idx, __idx, 0);

// REG: void fetchGridValues(GridRequestMsg* impl_msg);
  __idx_fetchGridValues_GridRequestMsg = CkRegisterEp("fetchGridValues(GridRequestMsg* impl_msg)",
     (CkCallFnPtr)_call_fetchGridValues_GridRequestMsg, CMessage_GridRequestMsg::__idx, __idx, 0);

// REG: void recvGridValues(GridValuesMsg* impl_msg);
  __idx_recvGridValues_GridValuesMsg = CkRegisterEp("recvGridValues(GridValuesMsg* impl_msg)",
     (CkCallFnPtr)_call_recvGridValues_GridValuesMsg, CMessage_GridValuesMsg::__idx, __idx, 0);

// REG: void ack(GridAckMsg* impl_msg);
  __idx_ack_GridAckMsg = CkRegisterEp("ack(GridAckMsg* impl_msg)",
     (CkCallFnPtr)_call_ack_GridAckMsg, CMessage_GridAckMsg::__idx, __idx, 0);

// REG: void recv(GridSegmentMsg* impl_msg);
  __idx_recv_GridSegmentMsg = CkRegisterEp("recv(GridSegmentMsg* impl_msg)",
     (CkCallFnPtr)_call_recv_GridSegmentMsg, CMessage_GridSegmentMsg::__idx, __idx, 0);

// REG: void broadcastInitialGridData(void);
  __idx_broadcastInitialGridData_void = CkRegisterEp("broadcastInitialGridData(void)",
     (CkCallFnPtr)_call_broadcastInitialGridData_void, 0, __idx, 0);

  ComputeGridForceNodeMgr::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

ComputeGridForceNodeMgr_SDAG_CODE_DEF


#ifndef CK_TEMPLATES_ONLY
void _registerComputeGridForceMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message GridAckMsg;
*/
CMessage_GridAckMsg::__register("GridAckMsg", sizeof(GridAckMsg),(CkPackFnPtr) GridAckMsg::pack,(CkUnpackFnPtr) GridAckMsg::unpack);

/* REG: message GridDepositMsg;
*/
CMessage_GridDepositMsg::__register("GridDepositMsg", sizeof(GridDepositMsg),(CkPackFnPtr) GridDepositMsg::pack,(CkUnpackFnPtr) GridDepositMsg::unpack);

/* REG: message GridSegmentMsg;
*/
CMessage_GridSegmentMsg::__register("GridSegmentMsg", sizeof(GridSegmentMsg),(CkPackFnPtr) GridSegmentMsg::pack,(CkUnpackFnPtr) GridSegmentMsg::unpack);

/* REG: message SubReqMsg;
*/
CMessage_SubReqMsg::__register("SubReqMsg", sizeof(SubReqMsg),(CkPackFnPtr) SubReqMsg::pack,(CkUnpackFnPtr) SubReqMsg::unpack);

/* REG: message GridRequestMsg{
int gridStartIndex[];
int gridIndexList[];
}
;
*/
CMessage_GridRequestMsg::__register("GridRequestMsg", sizeof(GridRequestMsg),(CkPackFnPtr) GridRequestMsg::pack,(CkUnpackFnPtr) GridRequestMsg::unpack);

/* REG: message GridValuesMsg{
int gridStartIndex[];
GridVal gridVals[];
}
;
*/
CMessage_GridValuesMsg::__register("GridValuesMsg", sizeof(GridValuesMsg),(CkPackFnPtr) GridValuesMsg::pack,(CkUnpackFnPtr) GridValuesMsg::unpack);

/* REG: group ComputeGridForceMgr: IrrGroup{
ComputeGridForceMgr(void);
void finishWork(void);
};
*/
  CkIndex_ComputeGridForceMgr::__register("ComputeGridForceMgr", sizeof(ComputeGridForceMgr));

/* REG: nodegroup ComputeGridForceNodeMgr: NodeGroup{
ComputeGridForceNodeMgr(void);
void depositInitialGrid(GridDepositMsg* impl_msg);
void requestInitialGridData(void);
void submitRequest(SubReqMsg* impl_msg);
void fetchGridValues(GridRequestMsg* impl_msg);
void recvGridValues(GridValuesMsg* impl_msg);
void ack(GridAckMsg* impl_msg);
void recv(GridSegmentMsg* impl_msg);
void broadcastInitialGridData(void);
};
*/
  CkIndex_ComputeGridForceNodeMgr::__register("ComputeGridForceNodeMgr", sizeof(ComputeGridForceNodeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
