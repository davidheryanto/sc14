/* DEFS: message RegisterProxyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_RegisterProxyMsg::operator new(size_t s){
  return RegisterProxyMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_RegisterProxyMsg::operator new(size_t s, int* sz){
  return RegisterProxyMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_RegisterProxyMsg::operator new(size_t s, int* sz,const int pb){
  return RegisterProxyMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_RegisterProxyMsg::operator new(size_t s, const int p) {
  return RegisterProxyMsg::alloc(__idx, s, 0, p);
}
void* CMessage_RegisterProxyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_RegisterProxyMsg::CMessage_RegisterProxyMsg() {
RegisterProxyMsg *newmsg = (RegisterProxyMsg *)this;
}
void CMessage_RegisterProxyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_RegisterProxyMsg::pack(RegisterProxyMsg *msg) {
  return (void *) msg;
}
RegisterProxyMsg* CMessage_RegisterProxyMsg::unpack(void* buf) {
  RegisterProxyMsg *msg = (RegisterProxyMsg *) buf;
  return msg;
}
int CMessage_RegisterProxyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message UnregisterProxyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_UnregisterProxyMsg::operator new(size_t s){
  return UnregisterProxyMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_UnregisterProxyMsg::operator new(size_t s, int* sz){
  return UnregisterProxyMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_UnregisterProxyMsg::operator new(size_t s, int* sz,const int pb){
  return UnregisterProxyMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_UnregisterProxyMsg::operator new(size_t s, const int p) {
  return UnregisterProxyMsg::alloc(__idx, s, 0, p);
}
void* CMessage_UnregisterProxyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_UnregisterProxyMsg::CMessage_UnregisterProxyMsg() {
UnregisterProxyMsg *newmsg = (UnregisterProxyMsg *)this;
}
void CMessage_UnregisterProxyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_UnregisterProxyMsg::pack(UnregisterProxyMsg *msg) {
  return (void *) msg;
}
UnregisterProxyMsg* CMessage_UnregisterProxyMsg::unpack(void* buf) {
  UnregisterProxyMsg *msg = (UnregisterProxyMsg *) buf;
  return msg;
}
int CMessage_UnregisterProxyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyResultMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyResultMsg::operator new(size_t s){
  return ProxyResultMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyResultMsg::operator new(size_t s, int* sz){
  return ProxyResultMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyResultMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyResultMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyResultMsg::operator new(size_t s, const int p) {
  return ProxyResultMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ProxyResultMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ProxyResultMsg::CMessage_ProxyResultMsg() {
ProxyResultMsg *newmsg = (ProxyResultMsg *)this;
}
void CMessage_ProxyResultMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyResultMsg::pack(ProxyResultMsg *msg) {
  return (void *) msg;
}
ProxyResultMsg* CMessage_ProxyResultMsg::unpack(void* buf) {
  ProxyResultMsg *msg = (ProxyResultMsg *) buf;
  return msg;
}
int CMessage_ProxyResultMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxySpanningTreeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxySpanningTreeMsg::operator new(size_t s){
  return ProxySpanningTreeMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxySpanningTreeMsg::operator new(size_t s, int* sz){
  return ProxySpanningTreeMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxySpanningTreeMsg::operator new(size_t s, int* sz,const int pb){
  return ProxySpanningTreeMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxySpanningTreeMsg::operator new(size_t s, const int p) {
  return ProxySpanningTreeMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ProxySpanningTreeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ProxySpanningTreeMsg::CMessage_ProxySpanningTreeMsg() {
ProxySpanningTreeMsg *newmsg = (ProxySpanningTreeMsg *)this;
}
void CMessage_ProxySpanningTreeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxySpanningTreeMsg::pack(ProxySpanningTreeMsg *msg) {
  return (void *) msg;
}
ProxySpanningTreeMsg* CMessage_ProxySpanningTreeMsg::unpack(void* buf) {
  ProxySpanningTreeMsg *msg = (ProxySpanningTreeMsg *) buf;
  return msg;
}
int CMessage_ProxySpanningTreeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyCombinedResultMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyCombinedResultMsg::operator new(size_t s){
  return ProxyCombinedResultMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyCombinedResultMsg::operator new(size_t s, int* sz){
  return ProxyCombinedResultMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyCombinedResultMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyCombinedResultMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyCombinedResultMsg::operator new(size_t s, const int p) {
  return ProxyCombinedResultMsg::alloc(__idx, s, 0, p);
}
void* CMessage_ProxyCombinedResultMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ProxyCombinedResultMsg::CMessage_ProxyCombinedResultMsg() {
ProxyCombinedResultMsg *newmsg = (ProxyCombinedResultMsg *)this;
}
void CMessage_ProxyCombinedResultMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyCombinedResultMsg::pack(ProxyCombinedResultMsg *msg) {
  return (void *) msg;
}
ProxyCombinedResultMsg* CMessage_ProxyCombinedResultMsg::unpack(void* buf) {
  ProxyCombinedResultMsg *msg = (ProxyCombinedResultMsg *) buf;
  return msg;
}
int CMessage_ProxyCombinedResultMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyCombinedResultRawMsg{
NodeID nodes[];
char isForceNonZero[];
Force forceArr[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyCombinedResultRawMsg::operator new(size_t s){
  return ProxyCombinedResultRawMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyCombinedResultRawMsg::operator new(size_t s, int* sz){
  return ProxyCombinedResultRawMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyCombinedResultRawMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyCombinedResultRawMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyCombinedResultRawMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return ProxyCombinedResultRawMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyCombinedResultRawMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return ProxyCombinedResultRawMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyCombinedResultRawMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(NodeID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(char)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(Force)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb);
}
CMessage_ProxyCombinedResultRawMsg::CMessage_ProxyCombinedResultRawMsg() {
ProxyCombinedResultRawMsg *newmsg = (ProxyCombinedResultRawMsg *)this;
  newmsg->nodes = (NodeID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->isForceNonZero = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->forceArr = (Force *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_ProxyCombinedResultRawMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyCombinedResultRawMsg::pack(ProxyCombinedResultRawMsg *msg) {
  msg->nodes = (NodeID *) ((char *)msg->nodes - (char *)msg);
  msg->isForceNonZero = (char *) ((char *)msg->isForceNonZero - (char *)msg);
  msg->forceArr = (Force *) ((char *)msg->forceArr - (char *)msg);
  return (void *) msg;
}
ProxyCombinedResultRawMsg* CMessage_ProxyCombinedResultRawMsg::unpack(void* buf) {
  ProxyCombinedResultRawMsg *msg = (ProxyCombinedResultRawMsg *) buf;
  msg->nodes = (NodeID *) ((size_t)msg->nodes + (char *)msg);
  msg->isForceNonZero = (char *) ((size_t)msg->isForceNonZero + (char *)msg);
  msg->forceArr = (Force *) ((size_t)msg->forceArr + (char *)msg);
  return msg;
}
int CMessage_ProxyCombinedResultRawMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyDataMsg{
CompAtom positionList[];
CompAtom avgPositionList[];
CompAtom velocityList[];
Real intRadList[];
int lcpoTypeList[];
CompAtomExt positionExtList[];
CudaAtom cudaAtomList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyDataMsg::operator new(size_t s){
  return ProxyDataMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyDataMsg::operator new(size_t s, int* sz){
  return ProxyDataMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyDataMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyDataMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyDataMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, int sz5, int sz6) {
  int sizes[7];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  sizes[5] = sz5;
  sizes[6] = sz6;
  return ProxyDataMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyDataMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, int sz5, int sz6, const int p) {
  int sizes[7];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  sizes[5] = sz5;
  sizes[6] = sz6;
  return ProxyDataMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(CompAtom)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(CompAtom)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(CompAtom)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN8(sizeof(Real)*sizes[3]);
  if(sizes==0)
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[4] + ALIGN8(sizeof(int)*sizes[4]);
  if(sizes==0)
    CkpvAccess(_offsets)[6] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[6] = CkpvAccess(_offsets)[5] + ALIGN8(sizeof(CompAtomExt)*sizes[5]);
  if(sizes==0)
    CkpvAccess(_offsets)[7] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[7] = CkpvAccess(_offsets)[6] + ALIGN8(sizeof(CudaAtom)*sizes[6]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[7], pb);
}
CMessage_ProxyDataMsg::CMessage_ProxyDataMsg() {
ProxyDataMsg *newmsg = (ProxyDataMsg *)this;
  newmsg->positionList = (CompAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->avgPositionList = (CompAtom *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->velocityList = (CompAtom *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->intRadList = (Real *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
  newmsg->lcpoTypeList = (int *) ((char *)newmsg + CkpvAccess(_offsets)[4]);
  newmsg->positionExtList = (CompAtomExt *) ((char *)newmsg + CkpvAccess(_offsets)[5]);
  newmsg->cudaAtomList = (CudaAtom *) ((char *)newmsg + CkpvAccess(_offsets)[6]);
}
void CMessage_ProxyDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyDataMsg::pack(ProxyDataMsg *msg) {
  msg->positionList = (CompAtom *) ((char *)msg->positionList - (char *)msg);
  msg->avgPositionList = (CompAtom *) ((char *)msg->avgPositionList - (char *)msg);
  msg->velocityList = (CompAtom *) ((char *)msg->velocityList - (char *)msg);
  msg->intRadList = (Real *) ((char *)msg->intRadList - (char *)msg);
  msg->lcpoTypeList = (int *) ((char *)msg->lcpoTypeList - (char *)msg);
  msg->positionExtList = (CompAtomExt *) ((char *)msg->positionExtList - (char *)msg);
  msg->cudaAtomList = (CudaAtom *) ((char *)msg->cudaAtomList - (char *)msg);
  return (void *) msg;
}
ProxyDataMsg* CMessage_ProxyDataMsg::unpack(void* buf) {
  ProxyDataMsg *msg = (ProxyDataMsg *) buf;
  msg->positionList = (CompAtom *) ((size_t)msg->positionList + (char *)msg);
  msg->avgPositionList = (CompAtom *) ((size_t)msg->avgPositionList + (char *)msg);
  msg->velocityList = (CompAtom *) ((size_t)msg->velocityList + (char *)msg);
  msg->intRadList = (Real *) ((size_t)msg->intRadList + (char *)msg);
  msg->lcpoTypeList = (int *) ((size_t)msg->lcpoTypeList + (char *)msg);
  msg->positionExtList = (CompAtomExt *) ((size_t)msg->positionExtList + (char *)msg);
  msg->cudaAtomList = (CudaAtom *) ((size_t)msg->cudaAtomList + (char *)msg);
  return msg;
}
int CMessage_ProxyDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyGBISP1ResultMsg{
GBReal psiSum[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyGBISP1ResultMsg::operator new(size_t s){
  return ProxyGBISP1ResultMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyGBISP1ResultMsg::operator new(size_t s, int* sz){
  return ProxyGBISP1ResultMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyGBISP1ResultMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyGBISP1ResultMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyGBISP1ResultMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP1ResultMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyGBISP1ResultMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP1ResultMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyGBISP1ResultMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(GBReal)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ProxyGBISP1ResultMsg::CMessage_ProxyGBISP1ResultMsg() {
ProxyGBISP1ResultMsg *newmsg = (ProxyGBISP1ResultMsg *)this;
  newmsg->psiSum = (GBReal *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ProxyGBISP1ResultMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyGBISP1ResultMsg::pack(ProxyGBISP1ResultMsg *msg) {
  msg->psiSum = (GBReal *) ((char *)msg->psiSum - (char *)msg);
  return (void *) msg;
}
ProxyGBISP1ResultMsg* CMessage_ProxyGBISP1ResultMsg::unpack(void* buf) {
  ProxyGBISP1ResultMsg *msg = (ProxyGBISP1ResultMsg *) buf;
  msg->psiSum = (GBReal *) ((size_t)msg->psiSum + (char *)msg);
  return msg;
}
int CMessage_ProxyGBISP1ResultMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyGBISP2DataMsg{
float bornRad[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyGBISP2DataMsg::operator new(size_t s){
  return ProxyGBISP2DataMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyGBISP2DataMsg::operator new(size_t s, int* sz){
  return ProxyGBISP2DataMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyGBISP2DataMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyGBISP2DataMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyGBISP2DataMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP2DataMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyGBISP2DataMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP2DataMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyGBISP2DataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ProxyGBISP2DataMsg::CMessage_ProxyGBISP2DataMsg() {
ProxyGBISP2DataMsg *newmsg = (ProxyGBISP2DataMsg *)this;
  newmsg->bornRad = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ProxyGBISP2DataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyGBISP2DataMsg::pack(ProxyGBISP2DataMsg *msg) {
  msg->bornRad = (float *) ((char *)msg->bornRad - (char *)msg);
  return (void *) msg;
}
ProxyGBISP2DataMsg* CMessage_ProxyGBISP2DataMsg::unpack(void* buf) {
  ProxyGBISP2DataMsg *msg = (ProxyGBISP2DataMsg *) buf;
  msg->bornRad = (float *) ((size_t)msg->bornRad + (char *)msg);
  return msg;
}
int CMessage_ProxyGBISP2DataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyGBISP2ResultMsg{
GBReal dEdaSum[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyGBISP2ResultMsg::operator new(size_t s){
  return ProxyGBISP2ResultMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyGBISP2ResultMsg::operator new(size_t s, int* sz){
  return ProxyGBISP2ResultMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyGBISP2ResultMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyGBISP2ResultMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyGBISP2ResultMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP2ResultMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyGBISP2ResultMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP2ResultMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyGBISP2ResultMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(GBReal)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ProxyGBISP2ResultMsg::CMessage_ProxyGBISP2ResultMsg() {
ProxyGBISP2ResultMsg *newmsg = (ProxyGBISP2ResultMsg *)this;
  newmsg->dEdaSum = (GBReal *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ProxyGBISP2ResultMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyGBISP2ResultMsg::pack(ProxyGBISP2ResultMsg *msg) {
  msg->dEdaSum = (GBReal *) ((char *)msg->dEdaSum - (char *)msg);
  return (void *) msg;
}
ProxyGBISP2ResultMsg* CMessage_ProxyGBISP2ResultMsg::unpack(void* buf) {
  ProxyGBISP2ResultMsg *msg = (ProxyGBISP2ResultMsg *) buf;
  msg->dEdaSum = (GBReal *) ((size_t)msg->dEdaSum + (char *)msg);
  return msg;
}
int CMessage_ProxyGBISP2ResultMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyGBISP3DataMsg{
float dHdrPrefix[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyGBISP3DataMsg::operator new(size_t s){
  return ProxyGBISP3DataMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyGBISP3DataMsg::operator new(size_t s, int* sz){
  return ProxyGBISP3DataMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyGBISP3DataMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyGBISP3DataMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyGBISP3DataMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP3DataMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyGBISP3DataMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ProxyGBISP3DataMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyGBISP3DataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_ProxyGBISP3DataMsg::CMessage_ProxyGBISP3DataMsg() {
ProxyGBISP3DataMsg *newmsg = (ProxyGBISP3DataMsg *)this;
  newmsg->dHdrPrefix = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ProxyGBISP3DataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyGBISP3DataMsg::pack(ProxyGBISP3DataMsg *msg) {
  msg->dHdrPrefix = (float *) ((char *)msg->dHdrPrefix - (char *)msg);
  return (void *) msg;
}
ProxyGBISP3DataMsg* CMessage_ProxyGBISP3DataMsg::unpack(void* buf) {
  ProxyGBISP3DataMsg *msg = (ProxyGBISP3DataMsg *) buf;
  msg->dHdrPrefix = (float *) ((size_t)msg->dHdrPrefix + (char *)msg);
  return msg;
}
int CMessage_ProxyGBISP3DataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyResultVarsizeMsg{
Force forceArr[];
char isZero[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyResultVarsizeMsg::operator new(size_t s){
  return ProxyResultVarsizeMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyResultVarsizeMsg::operator new(size_t s, int* sz){
  return ProxyResultVarsizeMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyResultVarsizeMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyResultVarsizeMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyResultVarsizeMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ProxyResultVarsizeMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyResultVarsizeMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ProxyResultVarsizeMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyResultVarsizeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(Force)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(char)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_ProxyResultVarsizeMsg::CMessage_ProxyResultVarsizeMsg() {
ProxyResultVarsizeMsg *newmsg = (ProxyResultVarsizeMsg *)this;
  newmsg->forceArr = (Force *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->isZero = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_ProxyResultVarsizeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyResultVarsizeMsg::pack(ProxyResultVarsizeMsg *msg) {
  msg->forceArr = (Force *) ((char *)msg->forceArr - (char *)msg);
  msg->isZero = (char *) ((char *)msg->isZero - (char *)msg);
  return (void *) msg;
}
ProxyResultVarsizeMsg* CMessage_ProxyResultVarsizeMsg::unpack(void* buf) {
  ProxyResultVarsizeMsg *msg = (ProxyResultVarsizeMsg *) buf;
  msg->forceArr = (Force *) ((size_t)msg->forceArr + (char *)msg);
  msg->isZero = (char *) ((size_t)msg->isZero + (char *)msg);
  return msg;
}
int CMessage_ProxyResultVarsizeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ProxyNodeAwareSpanningTreeMsg{
int numPesOfNode[];
int allPes[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ProxyNodeAwareSpanningTreeMsg::operator new(size_t s){
  return ProxyNodeAwareSpanningTreeMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_ProxyNodeAwareSpanningTreeMsg::operator new(size_t s, int* sz){
  return ProxyNodeAwareSpanningTreeMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_ProxyNodeAwareSpanningTreeMsg::operator new(size_t s, int* sz,const int pb){
  return ProxyNodeAwareSpanningTreeMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_ProxyNodeAwareSpanningTreeMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ProxyNodeAwareSpanningTreeMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_ProxyNodeAwareSpanningTreeMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ProxyNodeAwareSpanningTreeMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_ProxyNodeAwareSpanningTreeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
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
CMessage_ProxyNodeAwareSpanningTreeMsg::CMessage_ProxyNodeAwareSpanningTreeMsg() {
ProxyNodeAwareSpanningTreeMsg *newmsg = (ProxyNodeAwareSpanningTreeMsg *)this;
  newmsg->numPesOfNode = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->allPes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_ProxyNodeAwareSpanningTreeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ProxyNodeAwareSpanningTreeMsg::pack(ProxyNodeAwareSpanningTreeMsg *msg) {
  msg->numPesOfNode = (int *) ((char *)msg->numPesOfNode - (char *)msg);
  msg->allPes = (int *) ((char *)msg->allPes - (char *)msg);
  return (void *) msg;
}
ProxyNodeAwareSpanningTreeMsg* CMessage_ProxyNodeAwareSpanningTreeMsg::unpack(void* buf) {
  ProxyNodeAwareSpanningTreeMsg *msg = (ProxyNodeAwareSpanningTreeMsg *) buf;
  msg->numPesOfNode = (int *) ((size_t)msg->numPesOfNode + (char *)msg);
  msg->allPes = (int *) ((size_t)msg->allPes + (char *)msg);
  return msg;
}
int CMessage_ProxyNodeAwareSpanningTreeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PatchProxyListMsg{
int patchIDs[];
int proxyListLen[];
int proxyPEs[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PatchProxyListMsg::operator new(size_t s){
  return PatchProxyListMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PatchProxyListMsg::operator new(size_t s, int* sz){
  return PatchProxyListMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PatchProxyListMsg::operator new(size_t s, int* sz,const int pb){
  return PatchProxyListMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PatchProxyListMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return PatchProxyListMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_PatchProxyListMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return PatchProxyListMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_PatchProxyListMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(int)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb);
}
CMessage_PatchProxyListMsg::CMessage_PatchProxyListMsg() {
PatchProxyListMsg *newmsg = (PatchProxyListMsg *)this;
  newmsg->patchIDs = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->proxyListLen = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->proxyPEs = (int *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_PatchProxyListMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PatchProxyListMsg::pack(PatchProxyListMsg *msg) {
  msg->patchIDs = (int *) ((char *)msg->patchIDs - (char *)msg);
  msg->proxyListLen = (int *) ((char *)msg->proxyListLen - (char *)msg);
  msg->proxyPEs = (int *) ((char *)msg->proxyPEs - (char *)msg);
  return (void *) msg;
}
PatchProxyListMsg* CMessage_PatchProxyListMsg::unpack(void* buf) {
  PatchProxyListMsg *msg = (PatchProxyListMsg *) buf;
  msg->patchIDs = (int *) ((size_t)msg->patchIDs + (char *)msg);
  msg->proxyListLen = (int *) ((size_t)msg->proxyListLen + (char *)msg);
  msg->proxyPEs = (int *) ((size_t)msg->proxyPEs + (char *)msg);
  return msg;
}
int CMessage_PatchProxyListMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ProxyMgr: IrrGroup{
ProxyMgr(void);
void recvRegisterProxy(RegisterProxyMsg* impl_msg);
void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
void recvProxyData(ProxyDataMsg* impl_msg);
void recvImmediateProxyData(ProxyDataMsg* impl_msg);
void recvProxyAll(ProxyDataMsg* impl_msg);
void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
void recvResults(ProxyResultVarsizeMsg* impl_msg);
void recvResults(ProxyResultMsg* impl_msg);
void recvResults(ProxyCombinedResultRawMsg* impl_msg);
void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
void buildProxySpanningTree2(void);
void recvProxies(int pid, const int *list, int n);
void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
void sendResult(ProxyGBISP1ResultMsg* impl_msg);
void recvResult(ProxyGBISP1ResultMsg* impl_msg);
void recvData(ProxyGBISP2DataMsg* impl_msg);
void sendResult(ProxyGBISP2ResultMsg* impl_msg);
void recvResult(ProxyGBISP2ResultMsg* impl_msg);
void recvData(ProxyGBISP3DataMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ProxyMgr::__idx=0;
/* DEFS: ProxyMgr(void);
 */

/* DEFS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvRegisterProxy(RegisterProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvUnregisterProxy(UnregisterProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvProxyData(ProxyDataMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvResults(ProxyResultVarsizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvResults(ProxyResultMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvResults(ProxyResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
 */
void CProxyElement_ProxyMgr::recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, const int *tree, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tree, impl_cnt_tree;
  impl_off_tree=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_tree=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tree,tree,impl_cnt_tree);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvSpanningTree(ProxySpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
 */
void CProxyElement_ProxyMgr::recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void buildProxySpanningTree2(void);
 */
void CProxyElement_ProxyMgr::buildProxySpanningTree2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvProxies(int pid, const int *list, int n);
 */
void CProxyElement_ProxyMgr::recvProxies(int pid, const int *list, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pid, const int *list, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_list, impl_cnt_list;
  impl_off_list=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_list=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_list,list,impl_cnt_list);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvPatchProxyInfo(PatchProxyListMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::sendResult(ProxyGBISP1ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvResult(ProxyGBISP1ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvData(ProxyGBISP2DataMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvData(ProxyGBISP2DataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::sendResult(ProxyGBISP2ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvResult(ProxyGBISP2ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvData(ProxyGBISP3DataMsg* impl_msg);
 */
void CProxyElement_ProxyMgr::recvData(ProxyGBISP3DataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ProxyMgr(void);
 */
CkGroupID CProxy_ProxyMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ProxyMgr::__idx, CkIndex_ProxyMgr::__idx_ProxyMgr_void, impl_msg);
}
 int CkIndex_ProxyMgr::__idx_ProxyMgr_void=0;
void CkIndex_ProxyMgr::_call_ProxyMgr_void(void* impl_msg,ProxyMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ProxyMgr();
}

/* DEFS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvRegisterProxy(RegisterProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvRegisterProxy(RegisterProxyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvRegisterProxy(RegisterProxyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg=0;
void CkIndex_ProxyMgr::_call_recvRegisterProxy_RegisterProxyMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvRegisterProxy((RegisterProxyMsg*)impl_msg);
}

/* DEFS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvUnregisterProxy(UnregisterProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvUnregisterProxy(UnregisterProxyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvUnregisterProxy(UnregisterProxyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg=0;
void CkIndex_ProxyMgr::_call_recvUnregisterProxy_UnregisterProxyMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvUnregisterProxy((UnregisterProxyMsg*)impl_msg);
}

/* DEFS: void recvProxyData(ProxyDataMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvProxyData(ProxyDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvProxyData(ProxyDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg=0;
void CkIndex_ProxyMgr::_call_recvProxyData_ProxyDataMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvProxyData((ProxyDataMsg*)impl_msg);
}

/* DEFS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg=0;
void CkIndex_ProxyMgr::_call_recvImmediateProxyData_ProxyDataMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvImmediateProxyData((ProxyDataMsg*)impl_msg);
}

/* DEFS: void recvProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvProxyAll(ProxyDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvProxyAll(ProxyDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg=0;
void CkIndex_ProxyMgr::_call_recvProxyAll_ProxyDataMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvProxyAll((ProxyDataMsg*)impl_msg);
}

/* DEFS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg=0;
void CkIndex_ProxyMgr::_call_recvImmediateProxyAll_ProxyDataMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvImmediateProxyAll((ProxyDataMsg*)impl_msg);
}

/* DEFS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvResults(ProxyResultVarsizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvResults(ProxyResultVarsizeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvResults(ProxyResultVarsizeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg=0;
void CkIndex_ProxyMgr::_call_recvResults_ProxyResultVarsizeMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvResults((ProxyResultVarsizeMsg*)impl_msg);
}

/* DEFS: void recvResults(ProxyResultMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvResults(ProxyResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvResults(ProxyResultMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvResults(ProxyResultMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg=0;
void CkIndex_ProxyMgr::_call_recvResults_ProxyResultMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvResults((ProxyResultMsg*)impl_msg);
}

/* DEFS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvResults(ProxyCombinedResultRawMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvResults(ProxyCombinedResultRawMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg=0;
void CkIndex_ProxyMgr::_call_recvResults_ProxyCombinedResultRawMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvResults((ProxyCombinedResultRawMsg*)impl_msg);
}

/* DEFS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg=0;
void CkIndex_ProxyMgr::_call_recvImmediateResults_ProxyCombinedResultRawMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvImmediateResults((ProxyCombinedResultRawMsg*)impl_msg);
}

/* DEFS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
 */
void CProxy_ProxyMgr::recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, const int *tree, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tree, impl_cnt_tree;
  impl_off_tree=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_tree=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tree,tree,impl_cnt_tree);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0, const int *tree, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tree, impl_cnt_tree;
  impl_off_tree=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_tree=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tree,tree,impl_cnt_tree);
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0, const int *tree, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tree, impl_cnt_tree;
  impl_off_tree=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_tree=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tree,tree,impl_cnt_tree);
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12=0;
void CkIndex_ProxyMgr::_call_recvSpanningTreeOnHomePatch_marshall12(void* impl_msg,ProxyMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0, const int *tree, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_off_tree, impl_cnt_tree; 
  implP|impl_off_tree;
  implP|impl_cnt_tree;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *tree=(int *)(impl_buf+impl_off_tree);
  impl_obj->recvSpanningTreeOnHomePatch(impl_noname_0, tree, n);
}
int CkIndex_ProxyMgr::_callmarshall_recvSpanningTreeOnHomePatch_marshall12(char* impl_buf,ProxyMgr * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_0, const int *tree, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_off_tree, impl_cnt_tree; 
  implP|impl_off_tree;
  implP|impl_cnt_tree;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *tree=(int *)(impl_buf+impl_off_tree);
  impl_obj->recvSpanningTreeOnHomePatch(impl_noname_0, tree, n);
  return implP.size();
}
void CkIndex_ProxyMgr::_marshallmessagepup_recvSpanningTreeOnHomePatch_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_0, const int *tree, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_0; implP|impl_noname_0;
  int impl_off_tree, impl_cnt_tree; 
  implP|impl_off_tree;
  implP|impl_cnt_tree;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *tree=(int *)(impl_buf+impl_off_tree);
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("tree");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*tree))<impl_cnt_tree;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|tree[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}

/* DEFS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg=0;
void CkIndex_ProxyMgr::_call_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvNodeAwareSpanningTreeOnHomePatch((ProxyNodeAwareSpanningTreeMsg*)impl_msg);
}

/* DEFS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvSpanningTree(ProxySpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvSpanningTree(ProxySpanningTreeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvSpanningTree(ProxySpanningTreeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg=0;
void CkIndex_ProxyMgr::_call_recvSpanningTree_ProxySpanningTreeMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvSpanningTree((ProxySpanningTreeMsg*)impl_msg);
}

/* DEFS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg=0;
void CkIndex_ProxyMgr::_call_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvNodeAwareSpanningTree((ProxyNodeAwareSpanningTreeMsg*)impl_msg);
}

/* DEFS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
 */
void CProxy_ProxyMgr::recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16=0;
void CkIndex_ProxyMgr::_call_recvNodeAwareSTParent_marshall16(void* impl_msg,ProxyMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvNodeAwareSTParent(impl_noname_1, impl_noname_2);
}
int CkIndex_ProxyMgr::_callmarshall_recvNodeAwareSTParent_marshall16(char* impl_buf,ProxyMgr * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvNodeAwareSTParent(impl_noname_1, impl_noname_2);
  return implP.size();
}
void CkIndex_ProxyMgr::_marshallmessagepup_recvNodeAwareSTParent_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_1; implP|impl_noname_1;
  int impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}

/* DEFS: void buildProxySpanningTree2(void);
 */
void CProxy_ProxyMgr::buildProxySpanningTree2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::buildProxySpanningTree2(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::buildProxySpanningTree2(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void=0;
void CkIndex_ProxyMgr::_call_buildProxySpanningTree2_void(void* impl_msg,ProxyMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->buildProxySpanningTree2();
}

/* DEFS: void recvProxies(int pid, const int *list, int n);
 */
void CProxy_ProxyMgr::recvProxies(int pid, const int *list, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pid, const int *list, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_list, impl_cnt_list;
  impl_off_list=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_list=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_list,list,impl_cnt_list);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvProxies(int pid, const int *list, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pid, const int *list, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_list, impl_cnt_list;
  impl_off_list=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_list=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_list,list,impl_cnt_list);
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvProxies(int pid, const int *list, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pid, const int *list, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_list, impl_cnt_list;
  impl_off_list=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_list=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_list,list,impl_cnt_list);
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvProxies_marshall18=0;
void CkIndex_ProxyMgr::_call_recvProxies_marshall18(void* impl_msg,ProxyMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int pid, const int *list, int n*/
  PUP::fromMem implP(impl_buf);
  int pid; implP|pid;
  int impl_off_list, impl_cnt_list; 
  implP|impl_off_list;
  implP|impl_cnt_list;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *list=(int *)(impl_buf+impl_off_list);
  impl_obj->recvProxies(pid, list, n);
}
int CkIndex_ProxyMgr::_callmarshall_recvProxies_marshall18(char* impl_buf,ProxyMgr * impl_obj) {
  /*Unmarshall pup'd fields: int pid, const int *list, int n*/
  PUP::fromMem implP(impl_buf);
  int pid; implP|pid;
  int impl_off_list, impl_cnt_list; 
  implP|impl_off_list;
  implP|impl_cnt_list;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *list=(int *)(impl_buf+impl_off_list);
  impl_obj->recvProxies(pid, list, n);
  return implP.size();
}
void CkIndex_ProxyMgr::_marshallmessagepup_recvProxies_marshall18(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int pid, const int *list, int n*/
  PUP::fromMem implP(impl_buf);
  int pid; implP|pid;
  int impl_off_list, impl_cnt_list; 
  implP|impl_off_list;
  implP|impl_cnt_list;
  int n; implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *list=(int *)(impl_buf+impl_off_list);
  if (implDestP.hasComments()) implDestP.comment("pid");
  implDestP|pid;
  if (implDestP.hasComments()) implDestP.comment("list");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*list))<impl_cnt_list;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|list[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}

/* DEFS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvPatchProxyInfo(PatchProxyListMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvPatchProxyInfo(PatchProxyListMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvPatchProxyInfo(PatchProxyListMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg=0;
void CkIndex_ProxyMgr::_call_recvPatchProxyInfo_PatchProxyListMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvPatchProxyInfo((PatchProxyListMsg*)impl_msg);
}

/* DEFS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
 */
void CProxy_ProxyMgr::sendResult(ProxyGBISP1ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::sendResult(ProxyGBISP1ResultMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::sendResult(ProxyGBISP1ResultMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg=0;
void CkIndex_ProxyMgr::_call_sendResult_ProxyGBISP1ResultMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->sendResult((ProxyGBISP1ResultMsg*)impl_msg);
}

/* DEFS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvResult(ProxyGBISP1ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvResult(ProxyGBISP1ResultMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvResult(ProxyGBISP1ResultMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg=0;
void CkIndex_ProxyMgr::_call_recvResult_ProxyGBISP1ResultMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvResult((ProxyGBISP1ResultMsg*)impl_msg);
}

/* DEFS: void recvData(ProxyGBISP2DataMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvData(ProxyGBISP2DataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvData(ProxyGBISP2DataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvData(ProxyGBISP2DataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg=0;
void CkIndex_ProxyMgr::_call_recvData_ProxyGBISP2DataMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvData((ProxyGBISP2DataMsg*)impl_msg);
}

/* DEFS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
 */
void CProxy_ProxyMgr::sendResult(ProxyGBISP2ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::sendResult(ProxyGBISP2ResultMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::sendResult(ProxyGBISP2ResultMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg=0;
void CkIndex_ProxyMgr::_call_sendResult_ProxyGBISP2ResultMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->sendResult((ProxyGBISP2ResultMsg*)impl_msg);
}

/* DEFS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvResult(ProxyGBISP2ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvResult(ProxyGBISP2ResultMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvResult(ProxyGBISP2ResultMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg=0;
void CkIndex_ProxyMgr::_call_recvResult_ProxyGBISP2ResultMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvResult((ProxyGBISP2ResultMsg*)impl_msg);
}

/* DEFS: void recvData(ProxyGBISP3DataMsg* impl_msg);
 */
void CProxy_ProxyMgr::recvData(ProxyGBISP3DataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ProxyMgr::recvData(ProxyGBISP3DataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ProxyMgr::recvData(ProxyGBISP3DataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg=0;
void CkIndex_ProxyMgr::_call_recvData_ProxyGBISP3DataMsg(void* impl_msg,ProxyMgr * impl_obj)
{
  impl_obj->recvData((ProxyGBISP3DataMsg*)impl_msg);
}

/* DEFS: ProxyMgr(void);
 */

/* DEFS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvRegisterProxy(RegisterProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvRegisterProxy_RegisterProxyMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvUnregisterProxy(UnregisterProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvUnregisterProxy_UnregisterProxyMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvProxyData(ProxyDataMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvProxyData_ProxyDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvProxyAll_ProxyDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvResults(ProxyResultVarsizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultVarsizeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvResults(ProxyResultMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvResults(ProxyResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResults_ProxyResultMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResults_ProxyCombinedResultRawMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
 */
void CProxySection_ProxyMgr::recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, const int *tree, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tree, impl_cnt_tree;
  impl_off_tree=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_tree=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_off_tree;
    implP|impl_cnt_tree;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tree,tree,impl_cnt_tree);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvSpanningTreeOnHomePatch_marshall12, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvSpanningTree(ProxySpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvSpanningTree_ProxySpanningTreeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
 */
void CProxySection_ProxyMgr::recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvNodeAwareSTParent_marshall16, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void buildProxySpanningTree2(void);
 */
void CProxySection_ProxyMgr::buildProxySpanningTree2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_buildProxySpanningTree2_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvProxies(int pid, const int *list, int n);
 */
void CProxySection_ProxyMgr::recvProxies(int pid, const int *list, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pid, const int *list, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_list, impl_cnt_list;
  impl_off_list=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_list=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pid;
    implP|impl_off_list;
    implP|impl_cnt_list;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_list,list,impl_cnt_list);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvProxies_marshall18, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvPatchProxyInfo(PatchProxyListMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvPatchProxyInfo_PatchProxyListMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
 */
void CProxySection_ProxyMgr::sendResult(ProxyGBISP1ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP1ResultMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvResult(ProxyGBISP1ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP1ResultMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvData(ProxyGBISP2DataMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvData(ProxyGBISP2DataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP2DataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
 */
void CProxySection_ProxyMgr::sendResult(ProxyGBISP2ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_sendResult_ProxyGBISP2ResultMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvResult(ProxyGBISP2ResultMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvResult_ProxyGBISP2ResultMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvData(ProxyGBISP3DataMsg* impl_msg);
 */
void CProxySection_ProxyMgr::recvData(ProxyGBISP3DataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ProxyMgr::__idx_recvData_ProxyGBISP3DataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ProxyMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ProxyMgr::isIrreducible());
// REG: ProxyMgr(void);
  __idx_ProxyMgr_void = CkRegisterEp("ProxyMgr(void)",
     (CkCallFnPtr)_call_ProxyMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ProxyMgr_void);

// REG: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
  __idx_recvRegisterProxy_RegisterProxyMsg = CkRegisterEp("recvRegisterProxy(RegisterProxyMsg* impl_msg)",
     (CkCallFnPtr)_call_recvRegisterProxy_RegisterProxyMsg, CMessage_RegisterProxyMsg::__idx, __idx, 0);

// REG: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
  __idx_recvUnregisterProxy_UnregisterProxyMsg = CkRegisterEp("recvUnregisterProxy(UnregisterProxyMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUnregisterProxy_UnregisterProxyMsg, CMessage_UnregisterProxyMsg::__idx, __idx, 0);

// REG: void recvProxyData(ProxyDataMsg* impl_msg);
  __idx_recvProxyData_ProxyDataMsg = CkRegisterEp("recvProxyData(ProxyDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvProxyData_ProxyDataMsg, CMessage_ProxyDataMsg::__idx, __idx, 0);

// REG: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
  __idx_recvImmediateProxyData_ProxyDataMsg = CkRegisterEp("recvImmediateProxyData(ProxyDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvImmediateProxyData_ProxyDataMsg, CMessage_ProxyDataMsg::__idx, __idx, 0);

// REG: void recvProxyAll(ProxyDataMsg* impl_msg);
  __idx_recvProxyAll_ProxyDataMsg = CkRegisterEp("recvProxyAll(ProxyDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvProxyAll_ProxyDataMsg, CMessage_ProxyDataMsg::__idx, __idx, 0);

// REG: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
  __idx_recvImmediateProxyAll_ProxyDataMsg = CkRegisterEp("recvImmediateProxyAll(ProxyDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvImmediateProxyAll_ProxyDataMsg, CMessage_ProxyDataMsg::__idx, __idx, 0);

// REG: void recvResults(ProxyResultVarsizeMsg* impl_msg);
  __idx_recvResults_ProxyResultVarsizeMsg = CkRegisterEp("recvResults(ProxyResultVarsizeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvResults_ProxyResultVarsizeMsg, CMessage_ProxyResultVarsizeMsg::__idx, __idx, 0);

// REG: void recvResults(ProxyResultMsg* impl_msg);
  __idx_recvResults_ProxyResultMsg = CkRegisterEp("recvResults(ProxyResultMsg* impl_msg)",
     (CkCallFnPtr)_call_recvResults_ProxyResultMsg, CMessage_ProxyResultMsg::__idx, __idx, 0);

// REG: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
  __idx_recvResults_ProxyCombinedResultRawMsg = CkRegisterEp("recvResults(ProxyCombinedResultRawMsg* impl_msg)",
     (CkCallFnPtr)_call_recvResults_ProxyCombinedResultRawMsg, CMessage_ProxyCombinedResultRawMsg::__idx, __idx, 0);

// REG: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
  __idx_recvImmediateResults_ProxyCombinedResultRawMsg = CkRegisterEp("recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)",
     (CkCallFnPtr)_call_recvImmediateResults_ProxyCombinedResultRawMsg, CMessage_ProxyCombinedResultRawMsg::__idx, __idx, 0);

// REG: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
  __idx_recvSpanningTreeOnHomePatch_marshall12 = CkRegisterEp("recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n)",
     (CkCallFnPtr)_call_recvSpanningTreeOnHomePatch_marshall12, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvSpanningTreeOnHomePatch_marshall12,(CkMarshallUnpackFn)_callmarshall_recvSpanningTreeOnHomePatch_marshall12);
  CkRegisterMessagePupFn(__idx_recvSpanningTreeOnHomePatch_marshall12,(CkMessagePupFn)_marshallmessagepup_recvSpanningTreeOnHomePatch_marshall12);

// REG: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
  __idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg = CkRegisterEp("recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg, CMessage_ProxyNodeAwareSpanningTreeMsg::__idx, __idx, 0);

// REG: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
  __idx_recvSpanningTree_ProxySpanningTreeMsg = CkRegisterEp("recvSpanningTree(ProxySpanningTreeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvSpanningTree_ProxySpanningTreeMsg, CMessage_ProxySpanningTreeMsg::__idx, __idx, 0);

// REG: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
  __idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg = CkRegisterEp("recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg)",
     (CkCallFnPtr)_call_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg, CMessage_ProxyNodeAwareSpanningTreeMsg::__idx, __idx, 0);

// REG: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
  __idx_recvNodeAwareSTParent_marshall16 = CkRegisterEp("recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2)",
     (CkCallFnPtr)_call_recvNodeAwareSTParent_marshall16, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvNodeAwareSTParent_marshall16,(CkMarshallUnpackFn)_callmarshall_recvNodeAwareSTParent_marshall16);
  CkRegisterMessagePupFn(__idx_recvNodeAwareSTParent_marshall16,(CkMessagePupFn)_marshallmessagepup_recvNodeAwareSTParent_marshall16);

// REG: void buildProxySpanningTree2(void);
  __idx_buildProxySpanningTree2_void = CkRegisterEp("buildProxySpanningTree2(void)",
     (CkCallFnPtr)_call_buildProxySpanningTree2_void, 0, __idx, 0);

// REG: void recvProxies(int pid, const int *list, int n);
  __idx_recvProxies_marshall18 = CkRegisterEp("recvProxies(int pid, const int *list, int n)",
     (CkCallFnPtr)_call_recvProxies_marshall18, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvProxies_marshall18,(CkMarshallUnpackFn)_callmarshall_recvProxies_marshall18);
  CkRegisterMessagePupFn(__idx_recvProxies_marshall18,(CkMessagePupFn)_marshallmessagepup_recvProxies_marshall18);

// REG: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
  __idx_recvPatchProxyInfo_PatchProxyListMsg = CkRegisterEp("recvPatchProxyInfo(PatchProxyListMsg* impl_msg)",
     (CkCallFnPtr)_call_recvPatchProxyInfo_PatchProxyListMsg, CMessage_PatchProxyListMsg::__idx, __idx, 0);

// REG: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
  __idx_sendResult_ProxyGBISP1ResultMsg = CkRegisterEp("sendResult(ProxyGBISP1ResultMsg* impl_msg)",
     (CkCallFnPtr)_call_sendResult_ProxyGBISP1ResultMsg, CMessage_ProxyGBISP1ResultMsg::__idx, __idx, 0);

// REG: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
  __idx_recvResult_ProxyGBISP1ResultMsg = CkRegisterEp("recvResult(ProxyGBISP1ResultMsg* impl_msg)",
     (CkCallFnPtr)_call_recvResult_ProxyGBISP1ResultMsg, CMessage_ProxyGBISP1ResultMsg::__idx, __idx, 0);

// REG: void recvData(ProxyGBISP2DataMsg* impl_msg);
  __idx_recvData_ProxyGBISP2DataMsg = CkRegisterEp("recvData(ProxyGBISP2DataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvData_ProxyGBISP2DataMsg, CMessage_ProxyGBISP2DataMsg::__idx, __idx, 0);

// REG: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
  __idx_sendResult_ProxyGBISP2ResultMsg = CkRegisterEp("sendResult(ProxyGBISP2ResultMsg* impl_msg)",
     (CkCallFnPtr)_call_sendResult_ProxyGBISP2ResultMsg, CMessage_ProxyGBISP2ResultMsg::__idx, __idx, 0);

// REG: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
  __idx_recvResult_ProxyGBISP2ResultMsg = CkRegisterEp("recvResult(ProxyGBISP2ResultMsg* impl_msg)",
     (CkCallFnPtr)_call_recvResult_ProxyGBISP2ResultMsg, CMessage_ProxyGBISP2ResultMsg::__idx, __idx, 0);

// REG: void recvData(ProxyGBISP3DataMsg* impl_msg);
  __idx_recvData_ProxyGBISP3DataMsg = CkRegisterEp("recvData(ProxyGBISP3DataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvData_ProxyGBISP3DataMsg, CMessage_ProxyGBISP3DataMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup NodeProxyMgr: NodeGroup{
NodeProxyMgr(void);
void createProxyInfo(int impl_noname_3);
void recvImmediateProxyData(ProxyDataMsg* impl_msg);
void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
void sendProxyListInfo(PatchProxyListMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NodeProxyMgr::__idx=0;
/* DEFS: NodeProxyMgr(void);
 */

/* DEFS: void createProxyInfo(int impl_noname_3);
 */
void CProxyElement_NodeProxyMgr::createProxyInfo(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
void CProxyElement_NodeProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxyElement_NodeProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxyElement_NodeProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

/* DEFS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
 */
void CProxyElement_NodeProxyMgr::sendProxyListInfo(PatchProxyListMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: NodeProxyMgr(void);
 */
CkGroupID CProxy_NodeProxyMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateNodeGroup(CkIndex_NodeProxyMgr::__idx, CkIndex_NodeProxyMgr::__idx_NodeProxyMgr_void, impl_msg);
}
 int CkIndex_NodeProxyMgr::__idx_NodeProxyMgr_void=0;
void CkIndex_NodeProxyMgr::_call_NodeProxyMgr_void(void* impl_msg,NodeProxyMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) NodeProxyMgr();
}

/* DEFS: void createProxyInfo(int impl_noname_3);
 */
void CProxy_NodeProxyMgr::createProxyInfo(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2=0;
void CkIndex_NodeProxyMgr::_call_createProxyInfo_marshall2(void* impl_msg,NodeProxyMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_3; implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->createProxyInfo(impl_noname_3);
}
int CkIndex_NodeProxyMgr::_callmarshall_createProxyInfo_marshall2(char* impl_buf,NodeProxyMgr * impl_obj) {
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_3; implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->createProxyInfo(impl_noname_3);
  return implP.size();
}
void CkIndex_NodeProxyMgr::_marshallmessagepup_createProxyInfo_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  int impl_noname_3; implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
}

/* DEFS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
void CProxy_NodeProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
 int CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg=0;
void CkIndex_NodeProxyMgr::_call_recvImmediateProxyData_ProxyDataMsg(void* impl_msg,NodeProxyMgr * impl_obj)
{
  impl_obj->recvImmediateProxyData((ProxyDataMsg*)impl_msg);
}

/* DEFS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxy_NodeProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
 int CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg=0;
void CkIndex_NodeProxyMgr::_call_recvImmediateProxyAll_ProxyDataMsg(void* impl_msg,NodeProxyMgr * impl_obj)
{
  impl_obj->recvImmediateProxyAll((ProxyDataMsg*)impl_msg);
}

/* DEFS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxy_NodeProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
 int CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg=0;
void CkIndex_NodeProxyMgr::_call_recvImmediateResults_ProxyCombinedResultRawMsg(void* impl_msg,NodeProxyMgr * impl_obj)
{
  impl_obj->recvImmediateResults((ProxyCombinedResultRawMsg*)impl_msg);
}

/* DEFS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
 */
void CProxy_NodeProxyMgr::sendProxyListInfo(PatchProxyListMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupID(),0);
}
 int CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg=0;
void CkIndex_NodeProxyMgr::_call_sendProxyListInfo_PatchProxyListMsg(void* impl_msg,NodeProxyMgr * impl_obj)
{
  impl_obj->sendProxyListInfo((PatchProxyListMsg*)impl_msg);
}

/* DEFS: NodeProxyMgr(void);
 */

/* DEFS: void createProxyInfo(int impl_noname_3);
 */
void CProxySection_NodeProxyMgr::createProxyInfo(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodeProxyMgr::__idx_createProxyInfo_marshall2, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
void CProxySection_NodeProxyMgr::recvImmediateProxyData(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyData_ProxyDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}

/* DEFS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
void CProxySection_NodeProxyMgr::recvImmediateProxyAll(ProxyDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodeProxyMgr::__idx_recvImmediateProxyAll_ProxyDataMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}

/* DEFS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
void CProxySection_NodeProxyMgr::recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodeProxyMgr::__idx_recvImmediateResults_ProxyCombinedResultRawMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}

/* DEFS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
 */
void CProxySection_NodeProxyMgr::sendProxyListInfo(PatchProxyListMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodeProxyMgr::__idx_sendProxyListInfo_PatchProxyListMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NodeProxyMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,NodeProxyMgr::isIrreducible());
// REG: NodeProxyMgr(void);
  __idx_NodeProxyMgr_void = CkRegisterEp("NodeProxyMgr(void)",
     (CkCallFnPtr)_call_NodeProxyMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_NodeProxyMgr_void);

// REG: void createProxyInfo(int impl_noname_3);
  __idx_createProxyInfo_marshall2 = CkRegisterEp("createProxyInfo(int impl_noname_3)",
     (CkCallFnPtr)_call_createProxyInfo_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_createProxyInfo_marshall2,(CkMarshallUnpackFn)_callmarshall_createProxyInfo_marshall2);
  CkRegisterMessagePupFn(__idx_createProxyInfo_marshall2,(CkMessagePupFn)_marshallmessagepup_createProxyInfo_marshall2);

// REG: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
  __idx_recvImmediateProxyData_ProxyDataMsg = CkRegisterEp("recvImmediateProxyData(ProxyDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvImmediateProxyData_ProxyDataMsg, CMessage_ProxyDataMsg::__idx, __idx, 0);

// REG: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
  __idx_recvImmediateProxyAll_ProxyDataMsg = CkRegisterEp("recvImmediateProxyAll(ProxyDataMsg* impl_msg)",
     (CkCallFnPtr)_call_recvImmediateProxyAll_ProxyDataMsg, CMessage_ProxyDataMsg::__idx, __idx, 0);

// REG: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
  __idx_recvImmediateResults_ProxyCombinedResultRawMsg = CkRegisterEp("recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg)",
     (CkCallFnPtr)_call_recvImmediateResults_ProxyCombinedResultRawMsg, CMessage_ProxyCombinedResultRawMsg::__idx, __idx, 0);

// REG: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
  __idx_sendProxyListInfo_PatchProxyListMsg = CkRegisterEp("sendProxyListInfo(PatchProxyListMsg* impl_msg)",
     (CkCallFnPtr)_call_sendProxyListInfo_PatchProxyListMsg, CMessage_PatchProxyListMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerProxyMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message RegisterProxyMsg;
*/
CMessage_RegisterProxyMsg::__register("RegisterProxyMsg", sizeof(RegisterProxyMsg),(CkPackFnPtr) RegisterProxyMsg::pack,(CkUnpackFnPtr) RegisterProxyMsg::unpack);

/* REG: message UnregisterProxyMsg;
*/
CMessage_UnregisterProxyMsg::__register("UnregisterProxyMsg", sizeof(UnregisterProxyMsg),(CkPackFnPtr) UnregisterProxyMsg::pack,(CkUnpackFnPtr) UnregisterProxyMsg::unpack);

/* REG: message ProxyResultMsg;
*/
CMessage_ProxyResultMsg::__register("ProxyResultMsg", sizeof(ProxyResultMsg),(CkPackFnPtr) ProxyResultMsg::pack,(CkUnpackFnPtr) ProxyResultMsg::unpack);

/* REG: message ProxySpanningTreeMsg;
*/
CMessage_ProxySpanningTreeMsg::__register("ProxySpanningTreeMsg", sizeof(ProxySpanningTreeMsg),(CkPackFnPtr) ProxySpanningTreeMsg::pack,(CkUnpackFnPtr) ProxySpanningTreeMsg::unpack);

/* REG: message ProxyCombinedResultMsg;
*/
CMessage_ProxyCombinedResultMsg::__register("ProxyCombinedResultMsg", sizeof(ProxyCombinedResultMsg),(CkPackFnPtr) ProxyCombinedResultMsg::pack,(CkUnpackFnPtr) ProxyCombinedResultMsg::unpack);

/* REG: message ProxyCombinedResultRawMsg{
NodeID nodes[];
char isForceNonZero[];
Force forceArr[];
}
;
*/
CMessage_ProxyCombinedResultRawMsg::__register("ProxyCombinedResultRawMsg", sizeof(ProxyCombinedResultRawMsg),(CkPackFnPtr) ProxyCombinedResultRawMsg::pack,(CkUnpackFnPtr) ProxyCombinedResultRawMsg::unpack);

/* REG: message ProxyDataMsg{
CompAtom positionList[];
CompAtom avgPositionList[];
CompAtom velocityList[];
Real intRadList[];
int lcpoTypeList[];
CompAtomExt positionExtList[];
CudaAtom cudaAtomList[];
}
;
*/
CMessage_ProxyDataMsg::__register("ProxyDataMsg", sizeof(ProxyDataMsg),(CkPackFnPtr) ProxyDataMsg::pack,(CkUnpackFnPtr) ProxyDataMsg::unpack);

/* REG: message ProxyGBISP1ResultMsg{
GBReal psiSum[];
}
;
*/
CMessage_ProxyGBISP1ResultMsg::__register("ProxyGBISP1ResultMsg", sizeof(ProxyGBISP1ResultMsg),(CkPackFnPtr) ProxyGBISP1ResultMsg::pack,(CkUnpackFnPtr) ProxyGBISP1ResultMsg::unpack);

/* REG: message ProxyGBISP2DataMsg{
float bornRad[];
}
;
*/
CMessage_ProxyGBISP2DataMsg::__register("ProxyGBISP2DataMsg", sizeof(ProxyGBISP2DataMsg),(CkPackFnPtr) ProxyGBISP2DataMsg::pack,(CkUnpackFnPtr) ProxyGBISP2DataMsg::unpack);

/* REG: message ProxyGBISP2ResultMsg{
GBReal dEdaSum[];
}
;
*/
CMessage_ProxyGBISP2ResultMsg::__register("ProxyGBISP2ResultMsg", sizeof(ProxyGBISP2ResultMsg),(CkPackFnPtr) ProxyGBISP2ResultMsg::pack,(CkUnpackFnPtr) ProxyGBISP2ResultMsg::unpack);

/* REG: message ProxyGBISP3DataMsg{
float dHdrPrefix[];
}
;
*/
CMessage_ProxyGBISP3DataMsg::__register("ProxyGBISP3DataMsg", sizeof(ProxyGBISP3DataMsg),(CkPackFnPtr) ProxyGBISP3DataMsg::pack,(CkUnpackFnPtr) ProxyGBISP3DataMsg::unpack);

/* REG: message ProxyResultVarsizeMsg{
Force forceArr[];
char isZero[];
}
;
*/
CMessage_ProxyResultVarsizeMsg::__register("ProxyResultVarsizeMsg", sizeof(ProxyResultVarsizeMsg),(CkPackFnPtr) ProxyResultVarsizeMsg::pack,(CkUnpackFnPtr) ProxyResultVarsizeMsg::unpack);

/* REG: message ProxyNodeAwareSpanningTreeMsg{
int numPesOfNode[];
int allPes[];
}
;
*/
CMessage_ProxyNodeAwareSpanningTreeMsg::__register("ProxyNodeAwareSpanningTreeMsg", sizeof(ProxyNodeAwareSpanningTreeMsg),(CkPackFnPtr) ProxyNodeAwareSpanningTreeMsg::pack,(CkUnpackFnPtr) ProxyNodeAwareSpanningTreeMsg::unpack);

/* REG: message PatchProxyListMsg{
int patchIDs[];
int proxyListLen[];
int proxyPEs[];
}
;
*/
CMessage_PatchProxyListMsg::__register("PatchProxyListMsg", sizeof(PatchProxyListMsg),(CkPackFnPtr) PatchProxyListMsg::pack,(CkUnpackFnPtr) PatchProxyListMsg::unpack);

/* REG: group ProxyMgr: IrrGroup{
ProxyMgr(void);
void recvRegisterProxy(RegisterProxyMsg* impl_msg);
void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
void recvProxyData(ProxyDataMsg* impl_msg);
void recvImmediateProxyData(ProxyDataMsg* impl_msg);
void recvProxyAll(ProxyDataMsg* impl_msg);
void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
void recvResults(ProxyResultVarsizeMsg* impl_msg);
void recvResults(ProxyResultMsg* impl_msg);
void recvResults(ProxyCombinedResultRawMsg* impl_msg);
void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
void buildProxySpanningTree2(void);
void recvProxies(int pid, const int *list, int n);
void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
void sendResult(ProxyGBISP1ResultMsg* impl_msg);
void recvResult(ProxyGBISP1ResultMsg* impl_msg);
void recvData(ProxyGBISP2DataMsg* impl_msg);
void sendResult(ProxyGBISP2ResultMsg* impl_msg);
void recvResult(ProxyGBISP2ResultMsg* impl_msg);
void recvData(ProxyGBISP3DataMsg* impl_msg);
};
*/
  CkIndex_ProxyMgr::__register("ProxyMgr", sizeof(ProxyMgr));

/* REG: nodegroup NodeProxyMgr: NodeGroup{
NodeProxyMgr(void);
void createProxyInfo(int impl_noname_3);
void recvImmediateProxyData(ProxyDataMsg* impl_msg);
void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
void sendProxyListInfo(PatchProxyListMsg* impl_msg);
};
*/
  CkIndex_NodeProxyMgr::__register("NodeProxyMgr", sizeof(NodeProxyMgr));

}
#endif /* CK_TEMPLATES_ONLY */
