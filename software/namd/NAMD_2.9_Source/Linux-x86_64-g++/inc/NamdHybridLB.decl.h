#ifndef _DECL_NamdHybridLB_H_
#define _DECL_NamdHybridLB_H_
#include "charm++.h"
#include "HybridBaseLB.decl.h"

#include "LBDatabase.decl.h"

#include "BaseLB.decl.h"

#include "CentralLB.h"

#include "CentralLBMsg.h"

#include "HybridLBMsg.h"

/* DECLS: message LocalLBInfoMsg{
MigrateInfo moves[];
double cpuloads[];
}
;
 */
class LocalLBInfoMsg;
class CMessage_LocalLBInfoMsg:public CkMessage{
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
    CMessage_LocalLBInfoMsg();
    static void *pack(LocalLBInfoMsg *p);
    static LocalLBInfoMsg* unpack(void* p);
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

/* DECLS: group NamdHybridLB: HybridBaseLB{
NamdHybridLB(CkMigrateMessage* impl_msg);
void NamdHybridLB(void);
void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
};
 */
 class NamdHybridLB;
 class CkIndex_NamdHybridLB;
 class CProxy_NamdHybridLB;
 class CProxyElement_NamdHybridLB;
 class CProxySection_NamdHybridLB;
/* --------------- index object ------------------ */
class CkIndex_NamdHybridLB:public CProxyElement_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */
    static int __idx_NamdHybridLB_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_NamdHybridLB_CkMigrateMessage; }
    static void _call_NamdHybridLB_CkMigrateMessage(void* impl_msg,NamdHybridLB* impl_obj);

/* DECLS: void NamdHybridLB(void);
 */
    static int __idx_NamdHybridLB_void;
    static int ckNew(void) { return __idx_NamdHybridLB_void; }
    static void _call_NamdHybridLB_void(void* impl_msg,NamdHybridLB* impl_obj);

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    static int __idx_UpdateLocalLBInfo_LocalLBInfoMsg;
    static int UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg) { return __idx_UpdateLocalLBInfo_LocalLBInfoMsg; }
    static void _call_UpdateLocalLBInfo_LocalLBInfoMsg(void* impl_msg,NamdHybridLB* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_NamdHybridLB: public CProxyElement_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    CProxyElement_NamdHybridLB(void) {}
    CProxyElement_NamdHybridLB(const IrrGroup *g) : CProxyElement_HybridBaseLB(g){  }
    CProxyElement_NamdHybridLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_HybridBaseLB(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_NamdHybridLB(CkGroupID _gid,int _onPE) : CProxyElement_HybridBaseLB(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_HybridBaseLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_HybridBaseLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_HybridBaseLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_HybridBaseLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_HybridBaseLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_HybridBaseLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_HybridBaseLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_HybridBaseLB::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_HybridBaseLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_HybridBaseLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_HybridBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_HybridBaseLB::ckSetGroupID(g);
    }
    NamdHybridLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdHybridLB* ckLocalBranch(CkGroupID gID) {
      return (NamdHybridLB*)CkLocalBranch(gID);
    }
/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

/* DECLS: void NamdHybridLB(void);
 */

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);

};
PUPmarshall(CProxyElement_NamdHybridLB)
/* ---------------- collective proxy -------------- */
class CProxy_NamdHybridLB: public CProxy_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    CProxy_NamdHybridLB(void) {}
    CProxy_NamdHybridLB(const IrrGroup *g) : CProxy_HybridBaseLB(g){  }
    CProxy_NamdHybridLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_HybridBaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NamdHybridLB(CkGroupID _gid) : CProxy_HybridBaseLB(_gid){  }
    CProxyElement_NamdHybridLB operator[](int onPE) const
      {return CProxyElement_NamdHybridLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_HybridBaseLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_HybridBaseLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_HybridBaseLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_HybridBaseLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_HybridBaseLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_HybridBaseLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_HybridBaseLB::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_HybridBaseLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_HybridBaseLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_HybridBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_HybridBaseLB::ckSetGroupID(g);
    }
    NamdHybridLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdHybridLB* ckLocalBranch(CkGroupID gID) {
      return (NamdHybridLB*)CkLocalBranch(gID);
    }
/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

/* DECLS: void NamdHybridLB(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, int npes, int *pes);
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_NamdHybridLB)
/* ---------------- section proxy -------------- */
class CProxySection_NamdHybridLB: public CProxySection_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    CProxySection_NamdHybridLB(void) {}
    CProxySection_NamdHybridLB(const IrrGroup *g) : CProxySection_HybridBaseLB(g){  }
    CProxySection_NamdHybridLB(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_HybridBaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NamdHybridLB(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_HybridBaseLB(_gid,_pelist,_npes){  }
    CProxySection_NamdHybridLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_HybridBaseLB(n,_gid,_pelist,_npes){  }
    CProxySection_NamdHybridLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_HybridBaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_HybridBaseLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_HybridBaseLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_HybridBaseLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_HybridBaseLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_HybridBaseLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_HybridBaseLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_HybridBaseLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_HybridBaseLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_HybridBaseLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_HybridBaseLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_HybridBaseLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_HybridBaseLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_HybridBaseLB::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_HybridBaseLB::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_HybridBaseLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_HybridBaseLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_HybridBaseLB::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_HybridBaseLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_HybridBaseLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_HybridBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_HybridBaseLB::ckSetGroupID(g);
    }
    NamdHybridLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdHybridLB* ckLocalBranch(CkGroupID gID) {
      return (NamdHybridLB*)CkLocalBranch(gID);
    }
/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

/* DECLS: void NamdHybridLB(void);
 */

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);

};
PUPmarshall(CProxySection_NamdHybridLB)
typedef CBaseT1<HybridBaseLB, CProxy_NamdHybridLB> CBase_NamdHybridLB;

extern void _registerNamdHybridLB(void);
#endif
