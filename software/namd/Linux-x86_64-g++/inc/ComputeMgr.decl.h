#ifndef _DECL_ComputeMgr_H_
#define _DECL_ComputeMgr_H_
#include "charm++.h"
/* DECLS: message ComputeGlobalDataMsg;
 */
class ComputeGlobalDataMsg;
class CMessage_ComputeGlobalDataMsg:public CkMessage{
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
    CMessage_ComputeGlobalDataMsg();
    static void *pack(ComputeGlobalDataMsg *p);
    static ComputeGlobalDataMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeGlobalResultsMsg;
 */
class ComputeGlobalResultsMsg;
class CMessage_ComputeGlobalResultsMsg:public CkMessage{
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
    CMessage_ComputeGlobalResultsMsg();
    static void *pack(ComputeGlobalResultsMsg *p);
    static ComputeGlobalResultsMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeDPMEDataMsg;
 */
class ComputeDPMEDataMsg;
class CMessage_ComputeDPMEDataMsg:public CkMessage{
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
    CMessage_ComputeDPMEDataMsg();
    static void *pack(ComputeDPMEDataMsg *p);
    static ComputeDPMEDataMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeDPMEResultsMsg;
 */
class ComputeDPMEResultsMsg;
class CMessage_ComputeDPMEResultsMsg:public CkMessage{
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
    CMessage_ComputeDPMEResultsMsg();
    static void *pack(ComputeDPMEResultsMsg *p);
    static ComputeDPMEResultsMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeConsForceMsg;
 */
class ComputeConsForceMsg;
class CMessage_ComputeConsForceMsg:public CkMessage{
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
    CMessage_ComputeConsForceMsg();
    static void *pack(ComputeConsForceMsg *p);
    static ComputeConsForceMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ComputeEwaldMsg{
float eik[];
}
;
 */
class ComputeEwaldMsg;
class CMessage_ComputeEwaldMsg:public CkMessage{
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
    CMessage_ComputeEwaldMsg();
    static void *pack(ComputeEwaldMsg *p);
    static ComputeEwaldMsg* unpack(void* p);
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

/* DECLS: message NonbondedCUDASlaveMsg;
 */
class NonbondedCUDASlaveMsg;
class CMessage_NonbondedCUDASlaveMsg:public CkMessage{
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
    CMessage_NonbondedCUDASlaveMsg();
    static void *pack(NonbondedCUDASlaveMsg *p);
    static NonbondedCUDASlaveMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group ComputeMgr: IrrGroup{
ComputeMgr(void);
void updateComputes2(CkQdMsg* impl_msg);
void updateComputes3(void);
void splitComputes(void);
void splitComputes2(CkQdMsg* impl_msg);
void updateLocalComputes(void);
void updateLocalComputes2(CkQdMsg* impl_msg);
void updateLocalComputes3(void);
void updateLocalComputes4(CkQdMsg* impl_msg);
void updateLocalComputes5(void);
void doneUpdateLocalComputes(void);
void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
void recvYieldDevice(int pe);
void recvBuildCudaForceTable(void);
void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
};
 */
 class ComputeMgr;
 class CkIndex_ComputeMgr;
 class CProxy_ComputeMgr;
 class CProxyElement_ComputeMgr;
 class CProxySection_ComputeMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeMgr:public CProxyElement_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ComputeMgr(void);
 */
    static int __idx_ComputeMgr_void;
    static int ckNew(void) { return __idx_ComputeMgr_void; }
    static void _call_ComputeMgr_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    static int __idx_updateComputes2_CkQdMsg;
    static int updateComputes2(CkQdMsg* impl_msg) { return __idx_updateComputes2_CkQdMsg; }
    static void _call_updateComputes2_CkQdMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateComputes3(void);
 */
    static int __idx_updateComputes3_void;
    static int updateComputes3(void) { return __idx_updateComputes3_void; }
    static void _call_updateComputes3_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void splitComputes(void);
 */
    static int __idx_splitComputes_void;
    static int splitComputes(void) { return __idx_splitComputes_void; }
    static void _call_splitComputes_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    static int __idx_splitComputes2_CkQdMsg;
    static int splitComputes2(CkQdMsg* impl_msg) { return __idx_splitComputes2_CkQdMsg; }
    static void _call_splitComputes2_CkQdMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateLocalComputes(void);
 */
    static int __idx_updateLocalComputes_void;
    static int updateLocalComputes(void) { return __idx_updateLocalComputes_void; }
    static void _call_updateLocalComputes_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    static int __idx_updateLocalComputes2_CkQdMsg;
    static int updateLocalComputes2(CkQdMsg* impl_msg) { return __idx_updateLocalComputes2_CkQdMsg; }
    static void _call_updateLocalComputes2_CkQdMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateLocalComputes3(void);
 */
    static int __idx_updateLocalComputes3_void;
    static int updateLocalComputes3(void) { return __idx_updateLocalComputes3_void; }
    static void _call_updateLocalComputes3_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    static int __idx_updateLocalComputes4_CkQdMsg;
    static int updateLocalComputes4(CkQdMsg* impl_msg) { return __idx_updateLocalComputes4_CkQdMsg; }
    static void _call_updateLocalComputes4_CkQdMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void updateLocalComputes5(void);
 */
    static int __idx_updateLocalComputes5_void;
    static int updateLocalComputes5(void) { return __idx_updateLocalComputes5_void; }
    static void _call_updateLocalComputes5_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void doneUpdateLocalComputes(void);
 */
    static int __idx_doneUpdateLocalComputes_void;
    static int doneUpdateLocalComputes(void) { return __idx_doneUpdateLocalComputes_void; }
    static void _call_doneUpdateLocalComputes_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    static int __idx_recvComputeGlobalData_ComputeGlobalDataMsg;
    static int recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg) { return __idx_recvComputeGlobalData_ComputeGlobalDataMsg; }
    static void _call_recvComputeGlobalData_ComputeGlobalDataMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    static int __idx_recvComputeGlobalResults_ComputeGlobalResultsMsg;
    static int recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg) { return __idx_recvComputeGlobalResults_ComputeGlobalResultsMsg; }
    static void _call_recvComputeGlobalResults_ComputeGlobalResultsMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    static int __idx_recvComputeDPMEData_ComputeDPMEDataMsg;
    static int recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg) { return __idx_recvComputeDPMEData_ComputeDPMEDataMsg; }
    static void _call_recvComputeDPMEData_ComputeDPMEDataMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    static int __idx_recvComputeDPMEResults_ComputeDPMEResultsMsg;
    static int recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg) { return __idx_recvComputeDPMEResults_ComputeDPMEResultsMsg; }
    static void _call_recvComputeDPMEResults_ComputeDPMEResultsMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    static int __idx_recvComputeConsForceMsg_ComputeConsForceMsg;
    static int recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg) { return __idx_recvComputeConsForceMsg_ComputeConsForceMsg; }
    static void _call_recvComputeConsForceMsg_ComputeConsForceMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    static int __idx_recvComputeEwaldData_ComputeEwaldMsg;
    static int recvComputeEwaldData(ComputeEwaldMsg* impl_msg) { return __idx_recvComputeEwaldData_ComputeEwaldMsg; }
    static void _call_recvComputeEwaldData_ComputeEwaldMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    static int __idx_recvComputeEwaldResults_ComputeEwaldMsg;
    static int recvComputeEwaldResults(ComputeEwaldMsg* impl_msg) { return __idx_recvComputeEwaldResults_ComputeEwaldMsg; }
    static void _call_recvComputeEwaldResults_ComputeEwaldMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvYieldDevice(int pe);
 */
    static int __idx_recvYieldDevice_marshall19;
    static int recvYieldDevice(int pe) { return __idx_recvYieldDevice_marshall19; }
    static void _call_recvYieldDevice_marshall19(void* impl_msg,ComputeMgr* impl_obj);
    static int _callmarshall_recvYieldDevice_marshall19(char* impl_buf,ComputeMgr* impl_obj);
    static void _marshallmessagepup_recvYieldDevice_marshall19(PUP::er &p,void *msg);

/* DECLS: void recvBuildCudaForceTable(void);
 */
    static int __idx_recvBuildCudaForceTable_void;
    static int recvBuildCudaForceTable(void) { return __idx_recvBuildCudaForceTable_void; }
    static void _call_recvBuildCudaForceTable_void(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
    static int __idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg;
    static int recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg) { return __idx_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg; }
    static void _call_recvCreateNonbondedCUDASlave_NonbondedCUDASlaveMsg(void* impl_msg,ComputeMgr* impl_obj);

/* DECLS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    static int __idx_recvNonbondedCUDASlaveReady_marshall22;
    static int recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2) { return __idx_recvNonbondedCUDASlaveReady_marshall22; }
    static void _call_recvNonbondedCUDASlaveReady_marshall22(void* impl_msg,ComputeMgr* impl_obj);
    static int _callmarshall_recvNonbondedCUDASlaveReady_marshall22(char* impl_buf,ComputeMgr* impl_obj);
    static void _marshallmessagepup_recvNonbondedCUDASlaveReady_marshall22(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    CProxyElement_ComputeMgr(void) {}
    CProxyElement_ComputeMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ComputeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ComputeMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    ComputeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMgr(void);
 */

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    void updateComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateComputes3(void);
 */
    void updateComputes3(void);

/* DECLS: void splitComputes(void);
 */
    void splitComputes(void);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    void splitComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes(void);
 */
    void updateLocalComputes(void);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    void updateLocalComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes3(void);
 */
    void updateLocalComputes3(void);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    void updateLocalComputes4(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes5(void);
 */
    void updateLocalComputes5(void);

/* DECLS: void doneUpdateLocalComputes(void);
 */
    void doneUpdateLocalComputes(void);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvYieldDevice(int pe);
 */
    void recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvBuildCudaForceTable(void);
 */
    void recvBuildCudaForceTable(void);

/* DECLS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
    void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);

/* DECLS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxyElement_ComputeMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ComputeMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    CProxy_ComputeMgr(void) {}
    CProxy_ComputeMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ComputeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeMgr operator[](int onPE) const
      {return CProxyElement_ComputeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    ComputeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    void updateComputes2(CkQdMsg* impl_msg);
    void updateComputes2(CkQdMsg* impl_msg, int npes, int *pes);
    void updateComputes2(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateComputes3(void);
 */
    void updateComputes3(void);
    void updateComputes3(int npes, int *pes);
    void updateComputes3(CmiGroup &grp);

/* DECLS: void splitComputes(void);
 */
    void splitComputes(void);
    void splitComputes(int npes, int *pes);
    void splitComputes(CmiGroup &grp);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    void splitComputes2(CkQdMsg* impl_msg);
    void splitComputes2(CkQdMsg* impl_msg, int npes, int *pes);
    void splitComputes2(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocalComputes(void);
 */
    void updateLocalComputes(void);
    void updateLocalComputes(int npes, int *pes);
    void updateLocalComputes(CmiGroup &grp);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    void updateLocalComputes2(CkQdMsg* impl_msg);
    void updateLocalComputes2(CkQdMsg* impl_msg, int npes, int *pes);
    void updateLocalComputes2(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocalComputes3(void);
 */
    void updateLocalComputes3(void);
    void updateLocalComputes3(int npes, int *pes);
    void updateLocalComputes3(CmiGroup &grp);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    void updateLocalComputes4(CkQdMsg* impl_msg);
    void updateLocalComputes4(CkQdMsg* impl_msg, int npes, int *pes);
    void updateLocalComputes4(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocalComputes5(void);
 */
    void updateLocalComputes5(void);
    void updateLocalComputes5(int npes, int *pes);
    void updateLocalComputes5(CmiGroup &grp);

/* DECLS: void doneUpdateLocalComputes(void);
 */
    void doneUpdateLocalComputes(void);
    void doneUpdateLocalComputes(int npes, int *pes);
    void doneUpdateLocalComputes(CmiGroup &grp);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, int npes, int *pes);
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, int npes, int *pes);
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, int npes, int *pes);
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, int npes, int *pes);
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, int npes, int *pes);
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg, int npes, int *pes);
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, int npes, int *pes);
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvYieldDevice(int pe);
 */
    void recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts=NULL);
    void recvYieldDevice(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvYieldDevice(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvBuildCudaForceTable(void);
 */
    void recvBuildCudaForceTable(void);
    void recvBuildCudaForceTable(int npes, int *pes);
    void recvBuildCudaForceTable(CmiGroup &grp);

/* DECLS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
    void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
    void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg, int npes, int *pes);
    void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_ComputeMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ComputeMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    CProxySection_ComputeMgr(void) {}
    CProxySection_ComputeMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ComputeMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ComputeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ComputeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    ComputeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMgr(void);
 */

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    void updateComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateComputes3(void);
 */
    void updateComputes3(void);

/* DECLS: void splitComputes(void);
 */
    void splitComputes(void);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    void splitComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes(void);
 */
    void updateLocalComputes(void);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    void updateLocalComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes3(void);
 */
    void updateLocalComputes3(void);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    void updateLocalComputes4(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes5(void);
 */
    void updateLocalComputes5(void);

/* DECLS: void doneUpdateLocalComputes(void);
 */
    void doneUpdateLocalComputes(void);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvYieldDevice(int pe);
 */
    void recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvBuildCudaForceTable(void);
 */
    void recvBuildCudaForceTable(void);

/* DECLS: void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);
 */
    void recvCreateNonbondedCUDASlave(NonbondedCUDASlaveMsg* impl_msg);

/* DECLS: void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    void recvNonbondedCUDASlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxySection_ComputeMgr)
typedef CBaseT1<Group, CProxy_ComputeMgr> CBase_ComputeMgr;

extern void _registerComputeMgr(void);
#endif
