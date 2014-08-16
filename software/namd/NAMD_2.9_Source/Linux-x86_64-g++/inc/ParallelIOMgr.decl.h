#ifndef _DECL_ParallelIOMgr_H_
#define _DECL_ParallelIOMgr_H_
#include "charm++.h"
/* DECLS: message MolInfoMsg;
 */
class MolInfoMsg;
class CMessage_MolInfoMsg:public CkMessage{
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
    CMessage_MolInfoMsg();
    static void *pack(MolInfoMsg *p);
    static MolInfoMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message HydroBasedMsg;
 */
class HydroBasedMsg;
class CMessage_HydroBasedMsg:public CkMessage{
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
    CMessage_HydroBasedMsg();
    static void *pack(HydroBasedMsg *p);
    static HydroBasedMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message MoveInputAtomsMsg{
InputAtom atomList[];
}
;
 */
class MoveInputAtomsMsg;
class CMessage_MoveInputAtomsMsg:public CkMessage{
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
    CMessage_MoveInputAtomsMsg();
    static void *pack(MoveInputAtomsMsg *p);
    static MoveInputAtomsMsg* unpack(void* p);
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

/* DECLS: message AtomsCntPerPatchMsg{
PatchID pidList[];
unsigned short atomsCntList[];
unsigned short fixedAtomsCntList[];
}
;
 */
class AtomsCntPerPatchMsg;
class CMessage_AtomsCntPerPatchMsg:public CkMessage{
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
    CMessage_AtomsCntPerPatchMsg();
    static void *pack(AtomsCntPerPatchMsg *p);
    static AtomsCntPerPatchMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message MovePatchAtomsMsg{
PatchID pidList[];
int sizeList[];
FullAtom allAtoms[];
}
;
 */
class MovePatchAtomsMsg;
class CMessage_MovePatchAtomsMsg:public CkMessage{
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
    CMessage_MovePatchAtomsMsg();
    static void *pack(MovePatchAtomsMsg *p);
    static MovePatchAtomsMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ClusterSizeMsg;
 */
class ClusterSizeMsg;
class CMessage_ClusterSizeMsg:public CkMessage{
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
    CMessage_ClusterSizeMsg();
    static void *pack(ClusterSizeMsg *p);
    static ClusterSizeMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ClusterCoorMsg;
 */
class ClusterCoorMsg;
class CMessage_ClusterCoorMsg:public CkMessage{
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
    CMessage_ClusterCoorMsg();
    static void *pack(ClusterCoorMsg *p);
    static ClusterCoorMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group ParallelIOMgr: IrrGroup{
ParallelIOMgr(void);
void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
void recvMolInfo(MolInfoMsg* impl_msg);
void bcastMolInfo(MolInfoMsg* impl_msg);
void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
void ackAtomsToHomePatchProcs(void);
void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
void recvClusterSize(ClusterSizeMsg* impl_msg);
void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
void receivePositions(CollectVectorVarMsg* impl_msg);
void receiveVelocities(CollectVectorVarMsg* impl_msg);
void receiveForces(CollectVectorVarMsg* impl_msg);
void disposePositions(int seq, double prevT);
void disposeVelocities(int seq, double prevT);
void disposeForces(int seq, double prevT);
void wrapCoor(int seq, const Lattice &lat);
void recvClusterCoor(ClusterCoorMsg* impl_msg);
void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
};
 */
 class ParallelIOMgr;
 class CkIndex_ParallelIOMgr;
 class CProxy_ParallelIOMgr;
 class CProxyElement_ParallelIOMgr;
 class CProxySection_ParallelIOMgr;
/* --------------- index object ------------------ */
class CkIndex_ParallelIOMgr:public CProxyElement_IrrGroup{
  public:
    typedef ParallelIOMgr local_t;
    typedef CkIndex_ParallelIOMgr index_t;
    typedef CProxy_ParallelIOMgr proxy_t;
    typedef CProxyElement_ParallelIOMgr element_t;
    typedef CProxySection_ParallelIOMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ParallelIOMgr(void);
 */
    static int __idx_ParallelIOMgr_void;
    static int ckNew(void) { return __idx_ParallelIOMgr_void; }
    static void _call_ParallelIOMgr_void(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
    static int __idx_recvAtomsMGrp_MoveInputAtomsMsg;
    static int recvAtomsMGrp(MoveInputAtomsMsg* impl_msg) { return __idx_recvAtomsMGrp_MoveInputAtomsMsg; }
    static void _call_recvAtomsMGrp_MoveInputAtomsMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
    static int __idx_recvMolInfo_MolInfoMsg;
    static int recvMolInfo(MolInfoMsg* impl_msg) { return __idx_recvMolInfo_MolInfoMsg; }
    static void _call_recvMolInfo_MolInfoMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
    static int __idx_bcastMolInfo_MolInfoMsg;
    static int bcastMolInfo(MolInfoMsg* impl_msg) { return __idx_bcastMolInfo_MolInfoMsg; }
    static void _call_bcastMolInfo_MolInfoMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    static int __idx_recvHydroBasedCounter_HydroBasedMsg;
    static int recvHydroBasedCounter(HydroBasedMsg* impl_msg) { return __idx_recvHydroBasedCounter_HydroBasedMsg; }
    static void _call_recvHydroBasedCounter_HydroBasedMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    static int __idx_bcastHydroBasedCounter_HydroBasedMsg;
    static int bcastHydroBasedCounter(HydroBasedMsg* impl_msg) { return __idx_bcastHydroBasedCounter_HydroBasedMsg; }
    static void _call_bcastHydroBasedCounter_HydroBasedMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
    static int __idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg;
    static int recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg) { return __idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg; }
    static void _call_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void ackAtomsToHomePatchProcs(void);
 */
    static int __idx_ackAtomsToHomePatchProcs_void;
    static int ackAtomsToHomePatchProcs(void) { return __idx_ackAtomsToHomePatchProcs_void; }
    static void _call_ackAtomsToHomePatchProcs_void(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
    static int __idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg;
    static int recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg) { return __idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg; }
    static void _call_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
    static int __idx_recvClusterSize_ClusterSizeMsg;
    static int recvClusterSize(ClusterSizeMsg* impl_msg) { return __idx_recvClusterSize_ClusterSizeMsg; }
    static void _call_recvClusterSize_ClusterSizeMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
    static int __idx_recvFinalClusterSize_ClusterSizeMsg;
    static int recvFinalClusterSize(ClusterSizeMsg* impl_msg) { return __idx_recvFinalClusterSize_ClusterSizeMsg; }
    static void _call_recvFinalClusterSize_ClusterSizeMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
    static int __idx_receivePositions_CollectVectorVarMsg;
    static int receivePositions(CollectVectorVarMsg* impl_msg) { return __idx_receivePositions_CollectVectorVarMsg; }
    static void _call_receivePositions_CollectVectorVarMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
    static int __idx_receiveVelocities_CollectVectorVarMsg;
    static int receiveVelocities(CollectVectorVarMsg* impl_msg) { return __idx_receiveVelocities_CollectVectorVarMsg; }
    static void _call_receiveVelocities_CollectVectorVarMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
    static int __idx_receiveForces_CollectVectorVarMsg;
    static int receiveForces(CollectVectorVarMsg* impl_msg) { return __idx_receiveForces_CollectVectorVarMsg; }
    static void _call_receiveForces_CollectVectorVarMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void disposePositions(int seq, double prevT);
 */
    static int __idx_disposePositions_marshall15;
    static int disposePositions(int seq, double prevT) { return __idx_disposePositions_marshall15; }
    static void _call_disposePositions_marshall15(void* impl_msg,ParallelIOMgr* impl_obj);
    static int _callmarshall_disposePositions_marshall15(char* impl_buf,ParallelIOMgr* impl_obj);
    static void _marshallmessagepup_disposePositions_marshall15(PUP::er &p,void *msg);

/* DECLS: void disposeVelocities(int seq, double prevT);
 */
    static int __idx_disposeVelocities_marshall16;
    static int disposeVelocities(int seq, double prevT) { return __idx_disposeVelocities_marshall16; }
    static void _call_disposeVelocities_marshall16(void* impl_msg,ParallelIOMgr* impl_obj);
    static int _callmarshall_disposeVelocities_marshall16(char* impl_buf,ParallelIOMgr* impl_obj);
    static void _marshallmessagepup_disposeVelocities_marshall16(PUP::er &p,void *msg);

/* DECLS: void disposeForces(int seq, double prevT);
 */
    static int __idx_disposeForces_marshall17;
    static int disposeForces(int seq, double prevT) { return __idx_disposeForces_marshall17; }
    static void _call_disposeForces_marshall17(void* impl_msg,ParallelIOMgr* impl_obj);
    static int _callmarshall_disposeForces_marshall17(char* impl_buf,ParallelIOMgr* impl_obj);
    static void _marshallmessagepup_disposeForces_marshall17(PUP::er &p,void *msg);

/* DECLS: void wrapCoor(int seq, const Lattice &lat);
 */
    static int __idx_wrapCoor_marshall18;
    static int wrapCoor(int seq, const Lattice &lat) { return __idx_wrapCoor_marshall18; }
    static void _call_wrapCoor_marshall18(void* impl_msg,ParallelIOMgr* impl_obj);
    static int _callmarshall_wrapCoor_marshall18(char* impl_buf,ParallelIOMgr* impl_obj);
    static void _marshallmessagepup_wrapCoor_marshall18(PUP::er &p,void *msg);

/* DECLS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
    static int __idx_recvClusterCoor_ClusterCoorMsg;
    static int recvClusterCoor(ClusterCoorMsg* impl_msg) { return __idx_recvClusterCoor_ClusterCoorMsg; }
    static void _call_recvClusterCoor_ClusterCoorMsg(void* impl_msg,ParallelIOMgr* impl_obj);

/* DECLS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
    static int __idx_recvFinalClusterCoor_ClusterCoorMsg;
    static int recvFinalClusterCoor(ClusterCoorMsg* impl_msg) { return __idx_recvFinalClusterCoor_ClusterCoorMsg; }
    static void _call_recvFinalClusterCoor_ClusterCoorMsg(void* impl_msg,ParallelIOMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ParallelIOMgr: public CProxyElement_IrrGroup{
  public:
    typedef ParallelIOMgr local_t;
    typedef CkIndex_ParallelIOMgr index_t;
    typedef CProxy_ParallelIOMgr proxy_t;
    typedef CProxyElement_ParallelIOMgr element_t;
    typedef CProxySection_ParallelIOMgr section_t;

    CProxyElement_ParallelIOMgr(void) {}
    CProxyElement_ParallelIOMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ParallelIOMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ParallelIOMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    ParallelIOMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ParallelIOMgr* ckLocalBranch(CkGroupID gID) {
      return (ParallelIOMgr*)CkLocalBranch(gID);
    }
/* DECLS: ParallelIOMgr(void);
 */

/* DECLS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
    void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);

/* DECLS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
    void recvMolInfo(MolInfoMsg* impl_msg);

/* DECLS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
    void bcastMolInfo(MolInfoMsg* impl_msg);

/* DECLS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    void recvHydroBasedCounter(HydroBasedMsg* impl_msg);

/* DECLS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);

/* DECLS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
    void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);

/* DECLS: void ackAtomsToHomePatchProcs(void);
 */
    void ackAtomsToHomePatchProcs(void);

/* DECLS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
    void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);

/* DECLS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
    void recvClusterSize(ClusterSizeMsg* impl_msg);

/* DECLS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
    void recvFinalClusterSize(ClusterSizeMsg* impl_msg);

/* DECLS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
    void receivePositions(CollectVectorVarMsg* impl_msg);

/* DECLS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
    void receiveVelocities(CollectVectorVarMsg* impl_msg);

/* DECLS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
    void receiveForces(CollectVectorVarMsg* impl_msg);

/* DECLS: void disposePositions(int seq, double prevT);
 */
    void disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void disposeVelocities(int seq, double prevT);
 */
    void disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void disposeForces(int seq, double prevT);
 */
    void disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void wrapCoor(int seq, const Lattice &lat);
 */
    void wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
    void recvClusterCoor(ClusterCoorMsg* impl_msg);

/* DECLS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
    void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);

};
PUPmarshall(CProxyElement_ParallelIOMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ParallelIOMgr: public CProxy_IrrGroup{
  public:
    typedef ParallelIOMgr local_t;
    typedef CkIndex_ParallelIOMgr index_t;
    typedef CProxy_ParallelIOMgr proxy_t;
    typedef CProxyElement_ParallelIOMgr element_t;
    typedef CProxySection_ParallelIOMgr section_t;

    CProxy_ParallelIOMgr(void) {}
    CProxy_ParallelIOMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ParallelIOMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ParallelIOMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ParallelIOMgr operator[](int onPE) const
      {return CProxyElement_ParallelIOMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    ParallelIOMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ParallelIOMgr* ckLocalBranch(CkGroupID gID) {
      return (ParallelIOMgr*)CkLocalBranch(gID);
    }
/* DECLS: ParallelIOMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
    void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
    void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg, int npes, int *pes);
    void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
    void recvMolInfo(MolInfoMsg* impl_msg);
    void recvMolInfo(MolInfoMsg* impl_msg, int npes, int *pes);
    void recvMolInfo(MolInfoMsg* impl_msg, CmiGroup &grp);

/* DECLS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
    void bcastMolInfo(MolInfoMsg* impl_msg);
    void bcastMolInfo(MolInfoMsg* impl_msg, int npes, int *pes);
    void bcastMolInfo(MolInfoMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
    void recvHydroBasedCounter(HydroBasedMsg* impl_msg, int npes, int *pes);
    void recvHydroBasedCounter(HydroBasedMsg* impl_msg, CmiGroup &grp);

/* DECLS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
    void bcastHydroBasedCounter(HydroBasedMsg* impl_msg, int npes, int *pes);
    void bcastHydroBasedCounter(HydroBasedMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
    void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
    void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg, int npes, int *pes);
    void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ackAtomsToHomePatchProcs(void);
 */
    void ackAtomsToHomePatchProcs(void);
    void ackAtomsToHomePatchProcs(int npes, int *pes);
    void ackAtomsToHomePatchProcs(CmiGroup &grp);

/* DECLS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
    void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
    void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg, int npes, int *pes);
    void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
    void recvClusterSize(ClusterSizeMsg* impl_msg);
    void recvClusterSize(ClusterSizeMsg* impl_msg, int npes, int *pes);
    void recvClusterSize(ClusterSizeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
    void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
    void recvFinalClusterSize(ClusterSizeMsg* impl_msg, int npes, int *pes);
    void recvFinalClusterSize(ClusterSizeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
    void receivePositions(CollectVectorVarMsg* impl_msg);
    void receivePositions(CollectVectorVarMsg* impl_msg, int npes, int *pes);
    void receivePositions(CollectVectorVarMsg* impl_msg, CmiGroup &grp);

/* DECLS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
    void receiveVelocities(CollectVectorVarMsg* impl_msg);
    void receiveVelocities(CollectVectorVarMsg* impl_msg, int npes, int *pes);
    void receiveVelocities(CollectVectorVarMsg* impl_msg, CmiGroup &grp);

/* DECLS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
    void receiveForces(CollectVectorVarMsg* impl_msg);
    void receiveForces(CollectVectorVarMsg* impl_msg, int npes, int *pes);
    void receiveForces(CollectVectorVarMsg* impl_msg, CmiGroup &grp);

/* DECLS: void disposePositions(int seq, double prevT);
 */
    void disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);
    void disposePositions(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void disposePositions(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void disposeVelocities(int seq, double prevT);
 */
    void disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);
    void disposeVelocities(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void disposeVelocities(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void disposeForces(int seq, double prevT);
 */
    void disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);
    void disposeForces(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void disposeForces(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void wrapCoor(int seq, const Lattice &lat);
 */
    void wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts=NULL);
    void wrapCoor(int seq, const Lattice &lat, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void wrapCoor(int seq, const Lattice &lat, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
    void recvClusterCoor(ClusterCoorMsg* impl_msg);
    void recvClusterCoor(ClusterCoorMsg* impl_msg, int npes, int *pes);
    void recvClusterCoor(ClusterCoorMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
    void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
    void recvFinalClusterCoor(ClusterCoorMsg* impl_msg, int npes, int *pes);
    void recvFinalClusterCoor(ClusterCoorMsg* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_ParallelIOMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ParallelIOMgr: public CProxySection_IrrGroup{
  public:
    typedef ParallelIOMgr local_t;
    typedef CkIndex_ParallelIOMgr index_t;
    typedef CProxy_ParallelIOMgr proxy_t;
    typedef CProxyElement_ParallelIOMgr element_t;
    typedef CProxySection_ParallelIOMgr section_t;

    CProxySection_ParallelIOMgr(void) {}
    CProxySection_ParallelIOMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ParallelIOMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ParallelIOMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ParallelIOMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ParallelIOMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    ParallelIOMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ParallelIOMgr* ckLocalBranch(CkGroupID gID) {
      return (ParallelIOMgr*)CkLocalBranch(gID);
    }
/* DECLS: ParallelIOMgr(void);
 */

/* DECLS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
    void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);

/* DECLS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
    void recvMolInfo(MolInfoMsg* impl_msg);

/* DECLS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
    void bcastMolInfo(MolInfoMsg* impl_msg);

/* DECLS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    void recvHydroBasedCounter(HydroBasedMsg* impl_msg);

/* DECLS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
    void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);

/* DECLS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
    void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);

/* DECLS: void ackAtomsToHomePatchProcs(void);
 */
    void ackAtomsToHomePatchProcs(void);

/* DECLS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
    void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);

/* DECLS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
    void recvClusterSize(ClusterSizeMsg* impl_msg);

/* DECLS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
    void recvFinalClusterSize(ClusterSizeMsg* impl_msg);

/* DECLS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
    void receivePositions(CollectVectorVarMsg* impl_msg);

/* DECLS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
    void receiveVelocities(CollectVectorVarMsg* impl_msg);

/* DECLS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
    void receiveForces(CollectVectorVarMsg* impl_msg);

/* DECLS: void disposePositions(int seq, double prevT);
 */
    void disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void disposeVelocities(int seq, double prevT);
 */
    void disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void disposeForces(int seq, double prevT);
 */
    void disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void wrapCoor(int seq, const Lattice &lat);
 */
    void wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
    void recvClusterCoor(ClusterCoorMsg* impl_msg);

/* DECLS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
    void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);

};
PUPmarshall(CProxySection_ParallelIOMgr)
typedef CBaseT1<Group, CProxy_ParallelIOMgr> CBase_ParallelIOMgr;

extern void _registerParallelIOMgr(void);
#endif
