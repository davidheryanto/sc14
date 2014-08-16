#ifndef _DECL_NamdNborLB_H_
#define _DECL_NamdNborLB_H_
#include "charm++.h"
#include "NeighborLB.decl.h"

/* DECLS: group NamdNborLB: NeighborLB{
void NamdNborLB(void);
};
 */
 class NamdNborLB;
 class CkIndex_NamdNborLB;
 class CProxy_NamdNborLB;
 class CProxyElement_NamdNborLB;
 class CProxySection_NamdNborLB;
/* --------------- index object ------------------ */
class CkIndex_NamdNborLB:public CProxyElement_NeighborLB{
  public:
    typedef NamdNborLB local_t;
    typedef CkIndex_NamdNborLB index_t;
    typedef CProxy_NamdNborLB proxy_t;
    typedef CProxyElement_NamdNborLB element_t;
    typedef CProxySection_NamdNborLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: void NamdNborLB(void);
 */
    static int __idx_NamdNborLB_void;
    static int ckNew(void) { return __idx_NamdNborLB_void; }
    static void _call_NamdNborLB_void(void* impl_msg,NamdNborLB* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_NamdNborLB: public CProxyElement_NeighborLB{
  public:
    typedef NamdNborLB local_t;
    typedef CkIndex_NamdNborLB index_t;
    typedef CProxy_NamdNborLB proxy_t;
    typedef CProxyElement_NamdNborLB element_t;
    typedef CProxySection_NamdNborLB section_t;

    CProxyElement_NamdNborLB(void) {}
    CProxyElement_NamdNborLB(const IrrGroup *g) : CProxyElement_NeighborLB(g){  }
    CProxyElement_NamdNborLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NeighborLB(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_NamdNborLB(CkGroupID _gid,int _onPE) : CProxyElement_NeighborLB(_gid,_onPE){  }
int ckIsDelegated(void) const {return CProxyElement_NeighborLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_NeighborLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_NeighborLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_NeighborLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_NeighborLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NeighborLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NeighborLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_NeighborLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_NeighborLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_NeighborLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NeighborLB::ckGetGroupPe();}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_NeighborLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_NeighborLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_NeighborLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NeighborLB::ckSetGroupID(g);
    }
    NamdNborLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdNborLB* ckLocalBranch(CkGroupID gID) {
      return (NamdNborLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdNborLB(void);
 */

};
PUPmarshall(CProxyElement_NamdNborLB)
/* ---------------- collective proxy -------------- */
class CProxy_NamdNborLB: public CProxy_NeighborLB{
  public:
    typedef NamdNborLB local_t;
    typedef CkIndex_NamdNborLB index_t;
    typedef CProxy_NamdNborLB proxy_t;
    typedef CProxyElement_NamdNborLB element_t;
    typedef CProxySection_NamdNborLB section_t;

    CProxy_NamdNborLB(void) {}
    CProxy_NamdNborLB(const IrrGroup *g) : CProxy_NeighborLB(g){  }
    CProxy_NamdNborLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NeighborLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NamdNborLB(CkGroupID _gid) : CProxy_NeighborLB(_gid){  }
    CProxyElement_NamdNborLB operator[](int onPE) const
      {return CProxyElement_NamdNborLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
int ckIsDelegated(void) const {return CProxy_NeighborLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_NeighborLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_NeighborLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_NeighborLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_NeighborLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NeighborLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NeighborLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_NeighborLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_NeighborLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_NeighborLB::ckSetReductionClient(cb); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_NeighborLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_NeighborLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_NeighborLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NeighborLB::ckSetGroupID(g);
    }
    NamdNborLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdNborLB* ckLocalBranch(CkGroupID gID) {
      return (NamdNborLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdNborLB(void);
 */
    static CkGroupID ckNew(void);

};
PUPmarshall(CProxy_NamdNborLB)
/* ---------------- section proxy -------------- */
class CProxySection_NamdNborLB: public CProxySection_NeighborLB{
  public:
    typedef NamdNborLB local_t;
    typedef CkIndex_NamdNborLB index_t;
    typedef CProxy_NamdNborLB proxy_t;
    typedef CProxyElement_NamdNborLB element_t;
    typedef CProxySection_NamdNborLB section_t;

    CProxySection_NamdNborLB(void) {}
    CProxySection_NamdNborLB(const IrrGroup *g) : CProxySection_NeighborLB(g){  }
    CProxySection_NamdNborLB(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_NeighborLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NamdNborLB(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_NeighborLB(_gid,_pelist,_npes){  }
    CProxySection_NamdNborLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_NeighborLB(n,_gid,_pelist,_npes){  }
    CProxySection_NamdNborLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_NeighborLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
int ckIsDelegated(void) const {return CProxySection_NeighborLB::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_NeighborLB::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_NeighborLB::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_NeighborLB::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_NeighborLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NeighborLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NeighborLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_NeighborLB::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_NeighborLB::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_NeighborLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NeighborLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NeighborLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NeighborLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NeighborLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NeighborLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NeighborLB::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_NeighborLB::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_NeighborLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NeighborLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NeighborLB::ckGetNumElements(i); }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_NeighborLB::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_NeighborLB::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_NeighborLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NeighborLB::ckSetGroupID(g);
    }
    NamdNborLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdNborLB* ckLocalBranch(CkGroupID gID) {
      return (NamdNborLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdNborLB(void);
 */

};
PUPmarshall(CProxySection_NamdNborLB)
typedef CBaseT1<NeighborLB, CProxy_NamdNborLB> CBase_NamdNborLB;

extern void _registerNamdNborLB(void);
#endif
