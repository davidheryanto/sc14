#ifndef _DECL_ReductionMgr_H_
#define _DECL_ReductionMgr_H_
#include "charm++.h"
/* DECLS: message ReductionRegisterMsg;
 */
class ReductionRegisterMsg;
class CMessage_ReductionRegisterMsg:public CkMessage{
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
    CMessage_ReductionRegisterMsg();
    static void *pack(ReductionRegisterMsg *p);
    static ReductionRegisterMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message ReductionSubmitMsg;
 */
class ReductionSubmitMsg;
class CMessage_ReductionSubmitMsg:public CkMessage{
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
    CMessage_ReductionSubmitMsg();
    static void *pack(ReductionSubmitMsg *p);
    static ReductionSubmitMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group ReductionMgr: IrrGroup{
ReductionMgr(void);
void remoteRegister(ReductionRegisterMsg* impl_msg);
void remoteUnregister(ReductionRegisterMsg* impl_msg);
void remoteSubmit(ReductionSubmitMsg* impl_msg);
};
 */
 class ReductionMgr;
 class CkIndex_ReductionMgr;
 class CProxy_ReductionMgr;
 class CProxyElement_ReductionMgr;
 class CProxySection_ReductionMgr;
/* --------------- index object ------------------ */
class CkIndex_ReductionMgr:public CProxyElement_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ReductionMgr(void);
 */
    static int __idx_ReductionMgr_void;
    static int ckNew(void) { return __idx_ReductionMgr_void; }
    static void _call_ReductionMgr_void(void* impl_msg,ReductionMgr* impl_obj);

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    static int __idx_remoteRegister_ReductionRegisterMsg;
    static int remoteRegister(ReductionRegisterMsg* impl_msg) { return __idx_remoteRegister_ReductionRegisterMsg; }
    static void _call_remoteRegister_ReductionRegisterMsg(void* impl_msg,ReductionMgr* impl_obj);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    static int __idx_remoteUnregister_ReductionRegisterMsg;
    static int remoteUnregister(ReductionRegisterMsg* impl_msg) { return __idx_remoteUnregister_ReductionRegisterMsg; }
    static void _call_remoteUnregister_ReductionRegisterMsg(void* impl_msg,ReductionMgr* impl_obj);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    static int __idx_remoteSubmit_ReductionSubmitMsg;
    static int remoteSubmit(ReductionSubmitMsg* impl_msg) { return __idx_remoteSubmit_ReductionSubmitMsg; }
    static void _call_remoteSubmit_ReductionSubmitMsg(void* impl_msg,ReductionMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ReductionMgr: public CProxyElement_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    CProxyElement_ReductionMgr(void) {}
    CProxyElement_ReductionMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ReductionMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ReductionMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    ReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (ReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: ReductionMgr(void);
 */

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    void remoteRegister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    void remoteUnregister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    void remoteSubmit(ReductionSubmitMsg* impl_msg);

};
PUPmarshall(CProxyElement_ReductionMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ReductionMgr: public CProxy_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    CProxy_ReductionMgr(void) {}
    CProxy_ReductionMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ReductionMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ReductionMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ReductionMgr operator[](int onPE) const
      {return CProxyElement_ReductionMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    ReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (ReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: ReductionMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    void remoteRegister(ReductionRegisterMsg* impl_msg);
    void remoteRegister(ReductionRegisterMsg* impl_msg, int npes, int *pes);
    void remoteRegister(ReductionRegisterMsg* impl_msg, CmiGroup &grp);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    void remoteUnregister(ReductionRegisterMsg* impl_msg);
    void remoteUnregister(ReductionRegisterMsg* impl_msg, int npes, int *pes);
    void remoteUnregister(ReductionRegisterMsg* impl_msg, CmiGroup &grp);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    void remoteSubmit(ReductionSubmitMsg* impl_msg);
    void remoteSubmit(ReductionSubmitMsg* impl_msg, int npes, int *pes);
    void remoteSubmit(ReductionSubmitMsg* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_ReductionMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ReductionMgr: public CProxySection_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    CProxySection_ReductionMgr(void) {}
    CProxySection_ReductionMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    ReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (ReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: ReductionMgr(void);
 */

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    void remoteRegister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    void remoteUnregister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    void remoteSubmit(ReductionSubmitMsg* impl_msg);

};
PUPmarshall(CProxySection_ReductionMgr)
typedef CBaseT1<Group, CProxy_ReductionMgr> CBase_ReductionMgr;

extern void _registerReductionMgr(void);
#endif
