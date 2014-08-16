/* DEFS: message ComputeGlobalDataMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s){
  return ComputeGlobalDataMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, int* sz){
  return ComputeGlobalDataMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeGlobalDataMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, const int p) {
  return ComputeGlobalDataMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ComputeGlobalDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ComputeGlobalDataMsg::CMessage_ComputeGlobalDataMsg() {
ComputeGlobalDataMsg *newmsg = (ComputeGlobalDataMsg *)this;
}
void CMessage_ComputeGlobalDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeGlobalDataMsg::pack(ComputeGlobalDataMsg *msg) {
  return (void *) msg;
}
ComputeGlobalDataMsg* CMessage_ComputeGlobalDataMsg::unpack(void* buf) {
  ComputeGlobalDataMsg *msg = (ComputeGlobalDataMsg *) buf;
  return msg;
}
int CMessage_ComputeGlobalDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeGlobalResultsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s){
  return ComputeGlobalResultsMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, int* sz){
  return ComputeGlobalResultsMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeGlobalResultsMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, const int p) {
  return ComputeGlobalResultsMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ComputeGlobalResultsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ComputeGlobalResultsMsg::CMessage_ComputeGlobalResultsMsg() {
ComputeGlobalResultsMsg *newmsg = (ComputeGlobalResultsMsg *)this;
}
void CMessage_ComputeGlobalResultsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeGlobalResultsMsg::pack(ComputeGlobalResultsMsg *msg) {
  return (void *) msg;
}
ComputeGlobalResultsMsg* CMessage_ComputeGlobalResultsMsg::unpack(void* buf) {
  ComputeGlobalResultsMsg *msg = (ComputeGlobalResultsMsg *) buf;
  return msg;
}
int CMessage_ComputeGlobalResultsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeDPMEDataMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s){
  return ComputeDPMEDataMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, int* sz){
  return ComputeDPMEDataMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeDPMEDataMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, const int p) {
  return ComputeDPMEDataMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ComputeDPMEDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ComputeDPMEDataMsg::CMessage_ComputeDPMEDataMsg() {
ComputeDPMEDataMsg *newmsg = (ComputeDPMEDataMsg *)this;
}
void CMessage_ComputeDPMEDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeDPMEDataMsg::pack(ComputeDPMEDataMsg *msg) {
  return (void *) msg;
}
ComputeDPMEDataMsg* CMessage_ComputeDPMEDataMsg::unpack(void* buf) {
  ComputeDPMEDataMsg *msg = (ComputeDPMEDataMsg *) buf;
  return msg;
}
int CMessage_ComputeDPMEDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeDPMEResultsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s){
  return ComputeDPMEResultsMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, int* sz){
  return ComputeDPMEResultsMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeDPMEResultsMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, const int p) {
  return ComputeDPMEResultsMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ComputeDPMEResultsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ComputeDPMEResultsMsg::CMessage_ComputeDPMEResultsMsg() {
ComputeDPMEResultsMsg *newmsg = (ComputeDPMEResultsMsg *)this;
}
void CMessage_ComputeDPMEResultsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeDPMEResultsMsg::pack(ComputeDPMEResultsMsg *msg) {
  return (void *) msg;
}
ComputeDPMEResultsMsg* CMessage_ComputeDPMEResultsMsg::unpack(void* buf) {
  ComputeDPMEResultsMsg *msg = (ComputeDPMEResultsMsg *) buf;
  return msg;
}
int CMessage_ComputeDPMEResultsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeConsForceMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeConsForceMsg::operator new(size_t s){
  return ComputeConsForceMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, int* sz){
  return ComputeConsForceMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeConsForceMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, const int p) {
  return ComputeConsForceMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ComputeConsForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ComputeConsForceMsg::CMessage_ComputeConsForceMsg() {
ComputeConsForceMsg *newmsg = (ComputeConsForceMsg *)this;
}
void CMessage_ComputeConsForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeConsForceMsg::pack(ComputeConsForceMsg *msg) {
  return (void *) msg;
}
ComputeConsForceMsg* CMessage_ComputeConsForceMsg::unpack(void* buf) {
  ComputeConsForceMsg *msg = (ComputeConsForceMsg *) buf;
  return msg;
}
int CMessage_ComputeConsForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeEwaldMsg{
float eik[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeEwaldMsg::operator new(size_t s){
  return ComputeEwaldMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int* sz){
  return ComputeEwaldMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeEwaldMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeEwaldMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeEwaldMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ComputeEwaldMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ComputeEwaldMsg::CMessage_ComputeEwaldMsg() {
ComputeEwaldMsg *newmsg = (ComputeEwaldMsg *)this;
  newmsg->eik = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ComputeEwaldMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeEwaldMsg::pack(ComputeEwaldMsg *msg) {
  msg->eik = (float *) ((char *)msg->eik - (char *)msg);
  return (void *) msg;
}
ComputeEwaldMsg* CMessage_ComputeEwaldMsg::unpack(void* buf) {
  ComputeEwaldMsg *msg = (ComputeEwaldMsg *) buf;
  msg->eik = (float *) ((size_t)msg->eik + (char *)msg);
  return msg;
}
int CMessage_ComputeEwaldMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message NonbondedCUDASlaveMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_NonbondedCUDASlaveMsg::operator new(size_t s){
  return NonbondedCUDASlaveMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_NonbondedCUDASlaveMsg::operator new(size_t s, int* sz){
  return NonbondedCUDASlaveMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_NonbondedCUDASlaveMsg::operator new(size_t s, int* sz,const int pb){
  return NonbondedCUDASlaveMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_NonbondedCUDASlaveMsg::operator new(size_t s, const int p) {
  return NonbondedCUDASlaveMsg::alloc(__idx, s, 0, p);
}
void* CMessage_NonbondedCUDASlaveMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_NonbondedCUDASlaveMsg::CMessage_NonbondedCUDASlaveMsg() {
NonbondedCUDASlaveMsg *newmsg = (NonbondedCUDASlaveMsg *)this;
}
void CMessage_NonbondedCUDASlaveMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_NonbondedCUDASlaveMsg::pack(NonbondedCUDASlaveMsg *msg) {
  return (void *) msg;
}
NonbondedCUDASlaveMsg* CMessage_NonbondedCUDASlaveMsg::unpack(void* buf) {
  NonbondedCUDASlaveMsg *msg = (NonbondedCUDASlaveMsg *) buf;
  return msg;
}
int CMessage_NonbondedCUDASlaveMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeMgr: IrrGroup{
ComputeMgr(void);
void updateComputes2(CkQdMsg* impl_msg);
void updateComputes3(void);
void splitComputes(void);
void splitComputes2(CkQdMsg* impl_msg);
void updateLocalComputes(void);
void updateLocalComputes2(CkQdMsg* impl_msg);
void updateLocalComputes3(void);
void updateLocalComputes4(CkQdMsg* impl_msg);
void updateLocalComputes5(void);
void doneUpdateLocalComputes(void);
void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
void recvYieldDevice(int pe);
void recvBuildCudaForceTable(void);
void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMgr::__idx=0;
/* DEFS: ComputeMgr(void);
 */

/* DEFS: void updateComputes2(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::updateComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateComputes3(void);
 */
void CProxyElement_ComputeMgr::updateComputes3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void splitComputes(void);
 */
void CProxyElement_ComputeMgr::splitComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void splitComputes2(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::splitComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateLocalComputes(void);
 */
void CProxyElement_ComputeMgr::updateLocalComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateLocalComputes3(void);
 */
void CProxyElement_ComputeMgr::updateLocalComputes3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void updateLocalComputes5(void);
 */
void CProxyElement_ComputeMgr::updateLocalComputes5(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void doneUpdateLocalComputes(void);
 */
void CProxyElement_ComputeMgr::doneUpdateLocalComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvYieldDevice(int pe);
 */
void CProxyElement_ComputeMgr::recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvBuildCudaForceTable(void);
 */
void CProxyElement_ComputeMgr::recvBuildCudaForceTable(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
void CProxyElement_ComputeMgr::recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputeMgr(void);
 */
CkGroupID CProxy_ComputeMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputeMgr::__idx, CkIndex_ComputeMgr::__idx_ComputeMgr_void, impl_msg);
}
 int CkIndex_ComputeMgr::__idx_ComputeMgr_void=0;
void CkIndex_ComputeMgr::_call_ComputeMgr_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputeMgr();
}

/* DEFS: void updateComputes2(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::updateComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateComputes2(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateComputes2(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg=0;
void CkIndex_ComputeMgr::_call_updateComputes2_CkQdMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->updateComputes2((CkQdMsg*)impl_msg);
}

/* DEFS: void updateComputes3(void);
 */
void CProxy_ComputeMgr::updateComputes3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateComputes3(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateComputes3(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateComputes3_void=0;
void CkIndex_ComputeMgr::_call_updateComputes3_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->updateComputes3();
}

/* DEFS: void splitComputes(void);
 */
void CProxy_ComputeMgr::splitComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::splitComputes(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::splitComputes(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_splitComputes_void=0;
void CkIndex_ComputeMgr::_call_splitComputes_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->splitComputes();
}

/* DEFS: void splitComputes2(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::splitComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::splitComputes2(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::splitComputes2(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg=0;
void CkIndex_ComputeMgr::_call_splitComputes2_CkQdMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->splitComputes2((CkQdMsg*)impl_msg);
}

/* DEFS: void updateLocalComputes(void);
 */
void CProxy_ComputeMgr::updateLocalComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateLocalComputes_void=0;
void CkIndex_ComputeMgr::_call_updateLocalComputes_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->updateLocalComputes();
}

/* DEFS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg=0;
void CkIndex_ComputeMgr::_call_updateLocalComputes2_CkQdMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->updateLocalComputes2((CkQdMsg*)impl_msg);
}

/* DEFS: void updateLocalComputes3(void);
 */
void CProxy_ComputeMgr::updateLocalComputes3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes3(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes3(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateLocalComputes3_void=0;
void CkIndex_ComputeMgr::_call_updateLocalComputes3_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->updateLocalComputes3();
}

/* DEFS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg=0;
void CkIndex_ComputeMgr::_call_updateLocalComputes4_CkQdMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->updateLocalComputes4((CkQdMsg*)impl_msg);
}

/* DEFS: void updateLocalComputes5(void);
 */
void CProxy_ComputeMgr::updateLocalComputes5(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes5(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes5(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_updateLocalComputes5_void=0;
void CkIndex_ComputeMgr::_call_updateLocalComputes5_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->updateLocalComputes5();
}

/* DEFS: void doneUpdateLocalComputes(void);
 */
void CProxy_ComputeMgr::doneUpdateLocalComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::doneUpdateLocalComputes(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::doneUpdateLocalComputes(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void=0;
void CkIndex_ComputeMgr::_call_doneUpdateLocalComputes_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->doneUpdateLocalComputes();
}

/* DEFS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeGlobalData_ComputeGlobalDataMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeGlobalData((ComputeGlobalDataMsg*)impl_msg);
}

/* DEFS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeGlobalResults_ComputeGlobalResultsMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeGlobalResults((ComputeGlobalResultsMsg*)impl_msg);
}

/* DEFS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeDPMEData_ComputeDPMEDataMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeDPMEData((ComputeDPMEDataMsg*)impl_msg);
}

/* DEFS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeDPMEResults_ComputeDPMEResultsMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeDPMEResults((ComputeDPMEResultsMsg*)impl_msg);
}

/* DEFS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeConsForceMsg_ComputeConsForceMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeConsForceMsg((ComputeConsForceMsg*)impl_msg);
}

/* DEFS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeEwaldData_ComputeEwaldMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeEwaldData((ComputeEwaldMsg*)impl_msg);
}

/* DEFS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg=0;
void CkIndex_ComputeMgr::_call_recvComputeEwaldResults_ComputeEwaldMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvComputeEwaldResults((ComputeEwaldMsg*)impl_msg);
}

/* DEFS: void recvYieldDevice(int pe);
 */
void CProxy_ComputeMgr::recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvYieldDevice(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvYieldDevice(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19=0;
void CkIndex_ComputeMgr::_call_recvYieldDevice_marshall19(void* impl_msg,ComputeMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvYieldDevice(pe);
}
int CkIndex_ComputeMgr::_callmarshall_recvYieldDevice_marshall19(char* impl_buf,ComputeMgr * impl_obj) {
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvYieldDevice(pe);
  return implP.size();
}
void CkIndex_ComputeMgr::_marshallmessagepup_recvYieldDevice_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
}

/* DEFS: void recvBuildCudaForceTable(void);
 */
void CProxy_ComputeMgr::recvBuildCudaForceTable(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvBuildCudaForceTable(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvBuildCudaForceTable(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void=0;
void CkIndex_ComputeMgr::_call_recvBuildCudaForceTable_void(void* impl_msg,ComputeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->recvBuildCudaForceTable();
}

/* DEFS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg=0;
void CkIndex_ComputeMgr::_call_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg(void* impl_msg,ComputeMgr * impl_obj)
{
  impl_obj->recvCreateNonbondedCUDASlave((NonbondedCUDASlaveMsg*)impl_msg);
}

/* DEFS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
void CProxy_ComputeMgr::recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22=0;
void CkIndex_ComputeMgr::_call_recvNonbondedCUDASlaveReady_marshall22(void* impl_msg,ComputeMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvNonbondedCUDASlaveReady(impl_noname_0, impl_noname_1, impl_noname_2);
}
int CkIndex_ComputeMgr::_callmarshall_recvNonbondedCUDASlaveReady_marshall22(char* impl_buf,ComputeMgr * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvNonbondedCUDASlaveReady(impl_noname_0, impl_noname_1, impl_noname_2);
  return implP.size();
}
void CkIndex_ComputeMgr::_marshallmessagepup_recvNonbondedCUDASlaveReady_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}

/* DEFS: ComputeMgr(void);
 */

/* DEFS: void updateComputes2(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::updateComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateComputes2_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateComputes3(void);
 */
void CProxySection_ComputeMgr::updateComputes3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateComputes3_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void splitComputes(void);
 */
void CProxySection_ComputeMgr::splitComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_splitComputes_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void splitComputes2(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::splitComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_splitComputes2_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateLocalComputes(void);
 */
void CProxySection_ComputeMgr::updateLocalComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes2_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateLocalComputes3(void);
 */
void CProxySection_ComputeMgr::updateLocalComputes3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes3_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes4_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void updateLocalComputes5(void);
 */
void CProxySection_ComputeMgr::updateLocalComputes5(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_updateLocalComputes5_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void doneUpdateLocalComputes(void);
 */
void CProxySection_ComputeMgr::doneUpdateLocalComputes(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_doneUpdateLocalComputes_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeGlobalData_ComputeGlobalDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeGlobalResults_ComputeGlobalResultsMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeDPMEData_ComputeDPMEDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeDPMEResults_ComputeDPMEResultsMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeConsForceMsg_ComputeConsForceMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeEwaldData_ComputeEwaldMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvComputeEwaldResults_ComputeEwaldMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvYieldDevice(int pe);
 */
void CProxySection_ComputeMgr::recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvYieldDevice_marshall19, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvBuildCudaForceTable(void);
 */
void CProxySection_ComputeMgr::recvBuildCudaForceTable(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvBuildCudaForceTable_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
void CProxySection_ComputeMgr::recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::__idx_recvNonbondedCUDASlaveReady_marshall22, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMgr::isIrreducible());
// REG: ComputeMgr(void);
  __idx_ComputeMgr_void = CkRegisterEp("ComputeMgr(void)",
     (CkCallFnPtr)_call_ComputeMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputeMgr_void);

// REG: void updateComputes2(CkQdMsg* impl_msg);
  __idx_updateComputes2_CkQdMsg = CkRegisterEp("updateComputes2(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_updateComputes2_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void updateComputes3(void);
  __idx_updateComputes3_void = CkRegisterEp("updateComputes3(void)",
     (CkCallFnPtr)_call_updateComputes3_void, 0, __idx, 0);

// REG: void splitComputes(void);
  __idx_splitComputes_void = CkRegisterEp("splitComputes(void)",
     (CkCallFnPtr)_call_splitComputes_void, 0, __idx, 0);

// REG: void splitComputes2(CkQdMsg* impl_msg);
  __idx_splitComputes2_CkQdMsg = CkRegisterEp("splitComputes2(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_splitComputes2_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void updateLocalComputes(void);
  __idx_updateLocalComputes_void = CkRegisterEp("updateLocalComputes(void)",
     (CkCallFnPtr)_call_updateLocalComputes_void, 0, __idx, 0);

// REG: void updateLocalComputes2(CkQdMsg* impl_msg);
  __idx_updateLocalComputes2_CkQdMsg = CkRegisterEp("updateLocalComputes2(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_updateLocalComputes2_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void updateLocalComputes3(void);
  __idx_updateLocalComputes3_void = CkRegisterEp("updateLocalComputes3(void)",
     (CkCallFnPtr)_call_updateLocalComputes3_void, 0, __idx, 0);

// REG: void updateLocalComputes4(CkQdMsg* impl_msg);
  __idx_updateLocalComputes4_CkQdMsg = CkRegisterEp("updateLocalComputes4(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_updateLocalComputes4_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void updateLocalComputes5(void);
  __idx_updateLocalComputes5_void = CkRegisterEp("updateLocalComputes5(void)",
     (CkCallFnPtr)_call_updateLocalComputes5_void, 0, __idx, 0);

// REG: void doneUpdateLocalComputes(void);
  __idx_doneUpdateLocalComputes_void = CkRegisterEp("doneUpdateLocalComputes(void)",
     (CkCallFnPtr)_call_doneUpdateLocalComputes_void, 0, __idx, 0);

// REG: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
  __idx_recvComputeGlobalData_ComputeGlobalDataMsg = CkRegisterEp("recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeGlobalData_ComputeGlobalDataMsg, CMessage_ComputeGlobalDataMsg::__idx, __idx, 0);

// REG: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
  __idx_recvComputeGlobalResults_ComputeGlobalResultsMsg = CkRegisterEp("recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeGlobalResults_ComputeGlobalResultsMsg, CMessage_ComputeGlobalResultsMsg::__idx, __idx, 0);

// REG: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
  __idx_recvComputeDPMEData_ComputeDPMEDataMsg = CkRegisterEp("recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeDPMEData_ComputeDPMEDataMsg, CMessage_ComputeDPMEDataMsg::__idx, __idx, 0);

// REG: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
  __idx_recvComputeDPMEResults_ComputeDPMEResultsMsg = CkRegisterEp("recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeDPMEResults_ComputeDPMEResultsMsg, CMessage_ComputeDPMEResultsMsg::__idx, __idx, 0);

// REG: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
  __idx_recvComputeConsForceMsg_ComputeConsForceMsg = CkRegisterEp("recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeConsForceMsg_ComputeConsForceMsg, CMessage_ComputeConsForceMsg::__idx, __idx, 0);

// REG: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
  __idx_recvComputeEwaldData_ComputeEwaldMsg = CkRegisterEp("recvComputeEwaldData(ComputeEwaldMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeEwaldData_ComputeEwaldMsg, CMessage_ComputeEwaldMsg::__idx, __idx, 0);

// REG: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
  __idx_recvComputeEwaldResults_ComputeEwaldMsg = CkRegisterEp("recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeEwaldResults_ComputeEwaldMsg, CMessage_ComputeEwaldMsg::__idx, __idx, 0);

// REG: void recvYieldDevice(int pe);
  __idx_recvYieldDevice_marshall19 = CkRegisterEp("recvYieldDevice(int pe)",
     (CkCallFnPtr)_call_recvYieldDevice_marshall19, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvYieldDevice_marshall19,(CkMarshallUnpackFn)_callmarshall_recvYieldDevice_marshall19);
  CkRegisterMessagePupFn(__idx_recvYieldDevice_marshall19,(CkMessagePupFn)_marshallmessagepup_recvYieldDevice_marshall19);

// REG: void recvBuildCudaForceTable(void);
  __idx_recvBuildCudaForceTable_void = CkRegisterEp("recvBuildCudaForceTable(void)",
     (CkCallFnPtr)_call_recvBuildCudaForceTable_void, 0, __idx, 0);

// REG: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
  __idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg = CkRegisterEp("recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg)",
     (CkCallFnPtr)_call_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg, CMessage_NonbondedCUDASlaveMsg::__idx, __idx, 0);

// REG: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
  __idx_recvNonbondedCUDASlaveReady_marshall22 = CkRegisterEp("recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2)",
     (CkCallFnPtr)_call_recvNonbondedCUDASlaveReady_marshall22, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvNonbondedCUDASlaveReady_marshall22,(CkMarshallUnpackFn)_callmarshall_recvNonbondedCUDASlaveReady_marshall22);
  CkRegisterMessagePupFn(__idx_recvNonbondedCUDASlaveReady_marshall22,(CkMessagePupFn)_marshallmessagepup_recvNonbondedCUDASlaveReady_marshall22);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message ComputeGlobalDataMsg;
*/
CMessage_ComputeGlobalDataMsg::__register("ComputeGlobalDataMsg", sizeof(ComputeGlobalDataMsg),(CkPackFnPtr) ComputeGlobalDataMsg::pack,(CkUnpackFnPtr) ComputeGlobalDataMsg::unpack);

/* REG: message ComputeGlobalResultsMsg;
*/
CMessage_ComputeGlobalResultsMsg::__register("ComputeGlobalResultsMsg", sizeof(ComputeGlobalResultsMsg),(CkPackFnPtr) ComputeGlobalResultsMsg::pack,(CkUnpackFnPtr) ComputeGlobalResultsMsg::unpack);

/* REG: message ComputeDPMEDataMsg;
*/
CMessage_ComputeDPMEDataMsg::__register("ComputeDPMEDataMsg", sizeof(ComputeDPMEDataMsg),(CkPackFnPtr) ComputeDPMEDataMsg::pack,(CkUnpackFnPtr) ComputeDPMEDataMsg::unpack);

/* REG: message ComputeDPMEResultsMsg;
*/
CMessage_ComputeDPMEResultsMsg::__register("ComputeDPMEResultsMsg", sizeof(ComputeDPMEResultsMsg),(CkPackFnPtr) ComputeDPMEResultsMsg::pack,(CkUnpackFnPtr) ComputeDPMEResultsMsg::unpack);

/* REG: message ComputeConsForceMsg;
*/
CMessage_ComputeConsForceMsg::__register("ComputeConsForceMsg", sizeof(ComputeConsForceMsg),(CkPackFnPtr) ComputeConsForceMsg::pack,(CkUnpackFnPtr) ComputeConsForceMsg::unpack);

/* REG: message ComputeEwaldMsg{
float eik[];
}
;
*/
CMessage_ComputeEwaldMsg::__register("ComputeEwaldMsg", sizeof(ComputeEwaldMsg),(CkPackFnPtr) ComputeEwaldMsg::pack,(CkUnpackFnPtr) ComputeEwaldMsg::unpack);

/* REG: message NonbondedCUDASlaveMsg;
*/
CMessage_NonbondedCUDASlaveMsg::__register("NonbondedCUDASlaveMsg", sizeof(NonbondedCUDASlaveMsg),(CkPackFnPtr) NonbondedCUDASlaveMsg::pack,(CkUnpackFnPtr) NonbondedCUDASlaveMsg::unpack);

/* REG: group ComputeMgr: IrrGroup{
ComputeMgr(void);
void updateComputes2(CkQdMsg* impl_msg);
void updateComputes3(void);
void splitComputes(void);
void splitComputes2(CkQdMsg* impl_msg);
void updateLocalComputes(void);
void updateLocalComputes2(CkQdMsg* impl_msg);
void updateLocalComputes3(void);
void updateLocalComputes4(CkQdMsg* impl_msg);
void updateLocalComputes5(void);
void doneUpdateLocalComputes(void);
void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
void recvYieldDevice(int pe);
void recvBuildCudaForceTable(void);
void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
};
*/
  CkIndex_ComputeMgr::__register("ComputeMgr", sizeof(ComputeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
