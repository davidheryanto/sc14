#ifndef _DECL_PmeFFTLib_H_
#define _DECL_PmeFFTLib_H_
#include "charm++.h"
/* DECLS: message OptPmeFFTMsg{
float qgrid[];
}
;
 */
class OptPmeFFTMsg;
class CMessage_OptPmeFFTMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_OptPmeFFTMsg();
    static void *pack(OptPmeFFTMsg *p);
    static OptPmeFFTMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message OptPmeGridMsg{
float qgrid[];
}
;
 */
class OptPmeGridMsg;
class CMessage_OptPmeGridMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_OptPmeGridMsg();
    static void *pack(OptPmeGridMsg *p);
    static OptPmeGridMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message OptPmeDummyMsg;
 */
class OptPmeDummyMsg;
class CMessage_OptPmeDummyMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_OptPmeDummyMsg();
    static void *pack(OptPmeDummyMsg *p);
    static OptPmeDummyMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message OptPmePencilInitMsg;
 */
class OptPmePencilInitMsg;
class CMessage_OptPmePencilInitMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_OptPmePencilInitMsg();
    static void *pack(OptPmePencilInitMsg *p);
    static OptPmePencilInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: array OptPmeZPencil: ArrayElement{
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
 class OptPmeZPencil;
 class CkIndex_OptPmeZPencil;
 class CProxy_OptPmeZPencil;
 class CProxyElement_OptPmeZPencil;
 class CProxySection_OptPmeZPencil;
/* --------------- index object ------------------ */
class CkIndex_OptPmeZPencil:public CProxyElement_ArrayElement{
  public:
    typedef OptPmeZPencil local_t;
    typedef CkIndex_OptPmeZPencil index_t;
    typedef CProxy_OptPmeZPencil proxy_t;
    typedef CProxyElement_OptPmeZPencil element_t;
    typedef CProxySection_OptPmeZPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */
    static int __idx_OptPmeZPencil_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_OptPmeZPencil_CkMigrateMessage; }
    static void _call_OptPmeZPencil_CkMigrateMessage(void* impl_msg,OptPmeZPencil* impl_obj);

/* DECLS: OptPmeZPencil(void);
 */
    static int __idx_OptPmeZPencil_void;
    static int ckNew(void) { return __idx_OptPmeZPencil_void; }
    static void _call_OptPmeZPencil_void(void* impl_msg,OptPmeZPencil* impl_obj);

/* DECLS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
    static int __idx_recvGrid_OptPmeGridMsg;
    static int recvGrid(OptPmeGridMsg* impl_msg) { return __idx_recvGrid_OptPmeGridMsg; }
    static void _call_recvGrid_OptPmeGridMsg(void* impl_msg,OptPmeZPencil* impl_obj);

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    static int __idx_recvUntrans_OptPmeFFTMsg;
    static int recvUntrans(OptPmeFFTMsg* impl_msg) { return __idx_recvUntrans_OptPmeFFTMsg; }
    static void _call_recvUntrans_OptPmeFFTMsg(void* impl_msg,OptPmeZPencil* impl_obj);

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    static int __idx_many_to_manyRecvUntrans_OptPmeDummyMsg;
    static int many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) { return __idx_many_to_manyRecvUntrans_OptPmeDummyMsg; }
    static void _call_many_to_manyRecvUntrans_OptPmeDummyMsg(void* impl_msg,OptPmeZPencil* impl_obj);

/* DECLS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
    static int __idx_many_to_manyRecvGrid_OptPmeDummyMsg;
    static int many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) { return __idx_many_to_manyRecvGrid_OptPmeDummyMsg; }
    static void _call_many_to_manyRecvGrid_OptPmeDummyMsg(void* impl_msg,OptPmeZPencil* impl_obj);

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    static int __idx_dummyRecvGrid_marshall6;
    static int dummyRecvGrid(int pe, int done = 0) { return __idx_dummyRecvGrid_marshall6; }
    static void _call_dummyRecvGrid_marshall6(void* impl_msg,OptPmeZPencil* impl_obj);
    static int _callmarshall_dummyRecvGrid_marshall6(char* impl_buf,OptPmeZPencil* impl_obj);
    static void _marshallmessagepup_dummyRecvGrid_marshall6(PUP::er &p,void *msg);

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    static int __idx_init_OptPmePencilInitMsg;
    static int init(OptPmePencilInitMsg* impl_msg) { return __idx_init_OptPmePencilInitMsg; }
    static void _call_init_OptPmePencilInitMsg(void* impl_msg,OptPmeZPencil* impl_obj);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_OptPmeZPencil : public CProxyElement_ArrayElement{
  public:
    typedef OptPmeZPencil local_t;
    typedef CkIndex_OptPmeZPencil index_t;
    typedef CProxy_OptPmeZPencil proxy_t;
    typedef CProxyElement_OptPmeZPencil element_t;
    typedef CProxySection_OptPmeZPencil section_t;

    CProxyElement_OptPmeZPencil(void) {}
    CProxyElement_OptPmeZPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxyElement_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxyElement_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxyElement_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxyElement_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxyElement_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxyElement_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_ArrayElement::ckSetReductionClient(cb); }
inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
  { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
  { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
inline void *ckSendSync(CkArrayMessage *m, int ep) const
  { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
inline const CkArrayIndex &ckGetIndex() const
  { return CProxyElement_ArrayElement::ckGetIndex(); }
    OptPmeZPencil *ckLocal(void) const
      { return (OptPmeZPencil *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_OptPmeZPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_OptPmeZPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeZPencil(void);
 */
    void insert(int onPE=-1);
/* DECLS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
    void recvGrid(OptPmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    void recvUntrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxyElement_OptPmeZPencil)
/* ---------------- collective proxy -------------- */
 class CProxy_OptPmeZPencil : public CProxy_ArrayElement{
  public:
    typedef OptPmeZPencil local_t;
    typedef CkIndex_OptPmeZPencil index_t;
    typedef CProxy_OptPmeZPencil proxy_t;
    typedef CProxyElement_OptPmeZPencil element_t;
    typedef CProxySection_OptPmeZPencil section_t;

    CProxy_OptPmeZPencil(void) {}
    CProxy_OptPmeZPencil(const ArrayElement *e) : CProxy_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxy_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxy_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxy_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxy_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxy_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxy_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_ArrayElement::ckSetReductionClient(cb); }
    static CkArrayID ckNew(void) {return ckCreateEmptyArray();}
//Generalized array indexing:
    CProxyElement_OptPmeZPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeZPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeZPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_OptPmeZPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_OptPmeZPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_OptPmeZPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeZPencil(void);
 */
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
    void recvGrid(OptPmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    void recvUntrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxy_OptPmeZPencil)
/* ---------------- section proxy -------------- */
 class CProxySection_OptPmeZPencil : public CProxySection_ArrayElement{
  public:
    typedef OptPmeZPencil local_t;
    typedef CkIndex_OptPmeZPencil index_t;
    typedef CProxy_OptPmeZPencil proxy_t;
    typedef CProxyElement_OptPmeZPencil element_t;
    typedef CProxySection_OptPmeZPencil section_t;

    CProxySection_OptPmeZPencil(void) {}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxySection_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxySection_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxySection_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxySection_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxySection_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxySection_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_ArrayElement::ckSetReductionClient(cb); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
 { CProxySection_ArrayElement::ckSend(m,ep,opts); }
inline CkSectionInfo &ckGetSectionInfo()
  { return CProxySection_ArrayElement::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
  { return CProxySection_ArrayElement::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
  { return CProxySection_ArrayElement::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
  { return CProxySection_ArrayElement::ckGetSectionID(i); }
inline CkArrayID ckGetArrayIDn(int i) const
{return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
inline CkArrayIndex *ckGetArrayElements() const
  { return CProxySection_ArrayElement::ckGetArrayElements(); }
inline CkArrayIndex *ckGetArrayElements(int i) const
{return CProxySection_ArrayElement::ckGetArrayElements(i); }
inline int ckGetNumElements() const
  { return CProxySection_ArrayElement::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{return CProxySection_ArrayElement::ckGetNumElements(i); } 
//Generalized array indexing:
    CProxyElement_OptPmeZPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeZPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeZPencil operator () (int idx) const 
        {return CProxyElement_OptPmeZPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_OptPmeZPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_OptPmeZPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_OptPmeZPencil(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_OptPmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_OptPmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: OptPmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeZPencil(void);
 */

/* DECLS: void recvGrid(OptPmeGridMsg* impl_msg);
 */
    void recvGrid(OptPmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    void recvUntrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvGrid(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxySection_OptPmeZPencil)
#define OptPmeZPencil_SDAG_CODE                                                \
public:                                                                        \
  void init(OptPmePencilInitMsg* initmsg) {                                    \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0(initmsg);                                                         \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void init_end(OptPmePencilInitMsg* initmsg) {                                \
  }                                                                            \
                                                                               \
  void _slist_0(OptPmePencilInitMsg* initmsg) {                                \
    _atomic_0(initmsg);                                                        \
  }                                                                            \
  void _slist_0_end(OptPmePencilInitMsg* initmsg) {                            \
    init_end(initmsg);                                                         \
  }                                                                            \
  void _atomic_0(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
  base_init(initmsg); delete initmsg;                                          \
  fft_init();                                                                  \
                                                                               \
  imsg = 0; grid_msgs.resize(0);                                               \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _while_0(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _while_0(OptPmePencilInitMsg* initmsg) {                                \
    if ( ! imsg ) {                                                            \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _atomic_2(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end(OptPmePencilInitMsg* initmsg) {                            \
    if ( ! imsg ) {                                                            \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _atomic_2(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_1(OptPmePencilInitMsg* initmsg) {                                \
    _when_0(initmsg);                                                          \
  }                                                                            \
  void _slist_1_end(OptPmePencilInitMsg* initmsg) {                            \
    _while_0_end(initmsg);                                                     \
  }                                                                            \
  int _when_0(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *dummyRecvGrid_buf;                                             \
    CkMarshallMsg *dummyRecvGrid_msg;                                          \
                                                                               \
    dummyRecvGrid_buf = __cDep->getMessage(0);                                 \
                                                                               \
    if ((dummyRecvGrid_buf != 0)) {                                            \
       dummyRecvGrid_msg = (CkMarshallMsg *)dummyRecvGrid_buf->msg;            \
       char *dummyRecvGrid_impl_buf=((CkMarshallMsg *)dummyRecvGrid_msg)->msgBuf;\
       PUP::fromMem dummyRecvGrid_implP(dummyRecvGrid_impl_buf);               \
       int pe; dummyRecvGrid_implP|pe;                                         \
       int done; dummyRecvGrid_implP|done;                                     \
       dummyRecvGrid_impl_buf+=CK_ALIGN(dummyRecvGrid_implP.size(),16);        \
       __cDep->removeMessage(dummyRecvGrid_buf);                               \
       delete dummyRecvGrid_buf;                                               \
       _atomic_1(initmsg, pe, done);                                           \
       delete dummyRecvGrid_msg;                                               \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(0, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_0_end(OptPmePencilInitMsg* initmsg, int pe, int done) {           \
    _slist_1_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_1(OptPmePencilInitMsg* initmsg, int pe, int done) {             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_1, CkMyPe(), 0, NULL); \
                                                                               \
          if ( done ) imsg = 1;                                                \
          else {                                                               \
            grid_msgs.add(0);                                                  \
          }                                                                    \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_0_end(initmsg, pe, done);                                            \
  }                                                                            \
                                                                               \
  void _atomic_2(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_2, CkMyPe(), 0, NULL); \
     _iter = 0;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _while_1(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _while_1(OptPmePencilInitMsg* initmsg) {                                \
    if ( 1 ) {                                                                 \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_1_end(OptPmePencilInitMsg* initmsg) {                            \
    if ( 1 ) {                                                                 \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_2(OptPmePencilInitMsg* initmsg) {                                \
    _atomic_3(initmsg);                                                        \
  }                                                                            \
  void _slist_2_end(OptPmePencilInitMsg* initmsg) {                            \
    _while_1_end(initmsg);                                                     \
  }                                                                            \
  void _atomic_3(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_3, CkMyPe(), 0, NULL); \
     _iter ++;                                                                 \
    _TRACE_END_EXECUTE();                                                      \
    _if_0(initmsg);                                                            \
  }                                                                            \
                                                                               \
  void _if_0(OptPmePencilInitMsg* initmsg) {                                   \
    if ( _iter <= many_to_many_start ) {                                       \
      _slist_4(initmsg);                                                       \
    } else {                                                                   \
      _else_0(initmsg);                                                        \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end(OptPmePencilInitMsg* initmsg) {                               \
      _slist_2_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _else_0(OptPmePencilInitMsg* initmsg) {                                 \
    double __begintime = CkVTimer();                                           \
     _TRACE_BG_USER_EVENT_BRACKET("_else_0", __begintime, CkVTimer(),&_bgParentLog); \
    _slist_3(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _else_0_end(OptPmePencilInitMsg* initmsg) {                             \
      _slist_2_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _slist_3(OptPmePencilInitMsg* initmsg) {                                \
    _when_1(initmsg);                                                          \
  }                                                                            \
  void _slist_3_end(OptPmePencilInitMsg* initmsg) {                            \
    _else_0_end(initmsg);                                                      \
  }                                                                            \
  int _when_1(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeDummyMsg* msg;                                                       \
                                                                               \
    msg_buf = __cDep->getMessage(1);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeDummyMsg*) msg_buf->msg;                                   \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_4(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(1, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 1;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_1_end(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {        \
    _atomic_5(initmsg);                                                        \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_4(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_4, CkMyPe(), 0, NULL); \
     many_to_many_recv_grid ();                                                \
    _TRACE_END_EXECUTE();                                                      \
    _when_1_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_5(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_5, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_6(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_6(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_6, CkMyPe(), 0, NULL); \
     many_to_many_send_trans();                                                \
    _TRACE_END_EXECUTE();                                                      \
    _when_2(initmsg);                                                          \
  }                                                                            \
                                                                               \
  int _when_2(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeDummyMsg* msg;                                                       \
                                                                               \
    msg_buf = __cDep->getMessage(2);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeDummyMsg*) msg_buf->msg;                                   \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_7(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(2, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 2;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_2_end(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {        \
    _atomic_8(initmsg);                                                        \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_7(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_7, CkMyPe(), 0, NULL); \
     many_to_many_recv_untrans();                                              \
    _TRACE_END_EXECUTE();                                                      \
    _when_2_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_8(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_8, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_9(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_9(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_9, CkMyPe(), 0, NULL); \
     many_to_many_send_ungrid ();                                              \
    _TRACE_END_EXECUTE();                                                      \
    _slist_3_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _slist_4(OptPmePencilInitMsg* initmsg) {                                \
    _for_0(initmsg);                                                           \
  }                                                                            \
  void _slist_4_end(OptPmePencilInitMsg* initmsg) {                            \
    _if_0_end(initmsg);                                                        \
  }                                                                            \
  void _for_0(OptPmePencilInitMsg* initmsg) {                                  \
     imsg=0;                                                                   \
    if ( imsg < grid_msgs.size()) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _atomic_11(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _for_0_end(OptPmePencilInitMsg* initmsg) {                              \
 ++imsg ;                                                                      \
    if ( imsg < grid_msgs.size()) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _atomic_11(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _slist_5(OptPmePencilInitMsg* initmsg) {                                \
    _when_3(initmsg);                                                          \
  }                                                                            \
  void _slist_5_end(OptPmePencilInitMsg* initmsg) {                            \
    _for_0_end(initmsg);                                                       \
  }                                                                            \
  int _when_3(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeGridMsg* msg;                                                        \
                                                                               \
    msg_buf = __cDep->getMessage(3);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeGridMsg*) msg_buf->msg;                                    \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_10(initmsg, msg);                                               \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(3, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 3;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_3_end(OptPmePencilInitMsg* initmsg, OptPmeGridMsg* msg) {         \
    _slist_5_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_10(OptPmePencilInitMsg* initmsg, OptPmeGridMsg* msg) {          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_10, CkMyPe(), 0, NULL); \
                                                                               \
              recv_grid(msg); grid_msgs[imsg] = msg;                           \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_3_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_11(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_11, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_12(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_12(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_12, CkMyPe(), 0, NULL); \
     send_trans();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _for_1(initmsg);                                                           \
  }                                                                            \
                                                                               \
  void _for_1(OptPmePencilInitMsg* initmsg) {                                  \
     imsg=0;                                                                   \
    if ( imsg < initdata.zBlocks) {                                            \
      _slist_6(initmsg);                                                       \
    } else {                                                                   \
      _atomic_14(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _for_1_end(OptPmePencilInitMsg* initmsg) {                              \
 ++imsg ;                                                                      \
    if ( imsg < initdata.zBlocks) {                                            \
      _slist_6(initmsg);                                                       \
    } else {                                                                   \
      _atomic_14(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _slist_6(OptPmePencilInitMsg* initmsg) {                                \
    _when_4(initmsg);                                                          \
  }                                                                            \
  void _slist_6_end(OptPmePencilInitMsg* initmsg) {                            \
    _for_1_end(initmsg);                                                       \
  }                                                                            \
  int _when_4(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeFFTMsg* msg;                                                         \
                                                                               \
    msg_buf = __cDep->getMessage(4);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeFFTMsg*) msg_buf->msg;                                     \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_13(initmsg, msg);                                               \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(4, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 4;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_4_end(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {          \
    _slist_6_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_13(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {           \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_13, CkMyPe(), 0, NULL); \
                                                                               \
          recv_untrans(msg); delete msg;                                       \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_4_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_14(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_14, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_15(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_15(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeZPencil_atomic_15, CkMyPe(), 0, NULL); \
                                                                               \
      for ( imsg=0; imsg < grid_msgs.size(); ++imsg ) {                        \
        OptPmeGridMsg *msg = grid_msgs[imsg];                                  \
        send_ungrid(msg);                                                      \
      }                                                                        \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _slist_4_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
public:                                                                        \
  void dummyRecvGrid(int pe, int done) {                                       \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    int impl_off=0; int impl_arrstart=0;                                       \
    {                                                                          \
      PUP::sizer implP1;                                                       \
      implP1|pe;                                                               \
      implP1|done;                                                             \
      impl_off+=implP1.size();                                                 \
    }                                                                          \
    CkMarshallMsg *impl_msg1=CkAllocateMarshallMsg(impl_off,NULL);             \
    {                                                                          \
      PUP::toMem implP1((void *)impl_msg1->msgBuf);                            \
      implP1|pe;                                                               \
      implP1|done;                                                             \
    }                                                                          \
    cmsgbuf = __cDep->bufferMessage(0, (void *) impl_msg1, (void*) _bgParentLog, 0);\
    tr = __cDep->getTrigger(0, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_0((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void many_to_manyRecvGrid(OptPmeDummyMsg* msg_msg) {                         \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(1, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(1, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_1((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void many_to_manyRecvUntrans(OptPmeDummyMsg* msg_msg) {                      \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(2, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(2, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_2((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvGrid(OptPmeGridMsg* msg_msg) {                                      \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(3, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(3, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_3((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvUntrans(OptPmeFFTMsg* msg_msg) {                                    \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(4, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(4, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_4((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
private:                                                                       \
  CDep *__cDep;                                                                \
  void __sdag_init(void) {                                                     \
    __cDep = new CDep(5,5);                                                    \
    __cDep->addDepends(0,0);                                                   \
    __cDep->addDepends(1,1);                                                   \
    __cDep->addDepends(2,2);                                                   \
    __cDep->addDepends(3,3);                                                   \
    __cDep->addDepends(4,4);                                                   \
  }                                                                            \
public:                                                                        \
  void __sdag_pup(PUP::er& p) {                                                \
    if (__cDep) { __cDep->pup(p); }                                            \
  }                                                                            \
  static void __sdag_register() {                                              \
                                                                               \
    __idx_OptPmeZPencil_atomic_0 = CkRegisterEp("OptPmeZPencil_atomic_0(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_1 = CkRegisterEp("OptPmeZPencil_atomic_1(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_2 = CkRegisterEp("OptPmeZPencil_atomic_2(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_3 = CkRegisterEp("OptPmeZPencil_atomic_3(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_10 = CkRegisterEp("OptPmeZPencil_atomic_10(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_11 = CkRegisterEp("OptPmeZPencil_atomic_11(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_12 = CkRegisterEp("OptPmeZPencil_atomic_12(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_13 = CkRegisterEp("OptPmeZPencil_atomic_13(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_14 = CkRegisterEp("OptPmeZPencil_atomic_14(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_15 = CkRegisterEp("OptPmeZPencil_atomic_15(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_4 = CkRegisterEp("OptPmeZPencil_atomic_4(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_5 = CkRegisterEp("OptPmeZPencil_atomic_5(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_6 = CkRegisterEp("OptPmeZPencil_atomic_6(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_7 = CkRegisterEp("OptPmeZPencil_atomic_7(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_8 = CkRegisterEp("OptPmeZPencil_atomic_8(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
    __idx_OptPmeZPencil_atomic_9 = CkRegisterEp("OptPmeZPencil_atomic_9(void)", NULL, 0, CkIndex_OptPmeZPencil::__idx, 0);\
  }                                                                            \
  static int __idx_OptPmeZPencil_atomic_0;                                     \
  static int __idx_OptPmeZPencil_atomic_1;                                     \
  static int __idx_OptPmeZPencil_atomic_2;                                     \
  static int __idx_OptPmeZPencil_atomic_3;                                     \
  static int __idx_OptPmeZPencil_atomic_10;                                    \
  static int __idx_OptPmeZPencil_atomic_11;                                    \
  static int __idx_OptPmeZPencil_atomic_12;                                    \
  static int __idx_OptPmeZPencil_atomic_13;                                    \
  static int __idx_OptPmeZPencil_atomic_14;                                    \
  static int __idx_OptPmeZPencil_atomic_15;                                    \
  static int __idx_OptPmeZPencil_atomic_4;                                     \
  static int __idx_OptPmeZPencil_atomic_5;                                     \
  static int __idx_OptPmeZPencil_atomic_6;                                     \
  static int __idx_OptPmeZPencil_atomic_7;                                     \
  static int __idx_OptPmeZPencil_atomic_8;                                     \
  static int __idx_OptPmeZPencil_atomic_9;                                     \

#define OptPmeZPencil_SDAG_CODE_DEF \
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_0=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_1=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_2=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_3=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_10=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_11=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_12=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_13=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_14=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_15=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_4=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_5=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_6=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_7=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_8=0;\
  int OptPmeZPencil::__idx_OptPmeZPencil_atomic_9=0;\

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_OptPmeZPencil> CBase_OptPmeZPencil;

/* DECLS: array OptPmeYPencil: ArrayElement{
OptPmeYPencil(CkMigrateMessage* impl_msg);
OptPmeYPencil(void);
void recvTrans(OptPmeFFTMsg* impl_msg);
void recvUntrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
void init(OptPmePencilInitMsg* impl_msg);
};
 */
 class OptPmeYPencil;
 class CkIndex_OptPmeYPencil;
 class CProxy_OptPmeYPencil;
 class CProxyElement_OptPmeYPencil;
 class CProxySection_OptPmeYPencil;
/* --------------- index object ------------------ */
class CkIndex_OptPmeYPencil:public CProxyElement_ArrayElement{
  public:
    typedef OptPmeYPencil local_t;
    typedef CkIndex_OptPmeYPencil index_t;
    typedef CProxy_OptPmeYPencil proxy_t;
    typedef CProxyElement_OptPmeYPencil element_t;
    typedef CProxySection_OptPmeYPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */
    static int __idx_OptPmeYPencil_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_OptPmeYPencil_CkMigrateMessage; }
    static void _call_OptPmeYPencil_CkMigrateMessage(void* impl_msg,OptPmeYPencil* impl_obj);

/* DECLS: OptPmeYPencil(void);
 */
    static int __idx_OptPmeYPencil_void;
    static int ckNew(void) { return __idx_OptPmeYPencil_void; }
    static void _call_OptPmeYPencil_void(void* impl_msg,OptPmeYPencil* impl_obj);

/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    static int __idx_recvTrans_OptPmeFFTMsg;
    static int recvTrans(OptPmeFFTMsg* impl_msg) { return __idx_recvTrans_OptPmeFFTMsg; }
    static void _call_recvTrans_OptPmeFFTMsg(void* impl_msg,OptPmeYPencil* impl_obj);

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    static int __idx_recvUntrans_OptPmeFFTMsg;
    static int recvUntrans(OptPmeFFTMsg* impl_msg) { return __idx_recvUntrans_OptPmeFFTMsg; }
    static void _call_recvUntrans_OptPmeFFTMsg(void* impl_msg,OptPmeYPencil* impl_obj);

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    static int __idx_many_to_manyRecvUntrans_OptPmeDummyMsg;
    static int many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) { return __idx_many_to_manyRecvUntrans_OptPmeDummyMsg; }
    static void _call_many_to_manyRecvUntrans_OptPmeDummyMsg(void* impl_msg,OptPmeYPencil* impl_obj);

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    static int __idx_many_to_manyRecvTrans_OptPmeDummyMsg;
    static int many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) { return __idx_many_to_manyRecvTrans_OptPmeDummyMsg; }
    static void _call_many_to_manyRecvTrans_OptPmeDummyMsg(void* impl_msg,OptPmeYPencil* impl_obj);

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    static int __idx_init_OptPmePencilInitMsg;
    static int init(OptPmePencilInitMsg* impl_msg) { return __idx_init_OptPmePencilInitMsg; }
    static void _call_init_OptPmePencilInitMsg(void* impl_msg,OptPmeYPencil* impl_obj);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_OptPmeYPencil : public CProxyElement_ArrayElement{
  public:
    typedef OptPmeYPencil local_t;
    typedef CkIndex_OptPmeYPencil index_t;
    typedef CProxy_OptPmeYPencil proxy_t;
    typedef CProxyElement_OptPmeYPencil element_t;
    typedef CProxySection_OptPmeYPencil section_t;

    CProxyElement_OptPmeYPencil(void) {}
    CProxyElement_OptPmeYPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxyElement_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxyElement_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxyElement_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxyElement_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxyElement_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxyElement_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_ArrayElement::ckSetReductionClient(cb); }
inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
  { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
  { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
inline void *ckSendSync(CkArrayMessage *m, int ep) const
  { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
inline const CkArrayIndex &ckGetIndex() const
  { return CProxyElement_ArrayElement::ckGetIndex(); }
    OptPmeYPencil *ckLocal(void) const
      { return (OptPmeYPencil *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_OptPmeYPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_OptPmeYPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeYPencil(void);
 */
    void insert(int onPE=-1);
/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    void recvTrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    void recvUntrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxyElement_OptPmeYPencil)
/* ---------------- collective proxy -------------- */
 class CProxy_OptPmeYPencil : public CProxy_ArrayElement{
  public:
    typedef OptPmeYPencil local_t;
    typedef CkIndex_OptPmeYPencil index_t;
    typedef CProxy_OptPmeYPencil proxy_t;
    typedef CProxyElement_OptPmeYPencil element_t;
    typedef CProxySection_OptPmeYPencil section_t;

    CProxy_OptPmeYPencil(void) {}
    CProxy_OptPmeYPencil(const ArrayElement *e) : CProxy_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxy_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxy_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxy_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxy_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxy_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxy_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_ArrayElement::ckSetReductionClient(cb); }
    static CkArrayID ckNew(void) {return ckCreateEmptyArray();}
//Generalized array indexing:
    CProxyElement_OptPmeYPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeYPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeYPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_OptPmeYPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_OptPmeYPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_OptPmeYPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeYPencil(void);
 */
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    void recvTrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    void recvUntrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxy_OptPmeYPencil)
/* ---------------- section proxy -------------- */
 class CProxySection_OptPmeYPencil : public CProxySection_ArrayElement{
  public:
    typedef OptPmeYPencil local_t;
    typedef CkIndex_OptPmeYPencil index_t;
    typedef CProxy_OptPmeYPencil proxy_t;
    typedef CProxyElement_OptPmeYPencil element_t;
    typedef CProxySection_OptPmeYPencil section_t;

    CProxySection_OptPmeYPencil(void) {}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxySection_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxySection_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxySection_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxySection_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxySection_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxySection_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_ArrayElement::ckSetReductionClient(cb); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
 { CProxySection_ArrayElement::ckSend(m,ep,opts); }
inline CkSectionInfo &ckGetSectionInfo()
  { return CProxySection_ArrayElement::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
  { return CProxySection_ArrayElement::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
  { return CProxySection_ArrayElement::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
  { return CProxySection_ArrayElement::ckGetSectionID(i); }
inline CkArrayID ckGetArrayIDn(int i) const
{return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
inline CkArrayIndex *ckGetArrayElements() const
  { return CProxySection_ArrayElement::ckGetArrayElements(); }
inline CkArrayIndex *ckGetArrayElements(int i) const
{return CProxySection_ArrayElement::ckGetArrayElements(i); }
inline int ckGetNumElements() const
  { return CProxySection_ArrayElement::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{return CProxySection_ArrayElement::ckGetNumElements(i); } 
//Generalized array indexing:
    CProxyElement_OptPmeYPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeYPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeYPencil operator () (int idx) const 
        {return CProxyElement_OptPmeYPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_OptPmeYPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_OptPmeYPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_OptPmeYPencil(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_OptPmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_OptPmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: OptPmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeYPencil(void);
 */

/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    void recvTrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void recvUntrans(OptPmeFFTMsg* impl_msg);
 */
    void recvUntrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvUntrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxySection_OptPmeYPencil)
#define OptPmeYPencil_SDAG_CODE                                                \
public:                                                                        \
  void init(OptPmePencilInitMsg* initmsg) {                                    \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0(initmsg);                                                         \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void init_end(OptPmePencilInitMsg* initmsg) {                                \
  }                                                                            \
                                                                               \
  void _slist_0(OptPmePencilInitMsg* initmsg) {                                \
    _atomic_0(initmsg);                                                        \
  }                                                                            \
  void _slist_0_end(OptPmePencilInitMsg* initmsg) {                            \
    init_end(initmsg);                                                         \
  }                                                                            \
  void _atomic_0(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
                                                                               \
                                                                               \
      base_init(initmsg); delete initmsg;                                      \
      fft_init();                                                              \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_1(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_1(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_1, CkMyPe(), 0, NULL); \
     _iter = 0;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _while_0(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _while_0(OptPmePencilInitMsg* initmsg) {                                \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end(OptPmePencilInitMsg* initmsg) {                            \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_1(OptPmePencilInitMsg* initmsg) {                                \
    _atomic_2(initmsg);                                                        \
  }                                                                            \
  void _slist_1_end(OptPmePencilInitMsg* initmsg) {                            \
    _while_0_end(initmsg);                                                     \
  }                                                                            \
  void _atomic_2(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_2, CkMyPe(), 0, NULL); \
     _iter ++;                                                                 \
    _TRACE_END_EXECUTE();                                                      \
    _if_0(initmsg);                                                            \
  }                                                                            \
                                                                               \
  void _if_0(OptPmePencilInitMsg* initmsg) {                                   \
    if ( _iter <= many_to_many_start ) {                                       \
      _slist_3(initmsg);                                                       \
    } else {                                                                   \
      _else_0(initmsg);                                                        \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end(OptPmePencilInitMsg* initmsg) {                               \
      _slist_1_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _else_0(OptPmePencilInitMsg* initmsg) {                                 \
    double __begintime = CkVTimer();                                           \
     _TRACE_BG_USER_EVENT_BRACKET("_else_0", __begintime, CkVTimer(),&_bgParentLog); \
    _slist_2(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _else_0_end(OptPmePencilInitMsg* initmsg) {                             \
      _slist_1_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _slist_2(OptPmePencilInitMsg* initmsg) {                                \
    _when_0(initmsg);                                                          \
  }                                                                            \
  void _slist_2_end(OptPmePencilInitMsg* initmsg) {                            \
    _else_0_end(initmsg);                                                      \
  }                                                                            \
  int _when_0(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeDummyMsg* msg;                                                       \
                                                                               \
    msg_buf = __cDep->getMessage(0);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeDummyMsg*) msg_buf->msg;                                   \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_3(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(0, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_0_end(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {        \
    _atomic_4(initmsg);                                                        \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_3(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_3, CkMyPe(), 0, NULL); \
     many_to_many_recv_trans();                                                \
    _TRACE_END_EXECUTE();                                                      \
    _when_0_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_4(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_4, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_5(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_5(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_5, CkMyPe(), 0, NULL); \
     many_to_many_send(PHASE_XF);                                              \
    _TRACE_END_EXECUTE();                                                      \
    _when_1(initmsg);                                                          \
  }                                                                            \
                                                                               \
  int _when_1(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeDummyMsg* msg;                                                       \
                                                                               \
    msg_buf = __cDep->getMessage(1);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeDummyMsg*) msg_buf->msg;                                   \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_6(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(1, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 1;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_1_end(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {        \
    _atomic_7(initmsg);                                                        \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_6(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_6, CkMyPe(), 0, NULL); \
    many_to_many_recv_untrans();                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_1_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_7(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_7, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_8(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_8(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_8, CkMyPe(), 0, NULL); \
     many_to_many_send(PHASE_ZB);                                              \
    _TRACE_END_EXECUTE();                                                      \
    _slist_2_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _slist_3(OptPmePencilInitMsg* initmsg) {                                \
    _for_0(initmsg);                                                           \
  }                                                                            \
  void _slist_3_end(OptPmePencilInitMsg* initmsg) {                            \
    _if_0_end(initmsg);                                                        \
  }                                                                            \
  void _for_0(OptPmePencilInitMsg* initmsg) {                                  \
     imsg=0;                                                                   \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_4(initmsg);                                                       \
    } else {                                                                   \
      _atomic_10(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _for_0_end(OptPmePencilInitMsg* initmsg) {                              \
 ++imsg ;                                                                      \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_4(initmsg);                                                       \
    } else {                                                                   \
      _atomic_10(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _slist_4(OptPmePencilInitMsg* initmsg) {                                \
    _when_2(initmsg);                                                          \
  }                                                                            \
  void _slist_4_end(OptPmePencilInitMsg* initmsg) {                            \
    _for_0_end(initmsg);                                                       \
  }                                                                            \
  int _when_2(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeFFTMsg* msg;                                                         \
                                                                               \
    msg_buf = __cDep->getMessage(2);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeFFTMsg*) msg_buf->msg;                                     \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_9(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(2, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 2;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_2_end(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {          \
    _slist_4_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_9(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {            \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_9, CkMyPe(), 0, NULL); \
                                                                               \
              recv_trans(msg); delete msg;                                     \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_2_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_10(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_10, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_11(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_11(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_11, CkMyPe(), 0, NULL); \
     send_trans();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _for_1(initmsg);                                                           \
  }                                                                            \
                                                                               \
  void _for_1(OptPmePencilInitMsg* initmsg) {                                  \
     imsg=0;                                                                   \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _atomic_13(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _for_1_end(OptPmePencilInitMsg* initmsg) {                              \
 ++imsg ;                                                                      \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _atomic_13(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _slist_5(OptPmePencilInitMsg* initmsg) {                                \
    _when_3(initmsg);                                                          \
  }                                                                            \
  void _slist_5_end(OptPmePencilInitMsg* initmsg) {                            \
    _for_1_end(initmsg);                                                       \
  }                                                                            \
  int _when_3(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeFFTMsg* msg;                                                         \
                                                                               \
    msg_buf = __cDep->getMessage(3);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeFFTMsg*) msg_buf->msg;                                     \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_12(initmsg, msg);                                               \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(3, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 3;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_3_end(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {          \
    _slist_5_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_12(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {           \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_12, CkMyPe(), 0, NULL); \
                                                                               \
              recv_untrans(msg); delete msg;                                   \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_3_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_13(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_13, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_14(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_14(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeYPencil_atomic_14, CkMyPe(), 0, NULL); \
     send_untrans();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _slist_3_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
public:                                                                        \
  void many_to_manyRecvTrans(OptPmeDummyMsg* msg_msg) {                        \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(0, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(0, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_0((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void many_to_manyRecvUntrans(OptPmeDummyMsg* msg_msg) {                      \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(1, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(1, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_1((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvTrans(OptPmeFFTMsg* msg_msg) {                                      \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(2, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(2, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_2((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvUntrans(OptPmeFFTMsg* msg_msg) {                                    \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(3, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(3, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_3((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
private:                                                                       \
  CDep *__cDep;                                                                \
  void __sdag_init(void) {                                                     \
    __cDep = new CDep(4,4);                                                    \
    __cDep->addDepends(0,0);                                                   \
    __cDep->addDepends(1,1);                                                   \
    __cDep->addDepends(2,2);                                                   \
    __cDep->addDepends(3,3);                                                   \
  }                                                                            \
public:                                                                        \
  void __sdag_pup(PUP::er& p) {                                                \
    if (__cDep) { __cDep->pup(p); }                                            \
  }                                                                            \
  static void __sdag_register() {                                              \
                                                                               \
    __idx_OptPmeYPencil_atomic_0 = CkRegisterEp("OptPmeYPencil_atomic_0(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_1 = CkRegisterEp("OptPmeYPencil_atomic_1(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_2 = CkRegisterEp("OptPmeYPencil_atomic_2(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_9 = CkRegisterEp("OptPmeYPencil_atomic_9(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_10 = CkRegisterEp("OptPmeYPencil_atomic_10(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_11 = CkRegisterEp("OptPmeYPencil_atomic_11(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_12 = CkRegisterEp("OptPmeYPencil_atomic_12(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_13 = CkRegisterEp("OptPmeYPencil_atomic_13(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_14 = CkRegisterEp("OptPmeYPencil_atomic_14(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_3 = CkRegisterEp("OptPmeYPencil_atomic_3(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_4 = CkRegisterEp("OptPmeYPencil_atomic_4(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_5 = CkRegisterEp("OptPmeYPencil_atomic_5(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_6 = CkRegisterEp("OptPmeYPencil_atomic_6(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_7 = CkRegisterEp("OptPmeYPencil_atomic_7(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
    __idx_OptPmeYPencil_atomic_8 = CkRegisterEp("OptPmeYPencil_atomic_8(void)", NULL, 0, CkIndex_OptPmeYPencil::__idx, 0);\
  }                                                                            \
  static int __idx_OptPmeYPencil_atomic_0;                                     \
  static int __idx_OptPmeYPencil_atomic_1;                                     \
  static int __idx_OptPmeYPencil_atomic_2;                                     \
  static int __idx_OptPmeYPencil_atomic_9;                                     \
  static int __idx_OptPmeYPencil_atomic_10;                                    \
  static int __idx_OptPmeYPencil_atomic_11;                                    \
  static int __idx_OptPmeYPencil_atomic_12;                                    \
  static int __idx_OptPmeYPencil_atomic_13;                                    \
  static int __idx_OptPmeYPencil_atomic_14;                                    \
  static int __idx_OptPmeYPencil_atomic_3;                                     \
  static int __idx_OptPmeYPencil_atomic_4;                                     \
  static int __idx_OptPmeYPencil_atomic_5;                                     \
  static int __idx_OptPmeYPencil_atomic_6;                                     \
  static int __idx_OptPmeYPencil_atomic_7;                                     \
  static int __idx_OptPmeYPencil_atomic_8;                                     \

#define OptPmeYPencil_SDAG_CODE_DEF \
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_0=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_1=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_2=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_9=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_10=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_11=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_12=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_13=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_14=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_3=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_4=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_5=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_6=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_7=0;\
  int OptPmeYPencil::__idx_OptPmeYPencil_atomic_8=0;\

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_OptPmeYPencil> CBase_OptPmeYPencil;

/* DECLS: array OptPmeXPencil: ArrayElement{
OptPmeXPencil(CkMigrateMessage* impl_msg);
OptPmeXPencil(void);
void recvTrans(OptPmeFFTMsg* impl_msg);
void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
void recvLattice(const Lattice &l);
void init(OptPmePencilInitMsg* impl_msg);
};
 */
 class OptPmeXPencil;
 class CkIndex_OptPmeXPencil;
 class CProxy_OptPmeXPencil;
 class CProxyElement_OptPmeXPencil;
 class CProxySection_OptPmeXPencil;
/* --------------- index object ------------------ */
class CkIndex_OptPmeXPencil:public CProxyElement_ArrayElement{
  public:
    typedef OptPmeXPencil local_t;
    typedef CkIndex_OptPmeXPencil index_t;
    typedef CProxy_OptPmeXPencil proxy_t;
    typedef CProxyElement_OptPmeXPencil element_t;
    typedef CProxySection_OptPmeXPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */
    static int __idx_OptPmeXPencil_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_OptPmeXPencil_CkMigrateMessage; }
    static void _call_OptPmeXPencil_CkMigrateMessage(void* impl_msg,OptPmeXPencil* impl_obj);

/* DECLS: OptPmeXPencil(void);
 */
    static int __idx_OptPmeXPencil_void;
    static int ckNew(void) { return __idx_OptPmeXPencil_void; }
    static void _call_OptPmeXPencil_void(void* impl_msg,OptPmeXPencil* impl_obj);

/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    static int __idx_recvTrans_OptPmeFFTMsg;
    static int recvTrans(OptPmeFFTMsg* impl_msg) { return __idx_recvTrans_OptPmeFFTMsg; }
    static void _call_recvTrans_OptPmeFFTMsg(void* impl_msg,OptPmeXPencil* impl_obj);

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    static int __idx_many_to_manyRecvTrans_OptPmeDummyMsg;
    static int many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) { return __idx_many_to_manyRecvTrans_OptPmeDummyMsg; }
    static void _call_many_to_manyRecvTrans_OptPmeDummyMsg(void* impl_msg,OptPmeXPencil* impl_obj);

/* DECLS: void recvLattice(const Lattice &l);
 */
    static int __idx_recvLattice_marshall4;
    static int recvLattice(const Lattice &l) { return __idx_recvLattice_marshall4; }
    static void _call_recvLattice_marshall4(void* impl_msg,OptPmeXPencil* impl_obj);
    static int _callmarshall_recvLattice_marshall4(char* impl_buf,OptPmeXPencil* impl_obj);
    static void _marshallmessagepup_recvLattice_marshall4(PUP::er &p,void *msg);

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    static int __idx_init_OptPmePencilInitMsg;
    static int init(OptPmePencilInitMsg* impl_msg) { return __idx_init_OptPmePencilInitMsg; }
    static void _call_init_OptPmePencilInitMsg(void* impl_msg,OptPmeXPencil* impl_obj);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_OptPmeXPencil : public CProxyElement_ArrayElement{
  public:
    typedef OptPmeXPencil local_t;
    typedef CkIndex_OptPmeXPencil index_t;
    typedef CProxy_OptPmeXPencil proxy_t;
    typedef CProxyElement_OptPmeXPencil element_t;
    typedef CProxySection_OptPmeXPencil section_t;

    CProxyElement_OptPmeXPencil(void) {}
    CProxyElement_OptPmeXPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxyElement_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxyElement_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxyElement_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxyElement_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxyElement_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxyElement_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_ArrayElement::ckSetReductionClient(cb); }
inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
  { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
  { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
inline void *ckSendSync(CkArrayMessage *m, int ep) const
  { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
inline const CkArrayIndex &ckGetIndex() const
  { return CProxyElement_ArrayElement::ckGetIndex(); }
    OptPmeXPencil *ckLocal(void) const
      { return (OptPmeXPencil *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_OptPmeXPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_OptPmeXPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeXPencil(void);
 */
    void insert(int onPE=-1);
/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    void recvTrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void recvLattice(const Lattice &l);
 */
    void recvLattice(const Lattice &l, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxyElement_OptPmeXPencil)
/* ---------------- collective proxy -------------- */
 class CProxy_OptPmeXPencil : public CProxy_ArrayElement{
  public:
    typedef OptPmeXPencil local_t;
    typedef CkIndex_OptPmeXPencil index_t;
    typedef CProxy_OptPmeXPencil proxy_t;
    typedef CProxyElement_OptPmeXPencil element_t;
    typedef CProxySection_OptPmeXPencil section_t;

    CProxy_OptPmeXPencil(void) {}
    CProxy_OptPmeXPencil(const ArrayElement *e) : CProxy_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxy_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxy_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxy_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxy_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxy_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxy_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_ArrayElement::ckSetReductionClient(cb); }
    static CkArrayID ckNew(void) {return ckCreateEmptyArray();}
//Generalized array indexing:
    CProxyElement_OptPmeXPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeXPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeXPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_OptPmeXPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_OptPmeXPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_OptPmeXPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeXPencil(void);
 */
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    void recvTrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void recvLattice(const Lattice &l);
 */
    void recvLattice(const Lattice &l, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxy_OptPmeXPencil)
/* ---------------- section proxy -------------- */
 class CProxySection_OptPmeXPencil : public CProxySection_ArrayElement{
  public:
    typedef OptPmeXPencil local_t;
    typedef CkIndex_OptPmeXPencil index_t;
    typedef CProxy_OptPmeXPencil proxy_t;
    typedef CProxyElement_OptPmeXPencil element_t;
    typedef CProxySection_OptPmeXPencil section_t;

    CProxySection_OptPmeXPencil(void) {}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxySection_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxySection_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxySection_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxySection_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxySection_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxySection_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_ArrayElement::ckSetReductionClient(cb); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
 { CProxySection_ArrayElement::ckSend(m,ep,opts); }
inline CkSectionInfo &ckGetSectionInfo()
  { return CProxySection_ArrayElement::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
  { return CProxySection_ArrayElement::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
  { return CProxySection_ArrayElement::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
  { return CProxySection_ArrayElement::ckGetSectionID(i); }
inline CkArrayID ckGetArrayIDn(int i) const
{return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
inline CkArrayIndex *ckGetArrayElements() const
  { return CProxySection_ArrayElement::ckGetArrayElements(); }
inline CkArrayIndex *ckGetArrayElements(int i) const
{return CProxySection_ArrayElement::ckGetArrayElements(i); }
inline int ckGetNumElements() const
  { return CProxySection_ArrayElement::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{return CProxySection_ArrayElement::ckGetNumElements(i); } 
//Generalized array indexing:
    CProxyElement_OptPmeXPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeXPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_OptPmeXPencil operator () (int idx) const 
        {return CProxyElement_OptPmeXPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_OptPmeXPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_OptPmeXPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_OptPmeXPencil(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_OptPmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_OptPmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: OptPmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: OptPmeXPencil(void);
 */

/* DECLS: void recvTrans(OptPmeFFTMsg* impl_msg);
 */
    void recvTrans(OptPmeFFTMsg* impl_msg) ;

/* DECLS: void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg);
 */
    void many_to_manyRecvTrans(OptPmeDummyMsg* impl_msg) ;

/* DECLS: void recvLattice(const Lattice &l);
 */
    void recvLattice(const Lattice &l, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(OptPmePencilInitMsg* impl_msg);
 */
    void init(OptPmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxySection_OptPmeXPencil)
#define OptPmeXPencil_SDAG_CODE                                                \
public:                                                                        \
  void init(OptPmePencilInitMsg* initmsg) {                                    \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0(initmsg);                                                         \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void init_end(OptPmePencilInitMsg* initmsg) {                                \
  }                                                                            \
                                                                               \
  void _slist_0(OptPmePencilInitMsg* initmsg) {                                \
    _atomic_0(initmsg);                                                        \
  }                                                                            \
  void _slist_0_end(OptPmePencilInitMsg* initmsg) {                            \
    init_end(initmsg);                                                         \
  }                                                                            \
  void _atomic_0(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
                                                                               \
                                                                               \
      base_init(initmsg); delete initmsg;                                      \
      fft_init();                                                              \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_1(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_1(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_1, CkMyPe(), 0, NULL); \
     _iter = 0;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _while_0(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _while_0(OptPmePencilInitMsg* initmsg) {                                \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end(OptPmePencilInitMsg* initmsg) {                            \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_1(OptPmePencilInitMsg* initmsg) {                                \
    _atomic_2(initmsg);                                                        \
  }                                                                            \
  void _slist_1_end(OptPmePencilInitMsg* initmsg) {                            \
    _while_0_end(initmsg);                                                     \
  }                                                                            \
  void _atomic_2(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_2, CkMyPe(), 0, NULL); \
     _iter ++;                                                                 \
    _TRACE_END_EXECUTE();                                                      \
    _if_0(initmsg);                                                            \
  }                                                                            \
                                                                               \
  void _if_0(OptPmePencilInitMsg* initmsg) {                                   \
    if (constant_pressure) {                                                   \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _if_0_end(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end(OptPmePencilInitMsg* initmsg) {                               \
      _if_1(initmsg);                                                          \
  }                                                                            \
                                                                               \
  void _slist_2(OptPmePencilInitMsg* initmsg) {                                \
    _when_0(initmsg);                                                          \
  }                                                                            \
  void _slist_2_end(OptPmePencilInitMsg* initmsg) {                            \
    _if_0_end(initmsg);                                                        \
  }                                                                            \
  int _when_0(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *recvLattice_buf;                                               \
    CkMarshallMsg *recvLattice_msg;                                            \
                                                                               \
    recvLattice_buf = __cDep->getMessage(0);                                   \
                                                                               \
    if ((recvLattice_buf != 0)) {                                              \
       recvLattice_msg = (CkMarshallMsg *)recvLattice_buf->msg;                \
       char *recvLattice_impl_buf=((CkMarshallMsg *)recvLattice_msg)->msgBuf;  \
       PUP::fromMem recvLattice_implP(recvLattice_impl_buf);                   \
       Lattice l; recvLattice_implP|l;                                         \
       recvLattice_impl_buf+=CK_ALIGN(recvLattice_implP.size(),16);            \
       __cDep->removeMessage(recvLattice_buf);                                 \
       delete recvLattice_buf;                                                 \
       _atomic_3(initmsg, l);                                                  \
       delete recvLattice_msg;                                                 \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(0, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_0_end(OptPmePencilInitMsg* initmsg, Lattice l) {                  \
    _slist_2_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_3(OptPmePencilInitMsg* initmsg, Lattice l) {                    \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_3, CkMyPe(), 0, NULL); \
                                                                               \
       lattice = l;                                                            \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_0_end(initmsg, l);                                                   \
  }                                                                            \
                                                                               \
  void _if_1(OptPmePencilInitMsg* initmsg) {                                   \
    if (_iter <= many_to_many_start) {                                         \
      _slist_4(initmsg);                                                       \
    } else {                                                                   \
      _else_0(initmsg);                                                        \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_1_end(OptPmePencilInitMsg* initmsg) {                               \
      _slist_1_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _else_0(OptPmePencilInitMsg* initmsg) {                                 \
    double __begintime = CkVTimer();                                           \
     _TRACE_BG_USER_EVENT_BRACKET("_else_0", __begintime, CkVTimer(),&_bgParentLog); \
    _slist_3(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _else_0_end(OptPmePencilInitMsg* initmsg) {                             \
      _slist_1_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _slist_3(OptPmePencilInitMsg* initmsg) {                                \
    _when_1(initmsg);                                                          \
  }                                                                            \
  void _slist_3_end(OptPmePencilInitMsg* initmsg) {                            \
    _else_0_end(initmsg);                                                      \
  }                                                                            \
  int _when_1(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeDummyMsg* msg;                                                       \
                                                                               \
    msg_buf = __cDep->getMessage(1);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeDummyMsg*) msg_buf->msg;                                   \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_4(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(1, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 1;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_1_end(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {        \
    _atomic_5(initmsg);                                                        \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_4(OptPmePencilInitMsg* initmsg, OptPmeDummyMsg* msg) {          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_4, CkMyPe(), 0, NULL); \
     many_to_many_recv_trans();                                                \
    _TRACE_END_EXECUTE();                                                      \
    _when_1_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_5(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_5, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_6(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_6(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_6, CkMyPe(), 0, NULL); \
     pme_kspace();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_7(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_7(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_7, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_8(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_8(OptPmePencilInitMsg* initmsg) {                               \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_8, CkMyPe(), 0, NULL); \
     many_to_many_send_untrans();                                              \
    _TRACE_END_EXECUTE();                                                      \
    _slist_3_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _slist_4(OptPmePencilInitMsg* initmsg) {                                \
    _for_0(initmsg);                                                           \
  }                                                                            \
  void _slist_4_end(OptPmePencilInitMsg* initmsg) {                            \
    _if_1_end(initmsg);                                                        \
  }                                                                            \
  void _for_0(OptPmePencilInitMsg* initmsg) {                                  \
     imsg=0;                                                                   \
    if ( imsg < initdata.xBlocks) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _atomic_10(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _for_0_end(OptPmePencilInitMsg* initmsg) {                              \
 ++imsg ;                                                                      \
    if ( imsg < initdata.xBlocks) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _atomic_10(initmsg);                                                     \
    }                                                                          \
  }                                                                            \
  void _slist_5(OptPmePencilInitMsg* initmsg) {                                \
    _when_2(initmsg);                                                          \
  }                                                                            \
  void _slist_5_end(OptPmePencilInitMsg* initmsg) {                            \
    _for_0_end(initmsg);                                                       \
  }                                                                            \
  int _when_2(OptPmePencilInitMsg* initmsg) {                                  \
    CMsgBuffer *msg_buf;                                                       \
    OptPmeFFTMsg* msg;                                                         \
                                                                               \
    msg_buf = __cDep->getMessage(2);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (OptPmeFFTMsg*) msg_buf->msg;                                     \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_9(initmsg, msg);                                                \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(2, 1, 0, 1);                                      \
       tr->args[0] = (size_t) initmsg;                                         \
       tr->anyEntries[0] = 2;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_2_end(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {          \
    _slist_5_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_9(OptPmePencilInitMsg* initmsg, OptPmeFFTMsg* msg) {            \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_9, CkMyPe(), 0, NULL); \
                                                                               \
              recv_trans(msg); delete msg;                                     \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_2_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_10(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_10, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_11(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_11(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_11, CkMyPe(), 0, NULL); \
     pme_kspace();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_12(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_12(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_12, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_13(initmsg);                                                       \
  }                                                                            \
                                                                               \
  void _atomic_13(OptPmePencilInitMsg* initmsg) {                              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_OptPmeXPencil_atomic_13, CkMyPe(), 0, NULL); \
     send_untrans();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _slist_4_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
public:                                                                        \
  void recvLattice(Lattice l) {                                                \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    int impl_off=0; int impl_arrstart=0;                                       \
    {                                                                          \
      PUP::sizer implP1;                                                       \
      implP1|l;                                                                \
      impl_off+=implP1.size();                                                 \
    }                                                                          \
    CkMarshallMsg *impl_msg1=CkAllocateMarshallMsg(impl_off,NULL);             \
    {                                                                          \
      PUP::toMem implP1((void *)impl_msg1->msgBuf);                            \
      implP1|l;                                                                \
    }                                                                          \
    cmsgbuf = __cDep->bufferMessage(0, (void *) impl_msg1, (void*) _bgParentLog, 0);\
    tr = __cDep->getTrigger(0, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_0((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void many_to_manyRecvTrans(OptPmeDummyMsg* msg_msg) {                        \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(1, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(1, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_1((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvTrans(OptPmeFFTMsg* msg_msg) {                                      \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(msg_msg));                                           \
    cmsgbuf = __cDep->bufferMessage(2, (void *) msg_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(2, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    {                                                                          \
        _when_2((OptPmePencilInitMsg*) tr->args[0]);                           \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
private:                                                                       \
  CDep *__cDep;                                                                \
  void __sdag_init(void) {                                                     \
    __cDep = new CDep(3,3);                                                    \
    __cDep->addDepends(0,0);                                                   \
    __cDep->addDepends(1,1);                                                   \
    __cDep->addDepends(2,2);                                                   \
  }                                                                            \
public:                                                                        \
  void __sdag_pup(PUP::er& p) {                                                \
    if (__cDep) { __cDep->pup(p); }                                            \
  }                                                                            \
  static void __sdag_register() {                                              \
                                                                               \
    __idx_OptPmeXPencil_atomic_0 = CkRegisterEp("OptPmeXPencil_atomic_0(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_1 = CkRegisterEp("OptPmeXPencil_atomic_1(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_2 = CkRegisterEp("OptPmeXPencil_atomic_2(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_3 = CkRegisterEp("OptPmeXPencil_atomic_3(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_9 = CkRegisterEp("OptPmeXPencil_atomic_9(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_10 = CkRegisterEp("OptPmeXPencil_atomic_10(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_11 = CkRegisterEp("OptPmeXPencil_atomic_11(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_12 = CkRegisterEp("OptPmeXPencil_atomic_12(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_13 = CkRegisterEp("OptPmeXPencil_atomic_13(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_4 = CkRegisterEp("OptPmeXPencil_atomic_4(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_5 = CkRegisterEp("OptPmeXPencil_atomic_5(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_6 = CkRegisterEp("OptPmeXPencil_atomic_6(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_7 = CkRegisterEp("OptPmeXPencil_atomic_7(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
    __idx_OptPmeXPencil_atomic_8 = CkRegisterEp("OptPmeXPencil_atomic_8(void)", NULL, 0, CkIndex_OptPmeXPencil::__idx, 0);\
  }                                                                            \
  static int __idx_OptPmeXPencil_atomic_0;                                     \
  static int __idx_OptPmeXPencil_atomic_1;                                     \
  static int __idx_OptPmeXPencil_atomic_2;                                     \
  static int __idx_OptPmeXPencil_atomic_3;                                     \
  static int __idx_OptPmeXPencil_atomic_9;                                     \
  static int __idx_OptPmeXPencil_atomic_10;                                    \
  static int __idx_OptPmeXPencil_atomic_11;                                    \
  static int __idx_OptPmeXPencil_atomic_12;                                    \
  static int __idx_OptPmeXPencil_atomic_13;                                    \
  static int __idx_OptPmeXPencil_atomic_4;                                     \
  static int __idx_OptPmeXPencil_atomic_5;                                     \
  static int __idx_OptPmeXPencil_atomic_6;                                     \
  static int __idx_OptPmeXPencil_atomic_7;                                     \
  static int __idx_OptPmeXPencil_atomic_8;                                     \

#define OptPmeXPencil_SDAG_CODE_DEF \
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_0=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_1=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_2=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_3=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_9=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_10=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_11=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_12=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_13=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_4=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_5=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_6=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_7=0;\
  int OptPmeXPencil::__idx_OptPmeXPencil_atomic_8=0;\

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_OptPmeXPencil> CBase_OptPmeXPencil;

/* DECLS: group OptPmePencilMapX: CkArrayMap{
OptPmePencilMapX(int xblock, int yblock, int zblock);
};
 */
 class OptPmePencilMapX;
 class CkIndex_OptPmePencilMapX;
 class CProxy_OptPmePencilMapX;
 class CProxyElement_OptPmePencilMapX;
 class CProxySection_OptPmePencilMapX;
/* --------------- index object ------------------ */
class CkIndex_OptPmePencilMapX:public CProxyElement_CkArrayMap{
  public:
    typedef OptPmePencilMapX local_t;
    typedef CkIndex_OptPmePencilMapX index_t;
    typedef CProxy_OptPmePencilMapX proxy_t;
    typedef CProxyElement_OptPmePencilMapX element_t;
    typedef CProxySection_OptPmePencilMapX section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */
    static int __idx_OptPmePencilMapX_marshall1;
    static int ckNew(int xblock, int yblock, int zblock) { return __idx_OptPmePencilMapX_marshall1; }
    static void _call_OptPmePencilMapX_marshall1(void* impl_msg,OptPmePencilMapX* impl_obj);
    static int _callmarshall_OptPmePencilMapX_marshall1(char* impl_buf,OptPmePencilMapX* impl_obj);
    static void _marshallmessagepup_OptPmePencilMapX_marshall1(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_OptPmePencilMapX: public CProxyElement_CkArrayMap{
  public:
    typedef OptPmePencilMapX local_t;
    typedef CkIndex_OptPmePencilMapX index_t;
    typedef CProxy_OptPmePencilMapX proxy_t;
    typedef CProxyElement_OptPmePencilMapX element_t;
    typedef CProxySection_OptPmePencilMapX section_t;

    CProxyElement_OptPmePencilMapX(void) {}
    CProxyElement_OptPmePencilMapX(const IrrGroup *g) : CProxyElement_CkArrayMap(g){  }
    CProxyElement_OptPmePencilMapX(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_OptPmePencilMapX(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapX* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapX* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapX*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */

};
PUPmarshall(CProxyElement_OptPmePencilMapX)
/* ---------------- collective proxy -------------- */
class CProxy_OptPmePencilMapX: public CProxy_CkArrayMap{
  public:
    typedef OptPmePencilMapX local_t;
    typedef CkIndex_OptPmePencilMapX index_t;
    typedef CProxy_OptPmePencilMapX proxy_t;
    typedef CProxyElement_OptPmePencilMapX element_t;
    typedef CProxySection_OptPmePencilMapX section_t;

    CProxy_OptPmePencilMapX(void) {}
    CProxy_OptPmePencilMapX(const IrrGroup *g) : CProxy_CkArrayMap(g){  }
    CProxy_OptPmePencilMapX(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_OptPmePencilMapX(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_OptPmePencilMapX operator[](int onPE) const
      {return CProxyElement_OptPmePencilMapX(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_CkArrayMap::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapX* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapX* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapX*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */
    static CkGroupID ckNew(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_OptPmePencilMapX(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_OptPmePencilMapX)
/* ---------------- section proxy -------------- */
class CProxySection_OptPmePencilMapX: public CProxySection_CkArrayMap{
  public:
    typedef OptPmePencilMapX local_t;
    typedef CkIndex_OptPmePencilMapX index_t;
    typedef CProxy_OptPmePencilMapX proxy_t;
    typedef CProxyElement_OptPmePencilMapX element_t;
    typedef CProxySection_OptPmePencilMapX section_t;

    CProxySection_OptPmePencilMapX(void) {}
    CProxySection_OptPmePencilMapX(const IrrGroup *g) : CProxySection_CkArrayMap(g){  }
    CProxySection_OptPmePencilMapX(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_OptPmePencilMapX(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_OptPmePencilMapX(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_OptPmePencilMapX(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapX* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapX* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapX*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapX(int xblock, int yblock, int zblock);
 */

};
PUPmarshall(CProxySection_OptPmePencilMapX)
typedef CBaseT1<CkArrayMap, CProxy_OptPmePencilMapX> CBase_OptPmePencilMapX;

/* DECLS: group OptPmePencilMapY: CkArrayMap{
OptPmePencilMapY(int xblock, int yblock, int zblock);
};
 */
 class OptPmePencilMapY;
 class CkIndex_OptPmePencilMapY;
 class CProxy_OptPmePencilMapY;
 class CProxyElement_OptPmePencilMapY;
 class CProxySection_OptPmePencilMapY;
/* --------------- index object ------------------ */
class CkIndex_OptPmePencilMapY:public CProxyElement_CkArrayMap{
  public:
    typedef OptPmePencilMapY local_t;
    typedef CkIndex_OptPmePencilMapY index_t;
    typedef CProxy_OptPmePencilMapY proxy_t;
    typedef CProxyElement_OptPmePencilMapY element_t;
    typedef CProxySection_OptPmePencilMapY section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */
    static int __idx_OptPmePencilMapY_marshall1;
    static int ckNew(int xblock, int yblock, int zblock) { return __idx_OptPmePencilMapY_marshall1; }
    static void _call_OptPmePencilMapY_marshall1(void* impl_msg,OptPmePencilMapY* impl_obj);
    static int _callmarshall_OptPmePencilMapY_marshall1(char* impl_buf,OptPmePencilMapY* impl_obj);
    static void _marshallmessagepup_OptPmePencilMapY_marshall1(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_OptPmePencilMapY: public CProxyElement_CkArrayMap{
  public:
    typedef OptPmePencilMapY local_t;
    typedef CkIndex_OptPmePencilMapY index_t;
    typedef CProxy_OptPmePencilMapY proxy_t;
    typedef CProxyElement_OptPmePencilMapY element_t;
    typedef CProxySection_OptPmePencilMapY section_t;

    CProxyElement_OptPmePencilMapY(void) {}
    CProxyElement_OptPmePencilMapY(const IrrGroup *g) : CProxyElement_CkArrayMap(g){  }
    CProxyElement_OptPmePencilMapY(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_OptPmePencilMapY(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapY* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapY* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapY*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */

};
PUPmarshall(CProxyElement_OptPmePencilMapY)
/* ---------------- collective proxy -------------- */
class CProxy_OptPmePencilMapY: public CProxy_CkArrayMap{
  public:
    typedef OptPmePencilMapY local_t;
    typedef CkIndex_OptPmePencilMapY index_t;
    typedef CProxy_OptPmePencilMapY proxy_t;
    typedef CProxyElement_OptPmePencilMapY element_t;
    typedef CProxySection_OptPmePencilMapY section_t;

    CProxy_OptPmePencilMapY(void) {}
    CProxy_OptPmePencilMapY(const IrrGroup *g) : CProxy_CkArrayMap(g){  }
    CProxy_OptPmePencilMapY(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_OptPmePencilMapY(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_OptPmePencilMapY operator[](int onPE) const
      {return CProxyElement_OptPmePencilMapY(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_CkArrayMap::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapY* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapY* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapY*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */
    static CkGroupID ckNew(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_OptPmePencilMapY(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_OptPmePencilMapY)
/* ---------------- section proxy -------------- */
class CProxySection_OptPmePencilMapY: public CProxySection_CkArrayMap{
  public:
    typedef OptPmePencilMapY local_t;
    typedef CkIndex_OptPmePencilMapY index_t;
    typedef CProxy_OptPmePencilMapY proxy_t;
    typedef CProxyElement_OptPmePencilMapY element_t;
    typedef CProxySection_OptPmePencilMapY section_t;

    CProxySection_OptPmePencilMapY(void) {}
    CProxySection_OptPmePencilMapY(const IrrGroup *g) : CProxySection_CkArrayMap(g){  }
    CProxySection_OptPmePencilMapY(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_OptPmePencilMapY(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_OptPmePencilMapY(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_OptPmePencilMapY(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapY* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapY* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapY*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapY(int xblock, int yblock, int zblock);
 */

};
PUPmarshall(CProxySection_OptPmePencilMapY)
typedef CBaseT1<CkArrayMap, CProxy_OptPmePencilMapY> CBase_OptPmePencilMapY;

/* DECLS: group OptPmePencilMapZ: CkArrayMap{
OptPmePencilMapZ(int xblock, int yblock, int zblock);
};
 */
 class OptPmePencilMapZ;
 class CkIndex_OptPmePencilMapZ;
 class CProxy_OptPmePencilMapZ;
 class CProxyElement_OptPmePencilMapZ;
 class CProxySection_OptPmePencilMapZ;
/* --------------- index object ------------------ */
class CkIndex_OptPmePencilMapZ:public CProxyElement_CkArrayMap{
  public:
    typedef OptPmePencilMapZ local_t;
    typedef CkIndex_OptPmePencilMapZ index_t;
    typedef CProxy_OptPmePencilMapZ proxy_t;
    typedef CProxyElement_OptPmePencilMapZ element_t;
    typedef CProxySection_OptPmePencilMapZ section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */
    static int __idx_OptPmePencilMapZ_marshall1;
    static int ckNew(int xblock, int yblock, int zblock) { return __idx_OptPmePencilMapZ_marshall1; }
    static void _call_OptPmePencilMapZ_marshall1(void* impl_msg,OptPmePencilMapZ* impl_obj);
    static int _callmarshall_OptPmePencilMapZ_marshall1(char* impl_buf,OptPmePencilMapZ* impl_obj);
    static void _marshallmessagepup_OptPmePencilMapZ_marshall1(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_OptPmePencilMapZ: public CProxyElement_CkArrayMap{
  public:
    typedef OptPmePencilMapZ local_t;
    typedef CkIndex_OptPmePencilMapZ index_t;
    typedef CProxy_OptPmePencilMapZ proxy_t;
    typedef CProxyElement_OptPmePencilMapZ element_t;
    typedef CProxySection_OptPmePencilMapZ section_t;

    CProxyElement_OptPmePencilMapZ(void) {}
    CProxyElement_OptPmePencilMapZ(const IrrGroup *g) : CProxyElement_CkArrayMap(g){  }
    CProxyElement_OptPmePencilMapZ(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_OptPmePencilMapZ(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapZ* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapZ* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapZ*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */

};
PUPmarshall(CProxyElement_OptPmePencilMapZ)
/* ---------------- collective proxy -------------- */
class CProxy_OptPmePencilMapZ: public CProxy_CkArrayMap{
  public:
    typedef OptPmePencilMapZ local_t;
    typedef CkIndex_OptPmePencilMapZ index_t;
    typedef CProxy_OptPmePencilMapZ proxy_t;
    typedef CProxyElement_OptPmePencilMapZ element_t;
    typedef CProxySection_OptPmePencilMapZ section_t;

    CProxy_OptPmePencilMapZ(void) {}
    CProxy_OptPmePencilMapZ(const IrrGroup *g) : CProxy_CkArrayMap(g){  }
    CProxy_OptPmePencilMapZ(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_OptPmePencilMapZ(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_OptPmePencilMapZ operator[](int onPE) const
      {return CProxyElement_OptPmePencilMapZ(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_CkArrayMap::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapZ* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapZ* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapZ*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */
    static CkGroupID ckNew(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_OptPmePencilMapZ(int xblock, int yblock, int zblock, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_OptPmePencilMapZ)
/* ---------------- section proxy -------------- */
class CProxySection_OptPmePencilMapZ: public CProxySection_CkArrayMap{
  public:
    typedef OptPmePencilMapZ local_t;
    typedef CkIndex_OptPmePencilMapZ index_t;
    typedef CProxy_OptPmePencilMapZ proxy_t;
    typedef CProxyElement_OptPmePencilMapZ element_t;
    typedef CProxySection_OptPmePencilMapZ section_t;

    CProxySection_OptPmePencilMapZ(void) {}
    CProxySection_OptPmePencilMapZ(const IrrGroup *g) : CProxySection_CkArrayMap(g){  }
    CProxySection_OptPmePencilMapZ(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_OptPmePencilMapZ(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_OptPmePencilMapZ(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_OptPmePencilMapZ(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_CkArrayMap::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_CkArrayMap::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_CkArrayMap::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_CkArrayMap::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CkArrayMap::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_CkArrayMap::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_CkArrayMap::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    OptPmePencilMapZ* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmePencilMapZ* ckLocalBranch(CkGroupID gID) {
      return (OptPmePencilMapZ*)CkLocalBranch(gID);
    }
/* DECLS: OptPmePencilMapZ(int xblock, int yblock, int zblock);
 */

};
PUPmarshall(CProxySection_OptPmePencilMapZ)
typedef CBaseT1<CkArrayMap, CProxy_OptPmePencilMapZ> CBase_OptPmePencilMapZ;

extern void _registerPmeFFTLib(void);
#endif
