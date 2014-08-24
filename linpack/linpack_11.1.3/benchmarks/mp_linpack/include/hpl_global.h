/*******************************************************************************
!   Copyright(C) 1999-2014 Intel Corporation. All Rights Reserved.
!   
!   The source code, information  and  material ("Material") contained herein is
!   owned  by Intel Corporation or its suppliers or licensors, and title to such
!   Material remains  with Intel Corporation  or its suppliers or licensors. The
!   Material  contains proprietary information  of  Intel or  its  suppliers and
!   licensors. The  Material is protected by worldwide copyright laws and treaty
!   provisions. No  part  of  the  Material  may  be  used,  copied, reproduced,
!   modified, published, uploaded, posted, transmitted, distributed or disclosed
!   in any way  without Intel's  prior  express written  permission. No  license
!   under  any patent, copyright  or  other intellectual property rights  in the
!   Material  is  granted  to  or  conferred  upon  you,  either  expressly,  by
!   implication, inducement,  estoppel or  otherwise.  Any  license  under  such
!   intellectual  property  rights must  be express  and  approved  by  Intel in
!   writing.
!   
!   *Third Party trademarks are the property of their respective owners.
!   
!   Unless otherwise  agreed  by Intel  in writing, you may not remove  or alter
!   this  notice or  any other notice embedded  in Materials by Intel or Intel's
!   suppliers or licensors in any way.
!
!******************************************************************************/
#ifndef HPL_GLOBAL
#define HPL_GLOBAL

#if defined(__linux__) && !defined(_LINUX)
#define	_LINUX
#endif

#if (defined(__WIN32) || defined(_WIN64)) && !defined(_WINDOWS)
#define	_WINDOWS
#endif

#include "hpl_misc.h"
#ifdef	_LINUX
#include <unistd.h>
#include <limits.h>
#include <asm/unistd.h>
#include <sys/resource.h>
#endif
#ifdef	_WINDOWS
#include <windows.h>
#endif

#ifdef	_WINDOWS
#ifndef	__GNUC__
#define	alloca				_alloca
#endif
#define	bzero				ZeroMemory
#define	sleep(a)			Sleep((a) * 1000)
#define	HPL_USE_CLOCK
#define	HOST_NAME_MAX			(MAX_COMPUTERNAME_LENGTH + 1)
#define	pthread_t			HANDLE
#define	pthread_mutex_t			CRITICAL_SECTION
#define	pthread_mutex_lock		EnterCriticalSection
#define	pthread_mutex_unlock		LeaveCriticalSection
#define	pthread_mutex_init(x, y)	InitializeCriticalSection(x)
#define	pthread_mutex_destroy		DeleteCriticalSection
#define	pthread_cond_t			HANDLE
#define pthread_join(a, b)		{WaitForSingleObject(a, INFINITE); CloseHandle(a);}
#define PTHREAD_CREATE(a,b,c,d)		((a = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)c, d, 0, NULL)) == NULL)
#define PTHREAD_COND_INIT(a, b)		(a = CreateEvent(NULL, FALSE, FALSE, NULL))
#define PTHREAD_COND_SIGNAL(a)		SetEvent(a)
#define PTHREAD_COND_WAIT(a, b)		WaitForSingleObject(a, INFINITE)
#define PTHREAD_COND_BROADCAST(a)	PulseEvent(a)
#define PTHREAD_COND_DESTROY(a)		CloseHandle(a)
#define	dlopen(a, b)			LoadLibrary(a)
#define	dlclose(a)			FreeLibrary(a)
#define dlsym(a,b)			(void *)GetProcAddress(a, b)

#ifdef	_WIN64
typedef	unsigned long long	ULONGARG;
typedef	         long long	LONGARG;
#else
typedef	unsigned long		ULONGARG;
typedef	         long		LONGARG;
#endif

typedef	unsigned long long	LONGCTR;

#else
#define PTHREAD_CREATE(a,b,c,d)		pthread_create(&(a), b, c, d)
#define PTHREAD_COND_INIT(a, b)		pthread_cond_init(&(a), b)
#define PTHREAD_COND_SIGNAL(a)		pthread_cond_signal(&(a))
#define PTHREAD_COND_WAIT(a, b)		pthread_cond_wait(&(a), b)
#define PTHREAD_COND_BROADCAST(a)	pthread_cond_broadcast(&(a))
#define PTHREAD_COND_DESTROY(a)		pthread_cond_destroy(&(a))

typedef	unsigned long		ULONGARG;
typedef	         long		LONGARG;
typedef	unsigned long long	LONGCTR;

#endif

#ifdef	_LINUX
typedef	void *		DWORD;
#define	WINAPI
#endif

#ifdef	_LINUX
#define USE_RAWLOCK
#endif

#define MAX_NUM_SWAP    4
#ifdef	USE_MIC
#define MAX_MNODES     16
#else
#define MAX_MNODES	1
#endif

#ifndef	SHM_HUGETLB
#define SHM_HUGETLB	04000
#endif

#ifndef	MAP_HUGETLB
#define	MAP_HUGETLB     0x40000
#endif

/* Cache line size (it dosn't have to match physical cache line) */
#define CLINE_SIZE	(128)
/* Large page size, larger than 2MB to be on the safe side considering IA32 */
#define LPAGE_SIZE	(4ULL << 20)
/* Normal page size */
#define NPAGE_SIZE	(4ULL << 10)

/* memory allocation hint in ialloc() */
#define	IALLOC_NONE		0
#define	IALLOC_PINNED		1
#define	IALLOC_LOCAL		2
#define	IALLOC_INTERLEAVE	4
#define	IALLOC_CORE		8

/* CPU affinity hint in setaffinity() */
#define	AFFINITY_TEMPORARY	0
#define	AFFINITY_FORCE		1
#define	AFFINITY_ANY		2
#define	AFFINITY_NODE		3

/* CPUID */
#define CPUARCH_WSM	0
#define CPUARCH_SNB	1
#define CPUARCH_HSW	2
#define CPUARCH_ATM	3
#define CPUARCH_PRN	4
#define CPUARCH_MIC	5

#ifdef	USE_THREE_PANEL
#define	NUM_PANEL	3
#else
#define	NUM_PANEL	2
#endif

#define PROCDIR "/proc/self/task"

#define MAX_KEEP_THREADS	1024

/* GEMM unrolling type */
#define	GEMM_UNROLL_M	hpl_global.unroll_m
#define	GEMM_UNROLL_N	hpl_global.unroll_n
#define	MGEMM_UNROLL_M	hpl_global.munroll_m
#define	MGEMM_UNROLL_N	hpl_global.munroll_n

typedef struct {
  /* Host name */
  char hostname[HOST_NAME_MAX];

  /* Architecture ID, Host GEMM unrolling type for M and N, MIC GEMM unrolling type for M and N */
  /* these parameters will be set in the kernel driver */
  int arch, unroll_m, unroll_n, munroll_m, munroll_n;

  /* Number of logical MICs, number of physical MICs, and ratio of pnummic/lnummic */
  int lnummic, pnummic, snummic; 

  /* MPI rank, MPI size */
  int rank, size;

  /* Number of NUMA regions in this node. This is equal to the last number in "numactl --show | grep nodebind" + 1 */
  int hostnumnodes;

  /* Number of NUMA regions that this process will use */
  int numnodes;

  /* Maximum number of NUMA regions that this process will use */
  int maxnumnodes;

  /* Number of cores that this node has */
  int numhostcores;

  /* Number of cores that this process will use; can be set by HPL_HOST_NODE, HPL_HOST_CORE */
  int numcores;

  /* Number of MIC cores used in HPL; can be set by HPL_MIC_NUMCORES */
  int nummiccores;

  /* Number of swap threads; 0 or 1; can be set by HPL_NUMSWAPS */
  int numswaps;

  /* Number of update threads */
  int numupdates;

  /* Number of cores which won't join updates */
  int numreduce;

  /* Number of extra queues for MICs; larger may be better */
  int micequeues;

  /* Flag for using Large Page on Host */
  int use_hlargepage;

  /* Flag for using Large Page on MIC */
  int use_mlargepage;

  /* Core information in /sys */
  int *hcore;

  /* NUMA core information */
  int *hnode;

  /* NUMA node information */
  int *numa;

  /* Flag for CPU allocation (used by CPU affinity) */
  int *used;

  /* Affinity information */
  int *haffinity;

  /* Various information about MIC; each MIC has different paramters */
  int mmic [MAX_MNODES];
  int mnode[MAX_MNODES];
  int mcore[MAX_MNODES];
  int mshare[MAX_MNODES];

  /* Affinity and thread information for thread for controlling MICs */
  int saffinity[MAX_NUM_SWAP]; 
  int maffinity[MAX_MNODES]; 
  int mid      [MAX_MNODES * 2];
  int tid      [MAX_KEEP_THREADS];

  /* Affinity information for swap thread */
  int swapaffinity;

  int mpi, mpiserver, mycol, myrow, npcol, nprow, numtid, micport, loglevel;

  /* Host DGEMM blocking size for M */
  int hostM;
  /* Host DGEMM blocking size for K */
  int hostK;
  /* Host DGEMM blocking size for N */
  int blaswidth, pblaswidth;

  /* MIC DGEMM blocking size for K */
  int micK;
  /* MIC DGEMM blocking size for N */
  int kncwidth;

  /* Swapping width */
  int swapwidth;

  /* for dynamic changing swap width */
  double swap_threshold;

  /* Some offsets for DGEMM buffer */
  int offsetA, offsetB;

  /* Flow control for initiating DMA transactions between host and MICs */
  int num_send, num_recv;

  size_t mbsize;	/* buffersize for master      */
  size_t sbsize;	/* buffersize for thread      */
  size_t pbsize;	/* buffersize for panel DGEMM */
  size_t mssize;	/* buffersize (Send)  for MIC */
  size_t mrsize;	/* work size  (Recive)for MIC */

  /* Buffer pointer for DGEMM of main thread */
  double *buffer;
  /* Buffer pointer for DGEMM of panel factorization */
  double *subbuffer;

  /* Number of floating point operations per cycle */
  double fppc;
  
  /* Handle for MIC kernel image */
  void *mickimage;

  /* Size for MIC kernel */
  size_t micksize;

  /*
    Store the page swap size at the beginning of HPL. We can compare it with current swap size and
     find out if page swap has happened.
  */
  size_t swapsize;

  /* Copy function for Host DGEMM */
  int (*dgemm_incopy)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);
  int (*dgemm_itcopy)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);
  int (*dgemm_oncopy)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);
  int (*dgemm_otcopy)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);

  /* Copy function for MIC DGEMM */
  int (*dgemm_mncopy)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);
  int (*dgemm_mtcopy)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);

  /* DGEMM / DTRSM kernels */
  int (*dgemm_kernel)(LONGARG, LONGARG, LONGARG, double *, double *, double *, LONGARG);
  int (*dtrsm_kernel)(LONGARG, LONGARG, LONGARG, double *, double *, double *, LONGARG);

  /* Finding absolute maximum number */
  double (*damax)  (LONGARG m, double *x, LONGARG incx);
  /* Finding index with specified value v */
  LONGARG   (*idaindx)(LONGARG m, double *x, LONGARG incx, double v);

  /* Copy function for MIC DGEMM */
  int (*dgemm_oncopy_mic)(LONGARG m, LONGARG n, double *a, LONGARG lda, double *b);
  /* Write back function for DTRSM to the host memory from MIC */
  int (*dgemm_undo_mic)  (LONGARG m, LONGARG n, double *a, double *b, LONGARG ldb);
  /* Update function for DGEMM to the host memory from MIC */
  int (*dgemm_update_mic)(LONGARG m, LONGARG n, double *a, double *b, LONGARG ldb);

} hpl_global_t;

extern hpl_global_t hpl_global;

#ifdef	_WINDOWS
static __inline void sched_yield(void) { SwitchToThread(); }

static __inline int get_nprocs(void) {

  SYSTEM_INFO info;

  GetSystemInfo(&info);

  return info.dwNumberOfProcessors;
}
#endif

/* Profiling control functions for gprof */
void moncontrol(int);

double dsecond(void);

/* Global initialization */
void ginit(void);
void gquit(void);

/* Get Node number by logical core */
int get_node(int lcore);

/* Setting up architecture */
void arch_init(void);
void arch_quit(void);

/* Finding CPU slot and give affinity; return value is logical position */
int setaffinity(int pos, int hint, int reserve);

/* Checking for page swapping size */
void checkswapsize(void);

/* Hunting unknown threads and affinitize to specific cores */
void findthreads1(void);
void findthreads2(void);

/* Memory mapping initialization */
void  iinit(void);
void  iquit(void);

/* Memory allocation with hint; allocation will be done by mmap */
void *ialloc(int hint, int core, size_t size);
/* munmap will be called */
void  ifree (void *addr, size_t size, int hint);

/* Get power consumption */
double getpower(void);

/* Reading time stamp counter */
static __inline LONGCTR rdtsc(void) {
  unsigned int ax, dx;

  __asm__ __volatile__ ("rdtsc" : "=a"(ax), "=d"(dx));

  return ((((LONGCTR )dx) << 32) | ax);
}


#ifndef USE_RAWLOCK
#define rawlock(X)	pthread_mutex_lock(X)
#define rawunlock(X)	pthread_mutex_unlock(X)
#else
static __inline void rawlock(__volatile__ unsigned int *addr){

  unsigned int ret;

  do {
    while (*addr) { /* sched_yield(); */};

    ret = __sync_lock_test_and_set(addr, 1);

  } while (ret);
}

static __inline void rawunlock(__volatile__ unsigned int *addr){

  __sync_lock_release(addr);

}
#endif

/* System call for get thread id */
#ifdef	_LINUX
static __inline int gettid(void) {
  return syscall(__NR_gettid);
}
#endif

#ifdef	_WINDOWS
static __inline int gettid(void) {
  return (int)GetCurrentThreadId();
}
#endif

/* Counting number of bits. It's identical to popcount instruction */
static __inline int bitcount(ULONGARG bits) {

  bits = (bits & 0x5555555555555555ULL) + ((bits >> 1) & 0x5555555555555555ULL);
  bits = (bits & 0x3333333333333333ULL) + ((bits >> 2) & 0x3333333333333333ULL);
  bits = (bits & 0x0f0f0f0f0f0f0f0fULL) + ((bits >> 4) & 0x0f0f0f0f0f0f0f0fULL);
  bits = (bits & 0x00ff00ff00ff00ffULL) + ((bits >> 8) & 0x00ff00ff00ff00ffULL);
  bits = (bits & 0x0000ffff0000ffffULL) + ((bits >>16) & 0x0000ffff0000ffffULL);
  bits = (bits & 0x00000000ffffffffULL) + ((bits >>32) & 0x00000000ffffffffULL);

  return (int)bits;
}

#ifdef __cplusplus
extern "C" {
#endif

/* CLOSE START */
/* Stream like Memory Benchmark */
double membench(int N, double *A, int lda);
/* CLOSE END */

/* DGEMM transposed type */
#define DGEMM_TYPE_NN	0
#define DGEMM_TYPE_NT	1
#define DGEMM_TYPE_TN	2
#define DGEMM_TYPE_TT	3

/* activating DGEMM thread for panel factorization */
void pdgemm_start(void);
void pdgemm_shutdown(void);

/* DGEMM for panel factorization */
void pdgemm(int type, LONGARG m, LONGARG n, LONGARG k, double *a, LONGARG lda, double *b, LONGARG ldb, double *c, LONGARG ldc);
/* DTRSM for panel factorization */
void pdtrsm(int type, LONGARG m, LONGARG n, double *a, LONGARG lda, double *c, LONGARG ldc);

/* one of the BLAS functions */
double dasum_(int *, const double *, int *);

#ifdef USE_MIC

#define MIC_STATUS_OFFSET	16	/* doubles */

#define CONTROL_NONE		10
#define CONTROL_AVAIL		11
#define CONTROL_PREADY		12
#define CONTROL_RUN		13
#define CONTROL_FINISHED	14
#define CONTROL_SENDING		15
#define CONTROL_DONE		16
#define CONTROL_COMPLETE	17
#define CONTROL_INVALID		99

#define	MIC_THREAD_RATIO	 2

/* Maximum number of MIC cores */
#define MAX_MIC_CORE		64
/* Two threads per core */
#define MAX_MIC_THREADS		(MAX_MIC_CORE * MIC_THREAD_RATIO)

/* Out standing buffer for Send */
#define NUM_SENDBUFFER		 1	/* should be 1 due to SCIF bug? */
/* Out standing buffer for Receive */
#define NUM_RECVBUFFER		 2

#define MAX_EXTRA_QUEUES       512

#define MAX_MIC_QUEUES	(MAX_MIC_THREADS + Mmax(NUM_SENDBUFFER + NUM_RECVBUFFER, MAX_EXTRA_QUEUES))

struct HPL_S_panel;

/* MIC initialization */
int  mic_init(void);
/* MIC termination */
void mic_quit(void);

/* Starting threads in MIC */
void micthread_start   (void);
/* Shutting down threads in MIC */
void micthread_shutdown(void);

/* Panel memory allocation and registration */
void mic_panel_alloc(struct HPL_S_panel *panel);
/* Panel memory deallocation and unregistration */
void mic_panel_free (struct HPL_S_panel *panel);

/* Memory initialization on MIC takes long and do overlapping with memory initialization of host */
void mic_panel_start(struct HPL_S_panel *panel, int N, int NB);
/* Synchronization with memory allocation on MIC */
void mic_panel_sync (struct HPL_S_panel *panel);

/* Work memory allocation and registration */
void mic_work_alloc(int N, int NB);
/* Work memory deallocation and unregistration */
void mic_work_free (void);

/* Sending panel data to all MICs */
void mic_send_panel(struct HPL_S_panel *panel);

/* Mark on outstainding tables */
int msetstatus  (int myid, int pos, int signal);

/* Sending TRSM data to MICs */
void send_tile (int myid, int cpos, int spos, int signal);
/* Receiving TRSM and GEMM data from MICs */
void recv_tile (int myid, int cpos, int rpos, int signal);

/* Preparing sending data (packing TRSM data) into buffer */
int  msetupB (struct HPL_S_panel *PANEL, int tid, int myid, int cpos, int spos, int from, int width, int ppos, int last, int hint);
/* Merging GEMM data from MIC into main memory */
int  mupdateC(int id, int cpos, int flag, int last);

#endif

#ifdef __cplusplus
}
#endif

#endif
