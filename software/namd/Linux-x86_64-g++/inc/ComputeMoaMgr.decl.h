#ifndef _DECL_ComputeMoaMgr_H_
#define _DECL_ComputeMoaMgr_H_
#include "charm++.h"
/* DECLS: group ComputeMoaMgr: IrrGroup{
ComputeMoaMgr(void);
void initialize(CkQdMsg* impl_msg);
void initWorkers(CkQdMsg* impl_msg);
void startWorkers(CkQdMsg* impl_msg);
void recvMoaData(const MoaData &impl_noname_0);
void recvQ(int nq, const double *q);
void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
void recvSGrid(int ns, const double *sg);
};
 */
 class ComputeMoaMgr;
 class CkIndex_ComputeMoaMgr;
 class CProxy_ComputeMoaMgr;
 class CProxyElement_ComputeMoaMgr;
 class CProxySection_ComputeMoaMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeMoaMgr:public CProxyElement_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: ComputeMoaMgr(void);
 */
    static int __idx_ComputeMoaMgr_void;
    static int ckNew(void) { return __idx_ComputeMoaMgr_void; }
    static void _call_ComputeMoaMgr_void(void* impl_msg,ComputeMoaMgr* impl_obj);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    static int __idx_initialize_CkQdMsg;
    static int initialize(CkQdMsg* impl_msg) { return __idx_initialize_CkQdMsg; }
    static void _call_initialize_CkQdMsg(void* impl_msg,ComputeMoaMgr* impl_obj);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    static int __idx_initWorkers_CkQdMsg;
    static int initWorkers(CkQdMsg* impl_msg) { return __idx_initWorkers_CkQdMsg; }
    static void _call_initWorkers_CkQdMsg(void* impl_msg,ComputeMoaMgr* impl_obj);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    static int __idx_startWorkers_CkQdMsg;
    static int startWorkers(CkQdMsg* impl_msg) { return __idx_startWorkers_CkQdMsg; }
    static void _call_startWorkers_CkQdMsg(void* impl_msg,ComputeMoaMgr* impl_obj);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    static int __idx_recvMoaData_marshall5;
    static int recvMoaData(const MoaData &impl_noname_0) { return __idx_recvMoaData_marshall5; }
    static void _call_recvMoaData_marshall5(void* impl_msg,ComputeMoaMgr* impl_obj);
    static int _callmarshall_recvMoaData_marshall5(char* impl_buf,ComputeMoaMgr* impl_obj);
    static void _marshallmessagepup_recvMoaData_marshall5(PUP::er &p,void *msg);

/* DECLS: void recvQ(int nq, const double *q);
 */
    static int __idx_recvQ_marshall6;
    static int recvQ(int nq, const double *q) { return __idx_recvQ_marshall6; }
    static void _call_recvQ_marshall6(void* impl_msg,ComputeMoaMgr* impl_obj);
    static int _callmarshall_recvQ_marshall6(char* impl_buf,ComputeMoaMgr* impl_obj);
    static void _marshallmessagepup_recvQ_marshall6(PUP::er &p,void *msg);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    static int __idx_recvB_marshall7;
    static int recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order) { return __idx_recvB_marshall7; }
    static void _call_recvB_marshall7(void* impl_msg,ComputeMoaMgr* impl_obj);
    static int _callmarshall_recvB_marshall7(char* impl_buf,ComputeMoaMgr* impl_obj);
    static void _marshallmessagepup_recvB_marshall7(PUP::er &p,void *msg);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    static int __idx_recvSGrid_marshall8;
    static int recvSGrid(int ns, const double *sg) { return __idx_recvSGrid_marshall8; }
    static void _call_recvSGrid_marshall8(void* impl_msg,ComputeMoaMgr* impl_obj);
    static int _callmarshall_recvSGrid_marshall8(char* impl_buf,ComputeMoaMgr* impl_obj);
    static void _marshallmessagepup_recvSGrid_marshall8(PUP::er &p,void *msg);

};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeMoaMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    CProxyElement_ComputeMoaMgr(void) {}
    CProxyElement_ComputeMoaMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_ComputeMoaMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_ComputeMoaMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    ComputeMoaMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMoaMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMoaMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMoaMgr(void);
 */

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    void initWorkers(CkQdMsg* impl_msg);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    void startWorkers(CkQdMsg* impl_msg);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    void recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvQ(int nq, const double *q);
 */
    void recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    void recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxyElement_ComputeMoaMgr)
/* ---------------- collective proxy -------------- */
class CProxy_ComputeMoaMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    CProxy_ComputeMoaMgr(void) {}
    CProxy_ComputeMoaMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_ComputeMoaMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeMoaMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeMoaMgr operator[](int onPE) const
      {return CProxyElement_ComputeMoaMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    ComputeMoaMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMoaMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMoaMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMoaMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);
    void initialize(CkQdMsg* impl_msg, int npes, int *pes);
    void initialize(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    void initWorkers(CkQdMsg* impl_msg);
    void initWorkers(CkQdMsg* impl_msg, int npes, int *pes);
    void initWorkers(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    void startWorkers(CkQdMsg* impl_msg);
    void startWorkers(CkQdMsg* impl_msg, int npes, int *pes);
    void startWorkers(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    void recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    void recvMoaData(const MoaData &impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvMoaData(const MoaData &impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvQ(int nq, const double *q);
 */
    void recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts=NULL);
    void recvQ(int nq, const double *q, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvQ(int nq, const double *q, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts=NULL);
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    void recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts=NULL);
    void recvSGrid(int ns, const double *sg, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    void recvSGrid(int ns, const double *sg, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_ComputeMoaMgr)
/* ---------------- section proxy -------------- */
class CProxySection_ComputeMoaMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    CProxySection_ComputeMoaMgr(void) {}
    CProxySection_ComputeMoaMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_ComputeMoaMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeMoaMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_ComputeMoaMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_ComputeMoaMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    ComputeMoaMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMoaMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMoaMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMoaMgr(void);
 */

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    void initWorkers(CkQdMsg* impl_msg);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    void startWorkers(CkQdMsg* impl_msg);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    void recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvQ(int nq, const double *q);
 */
    void recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    void recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxySection_ComputeMoaMgr)
typedef CBaseT1<Group, CProxy_ComputeMoaMgr> CBase_ComputeMoaMgr;

/* DECLS: array MoaS: ArrayElement{
MoaS(CkMigrateMessage* impl_msg);
MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
threaded void compute(void);
};
 */
 class MoaS;
 class CkIndex_MoaS;
 class CProxy_MoaS;
 class CProxyElement_MoaS;
 class CProxySection_MoaS;
/* --------------- index object ------------------ */
class CkIndex_MoaS:public CProxyElement_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */
    static int __idx_MoaS_CkMigrateMessage;
    static int ckNew(CkMigrateMessage* impl_msg) { return __idx_MoaS_CkMigrateMessage; }
    static void _call_MoaS_CkMigrateMessage(void* impl_msg,MoaS* impl_obj);

/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
    static int __idx_MoaS_marshall1;
    static int ckNew(const Moa3Grid &qh, const Moa3Grid &bh) { return __idx_MoaS_marshall1; }
    static void _call_MoaS_marshall1(void* impl_msg,MoaS* impl_obj);
    static int _callmarshall_MoaS_marshall1(char* impl_buf,MoaS* impl_obj);
    static void _marshallmessagepup_MoaS_marshall1(PUP::er &p,void *msg);

/* DECLS: threaded void compute(void);
 */
    static int __idx_compute_void;
    static int compute(void) { return __idx_compute_void; }
    static void _call_compute_void(void* impl_msg,MoaS* impl_obj);
    static void _callthr_compute_void(CkThrCallArg *);

};
/* --------------- element proxy ------------------ */
 class CProxyElement_MoaS : public CProxyElement_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    CProxyElement_MoaS(void) {}
    CProxyElement_MoaS(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxyElement_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxyElement_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxyElement_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxyElement_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxyElement_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxyElement_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxyElement_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxyElement_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxyElement_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxyElement_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxyElement_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxyElement_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxyElement_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxyElement_ArrayElement::ckSetReductionClient(cb); }
inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
  { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
  { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
inline void *ckSendSync(CkArrayMessage *m, int ep) const
  { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
inline const CkArrayIndex &ckGetIndex() const
  { return CProxyElement_ArrayElement::ckGetIndex(); }
    MoaS *ckLocal(void) const
      { return (MoaS *)CProxyElement_ArrayElement::ckLocal(); }
    CProxyElement_MoaS(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS) {}
    CProxyElement_MoaS(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx) {}
/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */

/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
    void insert(const Moa3Grid &qh, const Moa3Grid &bh, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: threaded void compute(void);
 */
    void compute(void) ;

};
PUPmarshall(CProxyElement_MoaS)
/* ---------------- collective proxy -------------- */
 class CProxy_MoaS : public CProxy_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    CProxy_MoaS(void) {}
    CProxy_MoaS(const ArrayElement *e) : CProxy_ArrayElement(e){  }
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxy_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxy_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxy_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxy_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxy_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxy_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxy_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxy_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxy_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxy_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxy_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxy_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxy_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxy_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxy_ArrayElement::ckSetReductionClient(cb); }
    static CkArrayID ckNew(void) {return ckCreateEmptyArray();}
//Generalized array indexing:
    CProxyElement_MoaS operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator [] (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator () (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_MoaS(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MoaS(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */

/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
    static CkArrayID ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const int s1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: threaded void compute(void);
 */
    void compute(void) ;

};
PUPmarshall(CProxy_MoaS)
/* ---------------- section proxy -------------- */
 class CProxySection_MoaS : public CProxySection_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    CProxySection_MoaS(void) {}
    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL) {
      CProxySection_ArrayElement::ckDelegate(dTo,dPtr);
    }
    void ckUndelegate(void) {
      CProxySection_ArrayElement::ckUndelegate();
    }
    void pup(PUP::er &p) {
      CProxySection_ArrayElement::pup(p);
    }
int ckIsDelegated(void) const {return CProxySection_ArrayElement::ckIsDelegated();}
inline CkDelegateMgr *ckDelegatedTo(void) const {return CProxySection_ArrayElement::ckDelegatedTo();}
inline CkDelegateData *ckDelegatedPtr(void) const {return CProxySection_ArrayElement::ckDelegatedPtr();}
CkGroupID ckDelegatedIdx(void) const {return CProxySection_ArrayElement::ckDelegatedIdx();}
inline void ckCheck(void) const {CProxySection_ArrayElement::ckCheck();}
inline operator CkArrayID () const {return ckGetArrayID();}
inline static CkArrayID ckCreateEmptyArray(void){ return CProxySection_ArrayElement::ckCreateEmptyArray(); }
inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts){ return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx){ CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const{ CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
inline CkArrayID ckGetArrayID(void) const{ return CProxySection_ArrayElement::ckGetArrayID();}
inline CkArray *ckLocalBranch(void) const{ return CProxySection_ArrayElement::ckLocalBranch(); }
inline CkLocMgr *ckLocMgr(void) const{ return CProxySection_ArrayElement::ckLocMgr(); }
inline void doneInserting(void) { CProxySection_ArrayElement::doneInserting(); }
inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::setReductionClient(fn,param); }
inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
{ CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
inline void ckSetReductionClient(CkCallback *cb) const
{ CProxySection_ArrayElement::ckSetReductionClient(cb); }
inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
 { CProxySection_ArrayElement::ckSend(m,ep,opts); }
inline CkSectionInfo &ckGetSectionInfo()
  { return CProxySection_ArrayElement::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
  { return CProxySection_ArrayElement::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
  { return CProxySection_ArrayElement::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
  { return CProxySection_ArrayElement::ckGetSectionID(i); }
inline CkArrayID ckGetArrayIDn(int i) const
{return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
inline CkArrayIndex *ckGetArrayElements() const
  { return CProxySection_ArrayElement::ckGetArrayElements(); }
inline CkArrayIndex *ckGetArrayElements(int i) const
{return CProxySection_ArrayElement::ckGetArrayElements(i); }
inline int ckGetNumElements() const
  { return CProxySection_ArrayElement::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{return CProxySection_ArrayElement::ckGetNumElements(i); } 
//Generalized array indexing:
    CProxyElement_MoaS operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator [] (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator () (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s) {
      CkVec<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.push_back(CkArrayIndex1D(i));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_MoaS(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MoaS(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_MoaS(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_MoaS(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MoaS(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */

/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */

/* DECLS: threaded void compute(void);
 */
    void compute(void) ;

};
PUPmarshall(CProxySection_MoaS)
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_MoaS> CBase_MoaS;



extern void _registerComputeMoaMgr(void);
#endif
