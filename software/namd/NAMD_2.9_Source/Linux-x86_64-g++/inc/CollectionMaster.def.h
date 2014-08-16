/* DEFS: message CollectVectorMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CollectVectorMsg::operator new(size_t s){
  return CollectVectorMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int* sz){
  return CollectVectorMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int* sz,const int pb){
  return CollectVectorMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_CollectVectorMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(AtomID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(Vector)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(FloatVector)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb);
}
CMessage_CollectVectorMsg::CMessage_CollectVectorMsg() {
CollectVectorMsg *newmsg = (CollectVectorMsg *)this;
  newmsg->aid = (AtomID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->data = (Vector *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fdata = (FloatVector *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_CollectVectorMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CollectVectorMsg::pack(CollectVectorMsg *msg) {
  msg->aid = (AtomID *) ((char *)msg->aid - (char *)msg);
  msg->data = (Vector *) ((char *)msg->data - (char *)msg);
  msg->fdata = (FloatVector *) ((char *)msg->fdata - (char *)msg);
  return (void *) msg;
}
CollectVectorMsg* CMessage_CollectVectorMsg::unpack(void* buf) {
  CollectVectorMsg *msg = (CollectVectorMsg *) buf;
  msg->aid = (AtomID *) ((size_t)msg->aid + (char *)msg);
  msg->data = (Vector *) ((size_t)msg->data + (char *)msg);
  msg->fdata = (FloatVector *) ((size_t)msg->fdata + (char *)msg);
  return msg;
}
int CMessage_CollectVectorMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message DataStreamMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_DataStreamMsg::operator new(size_t s){
  return DataStreamMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_DataStreamMsg::operator new(size_t s, int* sz){
  return DataStreamMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_DataStreamMsg::operator new(size_t s, int* sz,const int pb){
  return DataStreamMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_DataStreamMsg::operator new(size_t s, const int p) {
  return DataStreamMsg::alloc(__idx, s, 0, p);
}
void* CMessage_DataStreamMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_DataStreamMsg::CMessage_DataStreamMsg() {
DataStreamMsg *newmsg = (DataStreamMsg *)this;
}
void CMessage_DataStreamMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_DataStreamMsg::pack(DataStreamMsg *msg) {
  return (void *) msg;
}
DataStreamMsg* CMessage_DataStreamMsg::unpack(void* buf) {
  DataStreamMsg *msg = (DataStreamMsg *) buf;
  return msg;
}
int CMessage_DataStreamMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CollectVectorVarMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CollectVectorVarMsg::operator new(size_t s){
  return CollectVectorVarMsg::alloc(__idx, s, 0, 0);
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int* sz){
  return CollectVectorVarMsg::alloc(__idx, s, sz, 0);
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int* sz,const int pb){
  return CollectVectorVarMsg::alloc(__idx, s, sz, pb);
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorVarMsg::alloc(__idx, s, sizes, 0);
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorVarMsg::alloc(__idx, s, sizes, p);
}
void* CMessage_CollectVectorVarMsg::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN8(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN8(sizeof(AtomID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN8(sizeof(Vector)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN8(sizeof(FloatVector)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb);
}
CMessage_CollectVectorVarMsg::CMessage_CollectVectorVarMsg() {
CollectVectorVarMsg *newmsg = (CollectVectorVarMsg *)this;
  newmsg->aid = (AtomID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->data = (Vector *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fdata = (FloatVector *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_CollectVectorVarMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CollectVectorVarMsg::pack(CollectVectorVarMsg *msg) {
  msg->aid = (AtomID *) ((char *)msg->aid - (char *)msg);
  msg->data = (Vector *) ((char *)msg->data - (char *)msg);
  msg->fdata = (FloatVector *) ((char *)msg->fdata - (char *)msg);
  return (void *) msg;
}
CollectVectorVarMsg* CMessage_CollectVectorVarMsg::unpack(void* buf) {
  CollectVectorVarMsg *msg = (CollectVectorVarMsg *) buf;
  msg->aid = (AtomID *) ((size_t)msg->aid + (char *)msg);
  msg->data = (Vector *) ((size_t)msg->data + (char *)msg);
  msg->fdata = (FloatVector *) ((size_t)msg->fdata + (char *)msg);
  return msg;
}
int CMessage_CollectVectorVarMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare CollectionMaster: Chare{
CollectionMaster(void);
void receivePositions(CollectVectorMsg* impl_msg);
void receiveVelocities(CollectVectorMsg* impl_msg);
void receiveForces(CollectVectorMsg* impl_msg);
void receiveDataStream(DataStreamMsg* impl_msg);
void receiveOutputPosReady(int seq);
void receiveOutputVelReady(int seq);
void receiveOutputForceReady(int seq);
void startNextRoundOutputPos(double totalT);
void startNextRoundOutputVel(double totalT);
void startNextRoundOutputForce(double totalT);
void wrapCoorFinished(void);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CollectionMaster::__idx=0;
/* DEFS: CollectionMaster(void);
 */
CkChareID CProxy_CollectionMaster::ckNew(int impl_onPE)
{
  void *impl_msg = CkAllocSysMsg();
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CollectionMaster::__idx, CkIndex_CollectionMaster::__idx_CollectionMaster_void, impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CollectionMaster::ckNew(CkChareID* pcid, int impl_onPE)
{
  void *impl_msg = CkAllocSysMsg();
  CkCreateChare(CkIndex_CollectionMaster::__idx, CkIndex_CollectionMaster::__idx_CollectionMaster_void, impl_msg, pcid, impl_onPE);
}
 int CkIndex_CollectionMaster::__idx_CollectionMaster_void=0;
void CkIndex_CollectionMaster::_call_CollectionMaster_void(void* impl_msg,CollectionMaster * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  new (impl_obj) CollectionMaster();
}

/* DEFS: void receivePositions(CollectVectorMsg* impl_msg);
 */
void CProxy_CollectionMaster::receivePositions(CollectVectorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receivePositions_CollectVectorMsg, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receivePositions_CollectVectorMsg, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receivePositions_CollectVectorMsg, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receivePositions_CollectVectorMsg=0;
void CkIndex_CollectionMaster::_call_receivePositions_CollectVectorMsg(void* impl_msg,CollectionMaster * impl_obj)
{
  impl_obj->receivePositions((CollectVectorMsg*)impl_msg);
}

/* DEFS: void receiveVelocities(CollectVectorMsg* impl_msg);
 */
void CProxy_CollectionMaster::receiveVelocities(CollectVectorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receiveVelocities_CollectVectorMsg, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receiveVelocities_CollectVectorMsg, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receiveVelocities_CollectVectorMsg, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receiveVelocities_CollectVectorMsg=0;
void CkIndex_CollectionMaster::_call_receiveVelocities_CollectVectorMsg(void* impl_msg,CollectionMaster * impl_obj)
{
  impl_obj->receiveVelocities((CollectVectorMsg*)impl_msg);
}

/* DEFS: void receiveForces(CollectVectorMsg* impl_msg);
 */
void CProxy_CollectionMaster::receiveForces(CollectVectorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receiveForces_CollectVectorMsg, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receiveForces_CollectVectorMsg, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receiveForces_CollectVectorMsg, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receiveForces_CollectVectorMsg=0;
void CkIndex_CollectionMaster::_call_receiveForces_CollectVectorMsg(void* impl_msg,CollectionMaster * impl_obj)
{
  impl_obj->receiveForces((CollectVectorMsg*)impl_msg);
}

/* DEFS: void receiveDataStream(DataStreamMsg* impl_msg);
 */
void CProxy_CollectionMaster::receiveDataStream(DataStreamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receiveDataStream_DataStreamMsg, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receiveDataStream_DataStreamMsg, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receiveDataStream_DataStreamMsg, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receiveDataStream_DataStreamMsg=0;
void CkIndex_CollectionMaster::_call_receiveDataStream_DataStreamMsg(void* impl_msg,CollectionMaster * impl_obj)
{
  impl_obj->receiveDataStream((DataStreamMsg*)impl_msg);
}

/* DEFS: void receiveOutputPosReady(int seq);
 */
void CProxy_CollectionMaster::receiveOutputPosReady(int seq, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receiveOutputPosReady_marshall6, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receiveOutputPosReady_marshall6, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receiveOutputPosReady_marshall6, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receiveOutputPosReady_marshall6=0;
void CkIndex_CollectionMaster::_call_receiveOutputPosReady_marshall6(void* impl_msg,CollectionMaster * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputPosReady(seq);
}
int CkIndex_CollectionMaster::_callmarshall_receiveOutputPosReady_marshall6(char* impl_buf,CollectionMaster * impl_obj) {
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputPosReady(seq);
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_receiveOutputPosReady_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
}

/* DEFS: void receiveOutputVelReady(int seq);
 */
void CProxy_CollectionMaster::receiveOutputVelReady(int seq, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receiveOutputVelReady_marshall7, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receiveOutputVelReady_marshall7, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receiveOutputVelReady_marshall7, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receiveOutputVelReady_marshall7=0;
void CkIndex_CollectionMaster::_call_receiveOutputVelReady_marshall7(void* impl_msg,CollectionMaster * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputVelReady(seq);
}
int CkIndex_CollectionMaster::_callmarshall_receiveOutputVelReady_marshall7(char* impl_buf,CollectionMaster * impl_obj) {
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputVelReady(seq);
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_receiveOutputVelReady_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
}

/* DEFS: void receiveOutputForceReady(int seq);
 */
void CProxy_CollectionMaster::receiveOutputForceReady(int seq, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_receiveOutputForceReady_marshall8, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_receiveOutputForceReady_marshall8, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_receiveOutputForceReady_marshall8, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_receiveOutputForceReady_marshall8=0;
void CkIndex_CollectionMaster::_call_receiveOutputForceReady_marshall8(void* impl_msg,CollectionMaster * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputForceReady(seq);
}
int CkIndex_CollectionMaster::_callmarshall_receiveOutputForceReady_marshall8(char* impl_buf,CollectionMaster * impl_obj) {
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputForceReady(seq);
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_receiveOutputForceReady_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  int seq; implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
}

/* DEFS: void startNextRoundOutputPos(double totalT);
 */
void CProxy_CollectionMaster::startNextRoundOutputPos(double totalT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double totalT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalT;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_startNextRoundOutputPos_marshall9, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_startNextRoundOutputPos_marshall9, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_startNextRoundOutputPos_marshall9, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_startNextRoundOutputPos_marshall9=0;
void CkIndex_CollectionMaster::_call_startNextRoundOutputPos_marshall9(void* impl_msg,CollectionMaster * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputPos(totalT);
}
int CkIndex_CollectionMaster::_callmarshall_startNextRoundOutputPos_marshall9(char* impl_buf,CollectionMaster * impl_obj) {
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputPos(totalT);
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_startNextRoundOutputPos_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalT");
  implDestP|totalT;
}

/* DEFS: void startNextRoundOutputVel(double totalT);
 */
void CProxy_CollectionMaster::startNextRoundOutputVel(double totalT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double totalT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalT;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_startNextRoundOutputVel_marshall10, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_startNextRoundOutputVel_marshall10, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_startNextRoundOutputVel_marshall10, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_startNextRoundOutputVel_marshall10=0;
void CkIndex_CollectionMaster::_call_startNextRoundOutputVel_marshall10(void* impl_msg,CollectionMaster * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputVel(totalT);
}
int CkIndex_CollectionMaster::_callmarshall_startNextRoundOutputVel_marshall10(char* impl_buf,CollectionMaster * impl_obj) {
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputVel(totalT);
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_startNextRoundOutputVel_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalT");
  implDestP|totalT;
}

/* DEFS: void startNextRoundOutputForce(double totalT);
 */
void CProxy_CollectionMaster::startNextRoundOutputForce(double totalT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double totalT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalT;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_startNextRoundOutputForce_marshall11, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_startNextRoundOutputForce_marshall11, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_startNextRoundOutputForce_marshall11, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_startNextRoundOutputForce_marshall11=0;
void CkIndex_CollectionMaster::_call_startNextRoundOutputForce_marshall11(void* impl_msg,CollectionMaster * impl_obj)
{
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputForce(totalT);
}
int CkIndex_CollectionMaster::_callmarshall_startNextRoundOutputForce_marshall11(char* impl_buf,CollectionMaster * impl_obj) {
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputForce(totalT);
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_startNextRoundOutputForce_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  double totalT; implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalT");
  implDestP|totalT;
}

/* DEFS: void wrapCoorFinished(void);
 */
void CProxy_CollectionMaster::wrapCoorFinished(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::__idx_wrapCoorFinished_void, impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::__idx_wrapCoorFinished_void, impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_CollectionMaster::__idx_wrapCoorFinished_void, impl_msg, &ckGetChareID(),0);
}
 int CkIndex_CollectionMaster::__idx_wrapCoorFinished_void=0;
void CkIndex_CollectionMaster::_call_wrapCoorFinished_void(void* impl_msg,CollectionMaster * impl_obj)
{
  CkFreeSysMsg(impl_msg);
  impl_obj->wrapCoorFinished();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CollectionMaster::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
// REG: CollectionMaster(void);
  __idx_CollectionMaster_void = CkRegisterEp("CollectionMaster(void)",
     (CkCallFnPtr)_call_CollectionMaster_void, 0, __idx, 0);
  CkRegisterDefaultCtor(__idx, __idx_CollectionMaster_void);

// REG: void receivePositions(CollectVectorMsg* impl_msg);
  __idx_receivePositions_CollectVectorMsg = CkRegisterEp("receivePositions(CollectVectorMsg* impl_msg)",
     (CkCallFnPtr)_call_receivePositions_CollectVectorMsg, CMessage_CollectVectorMsg::__idx, __idx, 0);

// REG: void receiveVelocities(CollectVectorMsg* impl_msg);
  __idx_receiveVelocities_CollectVectorMsg = CkRegisterEp("receiveVelocities(CollectVectorMsg* impl_msg)",
     (CkCallFnPtr)_call_receiveVelocities_CollectVectorMsg, CMessage_CollectVectorMsg::__idx, __idx, 0);

// REG: void receiveForces(CollectVectorMsg* impl_msg);
  __idx_receiveForces_CollectVectorMsg = CkRegisterEp("receiveForces(CollectVectorMsg* impl_msg)",
     (CkCallFnPtr)_call_receiveForces_CollectVectorMsg, CMessage_CollectVectorMsg::__idx, __idx, 0);

// REG: void receiveDataStream(DataStreamMsg* impl_msg);
  __idx_receiveDataStream_DataStreamMsg = CkRegisterEp("receiveDataStream(DataStreamMsg* impl_msg)",
     (CkCallFnPtr)_call_receiveDataStream_DataStreamMsg, CMessage_DataStreamMsg::__idx, __idx, 0);

// REG: void receiveOutputPosReady(int seq);
  __idx_receiveOutputPosReady_marshall6 = CkRegisterEp("receiveOutputPosReady(int seq)",
     (CkCallFnPtr)_call_receiveOutputPosReady_marshall6, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_receiveOutputPosReady_marshall6,(CkMarshallUnpackFn)_callmarshall_receiveOutputPosReady_marshall6);
  CkRegisterMessagePupFn(__idx_receiveOutputPosReady_marshall6,(CkMessagePupFn)_marshallmessagepup_receiveOutputPosReady_marshall6);

// REG: void receiveOutputVelReady(int seq);
  __idx_receiveOutputVelReady_marshall7 = CkRegisterEp("receiveOutputVelReady(int seq)",
     (CkCallFnPtr)_call_receiveOutputVelReady_marshall7, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_receiveOutputVelReady_marshall7,(CkMarshallUnpackFn)_callmarshall_receiveOutputVelReady_marshall7);
  CkRegisterMessagePupFn(__idx_receiveOutputVelReady_marshall7,(CkMessagePupFn)_marshallmessagepup_receiveOutputVelReady_marshall7);

// REG: void receiveOutputForceReady(int seq);
  __idx_receiveOutputForceReady_marshall8 = CkRegisterEp("receiveOutputForceReady(int seq)",
     (CkCallFnPtr)_call_receiveOutputForceReady_marshall8, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_receiveOutputForceReady_marshall8,(CkMarshallUnpackFn)_callmarshall_receiveOutputForceReady_marshall8);
  CkRegisterMessagePupFn(__idx_receiveOutputForceReady_marshall8,(CkMessagePupFn)_marshallmessagepup_receiveOutputForceReady_marshall8);

// REG: void startNextRoundOutputPos(double totalT);
  __idx_startNextRoundOutputPos_marshall9 = CkRegisterEp("startNextRoundOutputPos(double totalT)",
     (CkCallFnPtr)_call_startNextRoundOutputPos_marshall9, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_startNextRoundOutputPos_marshall9,(CkMarshallUnpackFn)_callmarshall_startNextRoundOutputPos_marshall9);
  CkRegisterMessagePupFn(__idx_startNextRoundOutputPos_marshall9,(CkMessagePupFn)_marshallmessagepup_startNextRoundOutputPos_marshall9);

// REG: void startNextRoundOutputVel(double totalT);
  __idx_startNextRoundOutputVel_marshall10 = CkRegisterEp("startNextRoundOutputVel(double totalT)",
     (CkCallFnPtr)_call_startNextRoundOutputVel_marshall10, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_startNextRoundOutputVel_marshall10,(CkMarshallUnpackFn)_callmarshall_startNextRoundOutputVel_marshall10);
  CkRegisterMessagePupFn(__idx_startNextRoundOutputVel_marshall10,(CkMessagePupFn)_marshallmessagepup_startNextRoundOutputVel_marshall10);

// REG: void startNextRoundOutputForce(double totalT);
  __idx_startNextRoundOutputForce_marshall11 = CkRegisterEp("startNextRoundOutputForce(double totalT)",
     (CkCallFnPtr)_call_startNextRoundOutputForce_marshall11, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(__idx_startNextRoundOutputForce_marshall11,(CkMarshallUnpackFn)_callmarshall_startNextRoundOutputForce_marshall11);
  CkRegisterMessagePupFn(__idx_startNextRoundOutputForce_marshall11,(CkMessagePupFn)_marshallmessagepup_startNextRoundOutputForce_marshall11);

// REG: void wrapCoorFinished(void);
  __idx_wrapCoorFinished_void = CkRegisterEp("wrapCoorFinished(void)",
     (CkCallFnPtr)_call_wrapCoorFinished_void, 0, __idx, 0);

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCollectionMaster(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CollectVectorMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
*/
CMessage_CollectVectorMsg::__register("CollectVectorMsg", sizeof(CollectVectorMsg),(CkPackFnPtr) CollectVectorMsg::pack,(CkUnpackFnPtr) CollectVectorMsg::unpack);

/* REG: message DataStreamMsg;
*/
CMessage_DataStreamMsg::__register("DataStreamMsg", sizeof(DataStreamMsg),(CkPackFnPtr) DataStreamMsg::pack,(CkUnpackFnPtr) DataStreamMsg::unpack);

/* REG: message CollectVectorVarMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
*/
CMessage_CollectVectorVarMsg::__register("CollectVectorVarMsg", sizeof(CollectVectorVarMsg),(CkPackFnPtr) CollectVectorVarMsg::pack,(CkUnpackFnPtr) CollectVectorVarMsg::unpack);

/* REG: chare CollectionMaster: Chare{
CollectionMaster(void);
void receivePositions(CollectVectorMsg* impl_msg);
void receiveVelocities(CollectVectorMsg* impl_msg);
void receiveForces(CollectVectorMsg* impl_msg);
void receiveDataStream(DataStreamMsg* impl_msg);
void receiveOutputPosReady(int seq);
void receiveOutputVelReady(int seq);
void receiveOutputForceReady(int seq);
void startNextRoundOutputPos(double totalT);
void startNextRoundOutputVel(double totalT);
void startNextRoundOutputForce(double totalT);
void wrapCoorFinished(void);
};
*/
  CkIndex_CollectionMaster::__register("CollectionMaster", sizeof(CollectionMaster));

}
#endif /* CK_TEMPLATES_ONLY */
