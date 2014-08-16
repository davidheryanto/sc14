#ifndef _DECL_CollectionMaster_H_
#define _DECL_CollectionMaster_H_
#include "charm++.h"
/* DECLS: message CollectVectorMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
class CollectVectorMsg;
class CMessage_CollectVectorMsg:public CkMessage{
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
    CMessage_CollectVectorMsg();
    static void *pack(CollectVectorMsg *p);
    static CollectVectorMsg* unpack(void* p);
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

/* DECLS: message DataStreamMsg;
 */
class DataStreamMsg;
class CMessage_DataStreamMsg:public CkMessage{
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
    CMessage_DataStreamMsg();
    static void *pack(DataStreamMsg *p);
    static DataStreamMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message CollectVectorVarMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
class CollectVectorVarMsg;
class CMessage_CollectVectorVarMsg:public CkMessage{
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
    CMessage_CollectVectorVarMsg();
    static void *pack(CollectVectorVarMsg *p);
    static CollectVectorVarMsg* unpack(void* p);
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

/* DECLS: chare CollectionMaster: Chare{
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
 class CollectionMaster;
 class CkIndex_CollectionMaster;
 class CProxy_CollectionMaster;
/* --------------- index object ------------------ */
class CkIndex_CollectionMaster:public CProxy_Chare{
  public:
    typedef CollectionMaster local_t;
    typedef CkIndex_CollectionMaster index_t;
    typedef CProxy_CollectionMaster proxy_t;
    typedef CProxy_CollectionMaster element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: CollectionMaster(void);
 */
    static int __idx_CollectionMaster_void;
    static int ckNew(void) { return __idx_CollectionMaster_void; }
    static void _call_CollectionMaster_void(void* impl_msg,CollectionMaster* impl_obj);

/* DECLS: void receivePositions(CollectVectorMsg* impl_msg);
 */
    static int __idx_receivePositions_CollectVectorMsg;
    static int receivePositions(CollectVectorMsg* impl_msg) { return __idx_receivePositions_CollectVectorMsg; }
    static void _call_receivePositions_CollectVectorMsg(void* impl_msg,CollectionMaster* impl_obj);

/* DECLS: void receiveVelocities(CollectVectorMsg* impl_msg);
 */
    static int __idx_receiveVelocities_CollectVectorMsg;
    static int receiveVelocities(CollectVectorMsg* impl_msg) { return __idx_receiveVelocities_CollectVectorMsg; }
    static void _call_receiveVelocities_CollectVectorMsg(void* impl_msg,CollectionMaster* impl_obj);

/* DECLS: void receiveForces(CollectVectorMsg* impl_msg);
 */
    static int __idx_receiveForces_CollectVectorMsg;
    static int receiveForces(CollectVectorMsg* impl_msg) { return __idx_receiveForces_CollectVectorMsg; }
    static void _call_receiveForces_CollectVectorMsg(void* impl_msg,CollectionMaster* impl_obj);

/* DECLS: void receiveDataStream(DataStreamMsg* impl_msg);
 */
    static int __idx_receiveDataStream_DataStreamMsg;
    static int receiveDataStream(DataStreamMsg* impl_msg) { return __idx_receiveDataStream_DataStreamMsg; }
    static void _call_receiveDataStream_DataStreamMsg(void* impl_msg,CollectionMaster* impl_obj);

/* DECLS: void receiveOutputPosReady(int seq);
 */
    static int __idx_receiveOutputPosReady_marshall6;
    static int receiveOutputPosReady(int seq) { return __idx_receiveOutputPosReady_marshall6; }
    static void _call_receiveOutputPosReady_marshall6(void* impl_msg,CollectionMaster* impl_obj);
    static int _callmarshall_receiveOutputPosReady_marshall6(char* impl_buf,CollectionMaster* impl_obj);
    static void _marshallmessagepup_receiveOutputPosReady_marshall6(PUP::er &p,void *msg);

/* DECLS: void receiveOutputVelReady(int seq);
 */
    static int __idx_receiveOutputVelReady_marshall7;
    static int receiveOutputVelReady(int seq) { return __idx_receiveOutputVelReady_marshall7; }
    static void _call_receiveOutputVelReady_marshall7(void* impl_msg,CollectionMaster* impl_obj);
    static int _callmarshall_receiveOutputVelReady_marshall7(char* impl_buf,CollectionMaster* impl_obj);
    static void _marshallmessagepup_receiveOutputVelReady_marshall7(PUP::er &p,void *msg);

/* DECLS: void receiveOutputForceReady(int seq);
 */
    static int __idx_receiveOutputForceReady_marshall8;
    static int receiveOutputForceReady(int seq) { return __idx_receiveOutputForceReady_marshall8; }
    static void _call_receiveOutputForceReady_marshall8(void* impl_msg,CollectionMaster* impl_obj);
    static int _callmarshall_receiveOutputForceReady_marshall8(char* impl_buf,CollectionMaster* impl_obj);
    static void _marshallmessagepup_receiveOutputForceReady_marshall8(PUP::er &p,void *msg);

/* DECLS: void startNextRoundOutputPos(double totalT);
 */
    static int __idx_startNextRoundOutputPos_marshall9;
    static int startNextRoundOutputPos(double totalT) { return __idx_startNextRoundOutputPos_marshall9; }
    static void _call_startNextRoundOutputPos_marshall9(void* impl_msg,CollectionMaster* impl_obj);
    static int _callmarshall_startNextRoundOutputPos_marshall9(char* impl_buf,CollectionMaster* impl_obj);
    static void _marshallmessagepup_startNextRoundOutputPos_marshall9(PUP::er &p,void *msg);

/* DECLS: void startNextRoundOutputVel(double totalT);
 */
    static int __idx_startNextRoundOutputVel_marshall10;
    static int startNextRoundOutputVel(double totalT) { return __idx_startNextRoundOutputVel_marshall10; }
    static void _call_startNextRoundOutputVel_marshall10(void* impl_msg,CollectionMaster* impl_obj);
    static int _callmarshall_startNextRoundOutputVel_marshall10(char* impl_buf,CollectionMaster* impl_obj);
    static void _marshallmessagepup_startNextRoundOutputVel_marshall10(PUP::er &p,void *msg);

/* DECLS: void startNextRoundOutputForce(double totalT);
 */
    static int __idx_startNextRoundOutputForce_marshall11;
    static int startNextRoundOutputForce(double totalT) { return __idx_startNextRoundOutputForce_marshall11; }
    static void _call_startNextRoundOutputForce_marshall11(void* impl_msg,CollectionMaster* impl_obj);
    static int _callmarshall_startNextRoundOutputForce_marshall11(char* impl_buf,CollectionMaster* impl_obj);
    static void _marshallmessagepup_startNextRoundOutputForce_marshall11(PUP::er &p,void *msg);

/* DECLS: void wrapCoorFinished(void);
 */
    static int __idx_wrapCoorFinished_void;
    static int wrapCoorFinished(void) { return __idx_wrapCoorFinished_void; }
    static void _call_wrapCoorFinished_void(void* impl_msg,CollectionMaster* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxy_CollectionMaster:public CProxy_Chare{
  public:
    typedef CollectionMaster local_t;
    typedef CkIndex_CollectionMaster index_t;
    typedef CProxy_CollectionMaster proxy_t;
    typedef CProxy_CollectionMaster element_t;

    CProxy_CollectionMaster(void) {};
    CProxy_CollectionMaster(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CollectionMaster(const Chare *c) : CProxy_Chare(c){  }
int ckIsDelegated(void) const {return CProxy_Chare::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_Chare::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_Chare::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_Chare::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_Chare::ckCheck();}
const CkChareID &ckGetChareID(void) const
{ return CProxy_Chare::ckGetChareID(); }
operator const CkChareID &(void) const {return ckGetChareID();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_Chare::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_Chare::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_Chare::pup(p);
    }
    void ckSetChareID(const CkChareID &c) {
      CProxy_Chare::ckSetChareID(c);
    }
    CollectionMaster *ckLocal(void) const
     { return (CollectionMaster *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CollectionMaster(void);
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void receivePositions(CollectVectorMsg* impl_msg);
 */
    void receivePositions(CollectVectorMsg* impl_msg);

/* DECLS: void receiveVelocities(CollectVectorMsg* impl_msg);
 */
    void receiveVelocities(CollectVectorMsg* impl_msg);

/* DECLS: void receiveForces(CollectVectorMsg* impl_msg);
 */
    void receiveForces(CollectVectorMsg* impl_msg);

/* DECLS: void receiveDataStream(DataStreamMsg* impl_msg);
 */
    void receiveDataStream(DataStreamMsg* impl_msg);

/* DECLS: void receiveOutputPosReady(int seq);
 */
    void receiveOutputPosReady(int seq, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveOutputVelReady(int seq);
 */
    void receiveOutputVelReady(int seq, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveOutputForceReady(int seq);
 */
    void receiveOutputForceReady(int seq, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startNextRoundOutputPos(double totalT);
 */
    void startNextRoundOutputPos(double totalT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startNextRoundOutputVel(double totalT);
 */
    void startNextRoundOutputVel(double totalT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startNextRoundOutputForce(double totalT);
 */
    void startNextRoundOutputForce(double totalT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void wrapCoorFinished(void);
 */
    void wrapCoorFinished(void);

};
PUPmarshall(CProxy_CollectionMaster)
typedef CBaseT1<Chare, CProxy_CollectionMaster> CBase_CollectionMaster;

extern void _registerCollectionMaster(void);
#endif
