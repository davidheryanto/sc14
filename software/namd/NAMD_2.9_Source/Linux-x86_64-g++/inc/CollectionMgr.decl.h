#ifndef _DECL_CollectionMgr_H_
#define _DECL_CollectionMgr_H_
#include "charm++.h"
/* DECLS: message SlaveInitMsg;
 */
class SlaveInitMsg;
class CMessage_SlaveInitMsg:public CkMessage{
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
    CMessage_SlaveInitMsg();
    static void *pack(SlaveInitMsg *p);
    static SlaveInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group CollectionMgr: IrrGroup{
CollectionMgr(SlaveInitMsg* impl_msg);
};
 */
 class CollectionMgr;
 class CkIndex_CollectionMgr;
 class CProxy_CollectionMgr;
 class CProxyElement_CollectionMgr;
 class CProxySection_CollectionMgr;
/* --------------- index object ------------------ */
class CkIndex_CollectionMgr:public CProxyElement_IrrGroup{
  public:
    typedef CollectionMgr local_t;
    typedef CkIndex_CollectionMgr index_t;
    typedef CProxy_CollectionMgr proxy_t;
    typedef CProxyElement_CollectionMgr element_t;
    typedef CProxySection_CollectionMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: CollectionMgr(SlaveInitMsg* impl_msg);
 */
    static int __idx_CollectionMgr_SlaveInitMsg;
    static int ckNew(SlaveInitMsg* impl_msg) { return __idx_CollectionMgr_SlaveInitMsg; }
    static void _call_CollectionMgr_SlaveInitMsg(void* impl_msg,CollectionMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_CollectionMgr: public CProxyElement_IrrGroup{
  public:
    typedef CollectionMgr local_t;
    typedef CkIndex_CollectionMgr index_t;
    typedef CProxy_CollectionMgr proxy_t;
    typedef CProxyElement_CollectionMgr element_t;
    typedef CProxySection_CollectionMgr section_t;

    CProxyElement_CollectionMgr(void) {}
    CProxyElement_CollectionMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_CollectionMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_CollectionMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    CollectionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CollectionMgr* ckLocalBranch(CkGroupID gID) {
      return (CollectionMgr*)CkLocalBranch(gID);
    }
/* DECLS: CollectionMgr(SlaveInitMsg* impl_msg);
 */

};
PUPmarshall(CProxyElement_CollectionMgr)
/* ---------------- collective proxy -------------- */
class CProxy_CollectionMgr: public CProxy_IrrGroup{
  public:
    typedef CollectionMgr local_t;
    typedef CkIndex_CollectionMgr index_t;
    typedef CProxy_CollectionMgr proxy_t;
    typedef CProxyElement_CollectionMgr element_t;
    typedef CProxySection_CollectionMgr section_t;

    CProxy_CollectionMgr(void) {}
    CProxy_CollectionMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_CollectionMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CollectionMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CollectionMgr operator[](int onPE) const
      {return CProxyElement_CollectionMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    CollectionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CollectionMgr* ckLocalBranch(CkGroupID gID) {
      return (CollectionMgr*)CkLocalBranch(gID);
    }
/* DECLS: CollectionMgr(SlaveInitMsg* impl_msg);
 */
    static CkGroupID ckNew(SlaveInitMsg* impl_msg);
    CProxy_CollectionMgr(SlaveInitMsg* impl_msg);

};
PUPmarshall(CProxy_CollectionMgr)
/* ---------------- section proxy -------------- */
class CProxySection_CollectionMgr: public CProxySection_IrrGroup{
  public:
    typedef CollectionMgr local_t;
    typedef CkIndex_CollectionMgr index_t;
    typedef CProxy_CollectionMgr proxy_t;
    typedef CProxyElement_CollectionMgr element_t;
    typedef CProxySection_CollectionMgr section_t;

    CProxySection_CollectionMgr(void) {}
    CProxySection_CollectionMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_CollectionMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CollectionMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_CollectionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_CollectionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    CollectionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CollectionMgr* ckLocalBranch(CkGroupID gID) {
      return (CollectionMgr*)CkLocalBranch(gID);
    }
/* DECLS: CollectionMgr(SlaveInitMsg* impl_msg);
 */

};
PUPmarshall(CProxySection_CollectionMgr)
typedef CBaseT1<Group, CProxy_CollectionMgr> CBase_CollectionMgr;

extern void _registerCollectionMgr(void);
#endif
