/* DEFS: message MovePatchesMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MovePatchesMsg::operator new(size_t s){
  return MovePatchesMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MovePatchesMsg::operator new(size_t s, int* sz){
  return MovePatchesMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MovePatchesMsg::operator new(size_t s, int* sz,const int pb){
  return MovePatchesMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MovePatchesMsg::operator new(size_t s, const int p) {
  return MovePatchesMsg::alloc(__idx, s, 0, p);
}
void* CMessage_MovePatchesMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_MovePatchesMsg::CMessage_MovePatchesMsg() {
MovePatchesMsg *newmsg = (MovePatchesMsg *)this;
}
void CMessage_MovePatchesMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MovePatchesMsg::pack(MovePatchesMsg *msg) {
  return (void *) msg;
}
MovePatchesMsg* CMessage_MovePatchesMsg::unpack(void* buf) {
  MovePatchesMsg *msg = (MovePatchesMsg *) buf;
  return msg;
}
int CMessage_MovePatchesMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MigrateAtomsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MigrateAtomsMsg::operator new(size_t s){
  return MigrateAtomsMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, int* sz){
  return MigrateAtomsMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return MigrateAtomsMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, const int p) {
  return MigrateAtomsMsg::alloc(__idx, s, 0, p);
}
void* CMessage_MigrateAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_MigrateAtomsMsg::CMessage_MigrateAtomsMsg() {
MigrateAtomsMsg *newmsg = (MigrateAtomsMsg *)this;
}
void CMessage_MigrateAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MigrateAtomsMsg::pack(MigrateAtomsMsg *msg) {
  return (void *) msg;
}
MigrateAtomsMsg* CMessage_MigrateAtomsMsg::unpack(void* buf) {
  MigrateAtomsMsg *msg = (MigrateAtomsMsg *) buf;
  return msg;
}
int CMessage_MigrateAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MigrateAtomsCombinedMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, int* sz){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, int* sz,const int pb){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, const int p) {
  return MigrateAtomsCombinedMsg::alloc(__idx, s, 0, p);
}
void* CMessage_MigrateAtomsCombinedMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_MigrateAtomsCombinedMsg::CMessage_MigrateAtomsCombinedMsg() {
MigrateAtomsCombinedMsg *newmsg = (MigrateAtomsCombinedMsg *)this;
}
void CMessage_MigrateAtomsCombinedMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MigrateAtomsCombinedMsg::pack(MigrateAtomsCombinedMsg *msg) {
  return (void *) msg;
}
MigrateAtomsCombinedMsg* CMessage_MigrateAtomsCombinedMsg::unpack(void* buf) {
  MigrateAtomsCombinedMsg *msg = (MigrateAtomsCombinedMsg *) buf;
  return msg;
}
int CMessage_MigrateAtomsCombinedMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MoveAtomMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MoveAtomMsg::operator new(size_t s){
  return MoveAtomMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MoveAtomMsg::operator new(size_t s, int* sz){
  return MoveAtomMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MoveAtomMsg::operator new(size_t s, int* sz,const int pb){
  return MoveAtomMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MoveAtomMsg::operator new(size_t s, const int p) {
  return MoveAtomMsg::alloc(__idx, s, 0, p);
}
void* CMessage_MoveAtomMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_MoveAtomMsg::CMessage_MoveAtomMsg() {
MoveAtomMsg *newmsg = (MoveAtomMsg *)this;
}
void CMessage_MoveAtomMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MoveAtomMsg::pack(MoveAtomMsg *msg) {
  return (void *) msg;
}
MoveAtomMsg* CMessage_MoveAtomMsg::unpack(void* buf) {
  MoveAtomMsg *msg = (MoveAtomMsg *) buf;
  return msg;
}
int CMessage_MoveAtomMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MoveAllByMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MoveAllByMsg::operator new(size_t s){
  return MoveAllByMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_MoveAllByMsg::operator new(size_t s, int* sz){
  return MoveAllByMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_MoveAllByMsg::operator new(size_t s, int* sz,const int pb){
  return MoveAllByMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_MoveAllByMsg::operator new(size_t s, const int p) {
  return MoveAllByMsg::alloc(__idx, s, 0, p);
}
void* CMessage_MoveAllByMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_MoveAllByMsg::CMessage_MoveAllByMsg() {
MoveAllByMsg *newmsg = (MoveAllByMsg *)this;
}
void CMessage_MoveAllByMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MoveAllByMsg::pack(MoveAllByMsg *msg) {
  return (void *) msg;
}
MoveAllByMsg* CMessage_MoveAllByMsg::unpack(void* buf) {
  MoveAllByMsg *msg = (MoveAllByMsg *) buf;
  return msg;
}
int CMessage_MoveAllByMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SetLatticeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SetLatticeMsg::operator new(size_t s){
  return SetLatticeMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_SetLatticeMsg::operator new(size_t s, int* sz){
  return SetLatticeMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_SetLatticeMsg::operator new(size_t s, int* sz,const int pb){
  return SetLatticeMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_SetLatticeMsg::operator new(size_t s, const int p) {
  return SetLatticeMsg::alloc(__idx, s, 0, p);
}
void* CMessage_SetLatticeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_SetLatticeMsg::CMessage_SetLatticeMsg() {
SetLatticeMsg *newmsg = (SetLatticeMsg *)this;
}
void CMessage_SetLatticeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SetLatticeMsg::pack(SetLatticeMsg *msg) {
  return (void *) msg;
}
SetLatticeMsg* CMessage_SetLatticeMsg::unpack(void* buf) {
  SetLatticeMsg *msg = (SetLatticeMsg *) buf;
  return msg;
}
int CMessage_SetLatticeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PatchMgr: IrrGroup{
PatchMgr(void);
void recvMovePatches(MovePatchesMsg* impl_msg);
void recvAtoms(MovePatchesMsg* impl_msg);
void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
void moveAtom(MoveAtomMsg* impl_msg);
void moveAllBy(MoveAllByMsg* impl_msg);
void setLattice(SetLatticeMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PatchMgr::__idx=0;
/* DEFS: PatchMgr(void);
 */

/* DEFS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void moveAtom(MoveAtomMsg* impl_msg);
 */
void CProxyElement_PatchMgr::moveAtom(MoveAtomMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
void CProxyElement_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void setLattice(SetLatticeMsg* impl_msg);
 */
void CProxyElement_PatchMgr::setLattice(SetLatticeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: PatchMgr(void);
 */
CkGroupID CProxy_PatchMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_PatchMgr::__idx, CkIndex_PatchMgr::__idx_PatchMgr_void, impl_msg);
}
 int CkIndex_PatchMgr::__idx_PatchMgr_void=0;
void CkIndex_PatchMgr::_call_PatchMgr_void(void* impl_msg,PatchMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) PatchMgr();
}

/* DEFS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
void CProxy_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg=0;
void CkIndex_PatchMgr::_call_recvMovePatches_MovePatchesMsg(void* impl_msg,PatchMgr * impl_obj)
{
  impl_obj->recvMovePatches((MovePatchesMsg*)impl_msg);
}

/* DEFS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
void CProxy_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg=0;
void CkIndex_PatchMgr::_call_recvAtoms_MovePatchesMsg(void* impl_msg,PatchMgr * impl_obj)
{
  impl_obj->recvAtoms((MovePatchesMsg*)impl_msg);
}

/* DEFS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
void CProxy_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg=0;
void CkIndex_PatchMgr::_call_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(void* impl_msg,PatchMgr * impl_obj)
{
  impl_obj->recvMigrateAtomsCombined((MigrateAtomsCombinedMsg*)impl_msg);
}

/* DEFS: void moveAtom(MoveAtomMsg* impl_msg);
 */
void CProxy_PatchMgr::moveAtom(MoveAtomMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::moveAtom(MoveAtomMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::moveAtom(MoveAtomMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg=0;
void CkIndex_PatchMgr::_call_moveAtom_MoveAtomMsg(void* impl_msg,PatchMgr * impl_obj)
{
  impl_obj->moveAtom((MoveAtomMsg*)impl_msg);
}

/* DEFS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
void CProxy_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg=0;
void CkIndex_PatchMgr::_call_moveAllBy_MoveAllByMsg(void* impl_msg,PatchMgr * impl_obj)
{
  impl_obj->moveAllBy((MoveAllByMsg*)impl_msg);
}

/* DEFS: void setLattice(SetLatticeMsg* impl_msg);
 */
void CProxy_PatchMgr::setLattice(SetLatticeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::setLattice(SetLatticeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::setLattice(SetLatticeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg=0;
void CkIndex_PatchMgr::_call_setLattice_SetLatticeMsg(void* impl_msg,PatchMgr * impl_obj)
{
  impl_obj->setLattice((SetLatticeMsg*)impl_msg);
}

/* DEFS: PatchMgr(void);
 */

/* DEFS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_recvMovePatches_MovePatchesMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_recvAtoms_MovePatchesMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void moveAtom(MoveAtomMsg* impl_msg);
 */
void CProxySection_PatchMgr::moveAtom(MoveAtomMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_moveAtom_MoveAtomMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
void CProxySection_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_moveAllBy_MoveAllByMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void setLattice(SetLatticeMsg* impl_msg);
 */
void CProxySection_PatchMgr::setLattice(SetLatticeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::__idx_setLattice_SetLatticeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PatchMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,PatchMgr::isIrreducible());
// REG: PatchMgr(void);
  __idx_PatchMgr_void = CkRegisterEp("PatchMgr(void)",
     (CkCallFnPtr)_call_PatchMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_PatchMgr_void);

// REG: void recvMovePatches(MovePatchesMsg* impl_msg);
  __idx_recvMovePatches_MovePatchesMsg = CkRegisterEp("recvMovePatches(MovePatchesMsg* impl_msg)",
     (CkCallFnPtr)_call_recvMovePatches_MovePatchesMsg, CMessage_MovePatchesMsg::__idx, __idx, 0);

// REG: void recvAtoms(MovePatchesMsg* impl_msg);
  __idx_recvAtoms_MovePatchesMsg = CkRegisterEp("recvAtoms(MovePatchesMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAtoms_MovePatchesMsg, CMessage_MovePatchesMsg::__idx, __idx, 0);

// REG: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
  __idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg = CkRegisterEp("recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)",
     (CkCallFnPtr)_call_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg, CMessage_MigrateAtomsCombinedMsg::__idx, __idx, 0);

// REG: void moveAtom(MoveAtomMsg* impl_msg);
  __idx_moveAtom_MoveAtomMsg = CkRegisterEp("moveAtom(MoveAtomMsg* impl_msg)",
     (CkCallFnPtr)_call_moveAtom_MoveAtomMsg, CMessage_MoveAtomMsg::__idx, __idx, 0);

// REG: void moveAllBy(MoveAllByMsg* impl_msg);
  __idx_moveAllBy_MoveAllByMsg = CkRegisterEp("moveAllBy(MoveAllByMsg* impl_msg)",
     (CkCallFnPtr)_call_moveAllBy_MoveAllByMsg, CMessage_MoveAllByMsg::__idx, __idx, 0);

// REG: void setLattice(SetLatticeMsg* impl_msg);
  __idx_setLattice_SetLatticeMsg = CkRegisterEp("setLattice(SetLatticeMsg* impl_msg)",
     (CkCallFnPtr)_call_setLattice_SetLatticeMsg, CMessage_SetLatticeMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPatchMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MovePatchesMsg;
*/
CMessage_MovePatchesMsg::__register("MovePatchesMsg", sizeof(MovePatchesMsg),(CkPackFnPtr) MovePatchesMsg::pack,(CkUnpackFnPtr) MovePatchesMsg::unpack);

/* REG: message MigrateAtomsMsg;
*/
CMessage_MigrateAtomsMsg::__register("MigrateAtomsMsg", sizeof(MigrateAtomsMsg),(CkPackFnPtr) MigrateAtomsMsg::pack,(CkUnpackFnPtr) MigrateAtomsMsg::unpack);

/* REG: message MigrateAtomsCombinedMsg;
*/
CMessage_MigrateAtomsCombinedMsg::__register("MigrateAtomsCombinedMsg", sizeof(MigrateAtomsCombinedMsg),(CkPackFnPtr) MigrateAtomsCombinedMsg::pack,(CkUnpackFnPtr) MigrateAtomsCombinedMsg::unpack);

/* REG: message MoveAtomMsg;
*/
CMessage_MoveAtomMsg::__register("MoveAtomMsg", sizeof(MoveAtomMsg),(CkPackFnPtr) MoveAtomMsg::pack,(CkUnpackFnPtr) MoveAtomMsg::unpack);

/* REG: message MoveAllByMsg;
*/
CMessage_MoveAllByMsg::__register("MoveAllByMsg", sizeof(MoveAllByMsg),(CkPackFnPtr) MoveAllByMsg::pack,(CkUnpackFnPtr) MoveAllByMsg::unpack);

/* REG: message SetLatticeMsg;
*/
CMessage_SetLatticeMsg::__register("SetLatticeMsg", sizeof(SetLatticeMsg),(CkPackFnPtr) SetLatticeMsg::pack,(CkUnpackFnPtr) SetLatticeMsg::unpack);

/* REG: group PatchMgr: IrrGroup{
PatchMgr(void);
void recvMovePatches(MovePatchesMsg* impl_msg);
void recvAtoms(MovePatchesMsg* impl_msg);
void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
void moveAtom(MoveAtomMsg* impl_msg);
void moveAllBy(MoveAllByMsg* impl_msg);
void setLattice(SetLatticeMsg* impl_msg);
};
*/
  CkIndex_PatchMgr::__register("PatchMgr", sizeof(PatchMgr));

}
#endif /* CK_TEMPLATES_ONLY */
