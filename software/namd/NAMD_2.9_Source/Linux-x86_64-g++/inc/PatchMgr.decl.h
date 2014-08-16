#ifndef _DECL_PatchMgr_H_
#define _DECL_PatchMgr_H_
#include "charm++.h"
/* DECLS: message MovePatchesMsg;
 */
class MovePatchesMsg;
class CMessage_MovePatchesMsg:public CkMessage{
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
    CMessage_MovePatchesMsg();
    static void *pack(MovePatchesMsg *p);
    static MovePatchesMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message MigrateAtomsMsg;
 */
class MigrateAtomsMsg;
class CMessage_MigrateAtomsMsg:public CkMessage{
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
    CMessage_MigrateAtomsMsg();
    static void *pack(MigrateAtomsMsg *p);
    static MigrateAtomsMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message MigrateAtomsCombinedMsg;
 */
class MigrateAtomsCombinedMsg;
class CMessage_MigrateAtomsCombinedMsg:public CkMessage{
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
    CMessage_MigrateAtomsCombinedMsg();
    static void *pack(MigrateAtomsCombinedMsg *p);
    static MigrateAtomsCombinedMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message MoveAtomMsg;
 */
class MoveAtomMsg;
class CMessage_MoveAtomMsg:public CkMessage{
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
    CMessage_MoveAtomMsg();
    static void *pack(MoveAtomMsg *p);
    static MoveAtomMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message MoveAllByMsg;
 */
class MoveAllByMsg;
class CMessage_MoveAllByMsg:public CkMessage{
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
    CMessage_MoveAllByMsg();
    static void *pack(MoveAllByMsg *p);
    static MoveAllByMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message SetLatticeMsg;
 */
class SetLatticeMsg;
class CMessage_SetLatticeMsg:public CkMessage{
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
    CMessage_SetLatticeMsg();
    static void *pack(SetLatticeMsg *p);
    static SetLatticeMsg* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group PatchMgr: IrrGroup{
PatchMgr(void);
void recvMovePatches(MovePatchesMsg* impl_msg);
void recvAtoms(MovePatchesMsg* impl_msg);
void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
void moveAtom(MoveAtomMsg* impl_msg);
void moveAllBy(MoveAllByMsg* impl_msg);
void setLattice(SetLatticeMsg* impl_msg);
};
 */
 class PatchMgr;
 class CkIndex_PatchMgr;
 class CProxy_PatchMgr;
 class CProxyElement_PatchMgr;
 class CProxySection_PatchMgr;
/* --------------- index object ------------------ */
class CkIndex_PatchMgr:public CProxyElement_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
/* DECLS: PatchMgr(void);
 */
    static int __idx_PatchMgr_void;
    static int ckNew(void) { return __idx_PatchMgr_void; }
    static void _call_PatchMgr_void(void* impl_msg,PatchMgr* impl_obj);

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    static int __idx_recvMovePatches_MovePatchesMsg;
    static int recvMovePatches(MovePatchesMsg* impl_msg) { return __idx_recvMovePatches_MovePatchesMsg; }
    static void _call_recvMovePatches_MovePatchesMsg(void* impl_msg,PatchMgr* impl_obj);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    static int __idx_recvAtoms_MovePatchesMsg;
    static int recvAtoms(MovePatchesMsg* impl_msg) { return __idx_recvAtoms_MovePatchesMsg; }
    static void _call_recvAtoms_MovePatchesMsg(void* impl_msg,PatchMgr* impl_obj);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    static int __idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg;
    static int recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg) { return __idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg; }
    static void _call_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(void* impl_msg,PatchMgr* impl_obj);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    static int __idx_moveAtom_MoveAtomMsg;
    static int moveAtom(MoveAtomMsg* impl_msg) { return __idx_moveAtom_MoveAtomMsg; }
    static void _call_moveAtom_MoveAtomMsg(void* impl_msg,PatchMgr* impl_obj);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    static int __idx_moveAllBy_MoveAllByMsg;
    static int moveAllBy(MoveAllByMsg* impl_msg) { return __idx_moveAllBy_MoveAllByMsg; }
    static void _call_moveAllBy_MoveAllByMsg(void* impl_msg,PatchMgr* impl_obj);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    static int __idx_setLattice_SetLatticeMsg;
    static int setLattice(SetLatticeMsg* impl_msg) { return __idx_setLattice_SetLatticeMsg; }
    static void _call_setLattice_SetLatticeMsg(void* impl_msg,PatchMgr* impl_obj);

};
/* --------------- element proxy ------------------ */
class CProxyElement_PatchMgr: public CProxyElement_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    CProxyElement_PatchMgr(void) {}
    CProxyElement_PatchMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_PatchMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_PatchMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }
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
    PatchMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PatchMgr* ckLocalBranch(CkGroupID gID) {
      return (PatchMgr*)CkLocalBranch(gID);
    }
/* DECLS: PatchMgr(void);
 */

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    void recvMovePatches(MovePatchesMsg* impl_msg);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    void recvAtoms(MovePatchesMsg* impl_msg);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    void moveAtom(MoveAtomMsg* impl_msg);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    void moveAllBy(MoveAllByMsg* impl_msg);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    void setLattice(SetLatticeMsg* impl_msg);

};
PUPmarshall(CProxyElement_PatchMgr)
/* ---------------- collective proxy -------------- */
class CProxy_PatchMgr: public CProxy_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    CProxy_PatchMgr(void) {}
    CProxy_PatchMgr(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_PatchMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PatchMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_PatchMgr operator[](int onPE) const
      {return CProxyElement_PatchMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}
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
    PatchMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PatchMgr* ckLocalBranch(CkGroupID gID) {
      return (PatchMgr*)CkLocalBranch(gID);
    }
/* DECLS: PatchMgr(void);
 */
    static CkGroupID ckNew(void);

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    void recvMovePatches(MovePatchesMsg* impl_msg);
    void recvMovePatches(MovePatchesMsg* impl_msg, int npes, int *pes);
    void recvMovePatches(MovePatchesMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    void recvAtoms(MovePatchesMsg* impl_msg);
    void recvAtoms(MovePatchesMsg* impl_msg, int npes, int *pes);
    void recvAtoms(MovePatchesMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, int npes, int *pes);
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, CmiGroup &grp);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    void moveAtom(MoveAtomMsg* impl_msg);
    void moveAtom(MoveAtomMsg* impl_msg, int npes, int *pes);
    void moveAtom(MoveAtomMsg* impl_msg, CmiGroup &grp);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    void moveAllBy(MoveAllByMsg* impl_msg);
    void moveAllBy(MoveAllByMsg* impl_msg, int npes, int *pes);
    void moveAllBy(MoveAllByMsg* impl_msg, CmiGroup &grp);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    void setLattice(SetLatticeMsg* impl_msg);
    void setLattice(SetLatticeMsg* impl_msg, int npes, int *pes);
    void setLattice(SetLatticeMsg* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_PatchMgr)
/* ---------------- section proxy -------------- */
class CProxySection_PatchMgr: public CProxySection_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    CProxySection_PatchMgr(void) {}
    CProxySection_PatchMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_PatchMgr(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PatchMgr(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_PatchMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_PatchMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
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
    PatchMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PatchMgr* ckLocalBranch(CkGroupID gID) {
      return (PatchMgr*)CkLocalBranch(gID);
    }
/* DECLS: PatchMgr(void);
 */

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    void recvMovePatches(MovePatchesMsg* impl_msg);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    void recvAtoms(MovePatchesMsg* impl_msg);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    void moveAtom(MoveAtomMsg* impl_msg);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    void moveAllBy(MoveAllByMsg* impl_msg);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    void setLattice(SetLatticeMsg* impl_msg);

};
PUPmarshall(CProxySection_PatchMgr)
typedef CBaseT1<Group, CProxy_PatchMgr> CBase_PatchMgr;

extern void _registerPatchMgr(void);
#endif
