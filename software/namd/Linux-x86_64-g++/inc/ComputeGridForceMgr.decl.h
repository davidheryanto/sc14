#ifndef _DECL_ComputeGridForceMgr_H_
#define _DECL_ComputeGridForceMgr_H_
#include "charm++.h"
/* DECLS: message GridAckMsg;
 */
class GridAckMsg;
class CMessage_GridAckMsg:public CkMessage{
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
    CMessage_GridAckMsg();
    static void *pack(GridAckMsg *p);
    static GridAckMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message GridDepositMsg;
 */
class GridDepositMsg;
class CMessage_GridDepositMsg:public CkMessage{
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
    CMessage_GridDepositMsg();
    static void *pack(GridDepositMsg *p);
    static GridDepositMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message GridSegmentMsg;
 */
class GridSegmentMsg;
class CMessage_GridSegmentMsg:public CkMessage{
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
    CMessage_GridSegmentMsg();
    static void *pack(GridSegmentMsg *p);
    static GridSegmentMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message SubReqMsg;
 */
class SubReqMsg;
class CMessage_SubReqMsg:public CkMessage{
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
    CMessage_SubReqMsg();
    static void *pack(SubReqMsg *p);
    static SubReqMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message GridRequestMsg{
int gridStartIndex[];
int gridIndexList[];
}
;
 */
class GridRequestMsg;
class CMessage_GridRequestMsg:public CkMessage{
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
    CMessage_GridRequestMsg();
    static void *pack(GridRequestMsg *p);
    static GridRequestMsg* unpack(void* p);
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

/* DECLS: message GridValuesMsg{
int gridStartIndex[];
GridVal gridVals[];
}
;
 */
class GridValuesMsg;
class CMessage_GridValuesMsg:public CkMessage{
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
    CMessage_GridValuesMsg();
    static void *pack(GridValuesMsg *p);
    static GridValuesMsg* unpack(void* p);
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

/* DECLS: group ComputeGridForceMgr: IrrGroup{
ComputeGridForceMgr(void);
void finishWork(void);
};
 */
 class ComputeGridForceMgr;
 class CkIndex_ComputeGridForceMgr;
 class CProxy_ComputeGridForceMgr;
 class CProxyElement_ComputeGridForceMgr;
 class CProxySection_ComputeGridForceMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeGridForceMgr:public CProxyElement_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ComputeGridForceMgr(void);
 */
    static int __idx_ComputeGridForceMgr_void;
    static int ckNew(void) { return __idx_ComputeGridForceMgr_void; }
    static void _call_ComputeGridForceMgr_void(void* impl_msg,ComputeGridForceMgr* impl_obj);

/* DECLS: void finishWork(void);
 */
    static int __idx_finishWork_void;
    static int finishWork(void) { return __idx_finishWork_void; }
    static void _call_finishWork_void(void* impl_msg,ComputeGridForceMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeGridForceMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    CProxyElement_ComputeGridForceMgr(void) {}
    CProxyElement_ComputeGridForceMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ComputeGridForceMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ComputeGridForceMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    ComputeGridForceMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGridForceMgr(void);
 */

/* DECLS: void finishWork(void);
 */
    void finishWork(void);

};
PUPmarshall(CProxyElement_ComputeGridForceMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ComputeGridForceMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    CProxy_ComputeGridForceMgr(void) {}
    CProxy_ComputeGridForceMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ComputeGridForceMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeGridForceMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeGridForceMgr operator[](int onPE) const
      {return CProxyElement_ComputeGridForceMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    ComputeGridForceMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGridForceMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void finishWork(void);
 */
    void finishWork(void);
    void finishWork(int npes, int *pes);
    void finishWork(CmiGroup &grp);

};
PUPmarshall(CProxy_ComputeGridForceMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ComputeGridForceMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    CProxySection_ComputeGridForceMgr(void) {}
    CProxySection_ComputeGridForceMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ComputeGridForceMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeGridForceMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ComputeGridForceMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ComputeGridForceMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    ComputeGridForceMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGridForceMgr(void);
 */

/* DECLS: void finishWork(void);
 */
    void finishWork(void);

};
PUPmarshall(CProxySection_ComputeGridForceMgr)
typedef CBaseT1<Group, CProxy_ComputeGridForceMgr> CBase_ComputeGridForceMgr;

/* DECLS: nodegroup ComputeGridForceNodeMgr: NodeGroup{
ComputeGridForceNodeMgr(void);
void depositInitialGrid(GridDepositMsg* impl_msg);
void requestInitialGridData(void);
void submitRequest(SubReqMsg* impl_msg);
void fetchGridValues(GridRequestMsg* impl_msg);
void recvGridValues(GridValuesMsg* impl_msg);
void ack(GridAckMsg* impl_msg);
void recv(GridSegmentMsg* impl_msg);
void broadcastInitialGridData(void);
};
 */
 class ComputeGridForceNodeMgr;
 class CkIndex_ComputeGridForceNodeMgr;
 class CProxy_ComputeGridForceNodeMgr;
 class CProxyElement_ComputeGridForceNodeMgr;
 class CProxySection_ComputeGridForceNodeMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeGridForceNodeMgr:public CProxyElement_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ComputeGridForceNodeMgr(void);
 */
    static int __idx_ComputeGridForceNodeMgr_void;
    static int ckNew(void) { return __idx_ComputeGridForceNodeMgr_void; }
    static void _call_ComputeGridForceNodeMgr_void(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    static int __idx_depositInitialGrid_GridDepositMsg;
    static int depositInitialGrid(GridDepositMsg* impl_msg) { return __idx_depositInitialGrid_GridDepositMsg; }
    static void _call_depositInitialGrid_GridDepositMsg(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void requestInitialGridData(void);
 */
    static int __idx_requestInitialGridData_void;
    static int requestInitialGridData(void) { return __idx_requestInitialGridData_void; }
    static void _call_requestInitialGridData_void(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    static int __idx_submitRequest_SubReqMsg;
    static int submitRequest(SubReqMsg* impl_msg) { return __idx_submitRequest_SubReqMsg; }
    static void _call_submitRequest_SubReqMsg(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    static int __idx_fetchGridValues_GridRequestMsg;
    static int fetchGridValues(GridRequestMsg* impl_msg) { return __idx_fetchGridValues_GridRequestMsg; }
    static void _call_fetchGridValues_GridRequestMsg(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    static int __idx_recvGridValues_GridValuesMsg;
    static int recvGridValues(GridValuesMsg* impl_msg) { return __idx_recvGridValues_GridValuesMsg; }
    static void _call_recvGridValues_GridValuesMsg(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    static int __idx_ack_GridAckMsg;
    static int ack(GridAckMsg* impl_msg) { return __idx_ack_GridAckMsg; }
    static void _call_ack_GridAckMsg(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    static int __idx_recv_GridSegmentMsg;
    static int recv(GridSegmentMsg* impl_msg) { return __idx_recv_GridSegmentMsg; }
    static void _call_recv_GridSegmentMsg(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

/* DECLS: void broadcastInitialGridData(void);
 */
    static int __idx_broadcastInitialGridData_void;
    static int broadcastInitialGridData(void) { return __idx_broadcastInitialGridData_void; }
    static void _call_broadcastInitialGridData_void(void* impl_msg,ComputeGridForceNodeMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeGridForceNodeMgr: public CProxyElement_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    CProxyElement_ComputeGridForceNodeMgr(void) {}
    CProxyElement_ComputeGridForceNodeMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){  }
    CProxyElement_ComputeGridForceNodeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ComputeGridForceNodeMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){  }
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
    ComputeGridForceNodeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceNodeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceNodeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: ComputeGridForceNodeMgr(void);
 */

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    void depositInitialGrid(GridDepositMsg* impl_msg);

/* DECLS: void requestInitialGridData(void);
 */
    void requestInitialGridData(void);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    void submitRequest(SubReqMsg* impl_msg);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    void fetchGridValues(GridRequestMsg* impl_msg);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    void recvGridValues(GridValuesMsg* impl_msg);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    void ack(GridAckMsg* impl_msg);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    void recv(GridSegmentMsg* impl_msg);

/* DECLS: void broadcastInitialGridData(void);
 */
    void broadcastInitialGridData(void);

};
PUPmarshall(CProxyElement_ComputeGridForceNodeMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ComputeGridForceNodeMgr: public CProxy_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    CProxy_ComputeGridForceNodeMgr(void) {}
    CProxy_ComputeGridForceNodeMgr(const IrrGroup *g) : CProxy_NodeGroup(g){  }
    CProxy_ComputeGridForceNodeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeGridForceNodeMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_ComputeGridForceNodeMgr operator[](int onPE) const
      {return CProxyElement_ComputeGridForceNodeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    ComputeGridForceNodeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceNodeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceNodeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: ComputeGridForceNodeMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    void depositInitialGrid(GridDepositMsg* impl_msg);

/* DECLS: void requestInitialGridData(void);
 */
    void requestInitialGridData(void);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    void submitRequest(SubReqMsg* impl_msg);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    void fetchGridValues(GridRequestMsg* impl_msg);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    void recvGridValues(GridValuesMsg* impl_msg);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    void ack(GridAckMsg* impl_msg);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    void recv(GridSegmentMsg* impl_msg);

/* DECLS: void broadcastInitialGridData(void);
 */
    void broadcastInitialGridData(void);

};
PUPmarshall(CProxy_ComputeGridForceNodeMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ComputeGridForceNodeMgr: public CProxySection_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    CProxySection_ComputeGridForceNodeMgr(void) {}
    CProxySection_ComputeGridForceNodeMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){  }
    CProxySection_ComputeGridForceNodeMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeGridForceNodeMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_NodeGroup(_gid,_pelist,_npes){  }
    CProxySection_ComputeGridForceNodeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_NodeGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ComputeGridForceNodeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    ComputeGridForceNodeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceNodeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceNodeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: ComputeGridForceNodeMgr(void);
 */

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    void depositInitialGrid(GridDepositMsg* impl_msg);

/* DECLS: void requestInitialGridData(void);
 */
    void requestInitialGridData(void);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    void submitRequest(SubReqMsg* impl_msg);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    void fetchGridValues(GridRequestMsg* impl_msg);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    void recvGridValues(GridValuesMsg* impl_msg);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    void ack(GridAckMsg* impl_msg);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    void recv(GridSegmentMsg* impl_msg);

/* DECLS: void broadcastInitialGridData(void);
 */
    void broadcastInitialGridData(void);

};
PUPmarshall(CProxySection_ComputeGridForceNodeMgr)
#define ComputeGridForceNodeMgr_SDAG_CODE                                      \
public:                                                                        \
  void broadcastInitialGridData() {                                            \
    _TRACE_END_EXECUTE();                                                      \
    _slist_0();                                                                \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
  }                                                                            \
                                                                               \
private:                                                                       \
  void broadcastInitialGridData_end() {                                        \
  }                                                                            \
                                                                               \
  void _slist_0() {                                                            \
    _if_0();                                                                   \
  }                                                                            \
  void _slist_0_end() {                                                        \
    broadcastInitialGridData_end();                                            \
  }                                                                            \
  void _if_0() {                                                               \
    if ( ! myNode ) {                                                          \
      _slist_12();                                                             \
    } else {                                                                   \
      _else_0();                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_0_end() {                                                           \
      _slist_0_end();                                                          \
  }                                                                            \
                                                                               \
  void _else_0() {                                                             \
    double __begintime = CkVTimer();                                           \
     _TRACE_BG_USER_EVENT_BRACKET("_else_0", __begintime, CkVTimer(),&_bgParentLog); \
    _slist_1();                                                                \
  }                                                                            \
                                                                               \
  void _else_0_end() {                                                         \
      _slist_0_end();                                                          \
  }                                                                            \
                                                                               \
  void _slist_1() {                                                            \
    _atomic_0();                                                               \
  }                                                                            \
  void _slist_1_end() {                                                        \
    _else_0_end();                                                             \
  }                                                                            \
  void _atomic_0() {                                                           \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_0, CkMyPe(), 0, NULL); \
                                                                               \
          CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);                   \
          if ( 2*myNode+1 < numNodes ) {                                       \
            myproxy[2*myNode+1].broadcastInitialGridData();                    \
          }                                                                    \
          if ( 2*myNode+2 < numNodes ) {                                       \
            myproxy[2*myNode+2].broadcastInitialGridData();                    \
          }                                                                    \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _if_1();                                                                   \
  }                                                                            \
                                                                               \
  void _if_1() {                                                               \
    if ( 2*myNode+1 < numNodes ) {                                             \
      _slist_2();                                                              \
    } else {                                                                   \
      _if_1_end();                                                             \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_1_end() {                                                           \
      _if_2();                                                                 \
  }                                                                            \
                                                                               \
  void _slist_2() {                                                            \
    _when_0();                                                                 \
  }                                                                            \
  void _slist_2_end() {                                                        \
    _if_1_end();                                                               \
  }                                                                            \
  int _when_0() {                                                              \
    CMsgBuffer *am_buf;                                                        \
    GridAckMsg* am;                                                            \
                                                                               \
    am_buf = __cDep->getMessage(0);                                            \
                                                                               \
    if ((am_buf != 0)) {                                                       \
       am = (GridAckMsg*) am_buf->msg;                                         \
       __cDep->removeMessage(am_buf);                                          \
       delete am_buf;                                                          \
       _slist_3(am);                                                           \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(0, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_0_end(GridAckMsg* am) {                                           \
    _slist_2_end();                                                            \
    CmiFree(UsrToEnv(am));                                                     \
  }                                                                            \
                                                                               \
  void _slist_3(GridAckMsg* am) {                                              \
    _atomic_1(am);                                                             \
  }                                                                            \
  void _slist_3_end(GridAckMsg* am) {                                          \
    _when_0_end(am);                                                           \
  }                                                                            \
  void _atomic_1(GridAckMsg* am) {                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_1, CkMyPe(), 0, NULL); \
     delete am;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _slist_3_end(am);                                                          \
  }                                                                            \
                                                                               \
  void _if_2() {                                                               \
    if ( 2*myNode+2 < numNodes ) {                                             \
      _slist_4();                                                              \
    } else {                                                                   \
      _if_2_end();                                                             \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_2_end() {                                                           \
      _atomic_3();                                                             \
  }                                                                            \
                                                                               \
  void _slist_4() {                                                            \
    _when_1();                                                                 \
  }                                                                            \
  void _slist_4_end() {                                                        \
    _if_2_end();                                                               \
  }                                                                            \
  int _when_1() {                                                              \
    CMsgBuffer *am_buf;                                                        \
    GridAckMsg* am;                                                            \
                                                                               \
    am_buf = __cDep->getMessage(0);                                            \
                                                                               \
    if ((am_buf != 0)) {                                                       \
       am = (GridAckMsg*) am_buf->msg;                                         \
       __cDep->removeMessage(am_buf);                                          \
       delete am_buf;                                                          \
       _slist_5(am);                                                           \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(1, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_1_end(GridAckMsg* am) {                                           \
    _slist_4_end();                                                            \
    CmiFree(UsrToEnv(am));                                                     \
  }                                                                            \
                                                                               \
  void _slist_5(GridAckMsg* am) {                                              \
    _atomic_2(am);                                                             \
  }                                                                            \
  void _slist_5_end(GridAckMsg* am) {                                          \
    _when_1_end(am);                                                           \
  }                                                                            \
  void _atomic_2(GridAckMsg* am) {                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_2, CkMyPe(), 0, NULL); \
     delete am;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _slist_5_end(am);                                                          \
  }                                                                            \
                                                                               \
  void _atomic_3() {                                                           \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_3, CkMyPe(), 0, NULL); \
                                                                               \
          CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);                   \
          myproxy[(myNode-1)/2].ack(new GridAckMsg);                           \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _while_0();                                                                \
  }                                                                            \
                                                                               \
  void _while_0() {                                                            \
    if ( 1 ) {                                                                 \
      _slist_6();                                                              \
    } else {                                                                   \
      _slist_1_end();                                                          \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_0_end() {                                                        \
    if ( 1 ) {                                                                 \
      _slist_6();                                                              \
    } else {                                                                   \
      _slist_1_end();                                                          \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_6() {                                                            \
    _when_2();                                                                 \
  }                                                                            \
  void _slist_6_end() {                                                        \
    _while_0_end();                                                            \
  }                                                                            \
  int _when_2() {                                                              \
    CMsgBuffer *msg_buf;                                                       \
    GridSegmentMsg* msg;                                                       \
                                                                               \
    msg_buf = __cDep->getMessage(1);                                           \
                                                                               \
    if ((msg_buf != 0)) {                                                      \
       msg = (GridSegmentMsg*) msg_buf->msg;                                   \
       __cDep->removeMessage(msg_buf);                                         \
       delete msg_buf;                                                         \
       _slist_7(msg);                                                          \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(2, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 1;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_2_end(GridSegmentMsg* msg) {                                      \
    _if_3();                                                                   \
    CmiFree(UsrToEnv(msg));                                                    \
  }                                                                            \
                                                                               \
  void _slist_7(GridSegmentMsg* msg) {                                         \
    _atomic_4(msg);                                                            \
  }                                                                            \
  void _slist_7_end(GridSegmentMsg* msg) {                                     \
    _when_2_end(msg);                                                          \
  }                                                                            \
  void _atomic_4(GridSegmentMsg* msg) {                                        \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_4, CkMyPe(), 0, NULL); \
                                                                               \
            CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);                 \
            myproxy[(myNode-1)/2].ack(new GridAckMsg);                         \
            if ( 2*myNode+2 < numNodes ) {                                     \
              GridSegmentMsg *msg2 =                                           \
                     (GridSegmentMsg *)CkCopyMsg((void **)&msg);               \
              myproxy[2*myNode+2].recv(msg2);                                  \
            }                                                                  \
            receiveInitialGridData(msg);                                       \
            if ( 2*myNode+1 < numNodes ) {                                     \
              myproxy[2*myNode+1].recv(msg);                                   \
            } else {                                                           \
              delete msg;                                                      \
            }                                                                  \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _slist_7_end(msg);                                                         \
  }                                                                            \
                                                                               \
  void _if_3() {                                                               \
    if ( 2*myNode+1 < numNodes ) {                                             \
      _slist_8();                                                              \
    } else {                                                                   \
      _if_3_end();                                                             \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_3_end() {                                                           \
      _if_4();                                                                 \
  }                                                                            \
                                                                               \
  void _slist_8() {                                                            \
    _when_3();                                                                 \
  }                                                                            \
  void _slist_8_end() {                                                        \
    _if_3_end();                                                               \
  }                                                                            \
  int _when_3() {                                                              \
    CMsgBuffer *am_buf;                                                        \
    GridAckMsg* am;                                                            \
                                                                               \
    am_buf = __cDep->getMessage(0);                                            \
                                                                               \
    if ((am_buf != 0)) {                                                       \
       am = (GridAckMsg*) am_buf->msg;                                         \
       __cDep->removeMessage(am_buf);                                          \
       delete am_buf;                                                          \
       _slist_9(am);                                                           \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(3, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_3_end(GridAckMsg* am) {                                           \
    _slist_8_end();                                                            \
    CmiFree(UsrToEnv(am));                                                     \
  }                                                                            \
                                                                               \
  void _slist_9(GridAckMsg* am) {                                              \
    _atomic_5(am);                                                             \
  }                                                                            \
  void _slist_9_end(GridAckMsg* am) {                                          \
    _when_3_end(am);                                                           \
  }                                                                            \
  void _atomic_5(GridAckMsg* am) {                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_5, CkMyPe(), 0, NULL); \
     delete am;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _slist_9_end(am);                                                          \
  }                                                                            \
                                                                               \
  void _if_4() {                                                               \
    if ( 2*myNode+2 < numNodes ) {                                             \
      _slist_10();                                                             \
    } else {                                                                   \
      _if_4_end();                                                             \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_4_end() {                                                           \
      _slist_6_end();                                                          \
  }                                                                            \
                                                                               \
  void _slist_10() {                                                           \
    _when_4();                                                                 \
  }                                                                            \
  void _slist_10_end() {                                                       \
    _if_4_end();                                                               \
  }                                                                            \
  int _when_4() {                                                              \
    CMsgBuffer *am_buf;                                                        \
    GridAckMsg* am;                                                            \
                                                                               \
    am_buf = __cDep->getMessage(0);                                            \
                                                                               \
    if ((am_buf != 0)) {                                                       \
       am = (GridAckMsg*) am_buf->msg;                                         \
       __cDep->removeMessage(am_buf);                                          \
       delete am_buf;                                                          \
       _slist_11(am);                                                          \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(4, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_4_end(GridAckMsg* am) {                                           \
    _slist_10_end();                                                           \
    CmiFree(UsrToEnv(am));                                                     \
  }                                                                            \
                                                                               \
  void _slist_11(GridAckMsg* am) {                                             \
    _atomic_6(am);                                                             \
  }                                                                            \
  void _slist_11_end(GridAckMsg* am) {                                         \
    _when_4_end(am);                                                           \
  }                                                                            \
  void _atomic_6(GridAckMsg* am) {                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_6, CkMyPe(), 0, NULL); \
     delete am;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _slist_11_end(am);                                                         \
  }                                                                            \
                                                                               \
  void _slist_12() {                                                           \
    _atomic_7();                                                               \
  }                                                                            \
  void _slist_12_end() {                                                       \
    _if_0_end();                                                               \
  }                                                                            \
  void _atomic_7() {                                                           \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_7, CkMyPe(), 0, NULL); \
                                                                               \
          CkPrintf("Info: Distributing grid forces grids...");                 \
          CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);                   \
          if ( 2*myNode+1 < numNodes ) {                                       \
            myproxy[2*myNode+1].broadcastInitialGridData();                    \
          }                                                                    \
          if ( 2*myNode+2 < numNodes ) {                                       \
            myproxy[2*myNode+2].broadcastInitialGridData();                    \
          }                                                                    \
          cur_grid = 0;                                                        \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _while_1();                                                                \
  }                                                                            \
                                                                               \
  void _while_1() {                                                            \
    if ( cur_grid < num_grids ) {                                              \
      _slist_13();                                                             \
    } else {                                                                   \
      _atomic_11();                                                            \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _while_1_end() {                                                        \
    if ( cur_grid < num_grids ) {                                              \
      _slist_13();                                                             \
    } else {                                                                   \
      _atomic_11();                                                            \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _slist_13() {                                                           \
    _if_5();                                                                   \
  }                                                                            \
  void _slist_13_end() {                                                       \
    _while_1_end();                                                            \
  }                                                                            \
  void _if_5() {                                                               \
    if ( 2*myNode+1 < numNodes ) {                                             \
      _slist_14();                                                             \
    } else {                                                                   \
      _if_5_end();                                                             \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_5_end() {                                                           \
      _if_6();                                                                 \
  }                                                                            \
                                                                               \
  void _slist_14() {                                                           \
    _when_5();                                                                 \
  }                                                                            \
  void _slist_14_end() {                                                       \
    _if_5_end();                                                               \
  }                                                                            \
  int _when_5() {                                                              \
    CMsgBuffer *am_buf;                                                        \
    GridAckMsg* am;                                                            \
                                                                               \
    am_buf = __cDep->getMessage(0);                                            \
                                                                               \
    if ((am_buf != 0)) {                                                       \
       am = (GridAckMsg*) am_buf->msg;                                         \
       __cDep->removeMessage(am_buf);                                          \
       delete am_buf;                                                          \
       _slist_15(am);                                                          \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(5, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_5_end(GridAckMsg* am) {                                           \
    _slist_14_end();                                                           \
    CmiFree(UsrToEnv(am));                                                     \
  }                                                                            \
                                                                               \
  void _slist_15(GridAckMsg* am) {                                             \
    _atomic_8(am);                                                             \
  }                                                                            \
  void _slist_15_end(GridAckMsg* am) {                                         \
    _when_5_end(am);                                                           \
  }                                                                            \
  void _atomic_8(GridAckMsg* am) {                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_8, CkMyPe(), 0, NULL); \
     delete am;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _slist_15_end(am);                                                         \
  }                                                                            \
                                                                               \
  void _if_6() {                                                               \
    if ( 2*myNode+2 < numNodes ) {                                             \
      _slist_16();                                                             \
    } else {                                                                   \
      _if_6_end();                                                             \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _if_6_end() {                                                           \
      _atomic_10();                                                            \
  }                                                                            \
                                                                               \
  void _slist_16() {                                                           \
    _when_6();                                                                 \
  }                                                                            \
  void _slist_16_end() {                                                       \
    _if_6_end();                                                               \
  }                                                                            \
  int _when_6() {                                                              \
    CMsgBuffer *am_buf;                                                        \
    GridAckMsg* am;                                                            \
                                                                               \
    am_buf = __cDep->getMessage(0);                                            \
                                                                               \
    if ((am_buf != 0)) {                                                       \
       am = (GridAckMsg*) am_buf->msg;                                         \
       __cDep->removeMessage(am_buf);                                          \
       delete am_buf;                                                          \
       _slist_17(am);                                                          \
       return 1;                                                               \
    } else {                                                                   \
       CWhenTrigger *tr;                                                       \
       tr = new CWhenTrigger(6, 1, 0, 1);                                      \
       tr->args[0] = (size_t)0xFF;                                             \
       tr->anyEntries[0] = 0;                                                  \
       __cDep->Register(tr);                                                   \
       return 0;                                                               \
    }                                                                          \
  }                                                                            \
                                                                               \
  void _when_6_end(GridAckMsg* am) {                                           \
    _slist_16_end();                                                           \
    CmiFree(UsrToEnv(am));                                                     \
  }                                                                            \
                                                                               \
  void _slist_17(GridAckMsg* am) {                                             \
    _atomic_9(am);                                                             \
  }                                                                            \
  void _slist_17_end(GridAckMsg* am) {                                         \
    _when_6_end(am);                                                           \
  }                                                                            \
  void _atomic_9(GridAckMsg* am) {                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_9, CkMyPe(), 0, NULL); \
     delete am;                                                                \
    _TRACE_END_EXECUTE();                                                      \
    _slist_17_end(am);                                                         \
  }                                                                            \
                                                                               \
  void _atomic_10() {                                                          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_10, CkMyPe(), 0, NULL); \
                                                                               \
            CkPrintf(".");                                                     \
            GridSegmentMsg *msg = new GridSegmentMsg;                          \
            while ( cur_grid < num_grids ) {                                   \
              msg->gridnum = cur_grid;                                         \
              grids[cur_grid]->                                                \
                    init3(msg->grid,&(msg->start_index),&(msg->count));        \
              if (msg->count > 0) {                                            \
                CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);             \
                if ( 2*myNode+2 < numNodes ) {                                 \
                  GridSegmentMsg *msg2 =                                       \
                         (GridSegmentMsg *)CkCopyMsg((void **)&msg);           \
                  myproxy[2*myNode+2].recv(msg2);                              \
                }                                                              \
                receiveInitialGridData(msg);                                   \
                if ( 2*myNode+1 < numNodes ) {                                 \
                  myproxy[2*myNode+1].recv(msg);                               \
                } else {                                                       \
                  delete msg;                                                  \
                }                                                              \
                break;                                                         \
              }                                                                \
              ++cur_grid;                                                      \
            }                                                                  \
            if (cur_grid == num_grids) delete msg;                             \
                                                                               \
    _TRACE_END_EXECUTE();                                                      \
    _slist_13_end();                                                           \
  }                                                                            \
                                                                               \
  void _atomic_11() {                                                          \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, __idx_ComputeGridForceNodeMgr_atomic_11, CkMyPe(), 0, NULL); \
     CkPrintf("done.\n");                                                      \
    _TRACE_END_EXECUTE();                                                      \
    _slist_12_end();                                                           \
  }                                                                            \
                                                                               \
public:                                                                        \
  void ack(GridAckMsg* am_msg) {                                               \
    CWhenTrigger *tr;                                                          \
    void* _bgParentLog = NULL;                                                 \
    CMsgBuffer* cmsgbuf;                                                       \
    CmiReference(UsrToEnv(am_msg));                                            \
    cmsgbuf = __cDep->bufferMessage(0, (void *) am_msg,  (void *) _bgParentLog, 0);\
    tr = __cDep->getTrigger(0, 0);                                             \
    if (tr == 0)                                                               \
      return;                                                                  \
    _TRACE_END_EXECUTE();                                                      \
    switch(tr->whenID) {                                                       \
      case 0:                                                                  \
      {                                                                        \
    tr->args[0] = 0;                                                           \
        _when_0();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
      }                                                                        \
      case 1:                                                                  \
      {                                                                        \
    tr->args[0] = 0;                                                           \
        _when_1();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
      }                                                                        \
      case 3:                                                                  \
      {                                                                        \
    tr->args[0] = 0;                                                           \
        _when_3();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
      }                                                                        \
      case 4:                                                                  \
      {                                                                        \
    tr->args[0] = 0;                                                           \
        _when_4();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
      }                                                                        \
      case 5:                                                                  \
      {                                                                        \
    tr->args[0] = 0;                                                           \
        _when_5();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
      }                                                                        \
      case 6:                                                                  \
      {                                                                        \
    tr->args[0] = 0;                                                           \
        _when_6();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
      }                                                                        \
    }                                                                          \
  }                                                                            \
                                                                               \
  void recv(GridSegmentMsg* msg_msg) {                                         \
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
    tr->args[0] = 0;                                                           \
        _when_2();                                                             \
        delete tr;                                                             \
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _dummyEP, CkMyPe(), 0, NULL);        \
        return;                                                                \
    }                                                                          \
  }                                                                            \
                                                                               \
private:                                                                       \
  CDep *__cDep;                                                                \
  void __sdag_init(void) {                                                     \
    __cDep = new CDep(2,7);                                                    \
    __cDep->addDepends(0,0);                                                   \
    __cDep->addDepends(1,0);                                                   \
    __cDep->addDepends(3,0);                                                   \
    __cDep->addDepends(4,0);                                                   \
    __cDep->addDepends(5,0);                                                   \
    __cDep->addDepends(6,0);                                                   \
    __cDep->addDepends(2,1);                                                   \
  }                                                                            \
public:                                                                        \
  void __sdag_pup(PUP::er& p) {                                                \
    if (__cDep) { __cDep->pup(p); }                                            \
  }                                                                            \
  static void __sdag_register() {                                              \
                                                                               \
    __idx_ComputeGridForceNodeMgr_atomic_7 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_7(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_8 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_8(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_9 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_9(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_10 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_10(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_11 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_11(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_0 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_0(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_1 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_1(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_2 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_2(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_3 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_3(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_4 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_4(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_5 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_5(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
    __idx_ComputeGridForceNodeMgr_atomic_6 = CkRegisterEp("ComputeGridForceNodeMgr_atomic_6(void)", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);\
  }                                                                            \
  static int __idx_ComputeGridForceNodeMgr_atomic_7;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_8;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_9;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_10;                          \
  static int __idx_ComputeGridForceNodeMgr_atomic_11;                          \
  static int __idx_ComputeGridForceNodeMgr_atomic_0;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_1;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_2;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_3;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_4;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_5;                           \
  static int __idx_ComputeGridForceNodeMgr_atomic_6;                           \

#define ComputeGridForceNodeMgr_SDAG_CODE_DEF \
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_7=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_8=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_9=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_10=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_11=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_0=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_1=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_2=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_3=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_4=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_5=0;\
  int ComputeGridForceNodeMgr::__idx_ComputeGridForceNodeMgr_atomic_6=0;\

typedef CBaseT1<NodeGroup, CProxy_ComputeGridForceNodeMgr> CBase_ComputeGridForceNodeMgr;

extern void _registerComputeGridForceMgr(void);
#endif
