#ifndef _DECL_WorkDistrib_H_
#define _DECL_WorkDistrib_H_
#include "charm++.h"
/* DECLS: message LocalWorkMsg;
 */
class LocalWorkMsg;
class CMessage_LocalWorkMsg:public CkMessage{
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
    CMessage_LocalWorkMsg();
    static void *pack(LocalWorkMsg *p);
    static LocalWorkMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeMapChangeMsg{
int newNodes[];
char newNumPartitions[];
}
;
 */
class ComputeMapChangeMsg;
class CMessage_ComputeMapChangeMsg:public CkMessage{
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
    CMessage_ComputeMapChangeMsg();
    static void *pack(ComputeMapChangeMsg *p);
    static ComputeMapChangeMsg* unpack(void* p);
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

/* DECLS: message PatchMapMsg{
char patchMapData[];
}
;
 */
class PatchMapMsg;
class CMessage_PatchMapMsg:public CkMessage{
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
    CMessage_PatchMapMsg();
    static void *pack(PatchMapMsg *p);
    static PatchMapMsg* unpack(void* p);
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

/* DECLS: message ComputeMapMsg{
ComputeMap::ComputeData computeMapData[];
}
;
 */
class ComputeMapMsg;
class CMessage_ComputeMapMsg:public CkMessage{
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
    CMessage_ComputeMapMsg();
    static void *pack(ComputeMapMsg *p);
    static ComputeMapMsg* unpack(void* p);
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

/* DECLS: group WorkDistrib: IrrGroup{
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
 class WorkDistrib;
 class CkIndex_WorkDistrib;
 class CProxy_WorkDistrib;
 class CProxyElement_WorkDistrib;
 class CProxySection_WorkDistrib;
/* --------------- index object ------------------ */
class CkIndex_WorkDistrib:public CProxyElement_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: WorkDistrib(void);
 */
    static int __idx_WorkDistrib_void;
    static int ckNew(void) { return __idx_WorkDistrib_void; }
    static void _call_WorkDistrib_void(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    static int __idx_savePatchMap_PatchMapMsg;
    static int savePatchMap(PatchMapMsg* impl_msg) { return __idx_savePatchMap_PatchMapMsg; }
    static void _call_savePatchMap_PatchMapMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
    static int __idx_saveComputeMap_ComputeMapMsg;
    static int saveComputeMap(ComputeMapMsg* impl_msg) { return __idx_saveComputeMap_ComputeMapMsg; }
    static void _call_saveComputeMap_ComputeMapMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    static int __idx_recvComputeMapChanges_ComputeMapChangeMsg;
    static int recvComputeMapChanges(ComputeMapChangeMsg* impl_msg) { return __idx_recvComputeMapChanges_ComputeMapChangeMsg; }
    static void _call_recvComputeMapChanges_ComputeMapChangeMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    static int __idx_doneSaveComputeMap_CkReductionMsg;
    static int doneSaveComputeMap(CkReductionMsg* impl_msg) { return __idx_doneSaveComputeMap_CkReductionMsg; }
    static void _call_doneSaveComputeMap_CkReductionMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWork_LocalWorkMsg;
    static int enqueueWork(LocalWorkMsg* impl_msg) { return __idx_enqueueWork_LocalWorkMsg; }
    static void _call_enqueueWork_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueExcls_LocalWorkMsg;
    static int enqueueExcls(LocalWorkMsg* impl_msg) { return __idx_enqueueExcls_LocalWorkMsg; }
    static void _call_enqueueExcls_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueBonds_LocalWorkMsg;
    static int enqueueBonds(LocalWorkMsg* impl_msg) { return __idx_enqueueBonds_LocalWorkMsg; }
    static void _call_enqueueBonds_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueAngles_LocalWorkMsg;
    static int enqueueAngles(LocalWorkMsg* impl_msg) { return __idx_enqueueAngles_LocalWorkMsg; }
    static void _call_enqueueAngles_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueDihedrals_LocalWorkMsg;
    static int enqueueDihedrals(LocalWorkMsg* impl_msg) { return __idx_enqueueDihedrals_LocalWorkMsg; }
    static void _call_enqueueDihedrals_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueImpropers_LocalWorkMsg;
    static int enqueueImpropers(LocalWorkMsg* impl_msg) { return __idx_enqueueImpropers_LocalWorkMsg; }
    static void _call_enqueueImpropers_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueThole_LocalWorkMsg;
    static int enqueueThole(LocalWorkMsg* impl_msg) { return __idx_enqueueThole_LocalWorkMsg; }
    static void _call_enqueueThole_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueAniso_LocalWorkMsg;
    static int enqueueAniso(LocalWorkMsg* impl_msg) { return __idx_enqueueAniso_LocalWorkMsg; }
    static void _call_enqueueAniso_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueCrossterms_LocalWorkMsg;
    static int enqueueCrossterms(LocalWorkMsg* impl_msg) { return __idx_enqueueCrossterms_LocalWorkMsg; }
    static void _call_enqueueCrossterms_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueCUDA_LocalWorkMsg;
    static int enqueueCUDA(LocalWorkMsg* impl_msg) { return __idx_enqueueCUDA_LocalWorkMsg; }
    static void _call_enqueueCUDA_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueCUDAP2_LocalWorkMsg;
    static int enqueueCUDAP2(LocalWorkMsg* impl_msg) { return __idx_enqueueCUDAP2_LocalWorkMsg; }
    static void _call_enqueueCUDAP2_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueCUDAP3_LocalWorkMsg;
    static int enqueueCUDAP3(LocalWorkMsg* impl_msg) { return __idx_enqueueCUDAP3_LocalWorkMsg; }
    static void _call_enqueueCUDAP3_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueuePme_LocalWorkMsg;
    static int enqueuePme(LocalWorkMsg* impl_msg) { return __idx_enqueuePme_LocalWorkMsg; }
    static void _call_enqueuePme_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueSelfA1_LocalWorkMsg;
    static int enqueueSelfA1(LocalWorkMsg* impl_msg) { return __idx_enqueueSelfA1_LocalWorkMsg; }
    static void _call_enqueueSelfA1_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueSelfA2_LocalWorkMsg;
    static int enqueueSelfA2(LocalWorkMsg* impl_msg) { return __idx_enqueueSelfA2_LocalWorkMsg; }
    static void _call_enqueueSelfA2_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueSelfA3_LocalWorkMsg;
    static int enqueueSelfA3(LocalWorkMsg* impl_msg) { return __idx_enqueueSelfA3_LocalWorkMsg; }
    static void _call_enqueueSelfA3_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueSelfB1_LocalWorkMsg;
    static int enqueueSelfB1(LocalWorkMsg* impl_msg) { return __idx_enqueueSelfB1_LocalWorkMsg; }
    static void _call_enqueueSelfB1_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueSelfB2_LocalWorkMsg;
    static int enqueueSelfB2(LocalWorkMsg* impl_msg) { return __idx_enqueueSelfB2_LocalWorkMsg; }
    static void _call_enqueueSelfB2_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueSelfB3_LocalWorkMsg;
    static int enqueueSelfB3(LocalWorkMsg* impl_msg) { return __idx_enqueueSelfB3_LocalWorkMsg; }
    static void _call_enqueueSelfB3_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkA1_LocalWorkMsg;
    static int enqueueWorkA1(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkA1_LocalWorkMsg; }
    static void _call_enqueueWorkA1_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkA2_LocalWorkMsg;
    static int enqueueWorkA2(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkA2_LocalWorkMsg; }
    static void _call_enqueueWorkA2_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkA3_LocalWorkMsg;
    static int enqueueWorkA3(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkA3_LocalWorkMsg; }
    static void _call_enqueueWorkA3_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkB1_LocalWorkMsg;
    static int enqueueWorkB1(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkB1_LocalWorkMsg; }
    static void _call_enqueueWorkB1_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkB2_LocalWorkMsg;
    static int enqueueWorkB2(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkB2_LocalWorkMsg; }
    static void _call_enqueueWorkB2_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkB3_LocalWorkMsg;
    static int enqueueWorkB3(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkB3_LocalWorkMsg; }
    static void _call_enqueueWorkB3_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueWorkC_LocalWorkMsg;
    static int enqueueWorkC(LocalWorkMsg* impl_msg) { return __idx_enqueueWorkC_LocalWorkMsg; }
    static void _call_enqueueWorkC_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    static int __idx_enqueueLCPO_LocalWorkMsg;
    static int enqueueLCPO(LocalWorkMsg* impl_msg) { return __idx_enqueueLCPO_LocalWorkMsg; }
    static void _call_enqueueLCPO_LocalWorkMsg(void* impl_msg,WorkDistrib* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_WorkDistrib: public CProxyElement_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    CProxyElement_WorkDistrib(void) {}
    CProxyElement_WorkDistrib(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_WorkDistrib(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_WorkDistrib(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    WorkDistrib* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static WorkDistrib* ckLocalBranch(CkGroupID gID) {
      return (WorkDistrib*)CkLocalBranch(gID);
    }
/* DECLS: WorkDistrib(void);
 */

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    void savePatchMap(PatchMapMsg* impl_msg);

/* DECLS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
    void saveComputeMap(ComputeMapMsg* impl_msg);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    void doneSaveComputeMap(CkReductionMsg* impl_msg);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    void enqueueWork(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    void enqueueExcls(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    void enqueueBonds(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    void enqueueAngles(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    void enqueueDihedrals(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    void enqueueImpropers(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    void enqueueThole(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    void enqueueAniso(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    void enqueueCrossterms(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDA(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDAP2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDAP3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    void enqueuePme(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkC(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    void enqueueLCPO(LocalWorkMsg* impl_msg);

};
PUPmarshall(CProxyElement_WorkDistrib)
/* ---------------- collective proxy -------------- */
class CProxy_WorkDistrib: public CProxy_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    CProxy_WorkDistrib(void) {}
    CProxy_WorkDistrib(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_WorkDistrib(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_WorkDistrib(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_WorkDistrib operator[](int onPE) const
      {return CProxyElement_WorkDistrib(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    WorkDistrib* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static WorkDistrib* ckLocalBranch(CkGroupID gID) {
      return (WorkDistrib*)CkLocalBranch(gID);
    }
/* DECLS: WorkDistrib(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    void savePatchMap(PatchMapMsg* impl_msg);
    void savePatchMap(PatchMapMsg* impl_msg, int npes, int *pes);
    void savePatchMap(PatchMapMsg* impl_msg, CmiGroup &grp);

/* DECLS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
    void saveComputeMap(ComputeMapMsg* impl_msg);
    void saveComputeMap(ComputeMapMsg* impl_msg, int npes, int *pes);
    void saveComputeMap(ComputeMapMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, int npes, int *pes);
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    void doneSaveComputeMap(CkReductionMsg* impl_msg);
    void doneSaveComputeMap(CkReductionMsg* impl_msg, int npes, int *pes);
    void doneSaveComputeMap(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    void enqueueWork(LocalWorkMsg* impl_msg);
    void enqueueWork(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWork(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    void enqueueExcls(LocalWorkMsg* impl_msg);
    void enqueueExcls(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueExcls(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    void enqueueBonds(LocalWorkMsg* impl_msg);
    void enqueueBonds(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueBonds(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    void enqueueAngles(LocalWorkMsg* impl_msg);
    void enqueueAngles(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueAngles(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    void enqueueDihedrals(LocalWorkMsg* impl_msg);
    void enqueueDihedrals(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueDihedrals(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    void enqueueImpropers(LocalWorkMsg* impl_msg);
    void enqueueImpropers(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueImpropers(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    void enqueueThole(LocalWorkMsg* impl_msg);
    void enqueueThole(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueThole(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    void enqueueAniso(LocalWorkMsg* impl_msg);
    void enqueueAniso(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueAniso(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    void enqueueCrossterms(LocalWorkMsg* impl_msg);
    void enqueueCrossterms(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueCrossterms(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDA(LocalWorkMsg* impl_msg);
    void enqueueCUDA(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueCUDA(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDAP2(LocalWorkMsg* impl_msg);
    void enqueueCUDAP2(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueCUDAP2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDAP3(LocalWorkMsg* impl_msg);
    void enqueueCUDAP3(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueCUDAP3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    void enqueuePme(LocalWorkMsg* impl_msg);
    void enqueuePme(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueuePme(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA1(LocalWorkMsg* impl_msg);
    void enqueueSelfA1(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueSelfA1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA2(LocalWorkMsg* impl_msg);
    void enqueueSelfA2(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueSelfA2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA3(LocalWorkMsg* impl_msg);
    void enqueueSelfA3(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueSelfA3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB1(LocalWorkMsg* impl_msg);
    void enqueueSelfB1(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueSelfB1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB2(LocalWorkMsg* impl_msg);
    void enqueueSelfB2(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueSelfB2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB3(LocalWorkMsg* impl_msg);
    void enqueueSelfB3(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueSelfB3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA1(LocalWorkMsg* impl_msg);
    void enqueueWorkA1(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkA1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA2(LocalWorkMsg* impl_msg);
    void enqueueWorkA2(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkA2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA3(LocalWorkMsg* impl_msg);
    void enqueueWorkA3(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkA3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB1(LocalWorkMsg* impl_msg);
    void enqueueWorkB1(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkB1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB2(LocalWorkMsg* impl_msg);
    void enqueueWorkB2(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkB2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB3(LocalWorkMsg* impl_msg);
    void enqueueWorkB3(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkB3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkC(LocalWorkMsg* impl_msg);
    void enqueueWorkC(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueWorkC(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    void enqueueLCPO(LocalWorkMsg* impl_msg);
    void enqueueLCPO(LocalWorkMsg* impl_msg, int npes, int *pes);
    void enqueueLCPO(LocalWorkMsg* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_WorkDistrib)
/* ---------------- section proxy -------------- */
class CProxySection_WorkDistrib: public CProxySection_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    CProxySection_WorkDistrib(void) {}
    CProxySection_WorkDistrib(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_WorkDistrib(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_WorkDistrib(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_WorkDistrib(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_WorkDistrib(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    WorkDistrib* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static WorkDistrib* ckLocalBranch(CkGroupID gID) {
      return (WorkDistrib*)CkLocalBranch(gID);
    }
/* DECLS: WorkDistrib(void);
 */

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    void savePatchMap(PatchMapMsg* impl_msg);

/* DECLS: void saveComputeMap(ComputeMapMsg* impl_msg);
 */
    void saveComputeMap(ComputeMapMsg* impl_msg);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    void doneSaveComputeMap(CkReductionMsg* impl_msg);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    void enqueueWork(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    void enqueueExcls(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    void enqueueBonds(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    void enqueueAngles(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    void enqueueDihedrals(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    void enqueueImpropers(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    void enqueueThole(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    void enqueueAniso(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    void enqueueCrossterms(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDA(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDAP2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    void enqueueCUDAP3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    void enqueuePme(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    void enqueueSelfB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    void enqueueWorkC(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    void enqueueLCPO(LocalWorkMsg* impl_msg);

};
PUPmarshall(CProxySection_WorkDistrib)
typedef CBaseT1<Group, CProxy_WorkDistrib> CBase_WorkDistrib;

extern void _registerWorkDistrib(void);
#endif
