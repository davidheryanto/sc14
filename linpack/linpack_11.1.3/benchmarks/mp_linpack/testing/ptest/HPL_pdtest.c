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
 * ---------------------------------------------------------------------
 */ 
/*
 * Include files
 */
#include "hpl.h"

#ifdef CMDLINE_OPTIONS
extern float cmdline_f;
#endif

#ifdef COLREBLOCKING
extern int hpl_heterogeneous;
#endif

#ifdef STDC_HEADERS
void HPL_pdtest
(
   HPL_T_test *                     TEST,
   HPL_T_grid *                     GRID,
   HPL_T_palg *                     ALGO,
   const int                        N,
   const int                        NB
)
#else
void HPL_pdtest
( TEST, GRID, ALGO, N, NB )
   HPL_T_test *                     TEST;
   HPL_T_grid *                     GRID;
   HPL_T_palg *                     ALGO;
   const int                        N;
   const int                        NB;
#endif
{
/* 
 * Purpose
 * =======
 *
 * HPL_pdtest performs  one  test  given a set of parameters such as the
 * process grid, the  problem size, the distribution blocking factor ...
 * This function generates  the data, calls  and times the linear system
 * solver,  checks  the  accuracy  of the  obtained vector solution  and
 * writes this information to the file pointed to by TEST->outfp.
 *
 * Arguments
 * =========
 *
 * TEST    (global input)                HPL_T_test *
 *         On entry,  TEST  points  to a testing data structure:  outfp
 *         specifies the output file where the results will be printed.
 *         It is only defined and used by the process  0  of the  grid.
 *         thrsh  specifies  the  threshhold value  for the test ratio.
 *         Concretely, a test is declared "PASSED"  if and only if the
 *         following inequality is satisfied:
 *         ||Ax-b||_oo / ( epsil *
 *                         ( || x ||_oo * || A ||_oo + || b ||_oo ) *
 *                          N )  < thrsh.
 *         epsil  is the  relative machine precision of the distributed
 *         computer. Finally the test counters, kfail, kpass, kskip and
 *         ktest are updated as follows:  if the test passes,  kpass is
 *         incremented by one;  if the test fails, kfail is incremented
 *         by one; if the test is skipped, kskip is incremented by one.
 *         ktest is left unchanged.
 *
 * GRID    (local input)                 HPL_T_grid *
 *         On entry,  GRID  points  to the data structure containing the
 *         process grid information.
 *
 * ALGO    (global input)                HPL_T_palg *
 *         On entry,  ALGO  points to  the data structure containing the
 *         algorithmic parameters to be used for this test.
 *
 * N       (global input)                const int
 *         On entry,  N specifies the order of the coefficient matrix A.
 *         N must be at least zero.
 *
 * NB      (global input)                const int
 *         On entry,  NB specifies the blocking factor used to partition
 *         and distribute the matrix A. NB must be larger than one.
 *
 * ---------------------------------------------------------------------
 */ 
/*
 * .. Local Variables ..
 */
#ifdef HPL_DETAILED_TIMING
   double                     HPL_w[HPL_TIMING_N];
#endif
   HPL_T_pmat                 mat;
   HPL_T_panel                panel[3];
   double                     wtime[1];
   int                        info[3];
   double                     Anorm1, AnormI, Gflops, Xnorm1, XnormI,
                              BnormI, resid0, resid1;
   double                     * Bptr;
   void                       * vptr = NULL;
   static int                 first=1;
   int                        ii, ip2, maxmp, mycol, myrow, npcol, nprow, nq, jindx;
   char                       ctop, cpfact, crfact;
   time_t                     current_time_start, current_time_end;
/* ..
 * .. Executable Statements ..
 */

   HPL_grid_info( GRID, &nprow, &npcol, &myrow, &mycol );

#ifdef OFFLOAD
   hpl_global.nprow = nprow;
   hpl_global.npcol = npcol;
   hpl_global.myrow = myrow;
   hpl_global.mycol = mycol;
#endif

   mat.n  = N; mat.nb = NB; mat.info = 0;
   mat.mp = HPL_numroc( N, NB, NB, myrow, 0, nprow );
#ifdef COLREBLOCKING
   if ( hpl_heterogeneous )
   {
      HPL_assigncols ( N, NB, 0, GRID );
      nq     = HPL_numrocJ( N, NB, NB, mycol, 0, npcol );
   } else 
#endif
   {
      nq     = HPL_numroc( N, NB, NB, mycol, 0, npcol );
   }
   
  
   mat.nq = nq + 1;

/*
 * Allocate matrix, right-hand-side, and vector solution x. [ A | b ] is
 * N by N+1.  One column is added in every process column for the solve.
 * The  result  however  is stored in a 1 x N vector replicated in every
 * process row. In every process, A is lda * (nq+1), x is 1 * nq and the
 * workspace is mp. 
 *
 * Ensure that lda is a multiple of ALIGN and not a power of 2
 */

   maxmp = HPL_numroc( N, NB, NB, 0, 0, nprow);

#ifdef OFFLOAD
#define        ALIGNMENT_SIZE  64
   mat.ld   = (maxmp + ALIGNMENT_SIZE - 1) & ~(ALIGNMENT_SIZE - 1);
   mat.ld -= ALIGNMENT_SIZE / 2;
   while (mat.ld < maxmp) mat.ld += ALIGNMENT_SIZE;

  /* CLOSE START */
#if 0
   mat.ld  = ((maxmp + hpl_global.ldalign - 1) & ~(hpl_global.ldalign - 1)) | hpl_global.ldoffset;

   if (hpl_global.rank == 0) {
     int i;
     printf("Matrix Size = %d  Leading dimension = %d ", maxmp, mat.ld);
     for (i = 31; i >= 0; i --) printf("%d",  (mat.ld & (1UL << i))? 1:0);
     printf("\n\n");
     fflush(stdout);
   }
#endif
  /* CLOSE END */

   mat.size = (size_t)(mat.ld + 1) * (size_t)mat.nq * sizeof(double) + ALGO -> align;
#else
   mat.ld = ( ( Mmax( 1, mat.mp ) - 1 ) / ALGO->align ) * ALGO->align;
   do
   {
      ii = ( mat.ld += ALGO->align ); ip2 = 1;
      while( ii > 1 ) { ii >>= 1; ip2 <<= 1; }
   }
   while( mat.ld == ip2 );
#endif


#ifdef OFFLOAD
   mat.A    = (double *)ialloc(IALLOC_INTERLEAVE, -1, mat.size);
   mat.X    = Mptr( mat.A, 0, mat.nq, mat.ld );
   info[0] = (mat.A == NULL);
#else
   vptr = (void*)malloc( ( (size_t)(ALGO->align) +
                           (size_t)(mat.ld+1) * (size_t)(mat.nq) ) *
                         sizeof(double) );
   info[0] = (vptr == NULL); 
#endif

   info[1] = myrow;
   info[2] = mycol;

   HPL_all_reduce( (void *)(info), 3, HPL_INT, HPL_max, GRID -> all_comm );

   if( info[0] != 0 )
   {
      if( ( myrow == 0 ) && ( mycol == 0 ) )
         HPL_pwarn( TEST->outfp, __LINE__, "HPL_pdtest",
                    "[%d,%d] %s", info[1], info[2],
                    "Memory allocation failed for A, x and b. Skip." );
      (TEST->kskip)++;
      return;
   }

#if 0
   printf("Node Info[%3d, %3d] %s\n", GRID -> myrow, GRID -> mycol, hpl_global.hostname);
   fflush(stdout);
#endif

#ifdef OFFLOAD
   HPL_pdpanel_alloc( GRID, ALGO, N, N + 1, NB, &mat, &panel[0] );
   HPL_pdpanel_alloc( GRID, ALGO, N, N + 1, NB, &mat, &panel[1] );
#ifdef USE_THREE_PANEL
   HPL_pdpanel_alloc( GRID, ALGO, N, N + 1, NB, &mat, &panel[2] );
#endif

#ifdef USE_THREE_PANEL
   panel[0].prev = &panel[2];
   panel[0].next = &panel[1];
   panel[1].prev = &panel[0];
   panel[1].next = &panel[2];
   panel[2].prev = &panel[1];
   panel[2].next = &panel[0];
#else
   panel[0].prev = &panel[1];
   panel[0].next = &panel[1];
   panel[1].prev = &panel[0];
   panel[1].next = &panel[0];
#endif
#else
   mat.A  = (double *)HPL_PTR( vptr,
                               ((size_t)(ALGO->align) * sizeof(double) ) );
   mat.X  = Mptr( mat.A, 0, mat.nq, mat.ld );
#endif

#ifdef USE_MIC
   if (hpl_global.pnummic > 0) mic_panel_start(panel, mat.mp, NB);
#endif

/*
 * generate matrix and right-hand-side, [ A | b ] which is N by N+1.
 */
#ifdef COLREBLOCKING
   if ( hpl_heterogeneous ) 
   {
      HPL_pdmatgen_slow ( GRID, N, N+1, NB, mat.A, mat.ld, HPL_ISEED );
   } else
#endif
   {
      HPL_pdmatgen( GRID, N, N+1, NB, mat.A, mat.ld, HPL_ISEED );
   }

#ifdef OFFLOAD
   /* Check if swap happend */
   checkswapsize();

#ifdef USE_MIC
   if (hpl_global.pnummic > 0) mic_panel_sync(panel);
#endif

#endif

/*
 * Solve linear system
 */

   HPL_ptimer_boot();

   HPL_barrier( GRID->all_comm );
   time ( &current_time_start );

   HPL_ptimer( 0 );

#ifdef OFFLOAD
   HPL_pdgesvX( GRID, ALGO, &mat, panel);
#else
   HPL_pdgesv( GRID, ALGO, &mat );
#endif

   HPL_ptimer( 0 );
   time ( &current_time_end );

#ifdef USE_MIC
   micthread_shutdown();

   mic_work_free();

   mic_panel_free(panel);
#endif

#ifdef OFFLOAD
#ifdef USE_THREE_PANEL
   HPL_pdpanel_dealloc( &panel[2] );
#endif
   HPL_pdpanel_dealloc( &panel[1] );
   HPL_pdpanel_dealloc( &panel[0] );
#endif

/*
 * Gather max of all CPU and WALL clock timings and print timing results
 */
   HPL_ptimer_combine( GRID->all_comm, HPL_AMAX_PTIME, HPL_WALL_PTIME, 1, 0, wtime );

   if( ( myrow == 0 ) && ( mycol == 0 ) )
   {
      if( first )
      {
         HPL_fprintf( TEST->outfp, "%s%s\n",
                      "========================================",
                      "========================================" );
         HPL_fprintf( TEST->outfp, "%s%s\n",
                      "T/V                N    NB     P     Q",
                      "               Time                 Gflops" );
         HPL_fprintf( TEST->outfp, "%s%s\n",
                      "----------------------------------------",
                      "----------------------------------------" );
         if( TEST->thrsh <= HPL_rzero ) first = 0;
      }

/*
 * 2/3 N^3 - 1/2 N^2 flops for LU factorization + 2 N^2 flops for solve.
 * Print WALL time
 */

      Gflops = ( ( (double)(N) /   1.0e+9 ) * 
                 ( (double)(N) / wtime[0] ) ) * 
                 ( ( 2.0 / 3.0 ) * (double)(N) + ( 3.0 / 2.0 ) );

      cpfact = ( ( (HPL_T_FACT)(ALGO->pfact) == 
                   (HPL_T_FACT)(HPL_LEFT_LOOKING) ) ?  (char)('L') :
                 ( ( (HPL_T_FACT)(ALGO->pfact) == (HPL_T_FACT)(HPL_CROUT) ) ?
                   (char)('C') : (char)('R') ) );
      crfact = ( ( (HPL_T_FACT)(ALGO->rfact) == 
                   (HPL_T_FACT)(HPL_LEFT_LOOKING) ) ?  (char)('L') :
                 ( ( (HPL_T_FACT)(ALGO->rfact) == (HPL_T_FACT)(HPL_CROUT) ) ? 
                   (char)('C') : (char)('R') ) );

      if(      ALGO->btopo == HPL_1RING   ) ctop = '0';
      else if( ALGO->btopo == HPL_1RING_M ) ctop = '1';
      else if( ALGO->btopo == HPL_2RING   ) ctop = '2';
      else if( ALGO->btopo == HPL_2RING_M ) ctop = '3';
      else if( ALGO->btopo == HPL_BLONG   ) ctop = '4';
      else if( ALGO->btopo == HPL_BLONG_M ) ctop = '5';
      else /* if( ALGO->btopo == HPL_BPUSH ) */ ctop = '6';

#if 0
      if( wtime[0] > HPL_rzero )
#endif
      {
#ifdef COLREBLOCKING         
         if ( hpl_heterogeneous == 1 ) HPL_fprintf( TEST->outfp, "WH");
         else
#endif
         HPL_fprintf( TEST->outfp,"W" );
         HPL_fprintf( TEST->outfp,
             "%c%1d%c%c%1d%c%1d%12d %5d %5d %5d %18.2f   %20.5e\n",
             ( GRID->order == HPL_ROW_MAJOR ? 'R' : 'C' ),
             ALGO->depth, ctop, crfact, ALGO->nbdiv, cpfact, ALGO->nbmin,
             N, NB, nprow, npcol, wtime[0], Gflops );
         HPL_fprintf( TEST->outfp,
             "HPL_pdgesv() start time %s\n", ctime( &current_time_start ) );
         HPL_fprintf( TEST->outfp,
             "HPL_pdgesv() end time   %s\n", ctime( &current_time_end ) );
      }
   }

/*
 * Quick return, if I am not interested in checking the computations
 */

   if( TEST->thrsh <= HPL_rzero ) {
     (TEST->kpass)++;
#ifdef OFFLOAD
     if(mat.A) ifree(mat.A, mat.size, IALLOC_NONE); 
#else
     if( vptr ) free( vptr );
#endif
     return;
   }

/*
 * Check info returned by solve
 */
   if( mat.info != 0 )
   {
      if( ( myrow == 0 ) && ( mycol == 0 ) )
         HPL_pwarn( TEST->outfp, __LINE__, "HPL_pdtest", "%s %d, %s", 
                    "Error code returned by solve is", mat.info, "skip" );
      (TEST->kskip)++;
#ifdef OFFLOAD
      if(mat.A) ifree(mat.A, mat.size, IALLOC_NONE);
#else
      if( vptr ) free( vptr );
#endif
      return;
   }
/*
 * Check computation, re-generate [ A | b ], compute norm 1 and inf of A and x,
 * and norm inf of b - A x. Display residual checks.
 */
#ifdef COLREBLOCKING
   if ( hpl_heterogeneous ) 
   {
      // printf("calling HPL_pdmatgen_slow2\n");
      HPL_pdmatgen_slow ( GRID, N, N+1, NB, mat.A, mat.ld, HPL_ISEED );
   } else
#endif
   {
      // printf("Calling HPL_pdmatgen fast\n");
      HPL_pdmatgen( GRID, N, N+1, NB, mat.A, mat.ld, HPL_ISEED );
   }

   Anorm1 = HPL_pdlange( GRID, HPL_NORM_1, N, N, NB, mat.A, mat.ld );
   AnormI = HPL_pdlange( GRID, HPL_NORM_I, N, N, NB, mat.A, mat.ld );
/*
 * Because x is distributed in process rows, switch the norms
 */
   XnormI = HPL_pdlange( GRID, HPL_NORM_1, 1, N, NB, mat.X, 1 );
   Xnorm1 = HPL_pdlange( GRID, HPL_NORM_I, 1, N, NB, mat.X, 1 );
/*
 * If I am in the col that owns b, (1) compute local BnormI, (2) all_reduce to
 * find the max (in the col). Then (3) broadcast along the rows so that every
 * process has BnormI. Note that since we use a uniform distribution in [-0.5,0.5]
 * for the entries of B, it is very likely that BnormI (<=,~) 0.5.
 */
   Bptr = Mptr( mat.A, 0, nq, mat.ld );
#ifndef COLREBLOCKING
   jindx = HPL_indxg2p( N, NB, NB, 0, npcol );
#else
   jindx = HPL_indxg2pj( N, NB, NB, 0, npcol );
#endif
   if ( mycol == jindx ) {
      if( mat.mp > 0 )
      {
         BnormI = Bptr[HPL_idamax( mat.mp, Bptr, 1 )]; BnormI = Mabs( BnormI );
      }
      else
      {
         BnormI = HPL_rzero;
      }
      (void) HPL_all_reduce( (void *)(&BnormI), 1, HPL_DOUBLE, HPL_max,
                             GRID->col_comm );
   }
   (void) HPL_broadcast( (void *)(&BnormI), 1, HPL_DOUBLE, jindx,
                          GRID->row_comm );
/*
 * If I own b, compute ( b - A x ) and ( - A x ) otherwise
 */
   if ( mycol == jindx )
   {
      HPL_dgemv( HplColumnMajor, HplNoTrans, mat.mp, nq, -HPL_rone,
                 mat.A, mat.ld, mat.X, 1, HPL_rone, Bptr, 1 );
   }
   else if( nq > 0 )
   {
      HPL_dgemv( HplColumnMajor, HplNoTrans, mat.mp, nq, -HPL_rone,
                 mat.A, mat.ld, mat.X, 1, HPL_rzero, Bptr, 1 );
   }
   else { for( ii = 0; ii < mat.mp; ii++ ) Bptr[ii] = HPL_rzero; }
/*
 * Reduce the distributed residual in process column 0
 */
   if( mat.mp > 0 )
      (void) HPL_reduce( Bptr, mat.mp, HPL_DOUBLE, HPL_sum, 0,
                         GRID->row_comm );
/*
 * Compute || b - A x ||_oo
 */
   resid0 = HPL_pdlange( GRID, HPL_NORM_I, N, 1, NB, Bptr, mat.ld );
/*
 * Computes and displays norms, residuals ...
 */
   if( N <= 0 )
   {
      resid1 = HPL_rzero;
   }
   else
   {
      resid1 = resid0 / ( TEST->epsil * ( AnormI * XnormI + BnormI ) * (double)(N) );
   }

   if( resid1 < TEST->thrsh ) (TEST->kpass)++;
   else                       (TEST->kfail)++;

   if( ( myrow == 0 ) && ( mycol == 0 ) )
   {
      HPL_fprintf( TEST->outfp, "%s%s\n",
                   "----------------------------------------",
                   "----------------------------------------" );
      HPL_fprintf( TEST->outfp, "%s%16.7f%s%s\n",
         "||Ax-b||_oo/(eps*(||A||_oo*||x||_oo+||b||_oo)*N)= ", resid1,
         " ...... ", ( resid1 < TEST->thrsh ? "PASSED" : "FAILED" ) );

#ifndef COLREBLOCKING_DEBUG2
      if( resid1 >= TEST->thrsh ) 
#endif
      {
         HPL_fprintf( TEST->outfp, "%s%18.6f\n",
         "||Ax-b||_oo  . . . . . . . . . . . . . . . . . = ", resid0 );
         HPL_fprintf( TEST->outfp, "%s%18.6f\n",
         "||A||_oo . . . . . . . . . . . . . . . . . . . = ", AnormI );
         HPL_fprintf( TEST->outfp, "%s%18.6f\n",
         "||A||_1  . . . . . . . . . . . . . . . . . . . = ", Anorm1 );
         HPL_fprintf( TEST->outfp, "%s%18.6f\n",
         "||x||_oo . . . . . . . . . . . . . . . . . . . = ", XnormI );
         HPL_fprintf( TEST->outfp, "%s%18.6f\n",
         "||x||_1  . . . . . . . . . . . . . . . . . . . = ", Xnorm1 );
         HPL_fprintf( TEST->outfp, "%s%18.6f\n",
         "||b||_oo . . . . . . . . . . . . . . . . . . . = ", BnormI );
      }
   }
#ifdef OFFLOAD
   if(mat.A) ifree(mat.A, mat.size, IALLOC_NONE);
#else
   if( vptr ) free( vptr );
#endif

   if (TEST -> kfail) exit(1);

/*
 * End of HPL_pdtest
 */
}
