#ifndef _GRIDMETISLB_H_
#define _GRIDMETISLB_H_

#include "CentralLB.h"

#define CK_LDB_GRIDMETISLB_MODE 0
#define CK_LDB_GRIDMETISLB_BACKGROUND_LOAD 1

#ifndef MAXINT
#define MAXINT 2147483647
#endif

#ifndef MAXDOUBLE
#define MAXDOUBLE 1e10
#endif

extern "C" void METIS_PartGraphRecursive (int*, int*, int*, int*, int*, int*,
					  int*, int*, int*, int*, int*);

extern "C" void METIS_PartGraphKway (int*, int*, int*, int*, int*, int*,
				     int*, int*, int*, int*, int*);

extern "C" void METIS_PartGraphVKway (int*, int*, int*, int*, int*, int*,
				      int*, int*, int*, int*, int*);

extern "C" void METIS_WPartGraphRecursive (int*, int*, int*, int*,
					   int*, int*, int*, int*,
					   float*, int*, int*, int*);

extern "C" void METIS_WPartGraphKway (int*, int*, int*, int*,
				      int*, int*, int*, int*,
				      float*, int*, int*, int*);

extern "C" void METIS_mCPartGraphRecursive (int*, int*, int*, int*,
					    int*, int*, int*, int*,
					    int*, int*, int*, int*);

extern "C" void METIS_mCPartGraphKway (int*, int*, int*, int*, int*,
				       int*, int*, int*, int*, int*,
				       int*, int*, int*);

#if CONVERSE_VERSION_VMI
extern "C" int CmiGetCluster (int process);
#endif

void CreateGridMetisLB ();

class PE_Data_T
{
  public:
    CmiBool available;
    int cluster;
    int num_objs;
    double relative_speed;
    double scaled_load;
};

class Object_Data_T
{
  public:
    CmiBool migratable;
    int cluster;
    int from_pe;
    int to_pe;
    double load;
    int secondary_index;
};

class Cluster_Data_T
{
  public:
    int num_pes;
    double total_cpu_power;
    double scaled_cpu_power;
};

class GridMetisLB : public CentralLB
{
  public:
    GridMetisLB (const CkLBOptions &);
    GridMetisLB (CkMigrateMessage *msg);

    CmiBool QueryBalanceNow (int step);
    void work (LDStats *stats);
    void pup (PUP::er &p) { CentralLB::pup (p); }

  private:
    int Get_Cluster (int pe);
    void Initialize_PE_Data (CentralLB::LDStats *stats);
    int Available_PE_Count ();
    int Compute_Number_Of_Clusters ();
    void Initialize_Object_Data (CentralLB::LDStats *stats);
    void Initialize_Cluster_Data ();
    void Partition_Objects_Into_Clusters (CentralLB::LDStats *stats);
    void Partition_ClusterObjects_Into_PEs (CentralLB::LDStats *stats, int cluster);

    int CK_LDB_GridMetisLB_Mode;
    int CK_LDB_GridMetisLB_Background_Load;

    int Num_PEs;
    int Num_Objects;
    int Num_Clusters;
    PE_Data_T *PE_Data;
    Object_Data_T *Object_Data;
    Cluster_Data_T *Cluster_Data;
};

#endif
