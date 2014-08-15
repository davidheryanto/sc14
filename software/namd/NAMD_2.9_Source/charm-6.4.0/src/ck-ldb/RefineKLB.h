/**
 * \addtogroup CkLdb
*/
/*@{*/

#ifndef _REFINEKLB_H_
#define _REFINEKLB_H_

#include "CentralLB.h"
#include "RefinerApprox.h"
#include "RefineKLB.decl.h"

class minheap;
class maxheap;

void CreateRefineKLB();
BaseLB *AllocateRefineKLB();

class RefineKLB : public CentralLB {
protected:
  computeInfo *computes;
  processorInfo *processors;
  minHeap *pes;
  maxHeap *computesHeap;
  int P;
  int numComputes;
  double averageLoad;

  double overLoad;
  void performGreedyMoves(int count, BaseLB::LDStats* stats,int *from_procs, int *to_procs, int numMoves);

public:
  RefineKLB(const CkLBOptions &);
  RefineKLB(CkMigrateMessage *m):CentralLB(m) { lbname = (char *)"RefineKLB"; }
  void work(LDStats* stats);
private:
  CmiBool QueryBalanceNow(int step) { return CmiTrue; }

protected:
/*
  void create(LDStats* stats, int count);
  void assign(computeInfo *c, int p);
  void assign(computeInfo *c, processorInfo *p);
  void deAssign(computeInfo *c, processorInfo *pRec);
  void computeAverage();
  double computeMax();
  int refine();
*/
};

#endif /* _REFINEKLB_H_ */

/*@}*/
