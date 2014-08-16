#ifndef _DECL_ComputePmeMgr_H_
#define _DECL_ComputePmeMgr_H_
#include "charm++.h"
/* DECLS: message PmeGridMsg{
float qgrid[];
int zlist[];
char fgrid[];
PmeReduction evir[];
}
;
 */
class PmeGridMsg;
class CMessage_PmeGridMsg:public CkMessage{
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
    CMessage_PmeGridMsg();
    static void *pack(PmeGridMsg *p);
    static PmeGridMsg* unpack(void* p);
    void *operator new(size_t, int, int, int, int);
    void *operator new(size_t, int, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message PmeTransMsg{
float qgrid[];
}
;
 */
class PmeTransMsg;
class CMessage_PmeTransMsg:public CkMessage{
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
    CMessage_PmeTransMsg();
    static void *pack(PmeTransMsg *p);
    static PmeTransMsg* unpack(void* p);
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

/* DECLS: message PmeSharedTransMsg;
 */
class PmeSharedTransMsg;
class CMessage_PmeSharedTransMsg:public CkMessage{
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
    CMessage_PmeSharedTransMsg();
    static void *pack(PmeSharedTransMsg *p);
    static PmeSharedTransMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message PmeUntransMsg{
float qgrid[];
PmeReduction evir[];
}
;
 */
class PmeUntransMsg;
class CMessage_PmeUntransMsg:public CkMessage{
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
    CMessage_PmeUntransMsg();
    static void *pack(PmeUntransMsg *p);
    static PmeUntransMsg* unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message PmeSharedUntransMsg;
 */
class PmeSharedUntransMsg;
class CMessage_PmeSharedUntransMsg:public CkMessage{
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
    CMessage_PmeSharedUntransMsg();
    static void *pack(PmeSharedUntransMsg *p);
    static PmeSharedUntransMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group PmePencilMap: CkArrayMap{
PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
};
 */
 class PmePencilMap;
 class CkIndex_PmePencilMap;
 class CProxy_PmePencilMap;
 class CProxyElement_PmePencilMap;
 class CProxySection_PmePencilMap;
/* --------------- index object ------------------ */
class CkIndex_PmePencilMap:public CProxyElement_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
    static int __idx_PmePencilMap_marshall1;
    static int ckNew(int i_a, int i_b, int n_b, int n, const int *d) { return __idx_PmePencilMap_marshall1; }
    static void _call_PmePencilMap_marshall1(void* impl_msg,PmePencilMap* impl_obj);
    static int _callmarshall_PmePencilMap_marshall1(char* impl_buf,PmePencilMap* impl_obj);
    static void _marshallmessagepup_PmePencilMap_marshall1(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_PmePencilMap: public CProxyElement_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    CProxyElement_PmePencilMap(void) {}
    CProxyElement_PmePencilMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){  }
    CProxyElement_PmePencilMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_PmePencilMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){  }
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
    PmePencilMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */

};
PUPmarshall(CProxyElement_PmePencilMap)
/* ---------------- collective proxy -------------- */
class CProxy_PmePencilMap: public CProxy_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    CProxy_PmePencilMap(void) {}
    CProxy_PmePencilMap(const IrrGroup *g) : CProxy_CkArrayMap(g){  }
    CProxy_PmePencilMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PmePencilMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_PmePencilMap operator[](int onPE) const
      {return CProxyElement_PmePencilMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    PmePencilMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
    static CkGroupID ckNew(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_PmePencilMap)
/* ---------------- section proxy -------------- */
class CProxySection_PmePencilMap: public CProxySection_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    CProxySection_PmePencilMap(void) {}
    CProxySection_PmePencilMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){  }
    CProxySection_PmePencilMap(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PmePencilMap(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CkArrayMap(_gid,_pelist,_npes){  }
    CProxySection_PmePencilMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes){  }
    CProxySection_PmePencilMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    PmePencilMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */

};
PUPmarshall(CProxySection_PmePencilMap)
typedef CBaseT1<CkArrayMap, CProxy_PmePencilMap> CBase_PmePencilMap;

/* DECLS: message PmePencilInitMsg;
 */
class PmePencilInitMsg;
class CMessage_PmePencilInitMsg:public CkMessage{
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
    CMessage_PmePencilInitMsg();
    static void *pack(PmePencilInitMsg *p);
    static PmePencilInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message PmeAckMsg;
 */
class PmeAckMsg;
class CMessage_PmeAckMsg:public CkMessage{
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
    CMessage_PmeAckMsg();
    static void *pack(PmeAckMsg *p);
    static PmeAckMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: array PmeZPencil: ArrayElement{
PmeZPencil(CkMigrateMessage* impl_msg);
PmeZPencil(void);
void recvGrid(PmeGridMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(PmePencilInitMsg* impl_msg);
};
 */
 class PmeZPencil;
 class CkIndex_PmeZPencil;
 class CProxy_PmeZPencil;
 class CProxyElement_PmeZPencil;
 class CProxySection_PmeZPencil;
/* --------------- index object ------------------ */
class CkIndex_PmeZPencil:public CProxyElement_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */
    static int __idx_PmeZPencil_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_PmeZPencil_CkMigrateMessage; }
    static void _call_PmeZPencil_CkMigrateMessage(void* impl_msg,PmeZPencil* impl_obj);

/* DECLS: PmeZPencil(void);
 */
    static int __idx_PmeZPencil_void;
    static int ckNew(void) { return __idx_PmeZPencil_void; }
    static void _call_PmeZPencil_void(void* impl_msg,PmeZPencil* impl_obj);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    static int __idx_recvGrid_PmeGridMsg;
    static int recvGrid(PmeGridMsg* impl_msg) { return __idx_recvGrid_PmeGridMsg; }
    static void _call_recvGrid_PmeGridMsg(void* impl_msg,PmeZPencil* impl_obj);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    static int __idx_recvUntrans_PmeUntransMsg;
    static int recvUntrans(PmeUntransMsg* impl_msg) { return __idx_recvUntrans_PmeUntransMsg; }
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg,PmeZPencil* impl_obj);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    static int __idx_recvAck_PmeAckMsg;
    static int recvAck(PmeAckMsg* impl_msg) { return __idx_recvAck_PmeAckMsg; }
    static void _call_recvAck_PmeAckMsg(void* impl_msg,PmeZPencil* impl_obj);

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    static int __idx_dummyRecvGrid_marshall5;
    static int dummyRecvGrid(int pe, int done = 0) { return __idx_dummyRecvGrid_marshall5; }
    static void _call_dummyRecvGrid_marshall5(void* impl_msg,PmeZPencil* impl_obj);
    static int _callmarshall_dummyRecvGrid_marshall5(char* impl_buf,PmeZPencil* impl_obj);
    static void _marshallmessagepup_dummyRecvGrid_marshall5(PUP::er &p,void *msg);

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    static int __idx_init_PmePencilInitMsg;
    static int init(PmePencilInitMsg* impl_msg) { return __idx_init_PmePencilInitMsg; }
    static void _call_init_PmePencilInitMsg(void* impl_msg,PmeZPencil* impl_obj);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmeZPencil : public CProxyElement_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    CProxyElement_PmeZPencil(void) {}
    CProxyElement_PmeZPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
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
    PmeZPencil *ckLocal(void) const
      { return (PmeZPencil *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_PmeZPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_PmeZPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeZPencil(void);
 */
    void insert(int onPE=-1);
/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    void recvGrid(PmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxyElement_PmeZPencil)
/* ---------------- collective proxy -------------- */
 class CProxy_PmeZPencil : public CProxy_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    CProxy_PmeZPencil(void) {}
    CProxy_PmeZPencil(const ArrayElement *e) : CProxy_ArrayElement(e){  }
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
    CProxyElement_PmeZPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmeZPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_PmeZPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmeZPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmeZPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeZPencil(void);
 */
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    void recvGrid(PmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxy_PmeZPencil)
/* ---------------- section proxy -------------- */
 class CProxySection_PmeZPencil : public CProxySection_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    CProxySection_PmeZPencil(void) {}
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
    CProxyElement_PmeZPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator () (int idx) const 
        {return CProxyElement_PmeZPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmeZPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeZPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_PmeZPencil(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_PmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeZPencil(void);
 */

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    void recvGrid(PmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxySection_PmeZPencil)
#define PmeZPencil_SDAG_CODE                                                   \
public:                                                                        \
  void init(PmePencilInitMsg* initmsg) {                                       \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0(initmsg);                                                         \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void init_end(PmePencilInitMsg* initmsg) {                                   \
  }                                                                            \
                                                                               \
  void _slist_0(PmePencilInitMsg* initmsg) {                                   \
    _atomic_0(initmsg);                                                        \
  }                                                                            \
  void _slist_0_end(PmePencilInitMsg* initmsg) {                               \
    init_end(initmsg);                                                         \
  }                                                                            \
  void _atomic_0(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
                                                                               \
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
  void _while_0(PmePencilInitMsg* initmsg) {                                   \
    if ( ! imsg ) {                                                            \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _while_1(initmsg);                                                       \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end(PmePencilInitMsg* initmsg) {                               \
    if ( ! imsg ) {                                                            \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _while_1(initmsg);                                                       \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_1(PmePencilInitMsg* initmsg) {                                   \
    _when_0(initmsg);                                                          \
  }                                                                            \
  void _slist_1_end(PmePencilInitMsg* initmsg) {                               \
    _while_0_end(initmsg);                                                     \
  }                                                                            \
  int _when_0(PmePencilInitMsg* initmsg) {                                     \
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
  void _when_0_end(PmePencilInitMsg* initmsg, int pe, int done) {              \
    _slist_1_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_1(PmePencilInitMsg* initmsg, int pe, int done) {                \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_atomic_1, CkMyPe(), 0, NULL); \
                                                                               \
          if ( done ) imsg = 1;                                                \
          else {                                                               \
            grid_msgs.add(0);                                                  \
                                                                               \
                                                                               \
          }                                                                    \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_0_end(initmsg, pe, done);                                            \
  }                                                                            \
                                                                               \
  void _while_1(PmePencilInitMsg* initmsg) {                                   \
    if ( 1 ) {                                                                 \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_1_end(PmePencilInitMsg* initmsg) {                               \
    if ( 1 ) {                                                                 \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_2(PmePencilInitMsg* initmsg) {                                   \
    _atomic_2(initmsg);                                                        \
  }                                                                            \
  void _slist_2_end(PmePencilInitMsg* initmsg) {                               \
    _while_1_end(initmsg);                                                     \
  }                                                                            \
  void _atomic_2(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_atomic_2, CkMyPe(), 0, NULL); \
     hasData = 0;                                                              \
    _TRACE_END_EXECUTE();                                                      \
    _for_0(initmsg);                                                           \
  }                                                                            \
                                                                               \
  void _for_0(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < grid_msgs.size()) {                                            \
      _slist_3(initmsg);                                                       \
    } else {                                                                   \
      _if_0(initmsg);                                                          \
    }                                                                          \
  }                                                                            \
  void _for_0_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < grid_msgs.size()) {                                            \
      _slist_3(initmsg);                                                       \
    } else {                                                                   \
      _if_0(initmsg);                                                          \
    }                                                                          \
  }                                                                            \
  void _slist_3(PmePencilInitMsg* initmsg) {                                   \
    _when_1(initmsg);                                                          \
  }                                                                            \
  void _slist_3_end(PmePencilInitMsg* initmsg) {                               \
    _for_0_end(initmsg);                                                       \
  }                                                                            \
  int _when_1(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeGridMsg* msg;                                                           \
                                                                               \
    msg_buf = __cDep->getMessage(1);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeGridMsg*) msg_buf->msg;                                       \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_3(initmsg, msg);                                                \
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
  void _when_1_end(PmePencilInitMsg* initmsg, PmeGridMsg* msg) {               \
    _slist_3_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_3(PmePencilInitMsg* initmsg, PmeGridMsg* msg) {                 \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_recv_grid, CkMyPe(), 0, NULL); \
                                                                               \
            if ( msg->hasData ) hasData = 1;                                   \
            recv_grid(msg); grid_msgs[imsg] = msg;                             \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_1_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _if_0(PmePencilInitMsg* initmsg) {                                      \
    if ( hasData ) {                                                           \
      _slist_4(initmsg);                                                       \
    } else {                                                                   \
      _if_0_end(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end(PmePencilInitMsg* initmsg) {                                  \
      _atomic_5(initmsg);                                                      \
  }                                                                            \
                                                                               \
  void _slist_4(PmePencilInitMsg* initmsg) {                                   \
    _atomic_4(initmsg);                                                        \
  }                                                                            \
  void _slist_4_end(PmePencilInitMsg* initmsg) {                               \
    _if_0_end(initmsg);                                                        \
  }                                                                            \
  void _atomic_4(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_forward_fft, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _slist_4_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_5(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_send_trans, CkMyPe(), 0, NULL); \
     send_trans();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _if_1(initmsg);                                                            \
  }                                                                            \
                                                                               \
  void _if_1(PmePencilInitMsg* initmsg) {                                      \
    if ( hasData ) {                                                           \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _if_1_end(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_1_end(PmePencilInitMsg* initmsg) {                                  \
      _atomic_8(initmsg);                                                      \
  }                                                                            \
                                                                               \
  void _slist_5(PmePencilInitMsg* initmsg) {                                   \
    _for_1(initmsg);                                                           \
  }                                                                            \
  void _slist_5_end(PmePencilInitMsg* initmsg) {                               \
    _if_1_end(initmsg);                                                        \
  }                                                                            \
  void _for_1(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < initdata.zBlocks) {                                            \
      _slist_6(initmsg);                                                       \
    } else {                                                                   \
      _atomic_7(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
  void _for_1_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < initdata.zBlocks) {                                            \
      _slist_6(initmsg);                                                       \
    } else {                                                                   \
      _atomic_7(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
  void _slist_6(PmePencilInitMsg* initmsg) {                                   \
    _when_2(initmsg);                                                          \
  }                                                                            \
  void _slist_6_end(PmePencilInitMsg* initmsg) {                               \
    _for_1_end(initmsg);                                                       \
  }                                                                            \
  int _when_2(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeUntransMsg* msg;                                                        \
                                                                               \
    msg_buf = __cDep->getMessage(2);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeUntransMsg*) msg_buf->msg;                                    \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_6(initmsg, msg);                                                \
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
  void _when_2_end(PmePencilInitMsg* initmsg, PmeUntransMsg* msg) {            \
    _slist_6_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_6(PmePencilInitMsg* initmsg, PmeUntransMsg* msg) {              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_recv_untrans, CkMyPe(), 0, NULL); \
                                                                               \
        recv_untrans(msg); delete msg;                                         \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_2_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_7(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_backward_fft, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _slist_5_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_8(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_send_ungrid, CkMyPe(), 0, NULL); \
                                                                               \
    int send_evir = 1;                                                         \
    for ( imsg=0; imsg < grid_msgs.size(); ++imsg ) {                          \
      PmeGridMsg *msg = grid_msgs[imsg];                                       \
      if ( msg->hasData ) {                                                    \
        if ( send_evir ) {                                                     \
    msg->evir[0] = evir;                                                       \
    send_evir = 0;                                                             \
        } else {                                                               \
    msg->evir[0] = 0.;                                                         \
        }                                                                      \
      }                                                                        \
      send_ungrid(msg);                                                        \
    }                                                                          \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _if_2(initmsg);                                                            \
  }                                                                            \
                                                                               \
  void _if_2(PmePencilInitMsg* initmsg) {                                      \
    if ( ! hasData ) {                                                         \
      _slist_7(initmsg);                                                       \
    } else {                                                                   \
      _if_2_end(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_2_end(PmePencilInitMsg* initmsg) {                                  \
      _slist_2_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _slist_7(PmePencilInitMsg* initmsg) {                                   \
    _for_2(initmsg);                                                           \
  }                                                                            \
  void _slist_7_end(PmePencilInitMsg* initmsg) {                               \
    _if_2_end(initmsg);                                                        \
  }                                                                            \
  void _for_2(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < initdata.zBlocks) {                                            \
      _slist_8(initmsg);                                                       \
    } else {                                                                   \
      _slist_7_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
  void _for_2_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < initdata.zBlocks) {                                            \
      _slist_8(initmsg);                                                       \
    } else {                                                                   \
      _slist_7_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
  void _slist_8(PmePencilInitMsg* initmsg) {                                   \
    _when_3(initmsg);                                                          \
  }                                                                            \
  void _slist_8_end(PmePencilInitMsg* initmsg) {                               \
    _for_2_end(initmsg);                                                       \
  }                                                                            \
  int _when_3(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeAckMsg* msg;                                                            \
                                                                               \
    msg_buf = __cDep->getMessage(3);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeAckMsg*) msg_buf->msg;                                        \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_9(initmsg, msg);                                                \
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
  void _when_3_end(PmePencilInitMsg* initmsg, PmeAckMsg* msg) {                \
    _slist_8_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_9(PmePencilInitMsg* initmsg, PmeAckMsg* msg) {                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeZPencil_atomic_9, CkMyPe(), 0, NULL); \
     delete msg;                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_3_end(initmsg, msg);                                                 \
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
        _when_0((PmePencilInitMsg*) tr->args[0]);                              \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvGrid(PmeGridMsg* msg_msg) {                                         \
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
        _when_1((PmePencilInitMsg*) tr->args[0]);                              \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvUntrans(PmeUntransMsg* msg_msg) {                                   \
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
        _when_2((PmePencilInitMsg*) tr->args[0]);                              \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvAck(PmeAckMsg* msg_msg) {                                           \
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
        _when_3((PmePencilInitMsg*) tr->args[0]);                              \
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
    __idx_PmeZPencil_atomic_0 = CkRegisterEp("PmeZPencil_atomic_0(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_atomic_1 = CkRegisterEp("PmeZPencil_atomic_1(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_atomic_2 = CkRegisterEp("PmeZPencil_atomic_2(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_recv_grid = CkRegisterEp("PmeZPencil_recv_grid(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_forward_fft = CkRegisterEp("PmeZPencil_forward_fft(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_send_trans = CkRegisterEp("PmeZPencil_send_trans(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_recv_untrans = CkRegisterEp("PmeZPencil_recv_untrans(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_backward_fft = CkRegisterEp("PmeZPencil_backward_fft(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_send_ungrid = CkRegisterEp("PmeZPencil_send_ungrid(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
    __idx_PmeZPencil_atomic_9 = CkRegisterEp("PmeZPencil_atomic_9(void)", NULL, 0, CkIndex_PmeZPencil::__idx, 0);\
  }                                                                            \
  static int __idx_PmeZPencil_atomic_0;                                        \
  static int __idx_PmeZPencil_atomic_1;                                        \
  static int __idx_PmeZPencil_atomic_2;                                        \
  static int __idx_PmeZPencil_recv_grid;                                       \
  static int __idx_PmeZPencil_forward_fft;                                     \
  static int __idx_PmeZPencil_send_trans;                                      \
  static int __idx_PmeZPencil_recv_untrans;                                    \
  static int __idx_PmeZPencil_backward_fft;                                    \
  static int __idx_PmeZPencil_send_ungrid;                                     \
  static int __idx_PmeZPencil_atomic_9;                                        \

#define PmeZPencil_SDAG_CODE_DEF \
  int PmeZPencil::__idx_PmeZPencil_atomic_0=0;\
  int PmeZPencil::__idx_PmeZPencil_atomic_1=0;\
  int PmeZPencil::__idx_PmeZPencil_atomic_2=0;\
  int PmeZPencil::__idx_PmeZPencil_recv_grid=0;\
  int PmeZPencil::__idx_PmeZPencil_forward_fft=0;\
  int PmeZPencil::__idx_PmeZPencil_send_trans=0;\
  int PmeZPencil::__idx_PmeZPencil_recv_untrans=0;\
  int PmeZPencil::__idx_PmeZPencil_backward_fft=0;\
  int PmeZPencil::__idx_PmeZPencil_send_ungrid=0;\
  int PmeZPencil::__idx_PmeZPencil_atomic_9=0;\

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmeZPencil> CBase_PmeZPencil;

/* DECLS: array PmeYPencil: ArrayElement{
PmeYPencil(CkMigrateMessage* impl_msg);
PmeYPencil(void);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
};
 */
 class PmeYPencil;
 class CkIndex_PmeYPencil;
 class CProxy_PmeYPencil;
 class CProxyElement_PmeYPencil;
 class CProxySection_PmeYPencil;
/* --------------- index object ------------------ */
class CkIndex_PmeYPencil:public CProxyElement_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */
    static int __idx_PmeYPencil_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_PmeYPencil_CkMigrateMessage; }
    static void _call_PmeYPencil_CkMigrateMessage(void* impl_msg,PmeYPencil* impl_obj);

/* DECLS: PmeYPencil(void);
 */
    static int __idx_PmeYPencil_void;
    static int ckNew(void) { return __idx_PmeYPencil_void; }
    static void _call_PmeYPencil_void(void* impl_msg,PmeYPencil* impl_obj);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    static int __idx_recvTrans_PmeTransMsg;
    static int recvTrans(PmeTransMsg* impl_msg) { return __idx_recvTrans_PmeTransMsg; }
    static void _call_recvTrans_PmeTransMsg(void* impl_msg,PmeYPencil* impl_obj);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    static int __idx_recvUntrans_PmeUntransMsg;
    static int recvUntrans(PmeUntransMsg* impl_msg) { return __idx_recvUntrans_PmeUntransMsg; }
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg,PmeYPencil* impl_obj);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    static int __idx_recvAck_PmeAckMsg;
    static int recvAck(PmeAckMsg* impl_msg) { return __idx_recvAck_PmeAckMsg; }
    static void _call_recvAck_PmeAckMsg(void* impl_msg,PmeYPencil* impl_obj);

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    static int __idx_init_PmePencilInitMsg;
    static int init(PmePencilInitMsg* impl_msg) { return __idx_init_PmePencilInitMsg; }
    static void _call_init_PmePencilInitMsg(void* impl_msg,PmeYPencil* impl_obj);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmeYPencil : public CProxyElement_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    CProxyElement_PmeYPencil(void) {}
    CProxyElement_PmeYPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
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
    PmeYPencil *ckLocal(void) const
      { return (PmeYPencil *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_PmeYPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_PmeYPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeYPencil(void);
 */
    void insert(int onPE=-1);
/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxyElement_PmeYPencil)
/* ---------------- collective proxy -------------- */
 class CProxy_PmeYPencil : public CProxy_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    CProxy_PmeYPencil(void) {}
    CProxy_PmeYPencil(const ArrayElement *e) : CProxy_ArrayElement(e){  }
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
    CProxyElement_PmeYPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmeYPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_PmeYPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmeYPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmeYPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeYPencil(void);
 */
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxy_PmeYPencil)
/* ---------------- section proxy -------------- */
 class CProxySection_PmeYPencil : public CProxySection_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    CProxySection_PmeYPencil(void) {}
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
    CProxyElement_PmeYPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator () (int idx) const 
        {return CProxyElement_PmeYPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmeYPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeYPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_PmeYPencil(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_PmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeYPencil(void);
 */

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxySection_PmeYPencil)
#define PmeYPencil_SDAG_CODE                                                   \
public:                                                                        \
  void init(PmePencilInitMsg* initmsg) {                                       \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0(initmsg);                                                         \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void init_end(PmePencilInitMsg* initmsg) {                                   \
  }                                                                            \
                                                                               \
  void _slist_0(PmePencilInitMsg* initmsg) {                                   \
    _atomic_0(initmsg);                                                        \
  }                                                                            \
  void _slist_0_end(PmePencilInitMsg* initmsg) {                               \
    init_end(initmsg);                                                         \
  }                                                                            \
  void _atomic_0(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
                                                                               \
                                                                               \
      base_init(initmsg); delete initmsg;                                      \
      fft_init();                                                              \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _while_0(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _while_0(PmePencilInitMsg* initmsg) {                                   \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end(PmePencilInitMsg* initmsg) {                               \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_1(PmePencilInitMsg* initmsg) {                                   \
    _atomic_1(initmsg);                                                        \
  }                                                                            \
  void _slist_1_end(PmePencilInitMsg* initmsg) {                               \
    _while_0_end(initmsg);                                                     \
  }                                                                            \
  void _atomic_1(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_atomic_1, CkMyPe(), 0, NULL); \
     hasData = 0;                                                              \
    _TRACE_END_EXECUTE();                                                      \
    _for_0(initmsg);                                                           \
  }                                                                            \
                                                                               \
  void _for_0(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _if_0(initmsg);                                                          \
    }                                                                          \
  }                                                                            \
  void _for_0_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _if_0(initmsg);                                                          \
    }                                                                          \
  }                                                                            \
  void _slist_2(PmePencilInitMsg* initmsg) {                                   \
    _when_0(initmsg);                                                          \
  }                                                                            \
  void _slist_2_end(PmePencilInitMsg* initmsg) {                               \
    _for_0_end(initmsg);                                                       \
  }                                                                            \
  int _when_0(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeTransMsg* msg;                                                          \
                                                                               \
    msg_buf = __cDep->getMessage(0);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeTransMsg*) msg_buf->msg;                                      \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_2(initmsg, msg);                                                \
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
  void _when_0_end(PmePencilInitMsg* initmsg, PmeTransMsg* msg) {              \
    _slist_2_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_2(PmePencilInitMsg* initmsg, PmeTransMsg* msg) {                \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_recv_trans, CkMyPe(), 0, NULL); \
                                                                               \
            if ( msg->hasData ) hasData = 1;                                   \
            needs_reply[msg->sourceNode] = msg->hasData;                       \
            recv_trans(msg); delete msg;                                       \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_0_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _if_0(PmePencilInitMsg* initmsg) {                                      \
    if ( hasData ) {                                                           \
      _slist_3(initmsg);                                                       \
    } else {                                                                   \
      _if_0_end(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end(PmePencilInitMsg* initmsg) {                                  \
      _atomic_4(initmsg);                                                      \
  }                                                                            \
                                                                               \
  void _slist_3(PmePencilInitMsg* initmsg) {                                   \
    _atomic_3(initmsg);                                                        \
  }                                                                            \
  void _slist_3_end(PmePencilInitMsg* initmsg) {                               \
    _if_0_end(initmsg);                                                        \
  }                                                                            \
  void _atomic_3(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_forward_fft, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _slist_3_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_4(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_send_trans, CkMyPe(), 0, NULL); \
     send_trans();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _if_1(initmsg);                                                            \
  }                                                                            \
                                                                               \
  void _if_1(PmePencilInitMsg* initmsg) {                                      \
    if ( hasData ) {                                                           \
      _slist_6(initmsg);                                                       \
    } else {                                                                   \
      _else_0(initmsg);                                                        \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_1_end(PmePencilInitMsg* initmsg) {                                  \
      _slist_1_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _else_0(PmePencilInitMsg* initmsg) {                                    \
    double __begintime = CkVTimer();                                           \
     _TRACE_BG_USER_EVENT_BRACKET("_else_0", __begintime, CkVTimer(),&_bgParentLog); \
    _slist_4(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _else_0_end(PmePencilInitMsg* initmsg) {                                \
      _slist_1_end(initmsg);                                                   \
  }                                                                            \
                                                                               \
  void _slist_4(PmePencilInitMsg* initmsg) {                                   \
    _atomic_5(initmsg);                                                        \
  }                                                                            \
  void _slist_4_end(PmePencilInitMsg* initmsg) {                               \
    _else_0_end(initmsg);                                                      \
  }                                                                            \
  void _atomic_5(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_send_untrans1, CkMyPe(), 0, NULL); \
     send_untrans();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _for_1(initmsg);                                                           \
  }                                                                            \
                                                                               \
  void _for_1(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _slist_4_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
  void _for_1_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_5(initmsg);                                                       \
    } else {                                                                   \
      _slist_4_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
  void _slist_5(PmePencilInitMsg* initmsg) {                                   \
    _when_1(initmsg);                                                          \
  }                                                                            \
  void _slist_5_end(PmePencilInitMsg* initmsg) {                               \
    _for_1_end(initmsg);                                                       \
  }                                                                            \
  int _when_1(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeAckMsg* msg;                                                            \
                                                                               \
    msg_buf = __cDep->getMessage(1);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeAckMsg*) msg_buf->msg;                                        \
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
  void _when_1_end(PmePencilInitMsg* initmsg, PmeAckMsg* msg) {                \
    _slist_5_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_6(PmePencilInitMsg* initmsg, PmeAckMsg* msg) {                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_atomic_6, CkMyPe(), 0, NULL); \
     delete msg;                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_1_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _slist_6(PmePencilInitMsg* initmsg) {                                   \
    _for_2(initmsg);                                                           \
  }                                                                            \
  void _slist_6_end(PmePencilInitMsg* initmsg) {                               \
    _if_1_end(initmsg);                                                        \
  }                                                                            \
  void _for_2(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_7(initmsg);                                                       \
    } else {                                                                   \
      _atomic_8(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
  void _for_2_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < initdata.yBlocks) {                                            \
      _slist_7(initmsg);                                                       \
    } else {                                                                   \
      _atomic_8(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
  void _slist_7(PmePencilInitMsg* initmsg) {                                   \
    _when_2(initmsg);                                                          \
  }                                                                            \
  void _slist_7_end(PmePencilInitMsg* initmsg) {                               \
    _for_2_end(initmsg);                                                       \
  }                                                                            \
  int _when_2(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeUntransMsg* msg;                                                        \
                                                                               \
    msg_buf = __cDep->getMessage(2);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeUntransMsg*) msg_buf->msg;                                    \
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
  void _when_2_end(PmePencilInitMsg* initmsg, PmeUntransMsg* msg) {            \
    _slist_7_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_7(PmePencilInitMsg* initmsg, PmeUntransMsg* msg) {              \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_recv_untrans, CkMyPe(), 0, NULL); \
                                                                               \
            recv_untrans(msg); delete msg;                                     \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_2_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _atomic_8(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_backward_fft, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_9(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_9(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeYPencil_send_untrans0, CkMyPe(), 0, NULL); \
     send_untrans();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _slist_6_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
public:                                                                        \
  void recvTrans(PmeTransMsg* msg_msg) {                                       \
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
        _when_0((PmePencilInitMsg*) tr->args[0]);                              \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvAck(PmeAckMsg* msg_msg) {                                           \
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
        _when_1((PmePencilInitMsg*) tr->args[0]);                              \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recvUntrans(PmeUntransMsg* msg_msg) {                                   \
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
        _when_2((PmePencilInitMsg*) tr->args[0]);                              \
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
    __idx_PmeYPencil_atomic_0 = CkRegisterEp("PmeYPencil_atomic_0(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_atomic_1 = CkRegisterEp("PmeYPencil_atomic_1(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_recv_trans = CkRegisterEp("PmeYPencil_recv_trans(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_forward_fft = CkRegisterEp("PmeYPencil_forward_fft(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_send_trans = CkRegisterEp("PmeYPencil_send_trans(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_recv_untrans = CkRegisterEp("PmeYPencil_recv_untrans(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_backward_fft = CkRegisterEp("PmeYPencil_backward_fft(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_send_untrans0 = CkRegisterEp("PmeYPencil_send_untrans0(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_send_untrans1 = CkRegisterEp("PmeYPencil_send_untrans1(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
    __idx_PmeYPencil_atomic_6 = CkRegisterEp("PmeYPencil_atomic_6(void)", NULL, 0, CkIndex_PmeYPencil::__idx, 0);\
  }                                                                            \
  static int __idx_PmeYPencil_atomic_0;                                        \
  static int __idx_PmeYPencil_atomic_1;                                        \
  static int __idx_PmeYPencil_recv_trans;                                      \
  static int __idx_PmeYPencil_forward_fft;                                     \
  static int __idx_PmeYPencil_send_trans;                                      \
  static int __idx_PmeYPencil_recv_untrans;                                    \
  static int __idx_PmeYPencil_backward_fft;                                    \
  static int __idx_PmeYPencil_send_untrans0;                                   \
  static int __idx_PmeYPencil_send_untrans1;                                   \
  static int __idx_PmeYPencil_atomic_6;                                        \

#define PmeYPencil_SDAG_CODE_DEF \
  int PmeYPencil::__idx_PmeYPencil_atomic_0=0;\
  int PmeYPencil::__idx_PmeYPencil_atomic_1=0;\
  int PmeYPencil::__idx_PmeYPencil_recv_trans=0;\
  int PmeYPencil::__idx_PmeYPencil_forward_fft=0;\
  int PmeYPencil::__idx_PmeYPencil_send_trans=0;\
  int PmeYPencil::__idx_PmeYPencil_recv_untrans=0;\
  int PmeYPencil::__idx_PmeYPencil_backward_fft=0;\
  int PmeYPencil::__idx_PmeYPencil_send_untrans0=0;\
  int PmeYPencil::__idx_PmeYPencil_send_untrans1=0;\
  int PmeYPencil::__idx_PmeYPencil_atomic_6=0;\

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmeYPencil> CBase_PmeYPencil;

/* DECLS: array PmeXPencil: ArrayElement{
PmeXPencil(CkMigrateMessage* impl_msg);
PmeXPencil(void);
void recvTrans(PmeTransMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
};
 */
 class PmeXPencil;
 class CkIndex_PmeXPencil;
 class CProxy_PmeXPencil;
 class CProxyElement_PmeXPencil;
 class CProxySection_PmeXPencil;
/* --------------- index object ------------------ */
class CkIndex_PmeXPencil:public CProxyElement_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */
    static int __idx_PmeXPencil_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_PmeXPencil_CkMigrateMessage; }
    static void _call_PmeXPencil_CkMigrateMessage(void* impl_msg,PmeXPencil* impl_obj);

/* DECLS: PmeXPencil(void);
 */
    static int __idx_PmeXPencil_void;
    static int ckNew(void) { return __idx_PmeXPencil_void; }
    static void _call_PmeXPencil_void(void* impl_msg,PmeXPencil* impl_obj);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    static int __idx_recvTrans_PmeTransMsg;
    static int recvTrans(PmeTransMsg* impl_msg) { return __idx_recvTrans_PmeTransMsg; }
    static void _call_recvTrans_PmeTransMsg(void* impl_msg,PmeXPencil* impl_obj);

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    static int __idx_init_PmePencilInitMsg;
    static int init(PmePencilInitMsg* impl_msg) { return __idx_init_PmePencilInitMsg; }
    static void _call_init_PmePencilInitMsg(void* impl_msg,PmeXPencil* impl_obj);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmeXPencil : public CProxyElement_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    CProxyElement_PmeXPencil(void) {}
    CProxyElement_PmeXPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
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
    PmeXPencil *ckLocal(void) const
      { return (PmeXPencil *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_PmeXPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_PmeXPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeXPencil(void);
 */
    void insert(int onPE=-1);
/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxyElement_PmeXPencil)
/* ---------------- collective proxy -------------- */
 class CProxy_PmeXPencil : public CProxy_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    CProxy_PmeXPencil(void) {}
    CProxy_PmeXPencil(const ArrayElement *e) : CProxy_ArrayElement(e){  }
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
    CProxyElement_PmeXPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmeXPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_PmeXPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmeXPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmeXPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeXPencil(void);
 */
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxy_PmeXPencil)
/* ---------------- section proxy -------------- */
 class CProxySection_PmeXPencil : public CProxySection_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    CProxySection_PmeXPencil(void) {}
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
    CProxyElement_PmeXPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator () (int idx) const 
        {return CProxyElement_PmeXPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmeXPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeXPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_PmeXPencil(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_PmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

/* DECLS: PmeXPencil(void);
 */

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    void init(PmePencilInitMsg* impl_msg) ;

};
PUPmarshall(CProxySection_PmeXPencil)
#define PmeXPencil_SDAG_CODE                                                   \
public:                                                                        \
  void init(PmePencilInitMsg* initmsg) {                                       \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0(initmsg);                                                         \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void init_end(PmePencilInitMsg* initmsg) {                                   \
  }                                                                            \
                                                                               \
  void _slist_0(PmePencilInitMsg* initmsg) {                                   \
    _atomic_0(initmsg);                                                        \
  }                                                                            \
  void _slist_0_end(PmePencilInitMsg* initmsg) {                               \
    init_end(initmsg);                                                         \
  }                                                                            \
  void _atomic_0(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
                                                                               \
                                                                               \
      base_init(initmsg); delete initmsg;                                      \
      fft_init();                                                              \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _while_0(initmsg);                                                         \
  }                                                                            \
                                                                               \
  void _while_0(PmePencilInitMsg* initmsg) {                                   \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end(PmePencilInitMsg* initmsg) {                               \
    if ( 1 ) {                                                                 \
      _slist_1(initmsg);                                                       \
    } else {                                                                   \
      _slist_0_end(initmsg);                                                   \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_1(PmePencilInitMsg* initmsg) {                                   \
    _atomic_1(initmsg);                                                        \
  }                                                                            \
  void _slist_1_end(PmePencilInitMsg* initmsg) {                               \
    _while_0_end(initmsg);                                                     \
  }                                                                            \
  void _atomic_1(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_atomic_1, CkMyPe(), 0, NULL); \
     hasData = 0;                                                              \
    _TRACE_END_EXECUTE();                                                      \
    _for_0(initmsg);                                                           \
  }                                                                            \
                                                                               \
  void _for_0(PmePencilInitMsg* initmsg) {                                     \
     imsg=0;                                                                   \
    if ( imsg < initdata.xBlocks) {                                            \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _if_0(initmsg);                                                          \
    }                                                                          \
  }                                                                            \
  void _for_0_end(PmePencilInitMsg* initmsg) {                                 \
 ++imsg ;                                                                      \
    if ( imsg < initdata.xBlocks) {                                            \
      _slist_2(initmsg);                                                       \
    } else {                                                                   \
      _if_0(initmsg);                                                          \
    }                                                                          \
  }                                                                            \
  void _slist_2(PmePencilInitMsg* initmsg) {                                   \
    _when_0(initmsg);                                                          \
  }                                                                            \
  void _slist_2_end(PmePencilInitMsg* initmsg) {                               \
    _for_0_end(initmsg);                                                       \
  }                                                                            \
  int _when_0(PmePencilInitMsg* initmsg) {                                     \
    CMsgBuffer *msg_buf;                                                       \
    PmeTransMsg* msg;                                                          \
                                                                               \
    msg_buf = __cDep->getMessage(0);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (PmeTransMsg*) msg_buf->msg;                                      \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _atomic_2(initmsg, msg);                                                \
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
  void _when_0_end(PmePencilInitMsg* initmsg, PmeTransMsg* msg) {              \
    _slist_2_end(initmsg);                                                     \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _atomic_2(PmePencilInitMsg* initmsg, PmeTransMsg* msg) {                \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_recv_trans, CkMyPe(), 0, NULL); \
                                                                               \
            if ( msg->hasData ) hasData = 1;                                   \
            needs_reply[msg->sourceNode] = msg->hasData;                       \
            recv_trans(msg); delete msg;                                       \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _when_0_end(initmsg, msg);                                                 \
  }                                                                            \
                                                                               \
  void _if_0(PmePencilInitMsg* initmsg) {                                      \
    if ( hasData ) {                                                           \
      _slist_3(initmsg);                                                       \
    } else {                                                                   \
      _if_0_end(initmsg);                                                      \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end(PmePencilInitMsg* initmsg) {                                  \
      _atomic_6(initmsg);                                                      \
  }                                                                            \
                                                                               \
  void _slist_3(PmePencilInitMsg* initmsg) {                                   \
    _atomic_3(initmsg);                                                        \
  }                                                                            \
  void _slist_3_end(PmePencilInitMsg* initmsg) {                               \
    _if_0_end(initmsg);                                                        \
  }                                                                            \
  void _atomic_3(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_forward_fft, CkMyPe(), 0, NULL); \
     forward_fft();                                                            \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_4(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_4(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_pme_kspace, CkMyPe(), 0, NULL); \
     pme_kspace();                                                             \
    _TRACE_END_EXECUTE();                                                      \
    _atomic_5(initmsg);                                                        \
  }                                                                            \
                                                                               \
  void _atomic_5(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_backward_fft, CkMyPe(), 0, NULL); \
     backward_fft();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _slist_3_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
  void _atomic_6(PmePencilInitMsg* initmsg) {                                  \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_PmeXPencil_send_untrans, CkMyPe(), 0, NULL); \
     send_untrans();                                                           \
    _TRACE_END_EXECUTE();                                                      \
    _slist_1_end(initmsg);                                                     \
  }                                                                            \
                                                                               \
public:                                                                        \
  void recvTrans(PmeTransMsg* msg_msg) {                                       \
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
        _when_0((PmePencilInitMsg*) tr->args[0]);                              \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
private:                                                                       \
  CDep *__cDep;                                                                \
  void __sdag_init(void) {                                                     \
    __cDep = new CDep(1,1);                                                    \
    __cDep->addDepends(0,0);                                                   \
  }                                                                            \
public:                                                                        \
  void __sdag_pup(PUP::er& p) {                                                \
    if (__cDep) { __cDep->pup(p); }                                            \
  }                                                                            \
  static void __sdag_register() {                                              \
                                                                               \
    __idx_PmeXPencil_atomic_0 = CkRegisterEp("PmeXPencil_atomic_0(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
    __idx_PmeXPencil_atomic_1 = CkRegisterEp("PmeXPencil_atomic_1(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
    __idx_PmeXPencil_recv_trans = CkRegisterEp("PmeXPencil_recv_trans(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
    __idx_PmeXPencil_forward_fft = CkRegisterEp("PmeXPencil_forward_fft(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
    __idx_PmeXPencil_pme_kspace = CkRegisterEp("PmeXPencil_pme_kspace(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
    __idx_PmeXPencil_backward_fft = CkRegisterEp("PmeXPencil_backward_fft(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
    __idx_PmeXPencil_send_untrans = CkRegisterEp("PmeXPencil_send_untrans(void)", NULL, 0, CkIndex_PmeXPencil::__idx, 0);\
  }                                                                            \
  static int __idx_PmeXPencil_atomic_0;                                        \
  static int __idx_PmeXPencil_atomic_1;                                        \
  static int __idx_PmeXPencil_recv_trans;                                      \
  static int __idx_PmeXPencil_forward_fft;                                     \
  static int __idx_PmeXPencil_pme_kspace;                                      \
  static int __idx_PmeXPencil_backward_fft;                                    \
  static int __idx_PmeXPencil_send_untrans;                                    \

#define PmeXPencil_SDAG_CODE_DEF \
  int PmeXPencil::__idx_PmeXPencil_atomic_0=0;\
  int PmeXPencil::__idx_PmeXPencil_atomic_1=0;\
  int PmeXPencil::__idx_PmeXPencil_recv_trans=0;\
  int PmeXPencil::__idx_PmeXPencil_forward_fft=0;\
  int PmeXPencil::__idx_PmeXPencil_pme_kspace=0;\
  int PmeXPencil::__idx_PmeXPencil_backward_fft=0;\
  int PmeXPencil::__idx_PmeXPencil_send_untrans=0;\

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmeXPencil> CBase_PmeXPencil;

/* DECLS: nodegroup NodePmeMgr: NodeGroup{
NodePmeMgr(void);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
};
 */
 class NodePmeMgr;
 class CkIndex_NodePmeMgr;
 class CProxy_NodePmeMgr;
 class CProxyElement_NodePmeMgr;
 class CProxySection_NodePmeMgr;
/* --------------- index object ------------------ */
class CkIndex_NodePmeMgr:public CProxyElement_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: NodePmeMgr(void);
 */
    static int __idx_NodePmeMgr_void;
    static int ckNew(void) { return __idx_NodePmeMgr_void; }
    static void _call_NodePmeMgr_void(void* impl_msg,NodePmeMgr* impl_obj);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    static int __idx_recvTrans_PmeTransMsg;
    static int recvTrans(PmeTransMsg* impl_msg) { return __idx_recvTrans_PmeTransMsg; }
    static void _call_recvTrans_PmeTransMsg(void* impl_msg,NodePmeMgr* impl_obj);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    static int __idx_recvUntrans_PmeUntransMsg;
    static int recvUntrans(PmeUntransMsg* impl_msg) { return __idx_recvUntrans_PmeUntransMsg; }
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg,NodePmeMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_NodePmeMgr: public CProxyElement_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    CProxyElement_NodePmeMgr(void) {}
    CProxyElement_NodePmeMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){  }
    CProxyElement_NodePmeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_NodePmeMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_NodeGroup::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_NodeGroup::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_NodeGroup::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_NodeGroup::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_NodeGroup::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_NodeGroup::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_NodeGroup::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    NodePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (NodePmeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodePmeMgr(void);
 */

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg);

};
PUPmarshall(CProxyElement_NodePmeMgr)
/* ---------------- collective proxy -------------- */
class CProxy_NodePmeMgr: public CProxy_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    CProxy_NodePmeMgr(void) {}
    CProxy_NodePmeMgr(const IrrGroup *g) : CProxy_NodeGroup(g){  }
    CProxy_NodePmeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NodePmeMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_NodePmeMgr operator[](int onPE) const
      {return CProxyElement_NodePmeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_NodeGroup::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_NodeGroup::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_NodeGroup::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_NodeGroup::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_NodeGroup::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_NodeGroup::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_NodeGroup::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_NodeGroup::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_NodeGroup::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    NodePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (NodePmeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodePmeMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg);

};
PUPmarshall(CProxy_NodePmeMgr)
/* ---------------- section proxy -------------- */
class CProxySection_NodePmeMgr: public CProxySection_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    CProxySection_NodePmeMgr(void) {}
    CProxySection_NodePmeMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){  }
    CProxySection_NodePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NodePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_NodeGroup(_gid,_pelist,_npes){  }
    CProxySection_NodePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_NodeGroup(n,_gid,_pelist,_npes){  }
    CProxySection_NodePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_NodeGroup::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_NodeGroup::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_NodeGroup::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_NodeGroup::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_NodeGroup::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_NodeGroup::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_NodeGroup::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    NodePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (NodePmeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodePmeMgr(void);
 */

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg);

};
PUPmarshall(CProxySection_NodePmeMgr)
typedef CBaseT1<NodeGroup, CProxy_NodePmeMgr> CBase_NodePmeMgr;

/* DECLS: group ComputePmeMgr: IrrGroup{
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
 class ComputePmeMgr;
 class CkIndex_ComputePmeMgr;
 class CProxy_ComputePmeMgr;
 class CProxyElement_ComputePmeMgr;
 class CProxySection_ComputePmeMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputePmeMgr:public CProxyElement_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ComputePmeMgr(void);
 */
    static int __idx_ComputePmeMgr_void;
    static int ckNew(void) { return __idx_ComputePmeMgr_void; }
    static void _call_ComputePmeMgr_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    static int __idx_initialize_CkQdMsg;
    static int initialize(CkQdMsg* impl_msg) { return __idx_initialize_CkQdMsg; }
    static void _call_initialize_CkQdMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    static int __idx_initialize_pencils_CkQdMsg;
    static int initialize_pencils(CkQdMsg* impl_msg) { return __idx_initialize_pencils_CkQdMsg; }
    static void _call_initialize_pencils_CkQdMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    static int __idx_activate_pencils_CkQdMsg;
    static int activate_pencils(CkQdMsg* impl_msg) { return __idx_activate_pencils_CkQdMsg; }
    static void _call_activate_pencils_CkQdMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void sendGrid(void);
 */
    static int __idx_sendGrid_void;
    static int sendGrid(void) { return __idx_sendGrid_void; }
    static void _call_sendGrid_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    static int __idx_recvGrid_PmeGridMsg;
    static int recvGrid(PmeGridMsg* impl_msg) { return __idx_recvGrid_PmeGridMsg; }
    static void _call_recvGrid_PmeGridMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void gridCalc1(void);
 */
    static int __idx_gridCalc1_void;
    static int gridCalc1(void) { return __idx_gridCalc1_void; }
    static void _call_gridCalc1_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void sendTransBarrier(void);
 */
    static int __idx_sendTransBarrier_void;
    static int sendTransBarrier(void) { return __idx_sendTransBarrier_void; }
    static void _call_sendTransBarrier_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void sendTrans(void);
 */
    static int __idx_sendTrans_void;
    static int sendTrans(void) { return __idx_sendTrans_void; }
    static void _call_sendTrans_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    static int __idx_recvSharedTrans_PmeSharedTransMsg;
    static int recvSharedTrans(PmeSharedTransMsg* impl_msg) { return __idx_recvSharedTrans_PmeSharedTransMsg; }
    static void _call_recvSharedTrans_PmeSharedTransMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    static int __idx_recvTrans_PmeTransMsg;
    static int recvTrans(PmeTransMsg* impl_msg) { return __idx_recvTrans_PmeTransMsg; }
    static void _call_recvTrans_PmeTransMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void gridCalc2(void);
 */
    static int __idx_gridCalc2_void;
    static int gridCalc2(void) { return __idx_gridCalc2_void; }
    static void _call_gridCalc2_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void gridCalc2R(void);
 */
    static int __idx_gridCalc2R_void;
    static int gridCalc2R(void) { return __idx_gridCalc2R_void; }
    static void _call_gridCalc2R_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void sendUntrans(void);
 */
    static int __idx_sendUntrans_void;
    static int sendUntrans(void) { return __idx_sendUntrans_void; }
    static void _call_sendUntrans_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    static int __idx_recvSharedUntrans_PmeSharedUntransMsg;
    static int recvSharedUntrans(PmeSharedUntransMsg* impl_msg) { return __idx_recvSharedUntrans_PmeSharedUntransMsg; }
    static void _call_recvSharedUntrans_PmeSharedUntransMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    static int __idx_recvUntrans_PmeUntransMsg;
    static int recvUntrans(PmeUntransMsg* impl_msg) { return __idx_recvUntrans_PmeUntransMsg; }
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void gridCalc3(void);
 */
    static int __idx_gridCalc3_void;
    static int gridCalc3(void) { return __idx_gridCalc3_void; }
    static void _call_gridCalc3_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void sendUngrid(void);
 */
    static int __idx_sendUngrid_void;
    static int sendUngrid(void) { return __idx_sendUngrid_void; }
    static void _call_sendUngrid_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    static int __idx_recvUngrid_PmeGridMsg;
    static int recvUngrid(PmeGridMsg* impl_msg) { return __idx_recvUngrid_PmeGridMsg; }
    static void _call_recvUngrid_PmeGridMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    static int __idx_recvAck_PmeAckMsg;
    static int recvAck(PmeAckMsg* impl_msg) { return __idx_recvAck_PmeAckMsg; }
    static void _call_recvAck_PmeAckMsg(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void ungridCalc(void);
 */
    static int __idx_ungridCalc_void;
    static int ungridCalc(void) { return __idx_ungridCalc_void; }
    static void _call_ungridCalc_void(void* impl_msg,ComputePmeMgr* impl_obj);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
    static int __idx_recvArrays_marshall22;
    static int recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2) { return __idx_recvArrays_marshall22; }
    static void _call_recvArrays_marshall22(void* impl_msg,ComputePmeMgr* impl_obj);
    static int _callmarshall_recvArrays_marshall22(char* impl_buf,ComputePmeMgr* impl_obj);
    static void _marshallmessagepup_recvArrays_marshall22(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputePmeMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    CProxyElement_ComputePmeMgr(void) {}
    CProxyElement_ComputePmeMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ComputePmeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ComputePmeMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_IrrGroup::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_IrrGroup::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_IrrGroup::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_IrrGroup::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_IrrGroup::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_IrrGroup::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_IrrGroup::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    ComputePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputePmeMgr(void);
 */

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    void initialize_pencils(CkQdMsg* impl_msg);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    void activate_pencils(CkQdMsg* impl_msg);

/* DECLS: void sendGrid(void);
 */
    void sendGrid(void);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    void recvGrid(PmeGridMsg* impl_msg);

/* DECLS: void gridCalc1(void);
 */
    void gridCalc1(void);

/* DECLS: void sendTransBarrier(void);
 */
    void sendTransBarrier(void);

/* DECLS: void sendTrans(void);
 */
    void sendTrans(void);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    void recvSharedTrans(PmeSharedTransMsg* impl_msg);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void gridCalc2(void);
 */
    void gridCalc2(void);

/* DECLS: void gridCalc2R(void);
 */
    void gridCalc2R(void);

/* DECLS: void sendUntrans(void);
 */
    void sendUntrans(void);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void gridCalc3(void);
 */
    void gridCalc3(void);

/* DECLS: void sendUngrid(void);
 */
    void sendUngrid(void);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg);

/* DECLS: void ungridCalc(void);
 */
    void ungridCalc(void);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
    void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxyElement_ComputePmeMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ComputePmeMgr: public CProxy_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    CProxy_ComputePmeMgr(void) {}
    CProxy_ComputePmeMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ComputePmeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputePmeMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputePmeMgr operator[](int onPE) const
      {return CProxyElement_ComputePmeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_IrrGroup::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_IrrGroup::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_IrrGroup::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_IrrGroup::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_IrrGroup::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_IrrGroup::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_IrrGroup::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_IrrGroup::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_IrrGroup::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    ComputePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputePmeMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);
    void initialize(CkQdMsg* impl_msg, int npes, int *pes);
    void initialize(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    void initialize_pencils(CkQdMsg* impl_msg);
    void initialize_pencils(CkQdMsg* impl_msg, int npes, int *pes);
    void initialize_pencils(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    void activate_pencils(CkQdMsg* impl_msg);
    void activate_pencils(CkQdMsg* impl_msg, int npes, int *pes);
    void activate_pencils(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void sendGrid(void);
 */
    void sendGrid(void);
    void sendGrid(int npes, int *pes);
    void sendGrid(CmiGroup &grp);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    void recvGrid(PmeGridMsg* impl_msg);
    void recvGrid(PmeGridMsg* impl_msg, int npes, int *pes);
    void recvGrid(PmeGridMsg* impl_msg, CmiGroup &grp);

/* DECLS: void gridCalc1(void);
 */
    void gridCalc1(void);
    void gridCalc1(int npes, int *pes);
    void gridCalc1(CmiGroup &grp);

/* DECLS: void sendTransBarrier(void);
 */
    void sendTransBarrier(void);
    void sendTransBarrier(int npes, int *pes);
    void sendTransBarrier(CmiGroup &grp);

/* DECLS: void sendTrans(void);
 */
    void sendTrans(void);
    void sendTrans(int npes, int *pes);
    void sendTrans(CmiGroup &grp);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    void recvSharedTrans(PmeSharedTransMsg* impl_msg);
    void recvSharedTrans(PmeSharedTransMsg* impl_msg, int npes, int *pes);
    void recvSharedTrans(PmeSharedTransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg);
    void recvTrans(PmeTransMsg* impl_msg, int npes, int *pes);
    void recvTrans(PmeTransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void gridCalc2(void);
 */
    void gridCalc2(void);
    void gridCalc2(int npes, int *pes);
    void gridCalc2(CmiGroup &grp);

/* DECLS: void gridCalc2R(void);
 */
    void gridCalc2R(void);
    void gridCalc2R(int npes, int *pes);
    void gridCalc2R(CmiGroup &grp);

/* DECLS: void sendUntrans(void);
 */
    void sendUntrans(void);
    void sendUntrans(int npes, int *pes);
    void sendUntrans(CmiGroup &grp);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg, int npes, int *pes);
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg);
    void recvUntrans(PmeUntransMsg* impl_msg, int npes, int *pes);
    void recvUntrans(PmeUntransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void gridCalc3(void);
 */
    void gridCalc3(void);
    void gridCalc3(int npes, int *pes);
    void gridCalc3(CmiGroup &grp);

/* DECLS: void sendUngrid(void);
 */
    void sendUngrid(void);
    void sendUngrid(int npes, int *pes);
    void sendUngrid(CmiGroup &grp);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    void recvUngrid(PmeGridMsg* impl_msg);
    void recvUngrid(PmeGridMsg* impl_msg, int npes, int *pes);
    void recvUngrid(PmeGridMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg);
    void recvAck(PmeAckMsg* impl_msg, int npes, int *pes);
    void recvAck(PmeAckMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ungridCalc(void);
 */
    void ungridCalc(void);
    void ungridCalc(int npes, int *pes);
    void ungridCalc(CmiGroup &grp);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
    void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_ComputePmeMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ComputePmeMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    CProxySection_ComputePmeMgr(void) {}
    CProxySection_ComputePmeMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ComputePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ComputePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ComputePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_IrrGroup::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_IrrGroup::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_IrrGroup::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_IrrGroup::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_IrrGroup::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_IrrGroup::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_IrrGroup::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    ComputePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputePmeMgr(void);
 */

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    void initialize_pencils(CkQdMsg* impl_msg);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    void activate_pencils(CkQdMsg* impl_msg);

/* DECLS: void sendGrid(void);
 */
    void sendGrid(void);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    void recvGrid(PmeGridMsg* impl_msg);

/* DECLS: void gridCalc1(void);
 */
    void gridCalc1(void);

/* DECLS: void sendTransBarrier(void);
 */
    void sendTransBarrier(void);

/* DECLS: void sendTrans(void);
 */
    void sendTrans(void);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    void recvSharedTrans(PmeSharedTransMsg* impl_msg);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void gridCalc2(void);
 */
    void gridCalc2(void);

/* DECLS: void gridCalc2R(void);
 */
    void gridCalc2R(void);

/* DECLS: void sendUntrans(void);
 */
    void sendUntrans(void);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void gridCalc3(void);
 */
    void gridCalc3(void);

/* DECLS: void sendUngrid(void);
 */
    void sendUngrid(void);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    void recvAck(PmeAckMsg* impl_msg);

/* DECLS: void ungridCalc(void);
 */
    void ungridCalc(void);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2);
 */
    void recvArrays(const CProxy_PmeXPencil &impl_noname_0, const CProxy_PmeYPencil &impl_noname_1, const CProxy_PmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxySection_ComputePmeMgr)
typedef CBaseT1<Group, CProxy_ComputePmeMgr> CBase_ComputePmeMgr;

extern void _registerComputePmeMgr(void);
#endif
