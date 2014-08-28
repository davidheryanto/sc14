/**
 * \addtogroup CkLdb
*/
/*@{*/

#ifndef LBDB_H
#define LBDB_H

#include "converse.h"
#include "lbdb.h"
#include "cklists.h"

#include "LBObj.h"
#include "LBOM.h"
#include "LBComm.h"
#include "LBMachineUtil.h"

class LocalBarrier {
friend class LBDB;
public:
  LocalBarrier() { cur_refcount = 1; client_count = 0; max_client = 0;
                   max_receiver= 0; at_count = 0; on = CmiFalse; 
	#if CMK_BIGSIM_CHARM
	first_free_client_slot = 0;
	#endif
    };
  ~LocalBarrier() { };

  LDBarrierClient AddClient(LDResumeFn fn, void* data);
  void RemoveClient(LDBarrierClient h);
  LDBarrierReceiver AddReceiver(LDBarrierFn fn, void* data);
  void RemoveReceiver(LDBarrierReceiver h);
  void TurnOnReceiver(LDBarrierReceiver h);
  void TurnOffReceiver(LDBarrierReceiver h);
  void AtBarrier(LDBarrierClient h);
  void TurnOn() { on = CmiTrue; CheckBarrier(); };
  void TurnOff() { on = CmiFalse; };

private:
  void CallReceivers(void);
  void CheckBarrier();
  void ResumeClients(void);

  struct client {
    void* data;
    LDResumeFn fn;
    int refcount;
  };
  struct receiver {
    void* data;
    LDBarrierFn fn;
    int on;
  };

  CkVec<client*> clients;
  CkVec<receiver*> receivers;

  int cur_refcount;
  int max_client;
  int client_count;
  int max_receiver;
  int at_count;
  CmiBool on;

  #if CMK_BIGSIM_CHARM
  int first_free_client_slot;
  #endif
};

class LBDB {
public:
  LBDB();
  ~LBDB() { }

  void SetPeriod(double secs) {batsync.setPeriod(secs);}
  double GetPeriod() {return batsync.getPeriod();}

  void insert(LBOM *om);

  LDOMHandle AddOM(LDOMid _userID, void* _userData, LDCallbacks _callbacks);
  LDObjHandle AddObj(LDOMHandle _h, LDObjid _id, void *_userData,
		     CmiBool _migratable);
  void UnregisterObj(LDObjHandle _h);

  void RegisteringObjects(LDOMHandle _h);
  void DoneRegisteringObjects(LDOMHandle _h);

  inline void LocalBarrierOn() 
       { localBarrier.TurnOn();}
  inline void LocalBarrierOff() 
       { localBarrier.TurnOff();}

  inline LBOM *LbOM(LDOMHandle h) 
       { return oms[h.handle]; };
  inline LBObj *LbObj(const LDObjHandle &h) const 
       { return objs[h.handle]; };
  inline LBObj *LbObjIdx(int h) const 
       { return objs[h]; };
  void DumpDatabase(void);

  inline void TurnStatsOn(void) 
       {statsAreOn = CmiTrue; machineUtil.StatsOn();}
  inline void TurnStatsOff(void) 
       {statsAreOn = CmiFalse;machineUtil.StatsOff();}
  inline CmiBool StatsOn(void) const 
       { return statsAreOn; };

  void SetupPredictor(LDPredictModelFn on, LDPredictWindowFn onWin, LDPredictFn off, LDPredictModelFn change, void* data);
  inline void TurnPredictorOn(void *model) {
    if (predictCBFn!=NULL) predictCBFn->on(predictCBFn->data, model);
    else CmiPrintf("Predictor not supported in this load balancer\n");
  }
  inline void TurnPredictorOn(void *model, int wind) {
    if (predictCBFn!=NULL) predictCBFn->onWin(predictCBFn->data, model, wind);
    else CmiPrintf("Predictor not supported in this load balancer\n");
  }
  inline void TurnPredictorOff(void) {
    if (predictCBFn!=NULL) predictCBFn->off(predictCBFn->data);
    else CmiPrintf("Predictor not supported in this load balancer\n");
  }
  /* the parameter model is really of class LBPredictorFunction in file LBDatabase.h */
  inline void ChangePredictor(void *model) {
    if (predictCBFn!=NULL) predictCBFn->change(predictCBFn->data, model);
    else CmiPrintf("Predictor not supported in this load balancer");
  }

  void Send(const LDOMHandle &destOM, const LDObjid &destid, unsigned int bytes, int destObjProc);
  void MulticastSend(const LDOMHandle &destOM, LDObjid *destids, int ndests, unsigned int bytes, int nMsgs);
  int ObjDataCount();
  void GetObjData(LDObjData *data);
  inline int CommDataCount() { 
    if (commTable)
      return commTable->CommCount();
    else return 0;
  }
  inline void GetCommData(LDCommData *data) 
       { if (commTable) commTable->GetCommData(data); };

  int  Migrate(LDObjHandle h, int dest);
  void Migrated(LDObjHandle h, int waitBarrier=1);
  int  NotifyMigrated(LDMigratedFn fn, void* data);
  void TurnOnNotifyMigrated(int handle)
       { migrateCBList[handle]->on = 1; }
  void TurnOffNotifyMigrated(int handle)
       { migrateCBList[handle]->on = 0; }
  void RemoveNotifyMigrated(int handle);

  inline void TurnManualLBOn() 
       { useBarrier = CmiFalse; }
  inline void TurnManualLBOff() 
       { useBarrier = CmiTrue; }

  int AddStartLBFn(LDStartLBFn fn, void* data);
  void TurnOnStartLBFn(int handle)
       { startLBFnList[handle]->on = 1; }
  void TurnOffStartLBFn(int handle)
       { startLBFnList[handle]->on = 0; }
  void RemoveStartLBFn(LDStartLBFn fn);
  void StartLB();

  int AddMigrationDoneFn(LDMigrationDoneFn fn, void* data);
  void RemoveMigrationDoneFn(LDMigrationDoneFn fn);
  void MigrationDone();

  inline void IdleTime(LBRealType* walltime) 
       { machineUtil.IdleTime(walltime); };
  inline void TotalTime(LBRealType* walltime, LBRealType* cputime) 
       { machineUtil.TotalTime(walltime,cputime); };
  void BackgroundLoad(LBRealType* walltime, LBRealType* cputime);
  void GetTime(LBRealType *total_walltime,LBRealType *total_cputime,
                   LBRealType *idletime, LBRealType *bg_walltime, LBRealType *bg_cputime);
  void ClearLoads(void);

  /**
    runningObj records the obj handler index so that load balancer
    knows if an event(e.g. Send) is in an entry function or not.
    An index is enough here because LDObjHandle can be retrieved from 
    objs array. Copying LDObjHandle is expensive.
  */
  inline void SetRunningObj(const LDObjHandle &_h) 
       { runningObj = _h.handle; obj_running = CmiTrue; };
  inline const LDObjHandle &RunningObj() const 
       { return objs[runningObj]->GetLDObjHandle(); };
  inline void NoRunningObj() 
       { obj_running = CmiFalse; };
  inline CmiBool ObjIsRunning() const 
       { return obj_running; };
  
  inline LDBarrierClient AddLocalBarrierClient(LDResumeFn fn, void* data) 
       { return localBarrier.AddClient(fn,data); };
  inline void RemoveLocalBarrierClient(LDBarrierClient h) 
       { localBarrier.RemoveClient(h); };
  inline LDBarrierReceiver AddLocalBarrierReceiver(LDBarrierFn fn, void* data) 
       { return localBarrier.AddReceiver(fn,data); };
  inline void RemoveLocalBarrierReceiver(LDBarrierReceiver h) 
       { localBarrier.RemoveReceiver(h); };
  inline void TurnOnBarrierReceiver(LDBarrierReceiver h) 
       { localBarrier.TurnOnReceiver(h); };
  inline void TurnOffBarrierReceiver(LDBarrierReceiver h) 
       { localBarrier.TurnOffReceiver(h); };
  inline void AtLocalBarrier(LDBarrierClient h) 
       { if (useBarrier) localBarrier.AtBarrier(h); };
  inline void ResumeClients() 
       { localBarrier.ResumeClients(); };
  inline void MeasuredObjTime(double wtime, double ctime) {
    if (statsAreOn) {
      obj_walltime += wtime;
#if CMK_LB_CPUTIMER
      obj_cputime += ctime;
#endif
    }
  };

  //This class controls the builtin-atsync frequency
  class batsyncer {
  private:
    LBDB *db; //Enclosing LBDB object
    double period;//Time (seconds) between builtin-atsyncs  
    double nextT;
    LDBarrierClient BH;//Handle for the builtin-atsync barrier 
    static void gotoSync(void *bs);
    static void resumeFromSync(void *bs);
  public:
    void init(LBDB *_db,double initPeriod);
    void setPeriod(double p) {period=p;}
    double getPeriod() {return period;}
  };

private:
  struct MigrateCB {
    LDMigratedFn fn;
    void* data;
    int on;
  };

  struct StartLBCB {
    LDStartLBFn fn;
    void* data;
    int on;
  };

  struct MigrationDoneCB {
    LDMigrationDoneFn fn;
    void* data;
  };

  struct PredictCB {
    LDPredictModelFn on;
    LDPredictWindowFn onWin;
    LDPredictFn off;
    LDPredictModelFn change;
    void* data;
  };

  typedef CkVec<LBOM*> OMList;
  typedef CkVec<LBObj*> ObjList;
  typedef CkVec<MigrateCB*> MigrateCBList;
  typedef CkVec<StartLBCB*> StartLBCBList;
  typedef CkVec<MigrationDoneCB*> MigrationDoneCBList;

  LBCommTable* commTable;
  OMList oms;
  int omCount;
  int oms_registering;

  ObjList objs;
  int objCount;

  CmiBool statsAreOn;
  MigrateCBList migrateCBList;

  MigrationDoneCBList migrationDoneCBList;

  PredictCB* predictCBFn;

  CmiBool obj_running;
  int runningObj;		// index of the runningObj in ObjList

  batsyncer batsync;

  LocalBarrier localBarrier;    // local barrier to trigger LB automatically
  CmiBool useBarrier;           // use barrier or not

  LBMachineUtil machineUtil;
  double obj_walltime;
#if CMK_LB_CPUTIMER
  double obj_cputime;
#endif

  StartLBCBList  startLBFnList;
  int            startLBFn_count;
public:
  int useMem();
#if (defined(_FAULT_MLOG_) || defined(_FAULT_CAUSAL_))
    int validObjHandle(LDObjHandle h ){
            if(objCount == 0)
                return 0;
            if(h.handle > objCount)
                return 0;
            if(objs[h.handle] == NULL)
                return 0;

            return 1;
    }
#endif


  int getObjCount() {return objCount;}
  const ObjList& getObjs() {return objs;}



};

#endif

/*@}*/
