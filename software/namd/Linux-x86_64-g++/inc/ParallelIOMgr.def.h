/* DEFS: message MolInfoMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MolInfoMsg::operator new(size_t s){
  return MolInfoMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MolInfoMsg::operator new(size_t s, int* sz){
  return MolInfoMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MolInfoMsg::operator new(size_t s, int* sz,const int pb){
  return MolInfoMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MolInfoMsg::operator new(size_t s, const int p) {
  return MolInfoMsg::alloc(__idx, s, 0, p);
}
void* CMessage_MolInfoMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_MolInfoMsg::CMessage_MolInfoMsg() {
MolInfoMsg *newmsg = (MolInfoMsg *)this;
}
void CMessage_MolInfoMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MolInfoMsg::pack(MolInfoMsg *msg) {
  return (void *) msg;
}
MolInfoMsg* CMessage_MolInfoMsg::unpack(void* buf) {
  MolInfoMsg *msg = (MolInfoMsg *) buf;
  return msg;
}
int CMessage_MolInfoMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message HydroBasedMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_HydroBasedMsg::operator new(size_t s){
  return HydroBasedMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_HydroBasedMsg::operator new(size_t s, int* sz){
  return HydroBasedMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_HydroBasedMsg::operator new(size_t s, int* sz,const int pb){
  return HydroBasedMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_HydroBasedMsg::operator new(size_t s, const int p) {
  return HydroBasedMsg::alloc(__idx, s, 0, p);
}
void* CMessage_HydroBasedMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_HydroBasedMsg::CMessage_HydroBasedMsg() {
HydroBasedMsg *newmsg = (HydroBasedMsg *)this;
}
void CMessage_HydroBasedMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_HydroBasedMsg::pack(HydroBasedMsg *msg) {
  return (void *) msg;
}
HydroBasedMsg* CMessage_HydroBasedMsg::unpack(void* buf) {
  HydroBasedMsg *msg = (HydroBasedMsg *) buf;
  return msg;
}
int CMessage_HydroBasedMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MoveInputAtomsMsg{
InputAtom atomList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MoveInputAtomsMsg::operator new(size_t s){
  return MoveInputAtomsMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int* sz){
  return MoveInputAtomsMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return MoveInputAtomsMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MoveInputAtomsMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MoveInputAtomsMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_MoveInputAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(InputAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_MoveInputAtomsMsg::CMessage_MoveInputAtomsMsg() {
MoveInputAtomsMsg *newmsg = (MoveInputAtomsMsg *)this;
  newmsg->atomList = (InputAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MoveInputAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MoveInputAtomsMsg::pack(MoveInputAtomsMsg *msg) {
  msg->atomList = (InputAtom *) ((char *)msg->atomList - (char *)msg);
  return (void *) msg;
}
MoveInputAtomsMsg* CMessage_MoveInputAtomsMsg::unpack(void* buf) {
  MoveInputAtomsMsg *msg = (MoveInputAtomsMsg *) buf;
  msg->atomList = (InputAtom *) ((size_t)msg->atomList + (char *)msg);
  return msg;
}
int CMessage_MoveInputAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message AtomsCntPerPatchMsg{
PatchID pidList[];
unsigned short atomsCntList[];
unsigned short fixedAtomsCntList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s){
  return AtomsCntPerPatchMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int* sz){
  return AtomsCntPerPatchMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int* sz,const int pb){
  return AtomsCntPerPatchMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return AtomsCntPerPatchMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return AtomsCntPerPatchMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_AtomsCntPerPatchMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(PatchID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(unsigned short)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(unsigned short)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb);
}
CMessage_AtomsCntPerPatchMsg::CMessage_AtomsCntPerPatchMsg() {
AtomsCntPerPatchMsg *newmsg = (AtomsCntPerPatchMsg *)this;
  newmsg->pidList = (PatchID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->atomsCntList = (unsigned short *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fixedAtomsCntList = (unsigned short *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_AtomsCntPerPatchMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_AtomsCntPerPatchMsg::pack(AtomsCntPerPatchMsg *msg) {
  msg->pidList = (PatchID *) ((char *)msg->pidList - (char *)msg);
  msg->atomsCntList = (unsigned short *) ((char *)msg->atomsCntList - (char *)msg);
  msg->fixedAtomsCntList = (unsigned short *) ((char *)msg->fixedAtomsCntList - (char *)msg);
  return (void *) msg;
}
AtomsCntPerPatchMsg* CMessage_AtomsCntPerPatchMsg::unpack(void* buf) {
  AtomsCntPerPatchMsg *msg = (AtomsCntPerPatchMsg *) buf;
  msg->pidList = (PatchID *) ((size_t)msg->pidList + (char *)msg);
  msg->atomsCntList = (unsigned short *) ((size_t)msg->atomsCntList + (char *)msg);
  msg->fixedAtomsCntList = (unsigned short *) ((size_t)msg->fixedAtomsCntList + (char *)msg);
  return msg;
}
int CMessage_AtomsCntPerPatchMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MovePatchAtomsMsg{
PatchID pidList[];
int sizeList[];
FullAtom allAtoms[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MovePatchAtomsMsg::operator new(size_t s){
  return MovePatchAtomsMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int* sz){
  return MovePatchAtomsMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return MovePatchAtomsMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return MovePatchAtomsMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return MovePatchAtomsMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_MovePatchAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(PatchID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(FullAtom)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb);
}
CMessage_MovePatchAtomsMsg::CMessage_MovePatchAtomsMsg() {
MovePatchAtomsMsg *newmsg = (MovePatchAtomsMsg *)this;
  newmsg->pidList = (PatchID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->sizeList = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->allAtoms = (FullAtom *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_MovePatchAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MovePatchAtomsMsg::pack(MovePatchAtomsMsg *msg) {
  msg->pidList = (PatchID *) ((char *)msg->pidList - (char *)msg);
  msg->sizeList = (int *) ((char *)msg->sizeList - (char *)msg);
  msg->allAtoms = (FullAtom *) ((char *)msg->allAtoms - (char *)msg);
  return (void *) msg;
}
MovePatchAtomsMsg* CMessage_MovePatchAtomsMsg::unpack(void* buf) {
  MovePatchAtomsMsg *msg = (MovePatchAtomsMsg *) buf;
  msg->pidList = (PatchID *) ((size_t)msg->pidList + (char *)msg);
  msg->sizeList = (int *) ((size_t)msg->sizeList + (char *)msg);
  msg->allAtoms = (FullAtom *) ((size_t)msg->allAtoms + (char *)msg);
  return msg;
}
int CMessage_MovePatchAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ClusterSizeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ClusterSizeMsg::operator new(size_t s){
  return ClusterSizeMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, int* sz){
  return ClusterSizeMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, int* sz,const int pb){
  return ClusterSizeMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, const int p) {
  return ClusterSizeMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ClusterSizeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ClusterSizeMsg::CMessage_ClusterSizeMsg() {
ClusterSizeMsg *newmsg = (ClusterSizeMsg *)this;
}
void CMessage_ClusterSizeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ClusterSizeMsg::pack(ClusterSizeMsg *msg) {
  return (void *) msg;
}
ClusterSizeMsg* CMessage_ClusterSizeMsg::unpack(void* buf) {
  ClusterSizeMsg *msg = (ClusterSizeMsg *) buf;
  return msg;
}
int CMessage_ClusterSizeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ClusterCoorMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ClusterCoorMsg::operator new(size_t s){
  return ClusterCoorMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, int* sz){
  return ClusterCoorMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, int* sz,const int pb){
  return ClusterCoorMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, const int p) {
  return ClusterCoorMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ClusterCoorMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ClusterCoorMsg::CMessage_ClusterCoorMsg() {
ClusterCoorMsg *newmsg = (ClusterCoorMsg *)this;
}
void CMessage_ClusterCoorMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ClusterCoorMsg::pack(ClusterCoorMsg *msg) {
  return (void *) msg;
}
ClusterCoorMsg* CMessage_ClusterCoorMsg::unpack(void* buf) {
  ClusterCoorMsg *msg = (ClusterCoorMsg *) buf;
  return msg;
}
int CMessage_ClusterCoorMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ParallelIOMgr: IrrGroup{
ParallelIOMgr(void);
void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
void recvMolInfo(MolInfoMsg* impl_msg);
void bcastMolInfo(MolInfoMsg* impl_msg);
void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
void ackAtomsToHomePatchProcs(void);
void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
void recvClusterSize(ClusterSizeMsg* impl_msg);
void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
void receivePositions(CollectVectorVarMsg* impl_msg);
void receiveVelocities(CollectVectorVarMsg* impl_msg);
void receiveForces(CollectVectorVarMsg* impl_msg);
void disposePositions(int seq, double prevT);
void disposeVelocities(int seq, double prevT);
void disposeForces(int seq, double prevT);
void wrapCoor(int seq, const Lattice &lat);
void recvClusterCoor(ClusterCoorMsg* impl_msg);
void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ParallelIOMgr::__idx=0;
/* DEFS: ParallelIOMgr(void);
 */

/* DEFS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void ackAtomsToHomePatchProcs(void);
 */
void CProxyElement_ParallelIOMgr::ackAtomsToHomePatchProcs(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void disposePositions(int seq, double prevT);
 */
void CProxyElement_ParallelIOMgr::disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void disposeVelocities(int seq, double prevT);
 */
void CProxyElement_ParallelIOMgr::disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void disposeForces(int seq, double prevT);
 */
void CProxyElement_ParallelIOMgr::disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void wrapCoor(int seq, const Lattice &lat);
 */
void CProxyElement_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ParallelIOMgr(void);
 */
CkGroupID CProxy_ParallelIOMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ParallelIOMgr::__idx, CkIndex_ParallelIOMgr::__idx_ParallelIOMgr_void, impl_msg);
}
 int CkIndex_ParallelIOMgr::__idx_ParallelIOMgr_void=0;
void CkIndex_ParallelIOMgr::_call_ParallelIOMgr_void(void* impl_msg,ParallelIOMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ParallelIOMgr();
}

/* DEFS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg=0;
void CkIndex_ParallelIOMgr::_call_recvAtomsMGrp_MoveInputAtomsMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvAtomsMGrp((MoveInputAtomsMsg*)impl_msg);
}

/* DEFS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg=0;
void CkIndex_ParallelIOMgr::_call_recvMolInfo_MolInfoMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvMolInfo((MolInfoMsg*)impl_msg);
}

/* DEFS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg=0;
void CkIndex_ParallelIOMgr::_call_bcastMolInfo_MolInfoMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->bcastMolInfo((MolInfoMsg*)impl_msg);
}

/* DEFS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg=0;
void CkIndex_ParallelIOMgr::_call_recvHydroBasedCounter_HydroBasedMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvHydroBasedCounter((HydroBasedMsg*)impl_msg);
}

/* DEFS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg=0;
void CkIndex_ParallelIOMgr::_call_bcastHydroBasedCounter_HydroBasedMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->bcastHydroBasedCounter((HydroBasedMsg*)impl_msg);
}

/* DEFS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg=0;
void CkIndex_ParallelIOMgr::_call_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvAtomsCntPerPatch((AtomsCntPerPatchMsg*)impl_msg);
}

/* DEFS: void ackAtomsToHomePatchProcs(void);
 */
void CProxy_ParallelIOMgr::ackAtomsToHomePatchProcs(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::ackAtomsToHomePatchProcs(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::ackAtomsToHomePatchProcs(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void=0;
void CkIndex_ParallelIOMgr::_call_ackAtomsToHomePatchProcs_void(void* impl_msg,ParallelIOMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->ackAtomsToHomePatchProcs();
}

/* DEFS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg=0;
void CkIndex_ParallelIOMgr::_call_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvAtomsToHomePatchProcs((MovePatchAtomsMsg*)impl_msg);
}

/* DEFS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg=0;
void CkIndex_ParallelIOMgr::_call_recvClusterSize_ClusterSizeMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvClusterSize((ClusterSizeMsg*)impl_msg);
}

/* DEFS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg=0;
void CkIndex_ParallelIOMgr::_call_recvFinalClusterSize_ClusterSizeMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvFinalClusterSize((ClusterSizeMsg*)impl_msg);
}

/* DEFS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg=0;
void CkIndex_ParallelIOMgr::_call_receivePositions_CollectVectorVarMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->receivePositions((CollectVectorVarMsg*)impl_msg);
}

/* DEFS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg=0;
void CkIndex_ParallelIOMgr::_call_receiveVelocities_CollectVectorVarMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->receiveVelocities((CollectVectorVarMsg*)impl_msg);
}

/* DEFS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg=0;
void CkIndex_ParallelIOMgr::_call_receiveForces_CollectVectorVarMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->receiveForces((CollectVectorVarMsg*)impl_msg);
}

/* DEFS: void disposePositions(int seq, double prevT);
 */
void CProxy_ParallelIOMgr::disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::disposePositions(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::disposePositions(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15=0;
void CkIndex_ParallelIOMgr::_call_disposePositions_marshall15(void* impl_msg,ParallelIOMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposePositions(seq, prevT);
}
int CkIndex_ParallelIOMgr::_callmarshall_disposePositions_marshall15(char* impl_buf,ParallelIOMgr * impl_obj) {
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposePositions(seq, prevT);
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_disposePositions_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("prevT");
  implDestP|prevT;
}

/* DEFS: void disposeVelocities(int seq, double prevT);
 */
void CProxy_ParallelIOMgr::disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::disposeVelocities(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::disposeVelocities(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16=0;
void CkIndex_ParallelIOMgr::_call_disposeVelocities_marshall16(void* impl_msg,ParallelIOMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeVelocities(seq, prevT);
}
int CkIndex_ParallelIOMgr::_callmarshall_disposeVelocities_marshall16(char* impl_buf,ParallelIOMgr * impl_obj) {
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeVelocities(seq, prevT);
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_disposeVelocities_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("prevT");
  implDestP|prevT;
}

/* DEFS: void disposeForces(int seq, double prevT);
 */
void CProxy_ParallelIOMgr::disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::disposeForces(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::disposeForces(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17=0;
void CkIndex_ParallelIOMgr::_call_disposeForces_marshall17(void* impl_msg,ParallelIOMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeForces(seq, prevT);
}
int CkIndex_ParallelIOMgr::_callmarshall_disposeForces_marshall17(char* impl_buf,ParallelIOMgr * impl_obj) {
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeForces(seq, prevT);
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_disposeForces_marshall17(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  double prevT; implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("prevT");
  implDestP|prevT;
}

/* DEFS: void wrapCoor(int seq, const Lattice &lat);
 */
void CProxy_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18=0;
void CkIndex_ParallelIOMgr::_call_wrapCoor_marshall18(void* impl_msg,ParallelIOMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, const Lattice &lat*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  Lattice lat; implP|lat;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->wrapCoor(seq, lat);
}
int CkIndex_ParallelIOMgr::_callmarshall_wrapCoor_marshall18(char* impl_buf,ParallelIOMgr * impl_obj) {
  /*Unmarshall pup'd fields: int seq, const Lattice &lat*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  Lattice lat; implP|lat;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->wrapCoor(seq, lat);
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_wrapCoor_marshall18(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq, const Lattice &lat*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  Lattice lat; implP|lat;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("lat");
  implDestP|lat;
}

/* DEFS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg=0;
void CkIndex_ParallelIOMgr::_call_recvClusterCoor_ClusterCoorMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvClusterCoor((ClusterCoorMsg*)impl_msg);
}

/* DEFS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg=0;
void CkIndex_ParallelIOMgr::_call_recvFinalClusterCoor_ClusterCoorMsg(void* impl_msg,ParallelIOMgr * impl_obj)
{
  impl_obj->recvFinalClusterCoor((ClusterCoorMsg*)impl_msg);
}

/* DEFS: ParallelIOMgr(void);
 */

/* DEFS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvAtomsMGrp_MoveInputAtomsMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvMolInfo_MolInfoMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_bcastMolInfo_MolInfoMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvHydroBasedCounter_HydroBasedMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_bcastHydroBasedCounter_HydroBasedMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void ackAtomsToHomePatchProcs(void);
 */
void CProxySection_ParallelIOMgr::ackAtomsToHomePatchProcs(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_ackAtomsToHomePatchProcs_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvClusterSize_ClusterSizeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvFinalClusterSize_ClusterSizeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_receivePositions_CollectVectorVarMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_receiveVelocities_CollectVectorVarMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_receiveForces_CollectVectorVarMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void disposePositions(int seq, double prevT);
 */
void CProxySection_ParallelIOMgr::disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_disposePositions_marshall15, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void disposeVelocities(int seq, double prevT);
 */
void CProxySection_ParallelIOMgr::disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_disposeVelocities_marshall16, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void disposeForces(int seq, double prevT);
 */
void CProxySection_ParallelIOMgr::disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_disposeForces_marshall17, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void wrapCoor(int seq, const Lattice &lat);
 */
void CProxySection_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)lat;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_wrapCoor_marshall18, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvClusterCoor_ClusterCoorMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::__idx_recvFinalClusterCoor_ClusterCoorMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ParallelIOMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ParallelIOMgr::isIrreducible());
// REG: ParallelIOMgr(void);
  __idx_ParallelIOMgr_void = CkRegisterEp("ParallelIOMgr(void)",
     (CkCallFnPtr)_call_ParallelIOMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ParallelIOMgr_void);

// REG: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
  __idx_recvAtomsMGrp_MoveInputAtomsMsg = CkRegisterEp("recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAtomsMGrp_MoveInputAtomsMsg, CMessage_MoveInputAtomsMsg::__idx, __idx, 0);

// REG: void recvMolInfo(MolInfoMsg* impl_msg);
  __idx_recvMolInfo_MolInfoMsg = CkRegisterEp("recvMolInfo(MolInfoMsg* impl_msg)",
     (CkCallFnPtr)_call_recvMolInfo_MolInfoMsg, CMessage_MolInfoMsg::__idx, __idx, 0);

// REG: void bcastMolInfo(MolInfoMsg* impl_msg);
  __idx_bcastMolInfo_MolInfoMsg = CkRegisterEp("bcastMolInfo(MolInfoMsg* impl_msg)",
     (CkCallFnPtr)_call_bcastMolInfo_MolInfoMsg, CMessage_MolInfoMsg::__idx, __idx, 0);

// REG: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
  __idx_recvHydroBasedCounter_HydroBasedMsg = CkRegisterEp("recvHydroBasedCounter(HydroBasedMsg* impl_msg)",
     (CkCallFnPtr)_call_recvHydroBasedCounter_HydroBasedMsg, CMessage_HydroBasedMsg::__idx, __idx, 0);

// REG: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
  __idx_bcastHydroBasedCounter_HydroBasedMsg = CkRegisterEp("bcastHydroBasedCounter(HydroBasedMsg* impl_msg)",
     (CkCallFnPtr)_call_bcastHydroBasedCounter_HydroBasedMsg, CMessage_HydroBasedMsg::__idx, __idx, 0);

// REG: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
  __idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg = CkRegisterEp("recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAtomsCntPerPatch_AtomsCntPerPatchMsg, CMessage_AtomsCntPerPatchMsg::__idx, __idx, 0);

// REG: void ackAtomsToHomePatchProcs(void);
  __idx_ackAtomsToHomePatchProcs_void = CkRegisterEp("ackAtomsToHomePatchProcs(void)",
     (CkCallFnPtr)_call_ackAtomsToHomePatchProcs_void, 0, __idx, 0);

// REG: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
  __idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg = CkRegisterEp("recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAtomsToHomePatchProcs_MovePatchAtomsMsg, CMessage_MovePatchAtomsMsg::__idx, __idx, 0);

// REG: void recvClusterSize(ClusterSizeMsg* impl_msg);
  __idx_recvClusterSize_ClusterSizeMsg = CkRegisterEp("recvClusterSize(ClusterSizeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvClusterSize_ClusterSizeMsg, CMessage_ClusterSizeMsg::__idx, __idx, 0);

// REG: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
  __idx_recvFinalClusterSize_ClusterSizeMsg = CkRegisterEp("recvFinalClusterSize(ClusterSizeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvFinalClusterSize_ClusterSizeMsg, CMessage_ClusterSizeMsg::__idx, __idx, 0);

// REG: void receivePositions(CollectVectorVarMsg* impl_msg);
  __idx_receivePositions_CollectVectorVarMsg = CkRegisterEp("receivePositions(CollectVectorVarMsg* impl_msg)",
     (CkCallFnPtr)_call_receivePositions_CollectVectorVarMsg, CMessage_CollectVectorVarMsg::__idx, __idx, 0);

// REG: void receiveVelocities(CollectVectorVarMsg* impl_msg);
  __idx_receiveVelocities_CollectVectorVarMsg = CkRegisterEp("receiveVelocities(CollectVectorVarMsg* impl_msg)",
     (CkCallFnPtr)_call_receiveVelocities_CollectVectorVarMsg, CMessage_CollectVectorVarMsg::__idx, __idx, 0);

// REG: void receiveForces(CollectVectorVarMsg* impl_msg);
  __idx_receiveForces_CollectVectorVarMsg = CkRegisterEp("receiveForces(CollectVectorVarMsg* impl_msg)",
     (CkCallFnPtr)_call_receiveForces_CollectVectorVarMsg, CMessage_CollectVectorVarMsg::__idx, __idx, 0);

// REG: void disposePositions(int seq, double prevT);
  __idx_disposePositions_marshall15 = CkRegisterEp("disposePositions(int seq, double prevT)",
     (CkCallFnPtr)_call_disposePositions_marshall15, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_disposePositions_marshall15,(CkMarshallUnpackFn)_callmarshall_disposePositions_marshall15);
  CkRegisterMessagePupFn(__idx_disposePositions_marshall15,(CkMessagePupFn)_marshallmessagepup_disposePositions_marshall15);

// REG: void disposeVelocities(int seq, double prevT);
  __idx_disposeVelocities_marshall16 = CkRegisterEp("disposeVelocities(int seq, double prevT)",
     (CkCallFnPtr)_call_disposeVelocities_marshall16, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_disposeVelocities_marshall16,(CkMarshallUnpackFn)_callmarshall_disposeVelocities_marshall16);
  CkRegisterMessagePupFn(__idx_disposeVelocities_marshall16,(CkMessagePupFn)_marshallmessagepup_disposeVelocities_marshall16);

// REG: void disposeForces(int seq, double prevT);
  __idx_disposeForces_marshall17 = CkRegisterEp("disposeForces(int seq, double prevT)",
     (CkCallFnPtr)_call_disposeForces_marshall17, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_disposeForces_marshall17,(CkMarshallUnpackFn)_callmarshall_disposeForces_marshall17);
  CkRegisterMessagePupFn(__idx_disposeForces_marshall17,(CkMessagePupFn)_marshallmessagepup_disposeForces_marshall17);

// REG: void wrapCoor(int seq, const Lattice &lat);
  __idx_wrapCoor_marshall18 = CkRegisterEp("wrapCoor(int seq, const Lattice &lat)",
     (CkCallFnPtr)_call_wrapCoor_marshall18, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_wrapCoor_marshall18,(CkMarshallUnpackFn)_callmarshall_wrapCoor_marshall18);
  CkRegisterMessagePupFn(__idx_wrapCoor_marshall18,(CkMessagePupFn)_marshallmessagepup_wrapCoor_marshall18);

// REG: void recvClusterCoor(ClusterCoorMsg* impl_msg);
  __idx_recvClusterCoor_ClusterCoorMsg = CkRegisterEp("recvClusterCoor(ClusterCoorMsg* impl_msg)",
     (CkCallFnPtr)_call_recvClusterCoor_ClusterCoorMsg, CMessage_ClusterCoorMsg::__idx, __idx, 0);

// REG: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
  __idx_recvFinalClusterCoor_ClusterCoorMsg = CkRegisterEp("recvFinalClusterCoor(ClusterCoorMsg* impl_msg)",
     (CkCallFnPtr)_call_recvFinalClusterCoor_ClusterCoorMsg, CMessage_ClusterCoorMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerParallelIOMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MolInfoMsg;
*/
CMessage_MolInfoMsg::__register("MolInfoMsg", sizeof(MolInfoMsg),(CkPackFnPtr) MolInfoMsg::pack,(CkUnpackFnPtr) MolInfoMsg::unpack);

/* REG: message HydroBasedMsg;
*/
CMessage_HydroBasedMsg::__register("HydroBasedMsg", sizeof(HydroBasedMsg),(CkPackFnPtr) HydroBasedMsg::pack,(CkUnpackFnPtr) HydroBasedMsg::unpack);

/* REG: message MoveInputAtomsMsg{
InputAtom atomList[];
}
;
*/
CMessage_MoveInputAtomsMsg::__register("MoveInputAtomsMsg", sizeof(MoveInputAtomsMsg),(CkPackFnPtr) MoveInputAtomsMsg::pack,(CkUnpackFnPtr) MoveInputAtomsMsg::unpack);

/* REG: message AtomsCntPerPatchMsg{
PatchID pidList[];
unsigned short atomsCntList[];
unsigned short fixedAtomsCntList[];
}
;
*/
CMessage_AtomsCntPerPatchMsg::__register("AtomsCntPerPatchMsg", sizeof(AtomsCntPerPatchMsg),(CkPackFnPtr) AtomsCntPerPatchMsg::pack,(CkUnpackFnPtr) AtomsCntPerPatchMsg::unpack);

/* REG: message MovePatchAtomsMsg{
PatchID pidList[];
int sizeList[];
FullAtom allAtoms[];
}
;
*/
CMessage_MovePatchAtomsMsg::__register("MovePatchAtomsMsg", sizeof(MovePatchAtomsMsg),(CkPackFnPtr) MovePatchAtomsMsg::pack,(CkUnpackFnPtr) MovePatchAtomsMsg::unpack);

/* REG: message ClusterSizeMsg;
*/
CMessage_ClusterSizeMsg::__register("ClusterSizeMsg", sizeof(ClusterSizeMsg),(CkPackFnPtr) ClusterSizeMsg::pack,(CkUnpackFnPtr) ClusterSizeMsg::unpack);

/* REG: message ClusterCoorMsg;
*/
CMessage_ClusterCoorMsg::__register("ClusterCoorMsg", sizeof(ClusterCoorMsg),(CkPackFnPtr) ClusterCoorMsg::pack,(CkUnpackFnPtr) ClusterCoorMsg::unpack);

/* REG: group ParallelIOMgr: IrrGroup{
ParallelIOMgr(void);
void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
void recvMolInfo(MolInfoMsg* impl_msg);
void bcastMolInfo(MolInfoMsg* impl_msg);
void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
void ackAtomsToHomePatchProcs(void);
void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
void recvClusterSize(ClusterSizeMsg* impl_msg);
void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
void receivePositions(CollectVectorVarMsg* impl_msg);
void receiveVelocities(CollectVectorVarMsg* impl_msg);
void receiveForces(CollectVectorVarMsg* impl_msg);
void disposePositions(int seq, double prevT);
void disposeVelocities(int seq, double prevT);
void disposeForces(int seq, double prevT);
void wrapCoor(int seq, const Lattice &lat);
void recvClusterCoor(ClusterCoorMsg* impl_msg);
void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
};
*/
  CkIndex_ParallelIOMgr::__register("ParallelIOMgr", sizeof(ParallelIOMgr));

}
#endif /* CK_TEMPLATES_ONLY */
