#ifndef _DECL_NamdCentLB_H_
#define _DECL_NamdCentLB_H_
#include "charm++.h"
#include "CentralLB.decl.h"

/* DECLS: group NamdCentLB: CentralLB{
void NamdCentLB(void);
};
 */
 class NamdCentLB;
 class CkIndex_NamdCentLB;
 class CProxy_NamdCentLB;
 class CProxyElement_NamdCentLB;
 class CProxySection_NamdCentLB;
/* --------------- index object ------------------ */
class CkIndex_NamdCentLB:public CProxyElement_CentralLB{
  public:
    typedef NamdCentLB local_t;
    typedef CkIndex_NamdCentLB index_t;
    typedef CProxy_NamdCentLB proxy_t;
    typedef CProxyElement_NamdCentLB element_t;
    typedef CProxySection_NamdCentLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: void NamdCentLB(void);
 */
    static int __idx_NamdCentLB_void;
    static int ckNew(void) { return __idx_NamdCentLB_void; }
    static void _call_NamdCentLB_void(void* impl_msg,NamdCentLB* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_NamdCentLB: public CProxyElement_CentralLB{
  public:
    typedef NamdCentLB local_t;
    typedef CkIndex_NamdCentLB index_t;
    typedef CProxy_NamdCentLB proxy_t;
    typedef CProxyElement_NamdCentLB element_t;
    typedef CProxySection_NamdCentLB section_t;

    CProxyElement_NamdCentLB(void) {}
    CProxyElement_NamdCentLB(const IrrGroup *g) : CProxyElement_CentralLB(g){  }
    CProxyElement_NamdCentLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CentralLB(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_NamdCentLB(CkGroupID _gid,int _onPE) : CProxyElement_CentralLB(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_CentralLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_CentralLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_CentralLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_CentralLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CentralLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_CentralLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_CentralLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CentralLB::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_CentralLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_CentralLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CentralLB::ckSetGroupID(g);
    }
    NamdCentLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdCentLB* ckLocalBranch(CkGroupID gID) {
      return (NamdCentLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdCentLB(void);
 */

};
PUPmarshall(CProxyElement_NamdCentLB)
/* ---------------- collective proxy -------------- */
class CProxy_NamdCentLB: public CProxy_CentralLB{
  public:
    typedef NamdCentLB local_t;
    typedef CkIndex_NamdCentLB index_t;
    typedef CProxy_NamdCentLB proxy_t;
    typedef CProxyElement_NamdCentLB element_t;
    typedef CProxySection_NamdCentLB section_t;

    CProxy_NamdCentLB(void) {}
    CProxy_NamdCentLB(const IrrGroup *g) : CProxy_CentralLB(g){  }
    CProxy_NamdCentLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CentralLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NamdCentLB(CkGroupID _gid) : CProxy_CentralLB(_gid){  }
    CProxyElement_NamdCentLB operator[](int onPE) const
      {return CProxyElement_NamdCentLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_CentralLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_CentralLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_CentralLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_CentralLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CentralLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_CentralLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_CentralLB::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_CentralLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_CentralLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CentralLB::ckSetGroupID(g);
    }
    NamdCentLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdCentLB* ckLocalBranch(CkGroupID gID) {
      return (NamdCentLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdCentLB(void);
 */
    static CkGroupID ckNew(void);

};
PUPmarshall(CProxy_NamdCentLB)
/* ---------------- section proxy -------------- */
class CProxySection_NamdCentLB: public CProxySection_CentralLB{
  public:
    typedef NamdCentLB local_t;
    typedef CkIndex_NamdCentLB index_t;
    typedef CProxy_NamdCentLB proxy_t;
    typedef CProxyElement_NamdCentLB element_t;
    typedef CProxySection_NamdCentLB section_t;

    CProxySection_NamdCentLB(void) {}
    CProxySection_NamdCentLB(const IrrGroup *g) : CProxySection_CentralLB(g){  }
    CProxySection_NamdCentLB(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_CentralLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NamdCentLB(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_CentralLB(_gid,_pelist,_npes){  }
    CProxySection_NamdCentLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_CentralLB(n,_gid,_pelist,_npes){  }
    CProxySection_NamdCentLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_CentralLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_CentralLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_CentralLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_CentralLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_CentralLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CentralLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_CentralLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_CentralLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CentralLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CentralLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CentralLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CentralLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CentralLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CentralLB::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_CentralLB::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_CentralLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CentralLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CentralLB::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_CentralLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_CentralLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CentralLB::ckSetGroupID(g);
    }
    NamdCentLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdCentLB* ckLocalBranch(CkGroupID gID) {
      return (NamdCentLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdCentLB(void);
 */

};
PUPmarshall(CProxySection_NamdCentLB)
typedef CBaseT1<CentralLB, CProxy_NamdCentLB> CBase_NamdCentLB;

extern void _registerNamdCentLB(void);
#endif
