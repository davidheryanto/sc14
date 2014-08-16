#ifndef _DECL_Node_H_
#define _DECL_Node_H_
#include "charm++.h"
/* DECLS: message GroupInitMsg;
 */
class GroupInitMsg;
class CMessage_GroupInitMsg:public CkMessage{
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
    CMessage_GroupInitMsg();
    static void *pack(GroupInitMsg *p);
    static GroupInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ScriptParamMsg;
 */
class ScriptParamMsg;
class CMessage_ScriptParamMsg:public CkMessage{
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
    CMessage_ScriptParamMsg();
    static void *pack(ScriptParamMsg *p);
    static ScriptParamMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group Node: IrrGroup{
Node(GroupInitMsg* impl_msg);
void startUp(CkQdMsg* impl_msg);
void startup(void);
void mallocTest(int impl_noname_0);
void mallocTestQd(CkQdMsg* impl_msg);
void run(void);
void scriptBarrier(CkQdMsg* impl_msg);
void scriptParam(ScriptParamMsg* impl_msg);
void reloadCharges(const float *charge, int n);
void reloadGridforceGrid(int gridnum);
void recvEnableExitScheduler(CkQdMsg* impl_msg);
void exitScheduler(CkQdMsg* impl_msg);
void recvEnableEarlyExit(CkQdMsg* impl_msg);
void earlyExit(CkQdMsg* impl_msg);
void startHPM(void);
void stopHPM(void);
void traceBarrier(int impl_noname_1, int impl_noname_2);
void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
};
 */
 class Node;
 class CkIndex_Node;
 class CProxy_Node;
 class CProxyElement_Node;
 class CProxySection_Node;
/* --------------- index object ------------------ */
class CkIndex_Node:public CProxyElement_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: Node(GroupInitMsg* impl_msg);
 */
    static int __idx_Node_GroupInitMsg;
    static int ckNew(GroupInitMsg* impl_msg) { return __idx_Node_GroupInitMsg; }
    static void _call_Node_GroupInitMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void startUp(CkQdMsg* impl_msg);
 */
    static int __idx_startUp_CkQdMsg;
    static int startUp(CkQdMsg* impl_msg) { return __idx_startUp_CkQdMsg; }
    static void _call_startUp_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void startup(void);
 */
    static int __idx_startup_void;
    static int startup(void) { return __idx_startup_void; }
    static void _call_startup_void(void* impl_msg,Node* impl_obj);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    static int __idx_mallocTest_marshall4;
    static int mallocTest(int impl_noname_0) { return __idx_mallocTest_marshall4; }
    static void _call_mallocTest_marshall4(void* impl_msg,Node* impl_obj);
    static int _callmarshall_mallocTest_marshall4(char* impl_buf,Node* impl_obj);
    static void _marshallmessagepup_mallocTest_marshall4(PUP::er &p,void *msg);

/* DECLS: void mallocTestQd(CkQdMsg* impl_msg);
 */
    static int __idx_mallocTestQd_CkQdMsg;
    static int mallocTestQd(CkQdMsg* impl_msg) { return __idx_mallocTestQd_CkQdMsg; }
    static void _call_mallocTestQd_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void run(void);
 */
    static int __idx_run_void;
    static int run(void) { return __idx_run_void; }
    static void _call_run_void(void* impl_msg,Node* impl_obj);

/* DECLS: void scriptBarrier(CkQdMsg* impl_msg);
 */
    static int __idx_scriptBarrier_CkQdMsg;
    static int scriptBarrier(CkQdMsg* impl_msg) { return __idx_scriptBarrier_CkQdMsg; }
    static void _call_scriptBarrier_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    static int __idx_scriptParam_ScriptParamMsg;
    static int scriptParam(ScriptParamMsg* impl_msg) { return __idx_scriptParam_ScriptParamMsg; }
    static void _call_scriptParam_ScriptParamMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    static int __idx_reloadCharges_marshall9;
    static int reloadCharges(const float *charge, int n) { return __idx_reloadCharges_marshall9; }
    static void _call_reloadCharges_marshall9(void* impl_msg,Node* impl_obj);
    static int _callmarshall_reloadCharges_marshall9(char* impl_buf,Node* impl_obj);
    static void _marshallmessagepup_reloadCharges_marshall9(PUP::er &p,void *msg);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    static int __idx_reloadGridforceGrid_marshall10;
    static int reloadGridforceGrid(int gridnum) { return __idx_reloadGridforceGrid_marshall10; }
    static void _call_reloadGridforceGrid_marshall10(void* impl_msg,Node* impl_obj);
    static int _callmarshall_reloadGridforceGrid_marshall10(char* impl_buf,Node* impl_obj);
    static void _marshallmessagepup_reloadGridforceGrid_marshall10(PUP::er &p,void *msg);

/* DECLS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
    static int __idx_recvEnableExitScheduler_CkQdMsg;
    static int recvEnableExitScheduler(CkQdMsg* impl_msg) { return __idx_recvEnableExitScheduler_CkQdMsg; }
    static void _call_recvEnableExitScheduler_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void exitScheduler(CkQdMsg* impl_msg);
 */
    static int __idx_exitScheduler_CkQdMsg;
    static int exitScheduler(CkQdMsg* impl_msg) { return __idx_exitScheduler_CkQdMsg; }
    static void _call_exitScheduler_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
    static int __idx_recvEnableEarlyExit_CkQdMsg;
    static int recvEnableEarlyExit(CkQdMsg* impl_msg) { return __idx_recvEnableEarlyExit_CkQdMsg; }
    static void _call_recvEnableEarlyExit_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void earlyExit(CkQdMsg* impl_msg);
 */
    static int __idx_earlyExit_CkQdMsg;
    static int earlyExit(CkQdMsg* impl_msg) { return __idx_earlyExit_CkQdMsg; }
    static void _call_earlyExit_CkQdMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void startHPM(void);
 */
    static int __idx_startHPM_void;
    static int startHPM(void) { return __idx_startHPM_void; }
    static void _call_startHPM_void(void* impl_msg,Node* impl_obj);

/* DECLS: void stopHPM(void);
 */
    static int __idx_stopHPM_void;
    static int stopHPM(void) { return __idx_stopHPM_void; }
    static void _call_stopHPM_void(void* impl_msg,Node* impl_obj);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    static int __idx_traceBarrier_marshall17;
    static int traceBarrier(int impl_noname_1, int impl_noname_2) { return __idx_traceBarrier_marshall17; }
    static void _call_traceBarrier_marshall17(void* impl_msg,Node* impl_obj);
    static int _callmarshall_traceBarrier_marshall17(char* impl_buf,Node* impl_obj);
    static void _marshallmessagepup_traceBarrier_marshall17(PUP::er &p,void *msg);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    static int __idx_resumeAfterTraceBarrier_CkReductionMsg;
    static int resumeAfterTraceBarrier(CkReductionMsg* impl_msg) { return __idx_resumeAfterTraceBarrier_CkReductionMsg; }
    static void _call_resumeAfterTraceBarrier_CkReductionMsg(void* impl_msg,Node* impl_obj);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    static int __idx_papiMeasureBarrier_marshall19;
    static int papiMeasureBarrier(int impl_noname_3, int impl_noname_4) { return __idx_papiMeasureBarrier_marshall19; }
    static void _call_papiMeasureBarrier_marshall19(void* impl_msg,Node* impl_obj);
    static int _callmarshall_papiMeasureBarrier_marshall19(char* impl_buf,Node* impl_obj);
    static void _marshallmessagepup_papiMeasureBarrier_marshall19(PUP::er &p,void *msg);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    static int __idx_resumeAfterPapiMeasureBarrier_CkReductionMsg;
    static int resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg) { return __idx_resumeAfterPapiMeasureBarrier_CkReductionMsg; }
    static void _call_resumeAfterPapiMeasureBarrier_CkReductionMsg(void* impl_msg,Node* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_Node: public CProxyElement_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    CProxyElement_Node(void) {}
    CProxyElement_Node(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_Node(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_Node(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    Node* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Node* ckLocalBranch(CkGroupID gID) {
      return (Node*)CkLocalBranch(gID);
    }
/* DECLS: Node(GroupInitMsg* impl_msg);
 */

/* DECLS: void startUp(CkQdMsg* impl_msg);
 */
    void startUp(CkQdMsg* impl_msg);

/* DECLS: void startup(void);
 */
    void startup(void);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    void mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTestQd(CkQdMsg* impl_msg);
 */
    void mallocTestQd(CkQdMsg* impl_msg);

/* DECLS: void run(void);
 */
    void run(void);

/* DECLS: void scriptBarrier(CkQdMsg* impl_msg);
 */
    void scriptBarrier(CkQdMsg* impl_msg);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    void scriptParam(ScriptParamMsg* impl_msg);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    void reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    void reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
    void recvEnableExitScheduler(CkQdMsg* impl_msg);

/* DECLS: void exitScheduler(CkQdMsg* impl_msg);
 */
    void exitScheduler(CkQdMsg* impl_msg);

/* DECLS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
    void recvEnableEarlyExit(CkQdMsg* impl_msg);

/* DECLS: void earlyExit(CkQdMsg* impl_msg);
 */
    void earlyExit(CkQdMsg* impl_msg);

/* DECLS: void startHPM(void);
 */
    void startHPM(void);

/* DECLS: void stopHPM(void);
 */
    void stopHPM(void);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    void traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);

};
PUPmarshall(CProxyElement_Node)
/* ---------------- collective proxy -------------- */
class CProxy_Node: public CProxy_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    CProxy_Node(void) {}
    CProxy_Node(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_Node(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Node(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Node operator[](int onPE) const
      {return CProxyElement_Node(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    Node* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Node* ckLocalBranch(CkGroupID gID) {
      return (Node*)CkLocalBranch(gID);
    }
/* DECLS: Node(GroupInitMsg* impl_msg);
 */
    static CkGroupID ckNew(GroupInitMsg* impl_msg);
    CProxy_Node(GroupInitMsg* impl_msg);

/* DECLS: void startUp(CkQdMsg* impl_msg);
 */
    void startUp(CkQdMsg* impl_msg);
    void startUp(CkQdMsg* impl_msg, int npes, int *pes);
    void startUp(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void startup(void);
 */
    void startup(void);
    void startup(int npes, int *pes);
    void startup(CmiGroup &grp);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    void mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    void mallocTest(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void mallocTest(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTestQd(CkQdMsg* impl_msg);
 */
    void mallocTestQd(CkQdMsg* impl_msg);
    void mallocTestQd(CkQdMsg* impl_msg, int npes, int *pes);
    void mallocTestQd(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void run(void);
 */
    void run(void);
    void run(int npes, int *pes);
    void run(CmiGroup &grp);

/* DECLS: void scriptBarrier(CkQdMsg* impl_msg);
 */
    void scriptBarrier(CkQdMsg* impl_msg);
    void scriptBarrier(CkQdMsg* impl_msg, int npes, int *pes);
    void scriptBarrier(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    void scriptParam(ScriptParamMsg* impl_msg);
    void scriptParam(ScriptParamMsg* impl_msg, int npes, int *pes);
    void scriptParam(ScriptParamMsg* impl_msg, CmiGroup &grp);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    void reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts=NULL);
    void reloadCharges(const float *charge, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void reloadCharges(const float *charge, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    void reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts=NULL);
    void reloadGridforceGrid(int gridnum, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void reloadGridforceGrid(int gridnum, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
    void recvEnableExitScheduler(CkQdMsg* impl_msg);
    void recvEnableExitScheduler(CkQdMsg* impl_msg, int npes, int *pes);
    void recvEnableExitScheduler(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void exitScheduler(CkQdMsg* impl_msg);
 */
    void exitScheduler(CkQdMsg* impl_msg);
    void exitScheduler(CkQdMsg* impl_msg, int npes, int *pes);
    void exitScheduler(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
    void recvEnableEarlyExit(CkQdMsg* impl_msg);
    void recvEnableEarlyExit(CkQdMsg* impl_msg, int npes, int *pes);
    void recvEnableEarlyExit(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void earlyExit(CkQdMsg* impl_msg);
 */
    void earlyExit(CkQdMsg* impl_msg);
    void earlyExit(CkQdMsg* impl_msg, int npes, int *pes);
    void earlyExit(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void startHPM(void);
 */
    void startHPM(void);
    void startHPM(int npes, int *pes);
    void startHPM(CmiGroup &grp);

/* DECLS: void stopHPM(void);
 */
    void stopHPM(void);
    void stopHPM(int npes, int *pes);
    void stopHPM(CmiGroup &grp);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    void traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    void traceBarrier(int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void traceBarrier(int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg, int npes, int *pes);
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, int npes, int *pes);
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_Node)
/* ---------------- section proxy -------------- */
class CProxySection_Node: public CProxySection_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    CProxySection_Node(void) {}
    CProxySection_Node(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_Node(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Node(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_Node(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_Node(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    Node* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Node* ckLocalBranch(CkGroupID gID) {
      return (Node*)CkLocalBranch(gID);
    }
/* DECLS: Node(GroupInitMsg* impl_msg);
 */

/* DECLS: void startUp(CkQdMsg* impl_msg);
 */
    void startUp(CkQdMsg* impl_msg);

/* DECLS: void startup(void);
 */
    void startup(void);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    void mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTestQd(CkQdMsg* impl_msg);
 */
    void mallocTestQd(CkQdMsg* impl_msg);

/* DECLS: void run(void);
 */
    void run(void);

/* DECLS: void scriptBarrier(CkQdMsg* impl_msg);
 */
    void scriptBarrier(CkQdMsg* impl_msg);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    void scriptParam(ScriptParamMsg* impl_msg);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    void reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    void reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvEnableExitScheduler(CkQdMsg* impl_msg);
 */
    void recvEnableExitScheduler(CkQdMsg* impl_msg);

/* DECLS: void exitScheduler(CkQdMsg* impl_msg);
 */
    void exitScheduler(CkQdMsg* impl_msg);

/* DECLS: void recvEnableEarlyExit(CkQdMsg* impl_msg);
 */
    void recvEnableEarlyExit(CkQdMsg* impl_msg);

/* DECLS: void earlyExit(CkQdMsg* impl_msg);
 */
    void earlyExit(CkQdMsg* impl_msg);

/* DECLS: void startHPM(void);
 */
    void startHPM(void);

/* DECLS: void stopHPM(void);
 */
    void stopHPM(void);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    void traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);

};
PUPmarshall(CProxySection_Node)
typedef CBaseT1<Group, CProxy_Node> CBase_Node;

extern void _registerNode(void);
#endif
