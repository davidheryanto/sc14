/* DEFS: message PmeGridMsg{
float qgrid[];
int zlist[];
char fgrid[];
PmeReduction evir[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeGridMsg::operator new(size_t s){
  return PmeGridMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmeGridMsg::operator new(size_t s, int* sz){
  return PmeGridMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmeGridMsg::operator new(size_t s, int* sz,const int pb){
  return PmeGridMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmeGridMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3) {
  int sizes[4];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  return PmeGridMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_PmeGridMsg::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, const int p) {
  int sizes[4];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  return PmeGridMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_PmeGridMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(char)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN8(sizeof(PmeReduction)*sizes[3]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[4], pb);
}
CMessage_PmeGridMsg::CMessage_PmeGridMsg() {
PmeGridMsg *newmsg = (PmeGridMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->zlist = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fgrid = (char *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->evir = (PmeReduction *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
}
void CMessage_PmeGridMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeGridMsg::pack(PmeGridMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  msg->zlist = (int *) ((char *)msg->zlist - (char *)msg);
  msg->fgrid = (char *) ((char *)msg->fgrid - (char *)msg);
  msg->evir = (PmeReduction *) ((char *)msg->evir - (char *)msg);
  return (void *) msg;
}
PmeGridMsg* CMessage_PmeGridMsg::unpack(void* buf) {
  PmeGridMsg *msg = (PmeGridMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  msg->zlist = (int *) ((size_t)msg->zlist + (char *)msg);
  msg->fgrid = (char *) ((size_t)msg->fgrid + (char *)msg);
  msg->evir = (PmeReduction *) ((size_t)msg->evir + (char *)msg);
  return msg;
}
int CMessage_PmeGridMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeTransMsg{
float qgrid[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeTransMsg::operator new(size_t s){
  return PmeTransMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmeTransMsg::operator new(size_t s, int* sz){
  return PmeTransMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmeTransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeTransMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmeTransMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeTransMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_PmeTransMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeTransMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_PmeTransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_PmeTransMsg::CMessage_PmeTransMsg() {
PmeTransMsg *newmsg = (PmeTransMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_PmeTransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeTransMsg::pack(PmeTransMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  return (void *) msg;
}
PmeTransMsg* CMessage_PmeTransMsg::unpack(void* buf) {
  PmeTransMsg *msg = (PmeTransMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  return msg;
}
int CMessage_PmeTransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeSharedTransMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeSharedTransMsg::operator new(size_t s){
  return PmeSharedTransMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, int* sz){
  return PmeSharedTransMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeSharedTransMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, const int p) {
  return PmeSharedTransMsg::alloc(__idx, s, 0, p);
}
void* CMessage_PmeSharedTransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_PmeSharedTransMsg::CMessage_PmeSharedTransMsg() {
PmeSharedTransMsg *newmsg = (PmeSharedTransMsg *)this;
}
void CMessage_PmeSharedTransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeSharedTransMsg::pack(PmeSharedTransMsg *msg) {
  return (void *) msg;
}
PmeSharedTransMsg* CMessage_PmeSharedTransMsg::unpack(void* buf) {
  PmeSharedTransMsg *msg = (PmeSharedTransMsg *) buf;
  return msg;
}
int CMessage_PmeSharedTransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeUntransMsg{
float qgrid[];
PmeReduction evir[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeUntransMsg::operator new(size_t s){
  return PmeUntransMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int* sz){
  return PmeUntransMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeUntransMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return PmeUntransMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return PmeUntransMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_PmeUntransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(PmeReduction)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb);
}
CMessage_PmeUntransMsg::CMessage_PmeUntransMsg() {
PmeUntransMsg *newmsg = (PmeUntransMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->evir = (PmeReduction *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_PmeUntransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeUntransMsg::pack(PmeUntransMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  msg->evir = (PmeReduction *) ((char *)msg->evir - (char *)msg);
  return (void *) msg;
}
PmeUntransMsg* CMessage_PmeUntransMsg::unpack(void* buf) {
  PmeUntransMsg *msg = (PmeUntransMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  msg->evir = (PmeReduction *) ((size_t)msg->evir + (char *)msg);
  return msg;
}
int CMessage_PmeUntransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeSharedUntransMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeSharedUntransMsg::operator new(size_t s){
  return PmeSharedUntransMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, int* sz){
  return PmeSharedUntransMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeSharedUntransMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, const int p) {
  return PmeSharedUntransMsg::alloc(__idx, s, 0, p);
}
void* CMessage_PmeSharedUntransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_PmeSharedUntransMsg::CMessage_PmeSharedUntransMsg() {
PmeSharedUntransMsg *newmsg = (PmeSharedUntransMsg *)this;
}
void CMessage_PmeSharedUntransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeSharedUntransMsg::pack(PmeSharedUntransMsg *msg) {
  return (void *) msg;
}
PmeSharedUntransMsg* CMessage_PmeSharedUntransMsg::unpack(void* buf) {
  PmeSharedUntransMsg *msg = (PmeSharedUntransMsg *) buf;
  return msg;
}
int CMessage_PmeSharedUntransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PmePencilMap: CkArrayMap{
PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmePencilMap::__idx=0;
/* DEFS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */

/* DEFS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
CkGroupID CProxy_PmePencilMap::ckNew(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int i_a, int i_b, int n_b, int n, const int *d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_d, impl_cnt_d;
  impl_off_d=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_d=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_d,d,impl_cnt_d);
  return CkCreateGroup(CkIndex_PmePencilMap::__idx, CkIndex_PmePencilMap::__idx_PmePencilMap_marshall1, impl_msg);
}
  CProxy_PmePencilMap::CProxy_PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int i_a, int i_b, int n_b, int n, const int *d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_d, impl_cnt_d;
  impl_off_d=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_d=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_d,d,impl_cnt_d);
  ckSetGroupID(CkCreateGroup(CkIndex_PmePencilMap::__idx, CkIndex_PmePencilMap::__idx_PmePencilMap_marshall1, impl_msg));
}
 int CkIndex_PmePencilMap::__idx_PmePencilMap_marshall1=0;
void CkIndex_PmePencilMap::_call_PmePencilMap_marshall1(void* impl_msg,PmePencilMap * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int i_a, int i_b, int n_b, int n, const int *d*/
  PUP::fromMem implP(impl_buf);
  int i_a; implP|i_a;
  int i_b; implP|i_b;
  int n_b; implP|n_b;
  int n; implP|n;
  int impl_off_d, impl_cnt_d; 
  implP|impl_off_d;
  implP|impl_cnt_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *d=(int *)(impl_buf+impl_off_d);
  new (impl_obj) PmePencilMap(i_a, i_b, n_b, n, d);
}
int CkIndex_PmePencilMap::_callmarshall_PmePencilMap_marshall1(char* impl_buf,PmePencilMap * impl_obj) {
  /*Unmarshall pup'd fields: int i_a, int i_b, int n_b, int n, const int *d*/
  PUP::fromMem implP(impl_buf);
  int i_a; implP|i_a;
  int i_b; implP|i_b;
  int n_b; implP|n_b;
  int n; implP|n;
  int impl_off_d, impl_cnt_d; 
  implP|impl_off_d;
  implP|impl_cnt_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *d=(int *)(impl_buf+impl_off_d);
  new (impl_obj) PmePencilMap(i_a, i_b, n_b, n, d);
  return implP.size();
}
void CkIndex_PmePencilMap::_marshallmessagepup_PmePencilMap_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int i_a, int i_b, int n_b, int n, const int *d*/
  PUP::fromMem implP(impl_buf);
  int i_a; implP|i_a;
  int i_b; implP|i_b;
  int n_b; implP|n_b;
  int n; implP|n;
  int impl_off_d, impl_cnt_d; 
  implP|impl_off_d;
  implP|impl_cnt_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *d=(int *)(impl_buf+impl_off_d);
  if (implDestP.hasComments()) implDestP.comment("i_a");
  implDestP|i_a;
  if (implDestP.hasComments()) implDestP.comment("i_b");
  implDestP|i_b;
  if (implDestP.hasComments()) implDestP.comment("n_b");
  implDestP|n_b;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("d");
  implDestP.synchronize(PUP::sync_begin_array);
  { for (int impl_i=0;impl_i*(sizeof(*d))<impl_cnt_d;impl_i++) { 
      implDestP.synchronize(PUP::sync_item);
      implDestP|d[impl_i];
  } } 
  implDestP.synchronize(PUP::sync_end_array);
}

/* DEFS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmePencilMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,PmePencilMap::isIrreducible());
// REG: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
  __idx_PmePencilMap_marshall1 = CkRegisterEp("PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d)",
     (CkCallFnPtr)_call_PmePencilMap_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_PmePencilMap_marshall1,(CkMarshallUnpackFn)_callmarshall_PmePencilMap_marshall1);
  CkRegisterMessagePupFn(__idx_PmePencilMap_marshall1,(CkMessagePupFn)_marshallmessagepup_PmePencilMap_marshall1);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmePencilInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmePencilInitMsg::operator new(size_t s){
  return PmePencilInitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, int* sz){
  return PmePencilInitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, int* sz,const int pb){
  return PmePencilInitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, const int p) {
  return PmePencilInitMsg::alloc(__idx, s, 0, p);
}
void* CMessage_PmePencilInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_PmePencilInitMsg::CMessage_PmePencilInitMsg() {
PmePencilInitMsg *newmsg = (PmePencilInitMsg *)this;
}
void CMessage_PmePencilInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmePencilInitMsg::pack(PmePencilInitMsg *msg) {
  return (void *) msg;
}
PmePencilInitMsg* CMessage_PmePencilInitMsg::unpack(void* buf) {
  PmePencilInitMsg *msg = (PmePencilInitMsg *) buf;
  return msg;
}
int CMessage_PmePencilInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeAckMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeAckMsg::operator new(size_t s){
  return PmeAckMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_PmeAckMsg::operator new(size_t s, int* sz){
  return PmeAckMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_PmeAckMsg::operator new(size_t s, int* sz,const int pb){
  return PmeAckMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_PmeAckMsg::operator new(size_t s, const int p) {
  return PmeAckMsg::alloc(__idx, s, 0, p);
}
void* CMessage_PmeAckMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_PmeAckMsg::CMessage_PmeAckMsg() {
PmeAckMsg *newmsg = (PmeAckMsg *)this;
}
void CMessage_PmeAckMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeAckMsg::pack(PmeAckMsg *msg) {
  return (void *) msg;
}
PmeAckMsg* CMessage_PmeAckMsg::unpack(void* buf) {
  PmeAckMsg *msg = (PmeAckMsg *) buf;
  return msg;
}
int CMessage_PmeAckMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array PmeZPencil: ArrayElement{
PmeZPencil(CkMigrateMessage* impl_msg);
PmeZPencil(void);
void recvGrid(PmeGridMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(PmePencilInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmeZPencil::__idx=0;
/* DEFS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: PmeZPencil(void);
 */
void CProxyElement_PmeZPencil::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_PmeZPencil::__idx_PmeZPencil_void,onPE);
}

/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvGrid(PmeGridMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_recvGrid_PmeGridMsg,0);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_recvUntrans_PmeUntransMsg,0);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_recvAck_PmeAckMsg,0);
}

/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxyElement_PmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe, int done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|done;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_dummyRecvGrid_marshall5,0);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_init_PmePencilInitMsg,0);
}

/* DEFS: PmeZPencil(CkMigrateMessage* impl_msg);
 */
 int CkIndex_PmeZPencil::__idx_PmeZPencil_CkMigrateMessage=0;
void CkIndex_PmeZPencil::_call_PmeZPencil_CkMigrateMessage(void* impl_msg,PmeZPencil * impl_obj)
{
  new (impl_obj) PmeZPencil((CkMigrateMessage*)impl_msg);
}

/* DEFS: PmeZPencil(void);
 */
CkArrayID CProxy_PmeZPencil::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_PmeZPencil::__idx_PmeZPencil_void,opts);
}
CkArrayID CProxy_PmeZPencil::ckNew(const int s1, const int s2, const int s3)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_PmeZPencil::__idx_PmeZPencil_void,CkArrayOptions(s1, s2, s3));
}
 int CkIndex_PmeZPencil::__idx_PmeZPencil_void=0;
void CkIndex_PmeZPencil::_call_PmeZPencil_void(void* impl_msg,PmeZPencil * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) PmeZPencil();
}

/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvGrid(PmeGridMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::__idx_recvGrid_PmeGridMsg,0);
}
 int CkIndex_PmeZPencil::__idx_recvGrid_PmeGridMsg=0;
void CkIndex_PmeZPencil::_call_recvGrid_PmeGridMsg(void* impl_msg,PmeZPencil * impl_obj)
{
  impl_obj->recvGrid((PmeGridMsg*)impl_msg);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::__idx_recvUntrans_PmeUntransMsg,0);
}
 int CkIndex_PmeZPencil::__idx_recvUntrans_PmeUntransMsg=0;
void CkIndex_PmeZPencil::_call_recvUntrans_PmeUntransMsg(void* impl_msg,PmeZPencil * impl_obj)
{
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::__idx_recvAck_PmeAckMsg,0);
}
 int CkIndex_PmeZPencil::__idx_recvAck_PmeAckMsg=0;
void CkIndex_PmeZPencil::_call_recvAck_PmeAckMsg(void* impl_msg,PmeZPencil * impl_obj)
{
  impl_obj->recvAck((PmeAckMsg*)impl_msg);
}

/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxy_PmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe, int done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|done;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::__idx_dummyRecvGrid_marshall5,0);
}
 int CkIndex_PmeZPencil::__idx_dummyRecvGrid_marshall5=0;
void CkIndex_PmeZPencil::_call_dummyRecvGrid_marshall5(void* impl_msg,PmeZPencil * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int pe, int done*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  int done; implP|done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->dummyRecvGrid(pe, done);
}
int CkIndex_PmeZPencil::_callmarshall_dummyRecvGrid_marshall5(char* impl_buf,PmeZPencil * impl_obj) {
  /*Unmarshall pup'd fields: int pe, int done*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  int done; implP|done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->dummyRecvGrid(pe, done);
  return implP.size();
}
void CkIndex_PmeZPencil::_marshallmessagepup_dummyRecvGrid_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int pe, int done*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  int done; implP|done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("done");
  implDestP|done;
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxy_PmeZPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::__idx_init_PmePencilInitMsg,0);
}
 int CkIndex_PmeZPencil::__idx_init_PmePencilInitMsg=0;
void CkIndex_PmeZPencil::_call_init_PmePencilInitMsg(void* impl_msg,PmeZPencil * impl_obj)
{
  impl_obj->init((PmePencilInitMsg*)impl_msg);
}

/* DEFS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: PmeZPencil(void);
 */

/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvGrid(PmeGridMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_recvGrid_PmeGridMsg,0);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_recvUntrans_PmeUntransMsg,0);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_recvAck_PmeAckMsg,0);
}

/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxySection_PmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe, int done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|done;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_dummyRecvGrid_marshall5,0);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxySection_PmeZPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::__idx_init_PmePencilInitMsg,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmeZPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: PmeZPencil(CkMigrateMessage* impl_msg);
  __idx_PmeZPencil_CkMigrateMessage = CkRegisterEp("PmeZPencil(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_PmeZPencil_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_PmeZPencil_CkMigrateMessage);

// REG: PmeZPencil(void);
  __idx_PmeZPencil_void = CkRegisterEp("PmeZPencil(void)",
     (CkCallFnPtr)_call_PmeZPencil_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_PmeZPencil_void);

// REG: void recvGrid(PmeGridMsg* impl_msg);
  __idx_recvGrid_PmeGridMsg = CkRegisterEp("recvGrid(PmeGridMsg* impl_msg)",
     (CkCallFnPtr)_call_recvGrid_PmeGridMsg, CMessage_PmeGridMsg::__idx, __idx, 0);

// REG: void recvUntrans(PmeUntransMsg* impl_msg);
  __idx_recvUntrans_PmeUntransMsg = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUntrans_PmeUntransMsg, CMessage_PmeUntransMsg::__idx, __idx, 0);

// REG: void recvAck(PmeAckMsg* impl_msg);
  __idx_recvAck_PmeAckMsg = CkRegisterEp("recvAck(PmeAckMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAck_PmeAckMsg, CMessage_PmeAckMsg::__idx, __idx, 0);

// REG: void dummyRecvGrid(int pe, int done);
  __idx_dummyRecvGrid_marshall5 = CkRegisterEp("dummyRecvGrid(int pe, int done)",
     (CkCallFnPtr)_call_dummyRecvGrid_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_dummyRecvGrid_marshall5,(CkMarshallUnpackFn)_callmarshall_dummyRecvGrid_marshall5);
  CkRegisterMessagePupFn(__idx_dummyRecvGrid_marshall5,(CkMessagePupFn)_marshallmessagepup_dummyRecvGrid_marshall5);

// REG: void init(PmePencilInitMsg* impl_msg);
  __idx_init_PmePencilInitMsg = CkRegisterEp("init(PmePencilInitMsg* impl_msg)",
     (CkCallFnPtr)_call_init_PmePencilInitMsg, CMessage_PmePencilInitMsg::__idx, __idx, 0);

  PmeZPencil::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

PmeZPencil_SDAG_CODE_DEF


/* DEFS: array PmeYPencil: ArrayElement{
PmeYPencil(CkMigrateMessage* impl_msg);
PmeYPencil(void);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmeYPencil::__idx=0;
/* DEFS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: PmeYPencil(void);
 */
void CProxyElement_PmeYPencil::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_PmeYPencil::__idx_PmeYPencil_void,onPE);
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_recvTrans_PmeTransMsg,0);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_recvUntrans_PmeUntransMsg,0);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_recvAck_PmeAckMsg,0);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_init_PmePencilInitMsg,0);
}

/* DEFS: PmeYPencil(CkMigrateMessage* impl_msg);
 */
 int CkIndex_PmeYPencil::__idx_PmeYPencil_CkMigrateMessage=0;
void CkIndex_PmeYPencil::_call_PmeYPencil_CkMigrateMessage(void* impl_msg,PmeYPencil * impl_obj)
{
  new (impl_obj) PmeYPencil((CkMigrateMessage*)impl_msg);
}

/* DEFS: PmeYPencil(void);
 */
CkArrayID CProxy_PmeYPencil::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_PmeYPencil::__idx_PmeYPencil_void,opts);
}
CkArrayID CProxy_PmeYPencil::ckNew(const int s1, const int s2, const int s3)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_PmeYPencil::__idx_PmeYPencil_void,CkArrayOptions(s1, s2, s3));
}
 int CkIndex_PmeYPencil::__idx_PmeYPencil_void=0;
void CkIndex_PmeYPencil::_call_PmeYPencil_void(void* impl_msg,PmeYPencil * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) PmeYPencil();
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::__idx_recvTrans_PmeTransMsg,0);
}
 int CkIndex_PmeYPencil::__idx_recvTrans_PmeTransMsg=0;
void CkIndex_PmeYPencil::_call_recvTrans_PmeTransMsg(void* impl_msg,PmeYPencil * impl_obj)
{
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::__idx_recvUntrans_PmeUntransMsg,0);
}
 int CkIndex_PmeYPencil::__idx_recvUntrans_PmeUntransMsg=0;
void CkIndex_PmeYPencil::_call_recvUntrans_PmeUntransMsg(void* impl_msg,PmeYPencil * impl_obj)
{
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::__idx_recvAck_PmeAckMsg,0);
}
 int CkIndex_PmeYPencil::__idx_recvAck_PmeAckMsg=0;
void CkIndex_PmeYPencil::_call_recvAck_PmeAckMsg(void* impl_msg,PmeYPencil * impl_obj)
{
  impl_obj->recvAck((PmeAckMsg*)impl_msg);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxy_PmeYPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::__idx_init_PmePencilInitMsg,0);
}
 int CkIndex_PmeYPencil::__idx_init_PmePencilInitMsg=0;
void CkIndex_PmeYPencil::_call_init_PmePencilInitMsg(void* impl_msg,PmeYPencil * impl_obj)
{
  impl_obj->init((PmePencilInitMsg*)impl_msg);
}

/* DEFS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: PmeYPencil(void);
 */

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_recvTrans_PmeTransMsg,0);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_recvUntrans_PmeUntransMsg,0);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_recvAck_PmeAckMsg,0);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxySection_PmeYPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::__idx_init_PmePencilInitMsg,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmeYPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: PmeYPencil(CkMigrateMessage* impl_msg);
  __idx_PmeYPencil_CkMigrateMessage = CkRegisterEp("PmeYPencil(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_PmeYPencil_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_PmeYPencil_CkMigrateMessage);

// REG: PmeYPencil(void);
  __idx_PmeYPencil_void = CkRegisterEp("PmeYPencil(void)",
     (CkCallFnPtr)_call_PmeYPencil_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_PmeYPencil_void);

// REG: void recvTrans(PmeTransMsg* impl_msg);
  __idx_recvTrans_PmeTransMsg = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvTrans_PmeTransMsg, CMessage_PmeTransMsg::__idx, __idx, 0);

// REG: void recvUntrans(PmeUntransMsg* impl_msg);
  __idx_recvUntrans_PmeUntransMsg = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUntrans_PmeUntransMsg, CMessage_PmeUntransMsg::__idx, __idx, 0);

// REG: void recvAck(PmeAckMsg* impl_msg);
  __idx_recvAck_PmeAckMsg = CkRegisterEp("recvAck(PmeAckMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAck_PmeAckMsg, CMessage_PmeAckMsg::__idx, __idx, 0);

// REG: void init(PmePencilInitMsg* impl_msg);
  __idx_init_PmePencilInitMsg = CkRegisterEp("init(PmePencilInitMsg* impl_msg)",
     (CkCallFnPtr)_call_init_PmePencilInitMsg, CMessage_PmePencilInitMsg::__idx, __idx, 0);

  PmeYPencil::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

PmeYPencil_SDAG_CODE_DEF


/* DEFS: array PmeXPencil: ArrayElement{
PmeXPencil(CkMigrateMessage* impl_msg);
PmeXPencil(void);
void recvTrans(PmeTransMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmeXPencil::__idx=0;
/* DEFS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: PmeXPencil(void);
 */
void CProxyElement_PmeXPencil::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_PmeXPencil::__idx_PmeXPencil_void,onPE);
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_PmeXPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::__idx_recvTrans_PmeTransMsg,0);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxyElement_PmeXPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::__idx_init_PmePencilInitMsg,0);
}

/* DEFS: PmeXPencil(CkMigrateMessage* impl_msg);
 */
 int CkIndex_PmeXPencil::__idx_PmeXPencil_CkMigrateMessage=0;
void CkIndex_PmeXPencil::_call_PmeXPencil_CkMigrateMessage(void* impl_msg,PmeXPencil * impl_obj)
{
  new (impl_obj) PmeXPencil((CkMigrateMessage*)impl_msg);
}

/* DEFS: PmeXPencil(void);
 */
CkArrayID CProxy_PmeXPencil::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_PmeXPencil::__idx_PmeXPencil_void,opts);
}
CkArrayID CProxy_PmeXPencil::ckNew(const int s1, const int s2, const int s3)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_PmeXPencil::__idx_PmeXPencil_void,CkArrayOptions(s1, s2, s3));
}
 int CkIndex_PmeXPencil::__idx_PmeXPencil_void=0;
void CkIndex_PmeXPencil::_call_PmeXPencil_void(void* impl_msg,PmeXPencil * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) PmeXPencil();
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_PmeXPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeXPencil::__idx_recvTrans_PmeTransMsg,0);
}
 int CkIndex_PmeXPencil::__idx_recvTrans_PmeTransMsg=0;
void CkIndex_PmeXPencil::_call_recvTrans_PmeTransMsg(void* impl_msg,PmeXPencil * impl_obj)
{
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxy_PmeXPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeXPencil::__idx_init_PmePencilInitMsg,0);
}
 int CkIndex_PmeXPencil::__idx_init_PmePencilInitMsg=0;
void CkIndex_PmeXPencil::_call_init_PmePencilInitMsg(void* impl_msg,PmeXPencil * impl_obj)
{
  impl_obj->init((PmePencilInitMsg*)impl_msg);
}

/* DEFS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: PmeXPencil(void);
 */

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_PmeXPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::__idx_recvTrans_PmeTransMsg,0);
}

/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxySection_PmeXPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::__idx_init_PmePencilInitMsg,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmeXPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: PmeXPencil(CkMigrateMessage* impl_msg);
  __idx_PmeXPencil_CkMigrateMessage = CkRegisterEp("PmeXPencil(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_PmeXPencil_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_PmeXPencil_CkMigrateMessage);

// REG: PmeXPencil(void);
  __idx_PmeXPencil_void = CkRegisterEp("PmeXPencil(void)",
     (CkCallFnPtr)_call_PmeXPencil_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_PmeXPencil_void);

// REG: void recvTrans(PmeTransMsg* impl_msg);
  __idx_recvTrans_PmeTransMsg = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvTrans_PmeTransMsg, CMessage_PmeTransMsg::__idx, __idx, 0);

// REG: void init(PmePencilInitMsg* impl_msg);
  __idx_init_PmePencilInitMsg = CkRegisterEp("init(PmePencilInitMsg* impl_msg)",
     (CkCallFnPtr)_call_init_PmePencilInitMsg, CMessage_PmePencilInitMsg::__idx, __idx, 0);

  PmeXPencil::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

PmeXPencil_SDAG_CODE_DEF


/* DEFS: nodegroup NodePmeMgr: NodeGroup{
NodePmeMgr(void);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NodePmeMgr::__idx=0;
/* DEFS: NodePmeMgr(void);
 */

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgNodeBranch(CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

/* DEFS: NodePmeMgr(void);
 */
CkGroupID CProxy_NodePmeMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateNodeGroup(CkIndex_NodePmeMgr::__idx, CkIndex_NodePmeMgr::__idx_NodePmeMgr_void, impl_msg);
}
 int CkIndex_NodePmeMgr::__idx_NodePmeMgr_void=0;
void CkIndex_NodePmeMgr::_call_NodePmeMgr_void(void* impl_msg,NodePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) NodePmeMgr();
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
 int CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg=0;
void CkIndex_NodePmeMgr::_call_recvTrans_PmeTransMsg(void* impl_msg,NodePmeMgr * impl_obj)
{
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
 int CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg=0;
void CkIndex_NodePmeMgr::_call_recvUntrans_PmeUntransMsg(void* impl_msg,NodePmeMgr * impl_obj)
{
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}

/* DEFS: NodePmeMgr(void);
 */

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NodePmeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,NodePmeMgr::isIrreducible());
// REG: NodePmeMgr(void);
  __idx_NodePmeMgr_void = CkRegisterEp("NodePmeMgr(void)",
     (CkCallFnPtr)_call_NodePmeMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_NodePmeMgr_void);

// REG: void recvTrans(PmeTransMsg* impl_msg);
  __idx_recvTrans_PmeTransMsg = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvTrans_PmeTransMsg, CMessage_PmeTransMsg::__idx, __idx, 0);

// REG: void recvUntrans(PmeUntransMsg* impl_msg);
  __idx_recvUntrans_PmeUntransMsg = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUntrans_PmeUntransMsg, CMessage_PmeUntransMsg::__idx, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputePmeMgr: IrrGroup{
ComputePmeMgr(void);
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void sendGrid(void);
void recvGrid(PmeGridMsg* impl_msg);
void gridCalc1(void);
void sendTransBarrier(void);
void sendTrans(void);
void recvSharedTrans(PmeSharedTransMsg* impl_msg);
void recvTrans(PmeTransMsg* impl_msg);
void gridCalc2(void);
void gridCalc2R(void);
void sendUntrans(void);
void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void gridCalc3(void);
void sendUngrid(void);
void recvUngrid(PmeGridMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void ungridCalc(void);
void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputePmeMgr::__idx=0;
/* DEFS: ComputePmeMgr(void);
 */

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendGrid(void);
 */
void CProxyElement_ComputePmeMgr::sendGrid(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void gridCalc1(void);
 */
void CProxyElement_ComputePmeMgr::gridCalc1(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendTransBarrier(void);
 */
void CProxyElement_ComputePmeMgr::sendTransBarrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendTrans(void);
 */
void CProxyElement_ComputePmeMgr::sendTrans(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void gridCalc2(void);
 */
void CProxyElement_ComputePmeMgr::gridCalc2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void gridCalc2R(void);
 */
void CProxyElement_ComputePmeMgr::gridCalc2R(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendUntrans(void);
 */
void CProxyElement_ComputePmeMgr::sendUntrans(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void gridCalc3(void);
 */
void CProxyElement_ComputePmeMgr::gridCalc3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void sendUngrid(void);
 */
void CProxyElement_ComputePmeMgr::sendUngrid(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void ungridCalc(void);
 */
void CProxyElement_ComputePmeMgr::ungridCalc(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
void CProxyElement_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}

/* DEFS: ComputePmeMgr(void);
 */
CkGroupID CProxy_ComputePmeMgr::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  return CkCreateGroup(CkIndex_ComputePmeMgr::__idx, CkIndex_ComputePmeMgr::__idx_ComputePmeMgr_void, impl_msg);
}
 int CkIndex_ComputePmeMgr::__idx_ComputePmeMgr_void=0;
void CkIndex_ComputePmeMgr::_call_ComputePmeMgr_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) ComputePmeMgr();
}

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::initialize(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::initialize(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg=0;
void CkIndex_ComputePmeMgr::_call_initialize_CkQdMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->initialize((CkQdMsg*)impl_msg);
}

/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg=0;
void CkIndex_ComputePmeMgr::_call_initialize_pencils_CkQdMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->initialize_pencils((CkQdMsg*)impl_msg);
}

/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg=0;
void CkIndex_ComputePmeMgr::_call_activate_pencils_CkQdMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->activate_pencils((CkQdMsg*)impl_msg);
}

/* DEFS: void sendGrid(void);
 */
void CProxy_ComputePmeMgr::sendGrid(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendGrid(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendGrid(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_sendGrid_void=0;
void CkIndex_ComputePmeMgr::_call_sendGrid_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->sendGrid();
}

/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg=0;
void CkIndex_ComputePmeMgr::_call_recvGrid_PmeGridMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvGrid((PmeGridMsg*)impl_msg);
}

/* DEFS: void gridCalc1(void);
 */
void CProxy_ComputePmeMgr::gridCalc1(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc1(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc1(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_gridCalc1_void=0;
void CkIndex_ComputePmeMgr::_call_gridCalc1_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->gridCalc1();
}

/* DEFS: void sendTransBarrier(void);
 */
void CProxy_ComputePmeMgr::sendTransBarrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendTransBarrier(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendTransBarrier(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void=0;
void CkIndex_ComputePmeMgr::_call_sendTransBarrier_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->sendTransBarrier();
}

/* DEFS: void sendTrans(void);
 */
void CProxy_ComputePmeMgr::sendTrans(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendTrans(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendTrans(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_sendTrans_void=0;
void CkIndex_ComputePmeMgr::_call_sendTrans_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->sendTrans();
}

/* DEFS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg=0;
void CkIndex_ComputePmeMgr::_call_recvSharedTrans_PmeSharedTransMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvSharedTrans((PmeSharedTransMsg*)impl_msg);
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg=0;
void CkIndex_ComputePmeMgr::_call_recvTrans_PmeTransMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}

/* DEFS: void gridCalc2(void);
 */
void CProxy_ComputePmeMgr::gridCalc2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc2(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc2(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_gridCalc2_void=0;
void CkIndex_ComputePmeMgr::_call_gridCalc2_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->gridCalc2();
}

/* DEFS: void gridCalc2R(void);
 */
void CProxy_ComputePmeMgr::gridCalc2R(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc2R(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc2R(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_gridCalc2R_void=0;
void CkIndex_ComputePmeMgr::_call_gridCalc2R_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->gridCalc2R();
}

/* DEFS: void sendUntrans(void);
 */
void CProxy_ComputePmeMgr::sendUntrans(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendUntrans(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendUntrans(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_sendUntrans_void=0;
void CkIndex_ComputePmeMgr::_call_sendUntrans_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->sendUntrans();
}

/* DEFS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg=0;
void CkIndex_ComputePmeMgr::_call_recvSharedUntrans_PmeSharedUntransMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvSharedUntrans((PmeSharedUntransMsg*)impl_msg);
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg=0;
void CkIndex_ComputePmeMgr::_call_recvUntrans_PmeUntransMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}

/* DEFS: void gridCalc3(void);
 */
void CProxy_ComputePmeMgr::gridCalc3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc3(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc3(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_gridCalc3_void=0;
void CkIndex_ComputePmeMgr::_call_gridCalc3_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->gridCalc3();
}

/* DEFS: void sendUngrid(void);
 */
void CProxy_ComputePmeMgr::sendUngrid(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendUngrid(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendUngrid(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_sendUngrid_void=0;
void CkIndex_ComputePmeMgr::_call_sendUngrid_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->sendUngrid();
}

/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg=0;
void CkIndex_ComputePmeMgr::_call_recvUngrid_PmeGridMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvUngrid((PmeGridMsg*)impl_msg);
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg=0;
void CkIndex_ComputePmeMgr::_call_recvAck_PmeAckMsg(void* impl_msg,ComputePmeMgr * impl_obj)
{
  impl_obj->recvAck((PmeAckMsg*)impl_msg);
}

/* DEFS: void ungridCalc(void);
 */
void CProxy_ComputePmeMgr::ungridCalc(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::ungridCalc(int npes, int *pes) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::ungridCalc(CmiGroup &grp) {
  void *impl_msg = CkAllocSysMsg();
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_ungridCalc_void=0;
void CkIndex_ComputePmeMgr::_call_ungridCalc_void(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->ungridCalc();
}

/* DEFS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
void CProxy_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID(), grp,0);
}
 int CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22=0;
void CkIndex_ComputePmeMgr::_call_recvArrays_marshall22(void* impl_msg,ComputePmeMgr * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  CProxy_PmeXPencil impl_noname_0; implP|impl_noname_0;
  CProxy_PmeYPencil impl_noname_1; implP|impl_noname_1;
  CProxy_PmeZPencil impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvArrays(impl_noname_0, impl_noname_1, impl_noname_2);
}
int CkIndex_ComputePmeMgr::_callmarshall_recvArrays_marshall22(char* impl_buf,ComputePmeMgr * impl_obj) {
  /*Unmarshall pup'd fields: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  CProxy_PmeXPencil impl_noname_0; implP|impl_noname_0;
  CProxy_PmeYPencil impl_noname_1; implP|impl_noname_1;
  CProxy_PmeZPencil impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvArrays(impl_noname_0, impl_noname_1, impl_noname_2);
  return implP.size();
}
void CkIndex_ComputePmeMgr::_marshallmessagepup_recvArrays_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  CProxy_PmeXPencil impl_noname_0; implP|impl_noname_0;
  CProxy_PmeYPencil impl_noname_1; implP|impl_noname_1;
  CProxy_PmeZPencil impl_noname_2; implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}

/* DEFS: ComputePmeMgr(void);
 */

/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_initialize_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_initialize_pencils_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_activate_pencils_CkQdMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendGrid(void);
 */
void CProxySection_ComputePmeMgr::sendGrid(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendGrid_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvGrid_PmeGridMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void gridCalc1(void);
 */
void CProxySection_ComputePmeMgr::gridCalc1(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc1_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendTransBarrier(void);
 */
void CProxySection_ComputePmeMgr::sendTransBarrier(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendTransBarrier_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendTrans(void);
 */
void CProxySection_ComputePmeMgr::sendTrans(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendTrans_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvSharedTrans_PmeSharedTransMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvTrans_PmeTransMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void gridCalc2(void);
 */
void CProxySection_ComputePmeMgr::gridCalc2(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc2_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void gridCalc2R(void);
 */
void CProxySection_ComputePmeMgr::gridCalc2R(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc2R_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendUntrans(void);
 */
void CProxySection_ComputePmeMgr::sendUntrans(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendUntrans_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvSharedUntrans_PmeSharedUntransMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvUntrans_PmeUntransMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void gridCalc3(void);
 */
void CProxySection_ComputePmeMgr::gridCalc3(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_gridCalc3_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void sendUngrid(void);
 */
void CProxySection_ComputePmeMgr::sendUngrid(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_sendUngrid_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvUngrid_PmeGridMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvAck_PmeAckMsg, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void ungridCalc(void);
 */
void CProxySection_ComputePmeMgr::ungridCalc(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_ungridCalc_void, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

/* DEFS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
void CProxySection_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeXPencil &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeYPencil &)impl_noname_1;
    //Have to cast away const-ness to get pup routine
    implP|(CProxy_PmeZPencil &)impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::__idx_recvArrays_marshall22, impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputePmeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputePmeMgr::isIrreducible());
// REG: ComputePmeMgr(void);
  __idx_ComputePmeMgr_void = CkRegisterEp("ComputePmeMgr(void)",
     (CkCallFnPtr)_call_ComputePmeMgr_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_ComputePmeMgr_void);

// REG: void initialize(CkQdMsg* impl_msg);
  __idx_initialize_CkQdMsg = CkRegisterEp("initialize(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_initialize_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void initialize_pencils(CkQdMsg* impl_msg);
  __idx_initialize_pencils_CkQdMsg = CkRegisterEp("initialize_pencils(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_initialize_pencils_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void activate_pencils(CkQdMsg* impl_msg);
  __idx_activate_pencils_CkQdMsg = CkRegisterEp("activate_pencils(CkQdMsg* impl_msg)",
     (CkCallFnPtr)_call_activate_pencils_CkQdMsg, CMessage_CkQdMsg::__idx, __idx, 0);

// REG: void sendGrid(void);
  __idx_sendGrid_void = CkRegisterEp("sendGrid(void)",
     (CkCallFnPtr)_call_sendGrid_void, 0, __idx, 0);

// REG: void recvGrid(PmeGridMsg* impl_msg);
  __idx_recvGrid_PmeGridMsg = CkRegisterEp("recvGrid(PmeGridMsg* impl_msg)",
     (CkCallFnPtr)_call_recvGrid_PmeGridMsg, CMessage_PmeGridMsg::__idx, __idx, 0);

// REG: void gridCalc1(void);
  __idx_gridCalc1_void = CkRegisterEp("gridCalc1(void)",
     (CkCallFnPtr)_call_gridCalc1_void, 0, __idx, 0);

// REG: void sendTransBarrier(void);
  __idx_sendTransBarrier_void = CkRegisterEp("sendTransBarrier(void)",
     (CkCallFnPtr)_call_sendTransBarrier_void, 0, __idx, 0);

// REG: void sendTrans(void);
  __idx_sendTrans_void = CkRegisterEp("sendTrans(void)",
     (CkCallFnPtr)_call_sendTrans_void, 0, __idx, 0);

// REG: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
  __idx_recvSharedTrans_PmeSharedTransMsg = CkRegisterEp("recvSharedTrans(PmeSharedTransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvSharedTrans_PmeSharedTransMsg, CMessage_PmeSharedTransMsg::__idx, __idx, 0);

// REG: void recvTrans(PmeTransMsg* impl_msg);
  __idx_recvTrans_PmeTransMsg = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvTrans_PmeTransMsg, CMessage_PmeTransMsg::__idx, __idx, 0);

// REG: void gridCalc2(void);
  __idx_gridCalc2_void = CkRegisterEp("gridCalc2(void)",
     (CkCallFnPtr)_call_gridCalc2_void, 0, __idx, 0);

// REG: void gridCalc2R(void);
  __idx_gridCalc2R_void = CkRegisterEp("gridCalc2R(void)",
     (CkCallFnPtr)_call_gridCalc2R_void, 0, __idx, 0);

// REG: void sendUntrans(void);
  __idx_sendUntrans_void = CkRegisterEp("sendUntrans(void)",
     (CkCallFnPtr)_call_sendUntrans_void, 0, __idx, 0);

// REG: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
  __idx_recvSharedUntrans_PmeSharedUntransMsg = CkRegisterEp("recvSharedUntrans(PmeSharedUntransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvSharedUntrans_PmeSharedUntransMsg, CMessage_PmeSharedUntransMsg::__idx, __idx, 0);

// REG: void recvUntrans(PmeUntransMsg* impl_msg);
  __idx_recvUntrans_PmeUntransMsg = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUntrans_PmeUntransMsg, CMessage_PmeUntransMsg::__idx, __idx, 0);

// REG: void gridCalc3(void);
  __idx_gridCalc3_void = CkRegisterEp("gridCalc3(void)",
     (CkCallFnPtr)_call_gridCalc3_void, 0, __idx, 0);

// REG: void sendUngrid(void);
  __idx_sendUngrid_void = CkRegisterEp("sendUngrid(void)",
     (CkCallFnPtr)_call_sendUngrid_void, 0, __idx, 0);

// REG: void recvUngrid(PmeGridMsg* impl_msg);
  __idx_recvUngrid_PmeGridMsg = CkRegisterEp("recvUngrid(PmeGridMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUngrid_PmeGridMsg, CMessage_PmeGridMsg::__idx, __idx, 0);

// REG: void recvAck(PmeAckMsg* impl_msg);
  __idx_recvAck_PmeAckMsg = CkRegisterEp("recvAck(PmeAckMsg* impl_msg)",
     (CkCallFnPtr)_call_recvAck_PmeAckMsg, CMessage_PmeAckMsg::__idx, __idx, 0);

// REG: void ungridCalc(void);
  __idx_ungridCalc_void = CkRegisterEp("ungridCalc(void)",
     (CkCallFnPtr)_call_ungridCalc_void, 0, __idx, 0);

// REG: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
  __idx_recvArrays_marshall22 = CkRegisterEp("recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2)",
     (CkCallFnPtr)_call_recvArrays_marshall22, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvArrays_marshall22,(CkMarshallUnpackFn)_callmarshall_recvArrays_marshall22);
  CkRegisterMessagePupFn(__idx_recvArrays_marshall22,(CkMessagePupFn)_marshallmessagepup_recvArrays_marshall22);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputePmeMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message PmeGridMsg{
float qgrid[];
int zlist[];
char fgrid[];
PmeReduction evir[];
}
;
*/
CMessage_PmeGridMsg::__register("PmeGridMsg", sizeof(PmeGridMsg),(CkPackFnPtr) PmeGridMsg::pack,(CkUnpackFnPtr) PmeGridMsg::unpack);

/* REG: message PmeTransMsg{
float qgrid[];
}
;
*/
CMessage_PmeTransMsg::__register("PmeTransMsg", sizeof(PmeTransMsg),(CkPackFnPtr) PmeTransMsg::pack,(CkUnpackFnPtr) PmeTransMsg::unpack);

/* REG: message PmeSharedTransMsg;
*/
CMessage_PmeSharedTransMsg::__register("PmeSharedTransMsg", sizeof(PmeSharedTransMsg),(CkPackFnPtr) PmeSharedTransMsg::pack,(CkUnpackFnPtr) PmeSharedTransMsg::unpack);

/* REG: message PmeUntransMsg{
float qgrid[];
PmeReduction evir[];
}
;
*/
CMessage_PmeUntransMsg::__register("PmeUntransMsg", sizeof(PmeUntransMsg),(CkPackFnPtr) PmeUntransMsg::pack,(CkUnpackFnPtr) PmeUntransMsg::unpack);

/* REG: message PmeSharedUntransMsg;
*/
CMessage_PmeSharedUntransMsg::__register("PmeSharedUntransMsg", sizeof(PmeSharedUntransMsg),(CkPackFnPtr) PmeSharedUntransMsg::pack,(CkUnpackFnPtr) PmeSharedUntransMsg::unpack);

/* REG: group PmePencilMap: CkArrayMap{
PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
};
*/
  CkIndex_PmePencilMap::__register("PmePencilMap", sizeof(PmePencilMap));

/* REG: message PmePencilInitMsg;
*/
CMessage_PmePencilInitMsg::__register("PmePencilInitMsg", sizeof(PmePencilInitMsg),(CkPackFnPtr) PmePencilInitMsg::pack,(CkUnpackFnPtr) PmePencilInitMsg::unpack);

/* REG: message PmeAckMsg;
*/
CMessage_PmeAckMsg::__register("PmeAckMsg", sizeof(PmeAckMsg),(CkPackFnPtr) PmeAckMsg::pack,(CkUnpackFnPtr) PmeAckMsg::unpack);

/* REG: array PmeZPencil: ArrayElement{
PmeZPencil(CkMigrateMessage* impl_msg);
PmeZPencil(void);
void recvGrid(PmeGridMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(PmePencilInitMsg* impl_msg);
};
*/
  CkIndex_PmeZPencil::__register("PmeZPencil", sizeof(PmeZPencil));

/* REG: array PmeYPencil: ArrayElement{
PmeYPencil(CkMigrateMessage* impl_msg);
PmeYPencil(void);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
};
*/
  CkIndex_PmeYPencil::__register("PmeYPencil", sizeof(PmeYPencil));

/* REG: array PmeXPencil: ArrayElement{
PmeXPencil(CkMigrateMessage* impl_msg);
PmeXPencil(void);
void recvTrans(PmeTransMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
};
*/
  CkIndex_PmeXPencil::__register("PmeXPencil", sizeof(PmeXPencil));

/* REG: nodegroup NodePmeMgr: NodeGroup{
NodePmeMgr(void);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
};
*/
  CkIndex_NodePmeMgr::__register("NodePmeMgr", sizeof(NodePmeMgr));

/* REG: group ComputePmeMgr: IrrGroup{
ComputePmeMgr(void);
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void sendGrid(void);
void recvGrid(PmeGridMsg* impl_msg);
void gridCalc1(void);
void sendTransBarrier(void);
void sendTrans(void);
void recvSharedTrans(PmeSharedTransMsg* impl_msg);
void recvTrans(PmeTransMsg* impl_msg);
void gridCalc2(void);
void gridCalc2R(void);
void sendUntrans(void);
void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void gridCalc3(void);
void sendUngrid(void);
void recvUngrid(PmeGridMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void ungridCalc(void);
void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
};
*/
  CkIndex_ComputePmeMgr::__register("ComputePmeMgr", sizeof(ComputePmeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
