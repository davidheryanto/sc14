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
#ifndef HPL_PGESV_H
#define HPL_PGESV_H
/*
 * ---------------------------------------------------------------------
 * Include files
 * ---------------------------------------------------------------------
 */
#include "hpl_misc.h"
#include "hpl_blas.h"
#include "hpl_auxil.h"

#include "hpl_pmisc.h"
#include "hpl_grid.h"
#include "hpl_comm.h"
#include "hpl_pauxil.h"
#include "hpl_panel.h"
#include "hpl_pfact.h"
/*
 * ---------------------------------------------------------------------
 * #typedefs and data structures
 * ---------------------------------------------------------------------
 */
typedef enum
{
   HPL_SWAP00        = 451,                      /* Use HPL_pdlaswp00 */
   HPL_SWAP01        = 452,                      /* Use HPL_pdlaswp01 */
   HPL_SW_MIX        = 453, /* Use HPL_pdlaswp00_ for small number of */
                            /* columns, and HPL_pdlaswp01_ otherwise. */
   HPL_NO_SWP        = 499
} HPL_T_SWAP;

typedef struct HPL_S_palg
{
   HPL_T_TOP           btopo;               /* row broadcast topology */
   int                 depth;                     /* look-ahead depth */
   int                 nbdiv;            /* recursive division factor */
   int                 nbmin;         /* recursion stopping criterium */
   HPL_T_FACT          pfact;                   /* panel fact variant */
   HPL_T_FACT          rfact;               /* recursive fact variant */
   HPL_T_PFA_FUN       pffun;              /* panel fact function ptr */
   HPL_T_RFA_FUN       rffun;          /* recursive fact function ptr */
#ifndef	OFFLOAD
   HPL_T_UPD_FUN       upfun;                      /* update function */
#else
   int                 upfun;                      /* update function */
#endif
   HPL_T_SWAP          fswap;                   /* Swapping algorithm */
   int                 fsthr;                   /* Swapping threshold */
   int                 equil;                        /* Equilibration */
   int                 align;              /* data alignment constant */
} HPL_T_palg;

typedef struct HPL_S_pmat
{
#ifdef HPL_CALL_VSIPL
   vsip_block_d        * block;
#endif
   double              * A;            /* pointer to local piece of A */
   double              * X;             /* pointer to solution vector */
   int                 n;                      /* global problem size */
   int                 nb;                         /* blocking factor */
   int                 ld;                 /* local leading dimension */
   int                 mp;                    /* local number of rows */
   int                 nq;                 /* local number of columns */
   int                 info;                    /* computational flag */
#ifdef	OFFLOAD
   size_t              size;
#endif
} HPL_T_pmat;
/*
 * ---------------------------------------------------------------------
 * #define macro constants
 * ---------------------------------------------------------------------
 */
#define    MSGID_BEGIN_PFACT   1001              /* message id ranges */
#define    MSGID_END_PFACT     2000
#define    MSGID_BEGIN_FACT    2001
#define    MSGID_END_FACT      3000
#define    MSGID_BEGIN_PTRSV   3001
#define    MSGID_END_PTRSV     4000
#define    MSGID_BEGIN_BCAST   5001
 
#define    MSGID_BEGIN_COLL    9001
#define    MSGID_END_COLL     10000

#define    MSGID_BEGIN_SWAP   10001
#define    MSGID_END_SWAP   9999999

/*
 * ---------------------------------------------------------------------
 * #define macros definitions
 * ---------------------------------------------------------------------
 */
#define    MNxtMgid( id_, beg_, end_ ) \
                             (( (id_)+1 > (end_) ?  (beg_) : (id_)+1 ))
/*
 * ---------------------------------------------------------------------
 * Function prototypes
 * ---------------------------------------------------------------------
 */
void                             HPL_pipid
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   int *
) );
void                             HPL_plindx0
STDC_ARGS( (
   HPL_T_panel *,
   const int,
   int *,
   int *,
   int *,
   int *
) );
void                             HPL_pdlaswp00N
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );
void                             HPL_pdlaswp00NX
STDC_ARGS( (
   HPL_T_panel *,
   const int,
   const int,
   int,
   double *
) );
void                             HPL_pdlaswp01NX
STDC_ARGS( (
   HPL_T_panel *,
   const int,
   const int,
   int,
   double *
) );
void                             HPL_pdlaswp00T
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );

void                             HPL_perm
STDC_ARGS( (
   const int,
   int *,
   int *,
   int *
) );
void                             HPL_logsort
STDC_ARGS( (
   const int,
   const int,
   int *,
   int *,
   int *
) );
void                             HPL_plindx10
STDC_ARGS( (
   HPL_T_panel *,
   const int,
   const int *,
   int *,
   int *,
   int *
) );
void                             HPL_plindx1
STDC_ARGS( (
   HPL_T_panel *,
   const int,
   const int *,
   int *,
   int *,
   int *,
   int *,
   int *,
   int *,
   int *,
   int *
) );
void                             HPL_spreadN
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const enum HPL_SIDE,
   const int,
   double *,
   const int,
   const int,
   const int *,
   const int *,
   const int *
) );
void                             HPL_spreadNX
STDC_ARGS( (
   HPL_T_panel *,
   const enum HPL_SIDE,
   const int,
   double *,
   const int,
   const int,
   const int *,
   const int *,
   const int *,
   const int
) );
void                             HPL_spreadT
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const enum HPL_SIDE,
   const int,
   double *,
   const int,
   const int,
   const int *,
   const int *,
   const int *
) );
void                             HPL_equil
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const enum HPL_TRANS,
   const int,
   double *,
   const int,
   int *,
   const int *,
   const int *,
   int *
) );
void                             HPL_rollN
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int,
   double *,
   const int,
   const int *,
   const int *,
   const int *
) );
void                             HPL_rollNX
STDC_ARGS( (
   HPL_T_panel *,
   const int,
   double *,
   const int,
   const int *,
   const int *,
   const int *,
   const int
) );
void                             HPL_rollT
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int,
   double *,
   const int,
   const int *,
   const int *,
   const int *
) );
void                             HPL_pdlaswp01N
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );
void                             HPL_pdlaswp01T
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );

void                             HPL_pdupdateNN
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );
void                             HPL_pdupdateNT
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );
void                             HPL_pdupdateTN
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );
void                             HPL_pdupdateTT
STDC_ARGS( (
   HPL_T_panel *,
   int *,
   HPL_T_panel *,
   const int
) );
void                             HPL_pdupdate_panel
STDC_ARGS( (
   HPL_T_panel *
) );
void                             HPL_pdupdate_sync
STDC_ARGS( (
   HPL_T_panel *
) );

void                             HPL_pdgesv0
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
   HPL_T_pmat *
) );
#ifdef OFFLOAD
void                             HPL_pdgesv0X
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
   HPL_T_pmat *,
   HPL_T_panel *
) );
#endif
void                             HPL_pdgesvK1
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
#ifdef OFFLOAD
   HPL_T_pmat *,
   HPL_T_panel *
#else
   HPL_T_pmat *
#endif
) );
void                             HPL_pdgesvK2
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
#ifdef OFFLOAD
   HPL_T_pmat *,
   HPL_T_panel *
#else
   HPL_T_pmat *
#endif
) );
void                             HPL_pdgesv
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
   HPL_T_pmat *
) );
#ifdef OFFLOAD
void                             HPL_pdgesvX
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_palg *,
   HPL_T_pmat *,
   HPL_T_panel *
) );
#endif
void                             HPL_pdtrsv
STDC_ARGS( (
   HPL_T_grid *,
   HPL_T_pmat *
) );

void HPL_pdtrsv_colreblock(HPL_T_grid *, HPL_T_pmat *);

void                             HPL_pdupdate_start
STDC_ARGS( (
  void
) );

void                             HPL_pdupdate_shutdown
STDC_ARGS( (
  void
) );
void                             HPL_pdupdate_init
STDC_ARGS( (
   HPL_T_panel *
) );
void                             HPL_pdupdate_serv
STDC_ARGS( (
   HPL_T_panel *
) );
void                             HPL_pdswap_start
STDC_ARGS( (
  void
) );

void                             HPL_pdswap_shutdown
STDC_ARGS( (
  void
) );

void                             HPL_pdswap_thread
STDC_ARGS( (
   int,
   HPL_T_panel *,
   double *
) );

int HPL_pdupdate_tile(HPL_T_panel *, double *, int, int, int);

void HPL_pdswap_init(HPL_T_panel *);
void HPL_pdswap_sync(HPL_T_panel *);
void HPL_pdswap_serv(HPL_T_panel *);
void HPL_pdlaswp00NX_init(HPL_T_panel *);
void HPL_pdlaswp01NX_init(HPL_T_panel *);

#endif
/*
 * End of hpl_pgesv.h
 */ 
