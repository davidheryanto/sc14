/* DEFS: message OptPmeFFTMsg{
float qgrid[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_OptPmeFFTMsg::operator new(size_t s){
  return OptPmeFFTMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_OptPmeFFTMsg::operator new(size_t s, int* sz){
  return OptPmeFFTMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_OptPmeFFTMsg::operator new(size_t s, int* sz,const int pb){
  return OptPmeFFTMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_OptPmeFFTMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return OptPmeFFTMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_OptPmeFFTMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return OptPmeFFTMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_OptPmeFFTMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_OptPmeFFTMsg::CMessage_OptPmeFFTMsg() {
OptPmeFFTMsg *newmsg = (OptPmeFFTMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_OptPmeFFTMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_OptPmeFFTMsg::pack(OptPmeFFTMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  return (void *) msg;
}
OptPmeFFTMsg* CMessage_OptPmeFFTMsg::unpack(void* buf) {
  OptPmeFFTMsg *msg = (OptPmeFFTMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  return msg;
}
int CMessage_OptPmeFFTMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message OptPmeGridMsg{
float qgrid[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_OptPmeGridMsg::operator new(size_t s){
  return OptPmeGridMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_OptPmeGridMsg::operator new(size_t s, int* sz){
  return OptPmeGridMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_OptPmeGridMsg::operator new(size_t s, int* sz,const int pb){
  return OptPmeGridMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_OptPmeGridMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return OptPmeGridMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_OptPmeGridMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return OptPmeGridMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_OptPmeGridMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb);
}
CMessage_OptPmeGridMsg::CMessage_OptPmeGridMsg() {
OptPmeGridMsg *newmsg = (OptPmeGridMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_OptPmeGridMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_OptPmeGridMsg::pack(OptPmeGridMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  return (void *) msg;
}
OptPmeGridMsg* CMessage_OptPmeGridMsg::unpack(void* buf) {
  OptPmeGridMsg *msg = (OptPmeGridMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  return msg;
}
int CMessage_OptPmeGridMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message OptPmeDummyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_OptPmeDummyMsg::operator new(size_t s){
  return OptPmeDummyMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_OptPmeDummyMsg::operator new(size_t s, int* sz){
  return OptPmeDummyMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_OptPmeDummyMsg::operator new(size_t s, int* sz,const int pb){
  return OptPmeDummyMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_OptPmeDummyMsg::operator new(size_t s, const int p) {
  return OptPmeDummyMsg::alloc(__idx, s, 0, p);
}
void* CMessage_OptPmeDummyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_OptPmeDummyMsg::CMessage_OptPmeDummyMsg() {
OptPmeDummyMsg *newmsg = (OptPmeDummyMsg *)this;
}
void CMessage_OptPmeDummyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_OptPmeDummyMsg::pack(OptPmeDummyMsg *msg) {
  return (void *) msg;
}
OptPmeDummyMsg* CMessage_OptPmeDummyMsg::unpack(void* buf) {
  OptPmeDummyMsg *msg = (OptPmeDummyMsg *) buf;
  return msg;
}
int CMessage_OptPmeDummyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message OptPmePencilInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_OptPmePencilInitMsg::operator new(size_t s){
  return OptPmePencilInitMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_OptPmePencilInitMsg::operator new(size_t s, int* sz){
  return OptPmePencilInitMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_OptPmePencilInitMsg::operator new(size_t s, int* sz,const int pb){
  return OptPmePencilInitMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_OptPmePencilInitMsg::operator new(size_t s, const int p) {
  return OptPmePencilInitMsg::alloc(__idx, s, 0, p);
}
void* CMessage_OptPmePencilInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_OptPmePencilInitMsg::CMessage_OptPmePencilInitMsg() {
OptPmePencilInitMsg *newmsg = (OptPmePencilInitMsg *)this;
}
void CMessage_OptPmePencilInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_OptPmePencilInitMsg::pack(OptPmePencilInitMsg *msg) {
  return (void *) msg;
}
OptPmePencilInitMsg* CMessage_OptPmePencilInitMsg::unpack(void* buf) {
  OptPmePencilInitMsg *msg = (OptPmePencilInitMsg *) buf;
  return msg;
}
int CMessage_OptPmePencilInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array OptPmeZPencil: ArrayElement{
OptPmeZPencil(CkMigrateMessage* impl_msg);
OptPmeZPencil(void);
void recvGrid(OptPmeGridMsg* impl_msg);
void recvUntrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(OptPmePencilInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmeZPencil::__idx=0;
/* DEFS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: OptPmeZPencil(void);
 */
void CProxyElement_OptPmeZPencil::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_OptPmeZPencil::__idx_OptPmeZPencil_void,onPE);
}

/* DEFS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
void CProxyElement_OptPmeZPencil::recvGrid(OptPmeGridMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_recvGrid_OptPmeGridMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
void CProxyElement_OptPmeZPencil::recvUntrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_recvUntrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
void CProxyElement_OptPmeZPencil::many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
void CProxyElement_OptPmeZPencil::many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_many_to_manyRecvGrid_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxyElement_OptPmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_dummyRecvGrid_marshall6,0);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxyElement_OptPmeZPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_init_OptPmePencilInitMsg,0);
}

/* DEFS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */
 int CkIndex_OptPmeZPencil::__idx_OptPmeZPencil_CkMigrateMessage=0;
void CkIndex_OptPmeZPencil::_call_OptPmeZPencil_CkMigrateMessage(void* impl_msg,OptPmeZPencil * impl_obj)
{
  new (impl_obj) OptPmeZPencil((CkMigrateMessage*)impl_msg);
}

/* DEFS: OptPmeZPencil(void);
 */
CkArrayID CProxy_OptPmeZPencil::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_OptPmeZPencil::__idx_OptPmeZPencil_void,opts);
}
CkArrayID CProxy_OptPmeZPencil::ckNew(const int s1, const int s2, const int s3)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_OptPmeZPencil::__idx_OptPmeZPencil_void,CkArrayOptions(s1, s2, s3));
}
 int CkIndex_OptPmeZPencil::__idx_OptPmeZPencil_void=0;
void CkIndex_OptPmeZPencil::_call_OptPmeZPencil_void(void* impl_msg,OptPmeZPencil * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) OptPmeZPencil();
}

/* DEFS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
void CProxy_OptPmeZPencil::recvGrid(OptPmeGridMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeZPencil::__idx_recvGrid_OptPmeGridMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeZPencil::__idx_recvGrid_OptPmeGridMsg=0;
void CkIndex_OptPmeZPencil::_call_recvGrid_OptPmeGridMsg(void* impl_msg,OptPmeZPencil * impl_obj)
{
  impl_obj->recvGrid((OptPmeGridMsg*)impl_msg);
}

/* DEFS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
void CProxy_OptPmeZPencil::recvUntrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeZPencil::__idx_recvUntrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeZPencil::__idx_recvUntrans_OptPmeFFTMsg=0;
void CkIndex_OptPmeZPencil::_call_recvUntrans_OptPmeFFTMsg(void* impl_msg,OptPmeZPencil * impl_obj)
{
  impl_obj->recvUntrans((OptPmeFFTMsg*)impl_msg);
}

/* DEFS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
void CProxy_OptPmeZPencil::many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeZPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeZPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg=0;
void CkIndex_OptPmeZPencil::_call_many_to_manyRecvUntrans_OptPmeDummyMsg(void* impl_msg,OptPmeZPencil * impl_obj)
{
  impl_obj->many_to_manyRecvUntrans((OptPmeDummyMsg*)impl_msg);
}

/* DEFS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
void CProxy_OptPmeZPencil::many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeZPencil::__idx_many_to_manyRecvGrid_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeZPencil::__idx_many_to_manyRecvGrid_OptPmeDummyMsg=0;
void CkIndex_OptPmeZPencil::_call_many_to_manyRecvGrid_OptPmeDummyMsg(void* impl_msg,OptPmeZPencil * impl_obj)
{
  impl_obj->many_to_manyRecvGrid((OptPmeDummyMsg*)impl_msg);
}

/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxy_OptPmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_OptPmeZPencil::__idx_dummyRecvGrid_marshall6,0);
}
 int CkIndex_OptPmeZPencil::__idx_dummyRecvGrid_marshall6=0;
void CkIndex_OptPmeZPencil::_call_dummyRecvGrid_marshall6(void* impl_msg,OptPmeZPencil * impl_obj)
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
int CkIndex_OptPmeZPencil::_callmarshall_dummyRecvGrid_marshall6(char* impl_buf,OptPmeZPencil * impl_obj) {
  /*Unmarshall pup'd fields: int pe, int done*/
  PUP::fromMem implP(impl_buf);
  int pe; implP|pe;
  int done; implP|done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->dummyRecvGrid(pe, done);
  return implP.size();
}
void CkIndex_OptPmeZPencil::_marshallmessagepup_dummyRecvGrid_marshall6(PUP::er &implDestP,void *impl_msg) {
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

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxy_OptPmeZPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeZPencil::__idx_init_OptPmePencilInitMsg,0);
}
 int CkIndex_OptPmeZPencil::__idx_init_OptPmePencilInitMsg=0;
void CkIndex_OptPmeZPencil::_call_init_OptPmePencilInitMsg(void* impl_msg,OptPmeZPencil * impl_obj)
{
  impl_obj->init((OptPmePencilInitMsg*)impl_msg);
}

/* DEFS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: OptPmeZPencil(void);
 */

/* DEFS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
void CProxySection_OptPmeZPencil::recvGrid(OptPmeGridMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_recvGrid_OptPmeGridMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
void CProxySection_OptPmeZPencil::recvUntrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_recvUntrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
void CProxySection_OptPmeZPencil::many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
void CProxySection_OptPmeZPencil::many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_many_to_manyRecvGrid_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxySection_OptPmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_dummyRecvGrid_marshall6,0);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxySection_OptPmeZPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeZPencil::__idx_init_OptPmePencilInitMsg,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmeZPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: OptPmeZPencil(CkMigrateMessage* impl_msg);
  __idx_OptPmeZPencil_CkMigrateMessage = CkRegisterEp("OptPmeZPencil(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_OptPmeZPencil_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_OptPmeZPencil_CkMigrateMessage);

// REG: OptPmeZPencil(void);
  __idx_OptPmeZPencil_void = CkRegisterEp("OptPmeZPencil(void)",
     (CkCallFnPtr)_call_OptPmeZPencil_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_OptPmeZPencil_void);

// REG: void recvGrid(OptPmeGridMsg* impl_msg);
  __idx_recvGrid_OptPmeGridMsg = CkRegisterEp("recvGrid(OptPmeGridMsg* impl_msg)",
     (CkCallFnPtr)_call_recvGrid_OptPmeGridMsg, CMessage_OptPmeGridMsg::__idx, __idx, 0);

// REG: void recvUntrans(OptPmeFFTMsg* impl_msg);
  __idx_recvUntrans_OptPmeFFTMsg = CkRegisterEp("recvUntrans(OptPmeFFTMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUntrans_OptPmeFFTMsg, CMessage_OptPmeFFTMsg::__idx, __idx, 0);

// REG: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
  __idx_many_to_manyRecvUntrans_OptPmeDummyMsg = CkRegisterEp("many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg)",
     (CkCallFnPtr)_call_many_to_manyRecvUntrans_OptPmeDummyMsg, CMessage_OptPmeDummyMsg::__idx, __idx, 0);

// REG: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
  __idx_many_to_manyRecvGrid_OptPmeDummyMsg = CkRegisterEp("many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg)",
     (CkCallFnPtr)_call_many_to_manyRecvGrid_OptPmeDummyMsg, CMessage_OptPmeDummyMsg::__idx, __idx, 0);

// REG: void dummyRecvGrid(int pe, int done);
  __idx_dummyRecvGrid_marshall6 = CkRegisterEp("dummyRecvGrid(int pe, int done)",
     (CkCallFnPtr)_call_dummyRecvGrid_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_dummyRecvGrid_marshall6,(CkMarshallUnpackFn)_callmarshall_dummyRecvGrid_marshall6);
  CkRegisterMessagePupFn(__idx_dummyRecvGrid_marshall6,(CkMessagePupFn)_marshallmessagepup_dummyRecvGrid_marshall6);

// REG: void init(OptPmePencilInitMsg* impl_msg);
  __idx_init_OptPmePencilInitMsg = CkRegisterEp("init(OptPmePencilInitMsg* impl_msg)",
     (CkCallFnPtr)_call_init_OptPmePencilInitMsg, CMessage_OptPmePencilInitMsg::__idx, __idx, 0);

  OptPmeZPencil::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

OptPmeZPencil_SDAG_CODE_DEF


/* DEFS: array OptPmeYPencil: ArrayElement{
OptPmeYPencil(CkMigrateMessage* impl_msg);
OptPmeYPencil(void);
void recvTrans(OptPmeFFTMsg* impl_msg);
void recvUntrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
void init(OptPmePencilInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmeYPencil::__idx=0;
/* DEFS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: OptPmeYPencil(void);
 */
void CProxyElement_OptPmeYPencil::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_OptPmeYPencil::__idx_OptPmeYPencil_void,onPE);
}

/* DEFS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
void CProxyElement_OptPmeYPencil::recvTrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_recvTrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
void CProxyElement_OptPmeYPencil::recvUntrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_recvUntrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
void CProxyElement_OptPmeYPencil::many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
void CProxyElement_OptPmeYPencil::many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxyElement_OptPmeYPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_init_OptPmePencilInitMsg,0);
}

/* DEFS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */
 int CkIndex_OptPmeYPencil::__idx_OptPmeYPencil_CkMigrateMessage=0;
void CkIndex_OptPmeYPencil::_call_OptPmeYPencil_CkMigrateMessage(void* impl_msg,OptPmeYPencil * impl_obj)
{
  new (impl_obj) OptPmeYPencil((CkMigrateMessage*)impl_msg);
}

/* DEFS: OptPmeYPencil(void);
 */
CkArrayID CProxy_OptPmeYPencil::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_OptPmeYPencil::__idx_OptPmeYPencil_void,opts);
}
CkArrayID CProxy_OptPmeYPencil::ckNew(const int s1, const int s2, const int s3)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_OptPmeYPencil::__idx_OptPmeYPencil_void,CkArrayOptions(s1, s2, s3));
}
 int CkIndex_OptPmeYPencil::__idx_OptPmeYPencil_void=0;
void CkIndex_OptPmeYPencil::_call_OptPmeYPencil_void(void* impl_msg,OptPmeYPencil * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) OptPmeYPencil();
}

/* DEFS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
void CProxy_OptPmeYPencil::recvTrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeYPencil::__idx_recvTrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeYPencil::__idx_recvTrans_OptPmeFFTMsg=0;
void CkIndex_OptPmeYPencil::_call_recvTrans_OptPmeFFTMsg(void* impl_msg,OptPmeYPencil * impl_obj)
{
  impl_obj->recvTrans((OptPmeFFTMsg*)impl_msg);
}

/* DEFS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
void CProxy_OptPmeYPencil::recvUntrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeYPencil::__idx_recvUntrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeYPencil::__idx_recvUntrans_OptPmeFFTMsg=0;
void CkIndex_OptPmeYPencil::_call_recvUntrans_OptPmeFFTMsg(void* impl_msg,OptPmeYPencil * impl_obj)
{
  impl_obj->recvUntrans((OptPmeFFTMsg*)impl_msg);
}

/* DEFS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
void CProxy_OptPmeYPencil::many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeYPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeYPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg=0;
void CkIndex_OptPmeYPencil::_call_many_to_manyRecvUntrans_OptPmeDummyMsg(void* impl_msg,OptPmeYPencil * impl_obj)
{
  impl_obj->many_to_manyRecvUntrans((OptPmeDummyMsg*)impl_msg);
}

/* DEFS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
void CProxy_OptPmeYPencil::many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeYPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeYPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg=0;
void CkIndex_OptPmeYPencil::_call_many_to_manyRecvTrans_OptPmeDummyMsg(void* impl_msg,OptPmeYPencil * impl_obj)
{
  impl_obj->many_to_manyRecvTrans((OptPmeDummyMsg*)impl_msg);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxy_OptPmeYPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeYPencil::__idx_init_OptPmePencilInitMsg,0);
}
 int CkIndex_OptPmeYPencil::__idx_init_OptPmePencilInitMsg=0;
void CkIndex_OptPmeYPencil::_call_init_OptPmePencilInitMsg(void* impl_msg,OptPmeYPencil * impl_obj)
{
  impl_obj->init((OptPmePencilInitMsg*)impl_msg);
}

/* DEFS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: OptPmeYPencil(void);
 */

/* DEFS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
void CProxySection_OptPmeYPencil::recvTrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_recvTrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
void CProxySection_OptPmeYPencil::recvUntrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_recvUntrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
void CProxySection_OptPmeYPencil::many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_many_to_manyRecvUntrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
void CProxySection_OptPmeYPencil::many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxySection_OptPmeYPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeYPencil::__idx_init_OptPmePencilInitMsg,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmeYPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: OptPmeYPencil(CkMigrateMessage* impl_msg);
  __idx_OptPmeYPencil_CkMigrateMessage = CkRegisterEp("OptPmeYPencil(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_OptPmeYPencil_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_OptPmeYPencil_CkMigrateMessage);

// REG: OptPmeYPencil(void);
  __idx_OptPmeYPencil_void = CkRegisterEp("OptPmeYPencil(void)",
     (CkCallFnPtr)_call_OptPmeYPencil_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_OptPmeYPencil_void);

// REG: void recvTrans(OptPmeFFTMsg* impl_msg);
  __idx_recvTrans_OptPmeFFTMsg = CkRegisterEp("recvTrans(OptPmeFFTMsg* impl_msg)",
     (CkCallFnPtr)_call_recvTrans_OptPmeFFTMsg, CMessage_OptPmeFFTMsg::__idx, __idx, 0);

// REG: void recvUntrans(OptPmeFFTMsg* impl_msg);
  __idx_recvUntrans_OptPmeFFTMsg = CkRegisterEp("recvUntrans(OptPmeFFTMsg* impl_msg)",
     (CkCallFnPtr)_call_recvUntrans_OptPmeFFTMsg, CMessage_OptPmeFFTMsg::__idx, __idx, 0);

// REG: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
  __idx_many_to_manyRecvUntrans_OptPmeDummyMsg = CkRegisterEp("many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg)",
     (CkCallFnPtr)_call_many_to_manyRecvUntrans_OptPmeDummyMsg, CMessage_OptPmeDummyMsg::__idx, __idx, 0);

// REG: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
  __idx_many_to_manyRecvTrans_OptPmeDummyMsg = CkRegisterEp("many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg)",
     (CkCallFnPtr)_call_many_to_manyRecvTrans_OptPmeDummyMsg, CMessage_OptPmeDummyMsg::__idx, __idx, 0);

// REG: void init(OptPmePencilInitMsg* impl_msg);
  __idx_init_OptPmePencilInitMsg = CkRegisterEp("init(OptPmePencilInitMsg* impl_msg)",
     (CkCallFnPtr)_call_init_OptPmePencilInitMsg, CMessage_OptPmePencilInitMsg::__idx, __idx, 0);

  OptPmeYPencil::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

OptPmeYPencil_SDAG_CODE_DEF


/* DEFS: array OptPmeXPencil: ArrayElement{
OptPmeXPencil(CkMigrateMessage* impl_msg);
OptPmeXPencil(void);
void recvTrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
void recvLattice(const Lattice &l);
void init(OptPmePencilInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmeXPencil::__idx=0;
/* DEFS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: OptPmeXPencil(void);
 */
void CProxyElement_OptPmeXPencil::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_OptPmeXPencil::__idx_OptPmeXPencil_void,onPE);
}

/* DEFS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
void CProxyElement_OptPmeXPencil::recvTrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_recvTrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
void CProxyElement_OptPmeXPencil::many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvLattice(const Lattice &l);
 */
void CProxyElement_OptPmeXPencil::recvLattice(const Lattice &l, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Lattice &l
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)l;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)l;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_recvLattice_marshall4,0+CK_MSG_EXPEDITED);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxyElement_OptPmeXPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_init_OptPmePencilInitMsg,0);
}

/* DEFS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */
 int CkIndex_OptPmeXPencil::__idx_OptPmeXPencil_CkMigrateMessage=0;
void CkIndex_OptPmeXPencil::_call_OptPmeXPencil_CkMigrateMessage(void* impl_msg,OptPmeXPencil * impl_obj)
{
  new (impl_obj) OptPmeXPencil((CkMigrateMessage*)impl_msg);
}

/* DEFS: OptPmeXPencil(void);
 */
CkArrayID CProxy_OptPmeXPencil::ckNew(const CkArrayOptions &opts)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_OptPmeXPencil::__idx_OptPmeXPencil_void,opts);
}
CkArrayID CProxy_OptPmeXPencil::ckNew(const int s1, const int s2, const int s3)
{ 
  void *impl_msg = CkAllocSysMsg();
   return ckCreateArray((CkArrayMessage *)impl_msg,CkIndex_OptPmeXPencil::__idx_OptPmeXPencil_void,CkArrayOptions(s1, s2, s3));
}
 int CkIndex_OptPmeXPencil::__idx_OptPmeXPencil_void=0;
void CkIndex_OptPmeXPencil::_call_OptPmeXPencil_void(void* impl_msg,OptPmeXPencil * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) OptPmeXPencil();
}

/* DEFS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
void CProxy_OptPmeXPencil::recvTrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeXPencil::__idx_recvTrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeXPencil::__idx_recvTrans_OptPmeFFTMsg=0;
void CkIndex_OptPmeXPencil::_call_recvTrans_OptPmeFFTMsg(void* impl_msg,OptPmeXPencil * impl_obj)
{
  impl_obj->recvTrans((OptPmeFFTMsg*)impl_msg);
}

/* DEFS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
void CProxy_OptPmeXPencil::many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeXPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeXPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg=0;
void CkIndex_OptPmeXPencil::_call_many_to_manyRecvTrans_OptPmeDummyMsg(void* impl_msg,OptPmeXPencil * impl_obj)
{
  impl_obj->many_to_manyRecvTrans((OptPmeDummyMsg*)impl_msg);
}

/* DEFS: void recvLattice(const Lattice &l);
 */
void CProxy_OptPmeXPencil::recvLattice(const Lattice &l, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Lattice &l
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)l;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)l;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeXPencil::__idx_recvLattice_marshall4,0+CK_MSG_EXPEDITED);
}
 int CkIndex_OptPmeXPencil::__idx_recvLattice_marshall4=0;
void CkIndex_OptPmeXPencil::_call_recvLattice_marshall4(void* impl_msg,OptPmeXPencil * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Lattice &l*/
  PUP::fromMem implP(impl_buf);
  Lattice l; implP|l;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvLattice(l);
}
int CkIndex_OptPmeXPencil::_callmarshall_recvLattice_marshall4(char* impl_buf,OptPmeXPencil * impl_obj) {
  /*Unmarshall pup'd fields: const Lattice &l*/
  PUP::fromMem implP(impl_buf);
  Lattice l; implP|l;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvLattice(l);
  return implP.size();
}
void CkIndex_OptPmeXPencil::_marshallmessagepup_recvLattice_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const Lattice &l*/
  PUP::fromMem implP(impl_buf);
  Lattice l; implP|l;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("l");
  implDestP|l;
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxy_OptPmeXPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_OptPmeXPencil::__idx_init_OptPmePencilInitMsg,0);
}
 int CkIndex_OptPmeXPencil::__idx_init_OptPmePencilInitMsg=0;
void CkIndex_OptPmeXPencil::_call_init_OptPmePencilInitMsg(void* impl_msg,OptPmeXPencil * impl_obj)
{
  impl_obj->init((OptPmePencilInitMsg*)impl_msg);
}

/* DEFS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DEFS: OptPmeXPencil(void);
 */

/* DEFS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
void CProxySection_OptPmeXPencil::recvTrans(OptPmeFFTMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_recvTrans_OptPmeFFTMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
void CProxySection_OptPmeXPencil::many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_many_to_manyRecvTrans_OptPmeDummyMsg,0+CK_MSG_EXPEDITED);
}

/* DEFS: void recvLattice(const Lattice &l);
 */
void CProxySection_OptPmeXPencil::recvLattice(const Lattice &l, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Lattice &l
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)l;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(Lattice &)l;
  }
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_recvLattice_marshall4,0+CK_MSG_EXPEDITED);
}

/* DEFS: void init(OptPmePencilInitMsg* impl_msg);
 */
void CProxySection_OptPmeXPencil::init(OptPmePencilInitMsg* impl_msg) 
{
  ckCheck();
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_OptPmeXPencil::__idx_init_OptPmePencilInitMsg,0);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmeXPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
// REG: OptPmeXPencil(CkMigrateMessage* impl_msg);
  __idx_OptPmeXPencil_CkMigrateMessage = CkRegisterEp("OptPmeXPencil(CkMigrateMessage* impl_msg)",
     (CkCallFnPtr)_call_OptPmeXPencil_CkMigrateMessage, 0, __idx, 0);
  CkRegisterMigCtor(__idx, __idx_OptPmeXPencil_CkMigrateMessage);

// REG: OptPmeXPencil(void);
  __idx_OptPmeXPencil_void = CkRegisterEp("OptPmeXPencil(void)",
     (CkCallFnPtr)_call_OptPmeXPencil_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_OptPmeXPencil_void);

// REG: void recvTrans(OptPmeFFTMsg* impl_msg);
  __idx_recvTrans_OptPmeFFTMsg = CkRegisterEp("recvTrans(OptPmeFFTMsg* impl_msg)",
     (CkCallFnPtr)_call_recvTrans_OptPmeFFTMsg, CMessage_OptPmeFFTMsg::__idx, __idx, 0);

// REG: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
  __idx_many_to_manyRecvTrans_OptPmeDummyMsg = CkRegisterEp("many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg)",
     (CkCallFnPtr)_call_many_to_manyRecvTrans_OptPmeDummyMsg, CMessage_OptPmeDummyMsg::__idx, __idx, 0);

// REG: void recvLattice(const Lattice &l);
  __idx_recvLattice_marshall4 = CkRegisterEp("recvLattice(const Lattice &l)",
     (CkCallFnPtr)_call_recvLattice_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_recvLattice_marshall4,(CkMarshallUnpackFn)_callmarshall_recvLattice_marshall4);
  CkRegisterMessagePupFn(__idx_recvLattice_marshall4,(CkMessagePupFn)_marshallmessagepup_recvLattice_marshall4);

// REG: void init(OptPmePencilInitMsg* impl_msg);
  __idx_init_OptPmePencilInitMsg = CkRegisterEp("init(OptPmePencilInitMsg* impl_msg)",
     (CkCallFnPtr)_call_init_OptPmePencilInitMsg, CMessage_OptPmePencilInitMsg::__idx, __idx, 0);

  OptPmeXPencil::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

OptPmeXPencil_SDAG_CODE_DEF


/* DEFS: group OptPmePencilMapX: CkArrayMap{
OptPmePencilMapX(int xblock, int yblock, int zblock);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmePencilMapX::__idx=0;
/* DEFS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */

/* DEFS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */
CkGroupID CProxy_OptPmePencilMapX::ckNew(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int xblock, int yblock, int zblock
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|xblock;
    implP|yblock;
    implP|zblock;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|xblock;
    implP|yblock;
    implP|zblock;
  }
  return CkCreateGroup(CkIndex_OptPmePencilMapX::__idx, CkIndex_OptPmePencilMapX::__idx_OptPmePencilMapX_marshall1, impl_msg);
}
  CProxy_OptPmePencilMapX::CProxy_OptPmePencilMapX(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int xblock, int yblock, int zblock
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|xblock;
    implP|yblock;
    implP|zblock;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|xblock;
    implP|yblock;
    implP|zblock;
  }
  ckSetGroupID(CkCreateGroup(CkIndex_OptPmePencilMapX::__idx, CkIndex_OptPmePencilMapX::__idx_OptPmePencilMapX_marshall1, impl_msg));
}
 int CkIndex_OptPmePencilMapX::__idx_OptPmePencilMapX_marshall1=0;
void CkIndex_OptPmePencilMapX::_call_OptPmePencilMapX_marshall1(void* impl_msg,OptPmePencilMapX * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) OptPmePencilMapX(xblock, yblock, zblock);
}
int CkIndex_OptPmePencilMapX::_callmarshall_OptPmePencilMapX_marshall1(char* impl_buf,OptPmePencilMapX * impl_obj) {
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) OptPmePencilMapX(xblock, yblock, zblock);
  return implP.size();
}
void CkIndex_OptPmePencilMapX::_marshallmessagepup_OptPmePencilMapX_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("xblock");
  implDestP|xblock;
  if (implDestP.hasComments()) implDestP.comment("yblock");
  implDestP|yblock;
  if (implDestP.hasComments()) implDestP.comment("zblock");
  implDestP|zblock;
}

/* DEFS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmePencilMapX::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,OptPmePencilMapX::isIrreducible());
// REG: OptPmePencilMapX(int xblock, int yblock, int zblock);
  __idx_OptPmePencilMapX_marshall1 = CkRegisterEp("OptPmePencilMapX(int xblock, int yblock, int zblock)",
     (CkCallFnPtr)_call_OptPmePencilMapX_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_OptPmePencilMapX_marshall1,(CkMarshallUnpackFn)_callmarshall_OptPmePencilMapX_marshall1);
  CkRegisterMessagePupFn(__idx_OptPmePencilMapX_marshall1,(CkMessagePupFn)_marshallmessagepup_OptPmePencilMapX_marshall1);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group OptPmePencilMapY: CkArrayMap{
OptPmePencilMapY(int xblock, int yblock, int zblock);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmePencilMapY::__idx=0;
/* DEFS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */

/* DEFS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */
CkGroupID CProxy_OptPmePencilMapY::ckNew(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int xblock, int yblock, int zblock
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|xblock;
    implP|yblock;
    implP|zblock;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|xblock;
    implP|yblock;
    implP|zblock;
  }
  return CkCreateGroup(CkIndex_OptPmePencilMapY::__idx, CkIndex_OptPmePencilMapY::__idx_OptPmePencilMapY_marshall1, impl_msg);
}
  CProxy_OptPmePencilMapY::CProxy_OptPmePencilMapY(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int xblock, int yblock, int zblock
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|xblock;
    implP|yblock;
    implP|zblock;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|xblock;
    implP|yblock;
    implP|zblock;
  }
  ckSetGroupID(CkCreateGroup(CkIndex_OptPmePencilMapY::__idx, CkIndex_OptPmePencilMapY::__idx_OptPmePencilMapY_marshall1, impl_msg));
}
 int CkIndex_OptPmePencilMapY::__idx_OptPmePencilMapY_marshall1=0;
void CkIndex_OptPmePencilMapY::_call_OptPmePencilMapY_marshall1(void* impl_msg,OptPmePencilMapY * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) OptPmePencilMapY(xblock, yblock, zblock);
}
int CkIndex_OptPmePencilMapY::_callmarshall_OptPmePencilMapY_marshall1(char* impl_buf,OptPmePencilMapY * impl_obj) {
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) OptPmePencilMapY(xblock, yblock, zblock);
  return implP.size();
}
void CkIndex_OptPmePencilMapY::_marshallmessagepup_OptPmePencilMapY_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("xblock");
  implDestP|xblock;
  if (implDestP.hasComments()) implDestP.comment("yblock");
  implDestP|yblock;
  if (implDestP.hasComments()) implDestP.comment("zblock");
  implDestP|zblock;
}

/* DEFS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmePencilMapY::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,OptPmePencilMapY::isIrreducible());
// REG: OptPmePencilMapY(int xblock, int yblock, int zblock);
  __idx_OptPmePencilMapY_marshall1 = CkRegisterEp("OptPmePencilMapY(int xblock, int yblock, int zblock)",
     (CkCallFnPtr)_call_OptPmePencilMapY_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_OptPmePencilMapY_marshall1,(CkMarshallUnpackFn)_callmarshall_OptPmePencilMapY_marshall1);
  CkRegisterMessagePupFn(__idx_OptPmePencilMapY_marshall1,(CkMessagePupFn)_marshallmessagepup_OptPmePencilMapY_marshall1);

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group OptPmePencilMapZ: CkArrayMap{
OptPmePencilMapZ(int xblock, int yblock, int zblock);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_OptPmePencilMapZ::__idx=0;
/* DEFS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */

/* DEFS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */
CkGroupID CProxy_OptPmePencilMapZ::ckNew(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int xblock, int yblock, int zblock
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|xblock;
    implP|yblock;
    implP|zblock;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|xblock;
    implP|yblock;
    implP|zblock;
  }
  return CkCreateGroup(CkIndex_OptPmePencilMapZ::__idx, CkIndex_OptPmePencilMapZ::__idx_OptPmePencilMapZ_marshall1, impl_msg);
}
  CProxy_OptPmePencilMapZ::CProxy_OptPmePencilMapZ(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int xblock, int yblock, int zblock
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|xblock;
    implP|yblock;
    implP|zblock;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|xblock;
    implP|yblock;
    implP|zblock;
  }
  ckSetGroupID(CkCreateGroup(CkIndex_OptPmePencilMapZ::__idx, CkIndex_OptPmePencilMapZ::__idx_OptPmePencilMapZ_marshall1, impl_msg));
}
 int CkIndex_OptPmePencilMapZ::__idx_OptPmePencilMapZ_marshall1=0;
void CkIndex_OptPmePencilMapZ::_call_OptPmePencilMapZ_marshall1(void* impl_msg,OptPmePencilMapZ * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) OptPmePencilMapZ(xblock, yblock, zblock);
}
int CkIndex_OptPmePencilMapZ::_callmarshall_OptPmePencilMapZ_marshall1(char* impl_buf,OptPmePencilMapZ * impl_obj) {
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj) OptPmePencilMapZ(xblock, yblock, zblock);
  return implP.size();
}
void CkIndex_OptPmePencilMapZ::_marshallmessagepup_OptPmePencilMapZ_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int xblock, int yblock, int zblock*/
  PUP::fromMem implP(impl_buf);
  int xblock; implP|xblock;
  int yblock; implP|yblock;
  int zblock; implP|zblock;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("xblock");
  implDestP|xblock;
  if (implDestP.hasComments()) implDestP.comment("yblock");
  implDestP|yblock;
  if (implDestP.hasComments()) implDestP.comment("zblock");
  implDestP|zblock;
}

/* DEFS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_OptPmePencilMapZ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,OptPmePencilMapZ::isIrreducible());
// REG: OptPmePencilMapZ(int xblock, int yblock, int zblock);
  __idx_OptPmePencilMapZ_marshall1 = CkRegisterEp("OptPmePencilMapZ(int xblock, int yblock, int zblock)",
     (CkCallFnPtr)_call_OptPmePencilMapZ_marshall1, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_OptPmePencilMapZ_marshall1,(CkMarshallUnpackFn)_callmarshall_OptPmePencilMapZ_marshall1);
  CkRegisterMessagePupFn(__idx_OptPmePencilMapZ_marshall1,(CkMessagePupFn)_marshallmessagepup_OptPmePencilMapZ_marshall1);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPmeFFTLib(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message OptPmeFFTMsg{
float qgrid[];
}
;
*/
CMessage_OptPmeFFTMsg::__register("OptPmeFFTMsg", sizeof(OptPmeFFTMsg),(CkPackFnPtr) OptPmeFFTMsg::pack,(CkUnpackFnPtr) OptPmeFFTMsg::unpack);

/* REG: message OptPmeGridMsg{
float qgrid[];
}
;
*/
CMessage_OptPmeGridMsg::__register("OptPmeGridMsg", sizeof(OptPmeGridMsg),(CkPackFnPtr) OptPmeGridMsg::pack,(CkUnpackFnPtr) OptPmeGridMsg::unpack);

/* REG: message OptPmeDummyMsg;
*/
CMessage_OptPmeDummyMsg::__register("OptPmeDummyMsg", sizeof(OptPmeDummyMsg),(CkPackFnPtr) OptPmeDummyMsg::pack,(CkUnpackFnPtr) OptPmeDummyMsg::unpack);

/* REG: message OptPmePencilInitMsg;
*/
CMessage_OptPmePencilInitMsg::__register("OptPmePencilInitMsg", sizeof(OptPmePencilInitMsg),(CkPackFnPtr) OptPmePencilInitMsg::pack,(CkUnpackFnPtr) OptPmePencilInitMsg::unpack);

/* REG: array OptPmeZPencil: ArrayElement{
OptPmeZPencil(CkMigrateMessage* impl_msg);
OptPmeZPencil(void);
void recvGrid(OptPmeGridMsg* impl_msg);
void recvUntrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(OptPmePencilInitMsg* impl_msg);
};
*/
  CkIndex_OptPmeZPencil::__register("OptPmeZPencil", sizeof(OptPmeZPencil));

/* REG: array OptPmeYPencil: ArrayElement{
OptPmeYPencil(CkMigrateMessage* impl_msg);
OptPmeYPencil(void);
void recvTrans(OptPmeFFTMsg* impl_msg);
void recvUntrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
void init(OptPmePencilInitMsg* impl_msg);
};
*/
  CkIndex_OptPmeYPencil::__register("OptPmeYPencil", sizeof(OptPmeYPencil));

/* REG: array OptPmeXPencil: ArrayElement{
OptPmeXPencil(CkMigrateMessage* impl_msg);
OptPmeXPencil(void);
void recvTrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
void recvLattice(const Lattice &l);
void init(OptPmePencilInitMsg* impl_msg);
};
*/
  CkIndex_OptPmeXPencil::__register("OptPmeXPencil", sizeof(OptPmeXPencil));

/* REG: group OptPmePencilMapX: CkArrayMap{
OptPmePencilMapX(int xblock, int yblock, int zblock);
};
*/
  CkIndex_OptPmePencilMapX::__register("OptPmePencilMapX", sizeof(OptPmePencilMapX));

/* REG: group OptPmePencilMapY: CkArrayMap{
OptPmePencilMapY(int xblock, int yblock, int zblock);
};
*/
  CkIndex_OptPmePencilMapY::__register("OptPmePencilMapY", sizeof(OptPmePencilMapY));

/* REG: group OptPmePencilMapZ: CkArrayMap{
OptPmePencilMapZ(int xblock, int yblock, int zblock);
};
*/
  CkIndex_OptPmePencilMapZ::__register("OptPmePencilMapZ", sizeof(OptPmePencilMapZ));

}
#endif /* CK_TEMPLATES_ONLY */
