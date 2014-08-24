/******************************************************************************
!  Copyright(C) 2009-2014 Intel Corporation. All Rights Reserved.
!
!  The source code, information  and  material ("Material") contained herein is
!  owned  by Intel Corporation or its suppliers or licensors, and title to such
!  Material remains  with Intel Corporation  or its suppliers or licensors. The
!  Material  contains proprietary information  of  Intel or  its  suppliers and
!  licensors. The  Material is protected by worldwide copyright laws and treaty
!  provisions. No  part  of  the  Material  may  be  used,  copied, reproduced,
!  modified, published, uploaded, posted, transmitted, distributed or disclosed
!  in any way  without Intel's  prior  express written  permission. No  license
!  under  any patent, copyright  or  other intellectual property rights  in the
!  Material  is  granted  to  or  conferred  upon  you,  either  expressly,  by
!  implication, inducement,  estoppel or  otherwise.  Any  license  under  such
!  intellectual  property  rights must  be express  and  approved  by  Intel in
!  writing.
!
!  *Third Party trademarks are the property of their respective owners.
!
!  Unless otherwise  agreed  by Intel  in writing, you may not remove  or alter
!  this  notice or  any other notice embedded  in Materials by Intel or Intel's
!  suppliers or licensors in any way.
!
!******************************************************************************/
/* 
 * -- High Performance Computing Linpack Benchmark (HPL)                
 *    HPL - 2.1 - October 26, 2012                          
 *    Antoine P. Petitet                                                
 *    University of Tennessee, Knoxville                                
 *    Innovative Computing Laboratory                                 
 *    (C) Copyright 2000-2008 All Rights Reserved                       
 *                                                                      
 * -- Copyright notice and Licensing terms:                             
 *                                                                      
 * Redistribution  and  use in  source and binary forms, with or without
 * modification, are  permitted provided  that the following  conditions
 * are met:                                                             
 *                                                                      
 * 1. Redistributions  of  source  code  must retain the above copyright
 * notice, this list of conditions and the following disclaimer.        
 *                                                                      
 * 2. Redistributions in binary form must reproduce  the above copyright
 * notice, this list of conditions,  and the following disclaimer in the
 * documentation and/or other materials provided with the distribution. 
 *                                                                      
 * 3. All  advertising  materials  mentioning  features  or  use of this
 * software must display the following acknowledgement:                 
 * This  product  includes  software  developed  at  the  University  of
 * Tennessee, Knoxville, Innovative Computing Laboratory.             
 *                                                                      
 * 4. The name of the  University,  the name of the  Laboratory,  or the
 * names  of  its  contributors  may  not  be used to endorse or promote
 * products  derived   from   this  software  without  specific  written
 * permission.                                                          
 *                                                                      
 * -- Disclaimer:                                                       
 *                                                                      
 * THIS  SOFTWARE  IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,  INCLUDING,  BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE UNIVERSITY
 * OR  CONTRIBUTORS  BE  LIABLE FOR ANY  DIRECT,  INDIRECT,  INCIDENTAL,
 * SPECIAL,  EXEMPLARY,  OR  CONSEQUENTIAL DAMAGES  (INCLUDING,  BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA OR PROFITS; OR BUSINESS INTERRUPTION)  HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT,  STRICT LIABILITY,  OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */ 
#ifndef HPL_PANEL_H
#define HPL_PANEL_H
/*
 * ---------------------------------------------------------------------
 * Include files
 * ---------------------------------------------------------------------
 */
#include "hpl_pmisc.h"
#include "hpl_grid.h"
#ifdef OFFLOAD
#ifdef	_LINUX
#include <pthread.h>
#endif
#endif
/*
 * ---------------------------------------------------------------------
 * Data Structures
 * ---------------------------------------------------------------------
 */
typedef struct HPL_S_panel
{
   struct HPL_S_grid   * grid;             /* ptr to the process grid */
   struct HPL_S_palg   * algo;          /* ptr to the algo parameters */
   struct HPL_S_pmat   * pmat;         /* ptr to the local array info */
   double              * A;              /* ptr to trailing part of A */
   double              * WORK;                          /* work space */
   double              * L2;                              /* ptr to L */
   double              * L1;       /* ptr to jb x jb upper block of A */
   double              * DPIV;    /* ptr to replicated jb pivot array */
   double              * DINFO;      /* ptr to replicated scalar info */
   double              * U;                               /* ptr to U */
   int                 * IWORK;     /* integer workspace for swapping */
   void                * * * buffers[2];   /* buffers for panel bcast */
   int                 counts [2];          /* counts for panel bcast */
   MPI_Datatype        dtypes [2];      /* data types for panel bcast */
   MPI_Request         request[1];        /* requests for panel bcast */
   MPI_Status          status [1];          /* status for panel bcast */
   int                 nb;            /* distribution blocking factor */
   int                 jb;                             /* panel width */
   int                 m;   /* global # of rows of trailing part of A */
   int                 n;   /* global # of cols of trailing part of A */
   int                 ia;  /* global row index of trailing part of A */
   int                 ja;  /* global col index of trailing part of A */
   int                 mp;   /* local # of rows of trailing part of A */
   int                 nq;   /* local # of cols of trailing part of A */
   int                 ii;   /* local row index of trailing part of A */
   int                 jj;   /* local col index of trailing part of A */
   int                 lda;           /* local leading dim of array A */
   int                 prow;  /* proc. row owning 1st row of trail. A */
   int                 pcol;  /* proc. col owning 1st col of trail. A */
#ifdef OFFLOAD
   int                 nprow; /* proc. row owning 1st row of trail. A */
   int                 npcol; /* proc. col owning 1st col of trail. A */
#endif
   int                 msgid;           /* message id for panel bcast */
   int                 ldl2;         /* local leading dim of array L2 */
   int                 len;      /* length of the buffer to broadcast */
#ifdef HPL_CALL_VSIPL
   vsip_block_d        * Ablock;                           /* A block */
   vsip_block_d        * L1block;                         /* L1 block */
   vsip_block_d        * L2block;                         /* L2 block */
   vsip_block_d        * Ublock;                           /* U block */
#endif
#ifdef	OFFLOAD
#ifndef USE_RAWLOCK
   pthread_mutex_t     ulock;       /* lock for update load balancing */
#else
   __volatile__ unsigned int ulock __attribute__((aligned(64)));
#endif
   pthread_cond_t      ufinished;        /* If update thread finished */
   pthread_mutex_t     updatelock;              /* lock for ufinished */
#ifndef USE_RAWLOCK
   pthread_mutex_t     slock;         /* lock for swap load balancing */
#else
   __volatile__ unsigned int slock __attribute__((aligned(64)));
#endif
   pthread_cond_t      sfinished;        /* If swap   thread finished */
   pthread_mutex_t     swaplock;                /* lock for sfinished */
   int                 scurr;           /* head position for swapping */
   __volatile__ int    slast;      /* committed position for swapping */
   int                 ucurr;           /* head position for updating */
   __volatile__ int    ulast;      /* committed position for updating */
#ifdef	DETECT_TIMEOUT
   unsigned long       ulastcycle; /* last cycle for updating "ulast" */
#endif
   int                 * sdone;     /* pointer to record swap threads */
   int                 * udone;   /* pointer to record update threads */
   double              * TWORK;        /* Work pointer for host DTRSM */
   double              * GWORK;        /* Work pointer for host DGEMM */
   double              * TMWORK;        /* Work pointer for MIC DTRSM */
   double              * GMWORK;        /* Work pointer for MIC DGEMM */
#ifdef USE_MIC
   double              * MTWORK[MAX_MNODES];   /* Send Buffer for MIC */
   double              * MGWORK[MAX_MNODES];/* Receive Buffer for MIC */
#endif
   size_t              wsize;             /* Work size for Triangular */
   size_t              isize;             /* Work size for Swap       */
   size_t              tsize;     /* Work size for BLAS buffer (TRSM) */
   size_t              gsize;     /* Work size for BLAS buffer (GEMM) */
   size_t              msize;     /* Work size for BLAS buffer (MIC)  */
   size_t              ssize;          /* Sending buffer size for MIC */
   size_t              rsize;        /* Receiving buffer size for MIC */
   int                 poffset;           /* offset where swap starts */
   int                 Utrans;              /* TRSM Transposed or not */
   int                 Um;	                /* matrix parameter m */
   int                 Uk;	                /* matrix parameter k */
         /* Matrices come from  [ A C/D ]
                                [ B E   ] */
   int                 Ulda;        /* leading dimension for matrix A */
   int                 Uldb;        /* leading dimension for matrix B */
   int                 Uldd;        /* leading dimension for matrix D */
   int                 Ulde;        /* leading dimension for matrix E */
   double             * Ua;                   /* pointer for matrix A */
   double             * Ub;                   /* pointer for matrix B */
   double             * Uc;                   /* pointer for matrix C */
   double             * Ud;                   /* pointer for matrix D */
   double             * Ue;                   /* pointer for matrix E */
   int                 srunning;       /* If swap threads are running */
   int                 urunning;     /* If update threads are running */
   int                 hcount;    /* number of queues for host update */
   int                 mcount;    /* number of queues for MIC  update */
   int                 scount;    /* number of queues for host swap   */
   int                 fcount;      /* counter to find the last queue */
   int                 ecount;      /* counter to find the last queue */
   int                 pos;      /* current position of global matrix */
   int                 crank;       /* current rank (for Bpush Bcast) */
   int                 micwidth;    /* dynamically changing swap size */
   int                 swapwidth;   /* dynamically changing swap size */
   int                 pastpeak;   /* if point is already passed peak */
   int                 shutdown;                     /* shutdown flag */
   struct HPL_S_panel  * next;           /* Pointer to the next panel */
   struct HPL_S_panel  * prev;       /* Pointer to the previous panel */
   double	       heffi, meffi;               /* Efficiency info */
  /* CLOSE START */
   double              tpfact, tbcast, tsetup, tswap, tupdate; /* Timing info */
  /* CLOSE END */
#endif
} HPL_T_panel;

/*
 * ---------------------------------------------------------------------
 * panel function prototypes
 * ---------------------------------------------------------------------
 */
#include "hpl_pgesv.h"

void                             HPL_pdpanel_new
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
   const int,
   const int,
   const int,
   HPL_T_pmat *,
   const int,
   const int,
   const int,
   HPL_T_panel * *
) );
void                             HPL_pdpanel_init
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
   const int,
   const int,
   const int,
   HPL_T_pmat *,
   const int,
   const int,
   const int,
   HPL_T_panel *
) );
int                              HPL_pdpanel_disp
STDC_ARGS( (
   HPL_T_panel * *
) );
int                              HPL_pdpanel_free
STDC_ARGS( (
   HPL_T_panel *
) );

#ifdef OFFLOAD
#define get_slast(X)    ((X) -> slast)
#define get_ulast(X)    ((X) -> ulast)

int set_slast(HPL_T_panel *PANEL, int id, int newpos, int clear);
int set_ulast(HPL_T_panel *PANEL, int id, int newpos, int clear);

void HPL_pdpanel_initialize(HPL_T_grid *, HPL_T_palg *,
			    const int, const int, const int, HPL_T_pmat *,
			    const int, const int, const int, HPL_T_panel *);

int HPL_pdpanel_deinitialize(HPL_T_panel *);

void HPL_pdpanel_alloc(HPL_T_grid *, HPL_T_palg *,
		       const int, const int,  const int,
		       HPL_T_pmat *, HPL_T_panel *);

int HPL_pdpanel_dealloc(HPL_T_panel *);

#endif

#endif
/*
 * End of hpl_panel.h
 */
