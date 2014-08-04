#ifndef _DECL_OptPmeMgr_H_
#define _DECL_OptPmeMgr_H_
#include "charm++.h"
#include "PmeFFTLib.decl.h"

/* DECLS: group OptPmeMgr: IrrGroup{
OptPmeMgr(void);
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void recvUngrid(OptPmeGridMsg* impl_msg);
void ungridCalc(OptPmeDummyMsg* impl_msg);
void recvEvir(CkReductionMsg* impl_msg);
void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
};
 */
 class OptPmeMgr;
 class CkIndex_OptPmeMgr;
 class CProxy_OptPmeMgr;
 class CProxyElement_OptPmeMgr;
 class CProxySection_OptPmeMgr;
/* --------------- index object ------------------ */
class CkIndex_OptPmeMgr:public CProxyElement_IrrGroup{
  public:
    typedef OptPmeMgr local_t;
    typedef CkIndex_OptPmeMgr index_t;
    typedef CProxy_OptPmeMgr proxy_t;
    typedef CProxyElement_OptPmeMgr element_t;
    typedef CProxySection_OptPmeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: OptPmeMgr(void);
 */
    static int __idx_OptPmeMgr_void;
    static int ckNew(void) { return __idx_OptPmeMgr_void; }
    static void _call_OptPmeMgr_void(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    static int __idx_initialize_CkQdMsg;
    static int initialize(CkQdMsg* impl_msg) { return __idx_initialize_CkQdMsg; }
    static void _call_initialize_CkQdMsg(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    static int __idx_initialize_pencils_CkQdMsg;
    static int initialize_pencils(CkQdMsg* impl_msg) { return __idx_initialize_pencils_CkQdMsg; }
    static void _call_initialize_pencils_CkQdMsg(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    static int __idx_activate_pencils_CkQdMsg;
    static int activate_pencils(CkQdMsg* impl_msg) { return __idx_activate_pencils_CkQdMsg; }
    static void _call_activate_pencils_CkQdMsg(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
    static int __idx_recvUngrid_OptPmeGridMsg;
    static int recvUngrid(OptPmeGridMsg* impl_msg) { return __idx_recvUngrid_OptPmeGridMsg; }
    static void _call_recvUngrid_OptPmeGridMsg(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
    static int __idx_ungridCalc_OptPmeDummyMsg;
    static int ungridCalc(OptPmeDummyMsg* impl_msg) { return __idx_ungridCalc_OptPmeDummyMsg; }
    static void _call_ungridCalc_OptPmeDummyMsg(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void recvEvir(CkReductionMsg* impl_msg);
 */
    static int __idx_recvEvir_CkReductionMsg;
    static int recvEvir(CkReductionMsg* impl_msg) { return __idx_recvEvir_CkReductionMsg; }
    static void _call_recvEvir_CkReductionMsg(void* impl_msg,OptPmeMgr* impl_obj);

/* DECLS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
    static int __idx_recvArrays_marshall8;
    static int recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2) { return __idx_recvArrays_marshall8; }
    static void _call_recvArrays_marshall8(void* impl_msg,OptPmeMgr* impl_obj);
    static int _callmarshall_recvArrays_marshall8(char* impl_buf,OptPmeMgr* impl_obj);
    static void _marshallmessagepup_recvArrays_marshall8(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_OptPmeMgr: public CProxyElement_IrrGroup{
  public:
    typedef OptPmeMgr local_t;
    typedef CkIndex_OptPmeMgr index_t;
    typedef CProxy_OptPmeMgr proxy_t;
    typedef CProxyElement_OptPmeMgr element_t;
    typedef CProxySection_OptPmeMgr section_t;

    CProxyElement_OptPmeMgr(void) {}
    CProxyElement_OptPmeMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_OptPmeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_OptPmeMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    OptPmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmeMgr* ckLocalBranch(CkGroupID gID) {
      return (OptPmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: OptPmeMgr(void);
 */

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    void initialize_pencils(CkQdMsg* impl_msg);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    void activate_pencils(CkQdMsg* impl_msg);

/* DECLS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
    void recvUngrid(OptPmeGridMsg* impl_msg);

/* DECLS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
    void ungridCalc(OptPmeDummyMsg* impl_msg);

/* DECLS: void recvEvir(CkReductionMsg* impl_msg);
 */
    void recvEvir(CkReductionMsg* impl_msg);

/* DECLS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
    void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxyElement_OptPmeMgr)
/* ---------------- collective proxy -------------- */
class CProxy_OptPmeMgr: public CProxy_IrrGroup{
  public:
    typedef OptPmeMgr local_t;
    typedef CkIndex_OptPmeMgr index_t;
    typedef CProxy_OptPmeMgr proxy_t;
    typedef CProxyElement_OptPmeMgr element_t;
    typedef CProxySection_OptPmeMgr section_t;

    CProxy_OptPmeMgr(void) {}
    CProxy_OptPmeMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_OptPmeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_OptPmeMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_OptPmeMgr operator[](int onPE) const
      {return CProxyElement_OptPmeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    OptPmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmeMgr* ckLocalBranch(CkGroupID gID) {
      return (OptPmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: OptPmeMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);
    void initialize(CkQdMsg* impl_msg, int npes, int *pes);
    void initialize(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    void initialize_pencils(CkQdMsg* impl_msg);
    void initialize_pencils(CkQdMsg* impl_msg, int npes, int *pes);
    void initialize_pencils(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    void activate_pencils(CkQdMsg* impl_msg);
    void activate_pencils(CkQdMsg* impl_msg, int npes, int *pes);
    void activate_pencils(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
    void recvUngrid(OptPmeGridMsg* impl_msg);
    void recvUngrid(OptPmeGridMsg* impl_msg, int npes, int *pes);
    void recvUngrid(OptPmeGridMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
    void ungridCalc(OptPmeDummyMsg* impl_msg);
    void ungridCalc(OptPmeDummyMsg* impl_msg, int npes, int *pes);
    void ungridCalc(OptPmeDummyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvEvir(CkReductionMsg* impl_msg);
 */
    void recvEvir(CkReductionMsg* impl_msg);
    void recvEvir(CkReductionMsg* impl_msg, int npes, int *pes);
    void recvEvir(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
    void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_OptPmeMgr)
/* ---------------- section proxy -------------- */
class CProxySection_OptPmeMgr: public CProxySection_IrrGroup{
  public:
    typedef OptPmeMgr local_t;
    typedef CkIndex_OptPmeMgr index_t;
    typedef CProxy_OptPmeMgr proxy_t;
    typedef CProxyElement_OptPmeMgr element_t;
    typedef CProxySection_OptPmeMgr section_t;

    CProxySection_OptPmeMgr(void) {}
    CProxySection_OptPmeMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_OptPmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_OptPmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_OptPmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_OptPmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    OptPmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static OptPmeMgr* ckLocalBranch(CkGroupID gID) {
      return (OptPmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: OptPmeMgr(void);
 */

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    void initialize_pencils(CkQdMsg* impl_msg);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    void activate_pencils(CkQdMsg* impl_msg);

/* DECLS: void recvUngrid(OptPmeGridMsg* impl_msg);
 */
    void recvUngrid(OptPmeGridMsg* impl_msg);

/* DECLS: void ungridCalc(OptPmeDummyMsg* impl_msg);
 */
    void ungridCalc(OptPmeDummyMsg* impl_msg);

/* DECLS: void recvEvir(CkReductionMsg* impl_msg);
 */
    void recvEvir(CkReductionMsg* impl_msg);

/* DECLS: void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2);
 */
    void recvArrays(const CProxy_OptPmeXPencil &impl_noname_0, const CProxy_OptPmeYPencil &impl_noname_1, const CProxy_OptPmeZPencil &impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxySection_OptPmeMgr)
typedef CBaseT1<Group, CProxy_OptPmeMgr> CBase_OptPmeMgr;

extern void _registerOptPmeMgr(void);
#endif
