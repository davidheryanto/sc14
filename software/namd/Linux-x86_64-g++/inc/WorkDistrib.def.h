/* DEFS: message LocalWorkMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LocalWorkMsg::operator new(size_t s){
  return LocalWorkMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_LocalWorkMsg::operator new(size_t s, int* sz){
  return LocalWorkMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_LocalWorkMsg::operator new(size_t s, int* sz,const int pb){
  return LocalWorkMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_LocalWorkMsg::operator new(size_t s, const int p) {
  return LocalWorkMsg::alloc(__idx, s, 0, p);
}
void* CMessage_LocalWorkMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_LocalWorkMsg::CMessage_LocalWorkMsg() {
LocalWorkMsg *newmsg = (LocalWorkMsg *)this;
}
void CMessage_LocalWorkMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LocalWorkMsg::pack(LocalWorkMsg *msg) {
  return (void *) msg;
}
LocalWorkMsg* CMessage_LocalWorkMsg::unpack(void* buf) {
  LocalWorkMsg *msg = (LocalWorkMsg *) buf;
  return msg;
}
int CMessage_LocalWorkMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeMapChangeMsg{
int newNodes[];
char newNumPartitions[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeMapChangeMsg::operator new(size_t s){
  return ComputeMapChangeMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int* sz){
  return ComputeMapChangeMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeMapChangeMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ComputeMapChangeMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ComputeMapChangeMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ComputeMapChangeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(char)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_ComputeMapChangeMsg::CMessage_ComputeMapChangeMsg() {
ComputeMapChangeMsg *newmsg = (ComputeMapChangeMsg *)this;
  newmsg->newNodes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->newNumPartitions = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_ComputeMapChangeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeMapChangeMsg::pack(ComputeMapChangeMsg *msg) {
  msg->newNodes = (int *) ((char *)msg->newNodes - (char *)msg);
  msg->newNumPartitions = (char *) ((char *)msg->newNumPartitions - (char *)msg);
  return (void *) msg;
}
ComputeMapChangeMsg* CMessage_ComputeMapChangeMsg::unpack(void* buf) {
  ComputeMapChangeMsg *msg = (ComputeMapChangeMsg *) buf;
  msg->newNodes = (int *) ((size_t)msg->newNodes + (char *)msg);
  msg->newNumPartitions = (char *) ((size_t)msg->newNumPartitions + (char *)msg);
  return msg;
}
int CMessage_ComputeMapChangeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PatchMapMsg{
char patchMapData[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PatchMapMsg::operator new(size_t s){
  return PatchMapMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PatchMapMsg::operator new(size_t s, int* sz){
  return PatchMapMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PatchMapMsg::operator new(size_t s, int* sz,const int pb){
  return PatchMapMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PatchMapMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return PatchMapMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_PatchMapMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return PatchMapMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_PatchMapMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_PatchMapMsg::CMessage_PatchMapMsg() {
PatchMapMsg *newmsg = (PatchMapMsg *)this;
  newmsg->patchMapData = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_PatchMapMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PatchMapMsg::pack(PatchMapMsg *msg) {
  msg->patchMapData = (char *) ((char *)msg->patchMapData - (char *)msg);
  return (void *) msg;
}
PatchMapMsg* CMessage_PatchMapMsg::unpack(void* buf) {
  PatchMapMsg *msg = (PatchMapMsg *) buf;
  msg->patchMapData = (char *) ((size_t)msg->patchMapData + (char *)msg);
  return msg;
}
int CMessage_PatchMapMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeMapMsg{
ComputeMap::ComputeData computeMapData[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeMapMsg::operator new(size_t s){
  return ComputeMapMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ComputeMapMsg::operator new(size_t s, int* sz){
  return ComputeMapMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ComputeMapMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeMapMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ComputeMapMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeMapMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ComputeMapMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeMapMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ComputeMapMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(ComputeMap::ComputeData)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ComputeMapMsg::CMessage_ComputeMapMsg() {
ComputeMapMsg *newmsg = (ComputeMapMsg *)this;
  newmsg->computeMapData = (ComputeMap::ComputeData *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ComputeMapMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeMapMsg::pack(ComputeMapMsg *msg) {
  msg->computeMapData = (ComputeMap::ComputeData *) ((char *)msg->computeMapData - (char *)msg);
  return (void *) msg;
}
ComputeMapMsg* CMessage_ComputeMapMsg::unpack(void* buf) {
  ComputeMapMsg *msg = (ComputeMapMsg *) buf;
  msg->computeMapData = (ComputeMap::ComputeData *) ((size_t)msg->computeMapData + (char *)msg);
  return msg;
}
int CMessage_ComputeMapMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group WorkDistrib: IrrGroup{
WorkDistrib(void);
void savePatchMap(PatchMapMsg* impl_msg);
void saveComputeMap(ComputeMapMsg* impl_msg);
void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
void doneSaveComputeMap(CkReductionMsg* impl_msg);
void enqueueWork(LocalWorkMsg* impl_msg);
void enqueueExcls(LocalWorkMsg* impl_msg);
void enqueueBonds(LocalWorkMsg* impl_msg);
void enqueueAngles(LocalWorkMsg* impl_msg);
void enqueueDihedrals(LocalWorkMsg* impl_msg);
void enqueueImpropers(LocalWorkMsg* impl_msg);
void enqueueThole(LocalWorkMsg* impl_msg);
void enqueueAniso(LocalWorkMsg* impl_msg);
void enqueueCrossterms(LocalWorkMsg* impl_msg);
void enqueueCUDA(LocalWorkMsg* impl_msg);
void enqueueCUDAP2(LocalWorkMsg* impl_msg);
void enqueueCUDAP3(LocalWorkMsg* impl_msg);
void enqueuePme(LocalWorkMsg* impl_msg);
void enqueueSelfA1(LocalWorkMsg* impl_msg);
void enqueueSelfA2(LocalWorkMsg* impl_msg);
void enqueueSelfA3(LocalWorkMsg* impl_msg);
void enqueueSelfB1(LocalWorkMsg* impl_msg);
void enqueueSelfB2(LocalWorkMsg* impl_msg);
void enqueueSelfB3(LocalWorkMsg* impl_msg);
void enqueueWorkA1(LocalWorkMsg* impl_msg);
void enqueueWorkA2(LocalWorkMsg* impl_msg);
void enqueueWorkA3(LocalWorkMsg* impl_msg);
void enqueueWorkB1(LocalWorkMsg* impl_msg);
void enqueueWorkB2(LocalWorkMsg* impl_msg);
void enqueueWorkB3(LocalWorkMsg* impl_msg);
void enqueueWorkC(LocalWorkMsg* impl_msg);
void enqueueLCPO(LocalWorkMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_WorkDistrib::__idx=0;
/* DEFS: WorkDistrib(void);
 */

/* DEFS: void savePatchMap(PatchMapMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::saveComputeMap(ComputeMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: WorkDistrib(void);
 */
CkGroupID CProxy_WorkDistrib::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_WorkDistrib::__idx, CkIndex_WorkDistrib::__idx_WorkDistrib_void, impl_msg);
}
 int CkIndex_WorkDistrib::__idx_WorkDistrib_void=0;
void CkIndex_WorkDistrib::_call_WorkDistrib_void(void* impl_msg,WorkDistrib * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) WorkDistrib();
}

/* DEFS: void savePatchMap(PatchMapMsg* impl_msg);
 */
void CProxy_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg=0;
void CkIndex_WorkDistrib::_call_savePatchMap_PatchMapMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->savePatchMap((PatchMapMsg*)impl_msg);
}

/* DEFS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
void CProxy_WorkDistrib::saveComputeMap(ComputeMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::saveComputeMap(ComputeMapMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::saveComputeMap(ComputeMapMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg=0;
void CkIndex_WorkDistrib::_call_saveComputeMap_ComputeMapMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->saveComputeMap((ComputeMapMsg*)impl_msg);
}

/* DEFS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
void CProxy_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg=0;
void CkIndex_WorkDistrib::_call_recvComputeMapChanges_ComputeMapChangeMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->recvComputeMapChanges((ComputeMapChangeMsg*)impl_msg);
}

/* DEFS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
void CProxy_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg=0;
void CkIndex_WorkDistrib::_call_doneSaveComputeMap_CkReductionMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->doneSaveComputeMap((CkReductionMsg*)impl_msg);
}

/* DEFS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWork_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWork((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueExcls_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueExcls((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueBonds_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueBonds((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueAngles_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueAngles((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueDihedrals_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueDihedrals((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueImpropers_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueImpropers((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueThole_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueThole((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueAniso_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueAniso((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueCrossterms_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueCrossterms((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueCUDA_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueCUDA((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueCUDAP2_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueCUDAP2((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueCUDAP3_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueCUDAP3((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueuePme_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueuePme((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueSelfA1_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueSelfA1((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueSelfA2_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueSelfA2((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueSelfA3_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueSelfA3((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueSelfB1_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueSelfB1((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueSelfB2_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueSelfB2((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueSelfB3_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueSelfB3((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkA1_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkA1((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkA2_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkA2((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkA3_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkA3((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkB1_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkB1((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkB2_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkB2((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkB3_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkB3((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueWorkC_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueWorkC((LocalWorkMsg*)impl_msg);
}

/* DEFS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg=0;
void CkIndex_WorkDistrib::_call_enqueueLCPO_LocalWorkMsg(void* impl_msg,WorkDistrib * impl_obj)
{
  impl_obj->enqueueLCPO((LocalWorkMsg*)impl_msg);
}

/* DEFS: WorkDistrib(void);
 */

/* DEFS: void savePatchMap(PatchMapMsg* impl_msg);
 */
void CProxySection_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_savePatchMap_PatchMapMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
void CProxySection_WorkDistrib::saveComputeMap(ComputeMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_saveComputeMap_ComputeMapMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
void CProxySection_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_recvComputeMapChanges_ComputeMapChangeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
void CProxySection_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_doneSaveComputeMap_CkReductionMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWork_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueExcls_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueBonds_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueAngles_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueDihedrals_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueImpropers_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueThole_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueAniso_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCrossterms_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCUDA_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCUDAP2_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueCUDAP3_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueuePme_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfA1_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfA2_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfA3_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfB1_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfB2_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueSelfB3_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkA1_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkA2_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkA3_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkB1_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkB2_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkB3_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueWorkC_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::__idx_enqueueLCPO_LocalWorkMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_WorkDistrib::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,WorkDistrib::isIrreducible());
// REG: WorkDistrib(void);
  __idx_WorkDistrib_void = CkRegisterEp("WorkDistrib(void)",
     (CkCallFnPtr)_call_WorkDistrib_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_WorkDistrib_void);

// REG: void savePatchMap(PatchMapMsg* impl_msg);
  __idx_savePatchMap_PatchMapMsg = CkRegisterEp("savePatchMap(PatchMapMsg* impl_msg)",
     (CkCallFnPtr)_call_savePatchMap_PatchMapMsg, CMessage_PatchMapMsg::__idx, __idx, 0);

// REG: void saveComputeMap(ComputeMapMsg* impl_msg);
  __idx_saveComputeMap_ComputeMapMsg = CkRegisterEp("saveComputeMap(ComputeMapMsg* impl_msg)",
     (CkCallFnPtr)_call_saveComputeMap_ComputeMapMsg, CMessage_ComputeMapMsg::__idx, __idx, 0);

// REG: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
  __idx_recvComputeMapChanges_ComputeMapChangeMsg = CkRegisterEp("recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvComputeMapChanges_ComputeMapChangeMsg, CMessage_ComputeMapChangeMsg::__idx, __idx, 0);

// REG: void doneSaveComputeMap(CkReductionMsg* impl_msg);
  __idx_doneSaveComputeMap_CkReductionMsg = CkRegisterEp("doneSaveComputeMap(CkReductionMsg* impl_msg)",
     (CkCallFnPtr)_call_doneSaveComputeMap_CkReductionMsg, CMessage_CkReductionMsg::__idx, __idx, 0);

// REG: void enqueueWork(LocalWorkMsg* impl_msg);
  __idx_enqueueWork_LocalWorkMsg = CkRegisterEp("enqueueWork(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWork_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueExcls(LocalWorkMsg* impl_msg);
  __idx_enqueueExcls_LocalWorkMsg = CkRegisterEp("enqueueExcls(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueExcls_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueBonds(LocalWorkMsg* impl_msg);
  __idx_enqueueBonds_LocalWorkMsg = CkRegisterEp("enqueueBonds(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueBonds_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueAngles(LocalWorkMsg* impl_msg);
  __idx_enqueueAngles_LocalWorkMsg = CkRegisterEp("enqueueAngles(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueAngles_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueDihedrals(LocalWorkMsg* impl_msg);
  __idx_enqueueDihedrals_LocalWorkMsg = CkRegisterEp("enqueueDihedrals(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueDihedrals_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueImpropers(LocalWorkMsg* impl_msg);
  __idx_enqueueImpropers_LocalWorkMsg = CkRegisterEp("enqueueImpropers(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueImpropers_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueThole(LocalWorkMsg* impl_msg);
  __idx_enqueueThole_LocalWorkMsg = CkRegisterEp("enqueueThole(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueThole_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueAniso(LocalWorkMsg* impl_msg);
  __idx_enqueueAniso_LocalWorkMsg = CkRegisterEp("enqueueAniso(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueAniso_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueCrossterms(LocalWorkMsg* impl_msg);
  __idx_enqueueCrossterms_LocalWorkMsg = CkRegisterEp("enqueueCrossterms(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueCrossterms_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueCUDA(LocalWorkMsg* impl_msg);
  __idx_enqueueCUDA_LocalWorkMsg = CkRegisterEp("enqueueCUDA(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueCUDA_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
  __idx_enqueueCUDAP2_LocalWorkMsg = CkRegisterEp("enqueueCUDAP2(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueCUDAP2_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
  __idx_enqueueCUDAP3_LocalWorkMsg = CkRegisterEp("enqueueCUDAP3(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueCUDAP3_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueuePme(LocalWorkMsg* impl_msg);
  __idx_enqueuePme_LocalWorkMsg = CkRegisterEp("enqueuePme(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueuePme_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueSelfA1(LocalWorkMsg* impl_msg);
  __idx_enqueueSelfA1_LocalWorkMsg = CkRegisterEp("enqueueSelfA1(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueSelfA1_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueSelfA2(LocalWorkMsg* impl_msg);
  __idx_enqueueSelfA2_LocalWorkMsg = CkRegisterEp("enqueueSelfA2(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueSelfA2_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueSelfA3(LocalWorkMsg* impl_msg);
  __idx_enqueueSelfA3_LocalWorkMsg = CkRegisterEp("enqueueSelfA3(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueSelfA3_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueSelfB1(LocalWorkMsg* impl_msg);
  __idx_enqueueSelfB1_LocalWorkMsg = CkRegisterEp("enqueueSelfB1(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueSelfB1_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueSelfB2(LocalWorkMsg* impl_msg);
  __idx_enqueueSelfB2_LocalWorkMsg = CkRegisterEp("enqueueSelfB2(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueSelfB2_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueSelfB3(LocalWorkMsg* impl_msg);
  __idx_enqueueSelfB3_LocalWorkMsg = CkRegisterEp("enqueueSelfB3(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueSelfB3_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkA1(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkA1_LocalWorkMsg = CkRegisterEp("enqueueWorkA1(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkA1_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkA2(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkA2_LocalWorkMsg = CkRegisterEp("enqueueWorkA2(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkA2_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkA3(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkA3_LocalWorkMsg = CkRegisterEp("enqueueWorkA3(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkA3_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkB1(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkB1_LocalWorkMsg = CkRegisterEp("enqueueWorkB1(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkB1_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkB2(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkB2_LocalWorkMsg = CkRegisterEp("enqueueWorkB2(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkB2_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkB3(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkB3_LocalWorkMsg = CkRegisterEp("enqueueWorkB3(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkB3_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueWorkC(LocalWorkMsg* impl_msg);
  __idx_enqueueWorkC_LocalWorkMsg = CkRegisterEp("enqueueWorkC(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueWorkC_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

// REG: void enqueueLCPO(LocalWorkMsg* impl_msg);
  __idx_enqueueLCPO_LocalWorkMsg = CkRegisterEp("enqueueLCPO(LocalWorkMsg* impl_msg)",
     (CkCallFnPtr)_call_enqueueLCPO_LocalWorkMsg, CMessage_LocalWorkMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerWorkDistrib(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message LocalWorkMsg;
*/
CMessage_LocalWorkMsg::__register("LocalWorkMsg", sizeof(LocalWorkMsg),(CkPackFnPtr) LocalWorkMsg::pack,(CkUnpackFnPtr) LocalWorkMsg::unpack);

/* REG: message ComputeMapChangeMsg{
int newNodes[];
char newNumPartitions[];
}
;
*/
CMessage_ComputeMapChangeMsg::__register("ComputeMapChangeMsg", sizeof(ComputeMapChangeMsg),(CkPackFnPtr) ComputeMapChangeMsg::pack,(CkUnpackFnPtr) ComputeMapChangeMsg::unpack);

/* REG: message PatchMapMsg{
char patchMapData[];
}
;
*/
CMessage_PatchMapMsg::__register("PatchMapMsg", sizeof(PatchMapMsg),(CkPackFnPtr) PatchMapMsg::pack,(CkUnpackFnPtr) PatchMapMsg::unpack);

/* REG: message ComputeMapMsg{
ComputeMap::ComputeData computeMapData[];
}
;
*/
CMessage_ComputeMapMsg::__register("ComputeMapMsg", sizeof(ComputeMapMsg),(CkPackFnPtr) ComputeMapMsg::pack,(CkUnpackFnPtr) ComputeMapMsg::unpack);

/* REG: group WorkDistrib: IrrGroup{
WorkDistrib(void);
void savePatchMap(PatchMapMsg* impl_msg);
void saveComputeMap(ComputeMapMsg* impl_msg);
void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
void doneSaveComputeMap(CkReductionMsg* impl_msg);
void enqueueWork(LocalWorkMsg* impl_msg);
void enqueueExcls(LocalWorkMsg* impl_msg);
void enqueueBonds(LocalWorkMsg* impl_msg);
void enqueueAngles(LocalWorkMsg* impl_msg);
void enqueueDihedrals(LocalWorkMsg* impl_msg);
void enqueueImpropers(LocalWorkMsg* impl_msg);
void enqueueThole(LocalWorkMsg* impl_msg);
void enqueueAniso(LocalWorkMsg* impl_msg);
void enqueueCrossterms(LocalWorkMsg* impl_msg);
void enqueueCUDA(LocalWorkMsg* impl_msg);
void enqueueCUDAP2(LocalWorkMsg* impl_msg);
void enqueueCUDAP3(LocalWorkMsg* impl_msg);
void enqueuePme(LocalWorkMsg* impl_msg);
void enqueueSelfA1(LocalWorkMsg* impl_msg);
void enqueueSelfA2(LocalWorkMsg* impl_msg);
void enqueueSelfA3(LocalWorkMsg* impl_msg);
void enqueueSelfB1(LocalWorkMsg* impl_msg);
void enqueueSelfB2(LocalWorkMsg* impl_msg);
void enqueueSelfB3(LocalWorkMsg* impl_msg);
void enqueueWorkA1(LocalWorkMsg* impl_msg);
void enqueueWorkA2(LocalWorkMsg* impl_msg);
void enqueueWorkA3(LocalWorkMsg* impl_msg);
void enqueueWorkB1(LocalWorkMsg* impl_msg);
void enqueueWorkB2(LocalWorkMsg* impl_msg);
void enqueueWorkB3(LocalWorkMsg* impl_msg);
void enqueueWorkC(LocalWorkMsg* impl_msg);
void enqueueLCPO(LocalWorkMsg* impl_msg);
};
*/
  CkIndex_WorkDistrib::__register("WorkDistrib", sizeof(WorkDistrib));

}
#endif /* CK_TEMPLATES_ONLY */
