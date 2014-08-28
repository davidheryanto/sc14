/**
***  Copyright (c) 1995, 1996, 1997, 1998, 1999, 2000 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef BOCGROUP_H
#define BOCGROUP_H

#include "charm++.h"

class BOCgroup {
public:
  CkGroupID workDistrib;
  CkGroupID patchMgr;
  CkGroupID proxyMgr;
  CkGroupID computeMgr;
  CkGroupID computePmeMgr;
  CkGroupID nodePmeMgr;
  //  CkGroupID delegateMgr;
#ifdef OPENATOM_VERSION
  CkGroupID computeMoaMgr;
#endif // OPENATOM_VERSION
  CkGroupID computeExtMgr;
  CkGroupID computeGBISserMgr;
  CkGroupID computeMsmSerialMgr;
  CkGroupID computeMsmMsaMgr;
  CkGroupID reductionMgr;
  CkGroupID collectionMgr;
  CkGroupID broadcastMgr;
  CkGroupID ldbCoordinator;
  CkGroupID sync;
  CkGroupID node;
  CkGroupID ioMgr;
  #ifdef USE_NODEPATCHMGR
  CkGroupID nodeProxyMgr;
  #endif

};

class BOCclass : public Group {
};

#endif /* BOCGROUP_H */


