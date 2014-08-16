#ifndef _DECL_main_H_
#define _DECL_main_H_
#include "charm++.h"
/* DECLS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
};
 */
 class main;
 class CkIndex_main;
 class CProxy_main;
/* --------------- index object ------------------ */
class CkIndex_main:public CProxy_Chare{
  public:
    typedef main local_t;
    typedef CkIndex_main index_t;
    typedef CProxy_main proxy_t;
    typedef CProxy_main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: main(CkArgMsg* impl_msg);
 */
    static int __idx_main_CkArgMsg;
    static int ckNew(CkArgMsg* impl_msg) { return __idx_main_CkArgMsg; }
    static void _call_main_CkArgMsg(void* impl_msg,main* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxy_main:public CProxy_Chare{
  public:
    typedef main local_t;
    typedef CkIndex_main index_t;
    typedef CProxy_main proxy_t;
    typedef CProxy_main element_t;

    CProxy_main(void) {};
    CProxy_main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_main(const Chare *c) : CProxy_Chare(c){  }
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
    main *ckLocal(void) const
     { return (main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_main)
typedef CBaseT1<Chare, CProxy_main> CBase_main;

#include "WorkDistrib.decl.h"

#include "ReductionMgr.decl.h"

#include "PatchMgr.decl.h"

#include "ProxyMgr.decl.h"

#include "Node.decl.h"

#include "LdbCoordinator.decl.h"

#include "ComputeMgr.decl.h"

#include "ComputePmeMgr.decl.h"

#include "OptPmeMgr.decl.h"

#include "ComputeExtMgr.decl.h"

#include "ComputeGBISserMgr.decl.h"

#include "ComputeMsmSerialMgr.decl.h"

#include "CollectionMgr.decl.h"

#include "CollectionMaster.decl.h"

#include "BroadcastMgr.decl.h"

#include "Sync.decl.h"

#include "ParallelIOMgr.decl.h"

extern void _registermain(void);
extern "C" void CkRegisterMainModule(void);
#endif
