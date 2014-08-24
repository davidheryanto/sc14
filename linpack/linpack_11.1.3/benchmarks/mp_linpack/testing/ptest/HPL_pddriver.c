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
#ifdef HYBRID
#include "omp.h"
#ifndef WIN32
#include "sched.h"
#endif
#endif

#ifdef CMDLINE_OPTIONS
#include <math.h>

int cmdline_n=-1, cmdline_nb=-1, cmdline_p=-1, cmdline_q=-1, cmdline_m=-1;
int cmdline_c=-1;
float cmdline_f=-1.0;
float *column_factor=NULL;
#endif
int hpl_heterogeneous = 0;

#ifdef HYBRID
int hybrid=0, numthreads=1, pt, qt;
void CommThread_Init(void);
void CommThread_Deinit(void);
#endif

#ifdef STDC_HEADERS
int main
(
   int                        ARGC,
   char                       * * ARGV
)
#else
int main( ARGC, ARGV )
/*
 * .. Scalar Arguments ..
 */
   int                        ARGC;
/*
 * .. Array Arguments ..
 */
   char                       * * ARGV;
#endif
{
/* 
 * Purpose
 * =======
 *
 * main is the main driver program for testing the HPL routines.
 * This  program is  driven  by  a short data file named  "HPL.dat".
 *
 * ---------------------------------------------------------------------
 */ 
/*
 * .. Local Variables ..
 */
   int                        nval  [HPL_MAX_PARAM],
                              nbval [HPL_MAX_PARAM],
                              pval  [HPL_MAX_PARAM],
                              qval  [HPL_MAX_PARAM],
                              nbmval[HPL_MAX_PARAM],
                              ndvval[HPL_MAX_PARAM],
                              ndhval[HPL_MAX_PARAM];

   HPL_T_FACT                 pfaval[HPL_MAX_PARAM],
                              rfaval[HPL_MAX_PARAM];

   HPL_T_TOP                  topval[HPL_MAX_PARAM];

   HPL_T_grid                 grid;
   HPL_T_palg                 algo;
   HPL_T_test                 test;
   int                        L1notran, Unotran, align, equil, in, inb,
                              inbm, indh, indv, ipfa, ipq, irfa, itop,
                              mycol, myrow, ns, nbs, nbms, ndhs, ndvs,
                              npcol, npfs, npqs, nprow, nrfs, ntps, 
                              tswap, maxnb, mainaffinity;
   HPL_T_ORDER                pmapping;
   HPL_T_FACT                 rpfa;
   HPL_T_SWAP                 fswap;
   size_t                     aligned;
   int required = MPI_THREAD_MULTIPLE, provided, rank, size; //FUNNELED
#ifdef SWEEP
   int                        NX;
#endif

/* ..
 * .. Executable Statements ..
 */

#ifdef PROFILE
   moncontrol(0);
#endif

#ifdef OFFLOAD
   /* Select best architecture */
   arch_init();

   /* Global initialization */
   ginit();
#endif

#ifdef CMDLINE_OPTIONS
   {
#ifndef MIN
#define MIN(x,y) ((x)>(y)?(y):(x))
#endif

     int loop, numval;
     char *arg, args;
     for ( loop = 2 ; (loop <= ARGC) ; loop += 2 ) {
       arg = ARGV[loop-1]; 
       args = arg[0];
       if ( (strlen(arg)==2) && (args=='-') ) {
         args = arg[1];
         if ( args=='f') cmdline_f = atof(ARGV[loop]);
         else
	   {
	     numval = atoi(ARGV[loop]);
	     if ( args=='n' ) cmdline_n  = numval;
	     if ( args=='c' ) cmdline_c  = numval;
	     if ( args=='b' ) cmdline_nb = numval;
	     if ( args=='p' ) cmdline_p  = numval;
	     if ( args=='q' ) cmdline_q  = numval;
	     if ( args=='m' ) cmdline_m  = numval;
	   }
       }
     }
     if ( (cmdline_m > 8) && (cmdline_p > 0) && (cmdline_q > 0) )
       {
	 cmdline_n = sqrt((double)(cmdline_m/8.0)*(double)cmdline_p*(double)cmdline_q)*1000;
	 /* Make this a multiple of 1000 or 768, whichever is closer */
	 cmdline_n += MIN(1000-cmdline_n%1000,768-cmdline_n%768);  
       } 
     /* Override whatever is in the HPL.dat */
     if ( cmdline_n > 0 ) { ns = 1; nval[0] = cmdline_n; }
     if ( cmdline_nb > 0 ) { nbs = 1; nbval[0] = cmdline_nb; }
     if ( (cmdline_p > 0) && (cmdline_q > 0) ) { npqs = 1; pval[0]=cmdline_p; qval[0]= cmdline_q; }
   }
#endif 

#ifdef OFFLOAD
   mainaffinity = setaffinity(0, AFFINITY_ANY, 0);

 #ifdef MPI_SERVER
   hpl_global.numupdates --;

   hpl_global.mpi = setaffinity(0, AFFINITY_ANY, 1);
 #endif

   /* Interleaved memory mapping initialization */
   iinit();

   if (hpl_global.numswaps) hpl_global.swapaffinity = setaffinity(0, AFFINITY_ANY, 1);
#endif

#ifdef USE_MIC
   if (mic_init() != 0) {
     printf("%s : MIC initialization failed. HPL aborted.\n", hpl_global.hostname);
     exit(1);
   }
#elif defined(OFFLOAD)
   hpl_global.lnummic = 0;
   hpl_global.pnummic = 0;
   hpl_global.snummic = 1;
#endif

#ifdef HYBRID
   MPI_Init_thread( &ARGC, &ARGV ,required,&provided);
   MPI_Comm_rank( MPI_COMM_WORLD, &rank );
   MPI_Comm_size( MPI_COMM_WORLD, &size );
#elif defined(OFFLOAD)
   iMPI_Init ( &ARGC, &ARGV );
   iMPI_Comm_rank( MPI_COMM_WORLD, &hpl_global.rank );
   iMPI_Comm_size( MPI_COMM_WORLD, &hpl_global.size );
#else
   MPI_Init ( &ARGC, &ARGV );
 #ifdef HPL_CALL_VSIPL
   vsip_init((void*)0);
 #endif
   MPI_Comm_rank( MPI_COMM_WORLD, &rank );
   MPI_Comm_size( MPI_COMM_WORLD, &size );
#endif

#ifdef OFFLOAD
   /* Force to set */
   setaffinity(mainaffinity, AFFINITY_FORCE, 0);
#endif

#ifdef USE_MIC
   if ( hpl_global.rank == 0 ) {
     printf("Number of Intel(R) Xeon Phi(TM) coprocessors : %d\n", hpl_global.pnummic);
   }
#endif

   //   findthreads2();

/*
 * Read and check validity of test parameters from input file
 *
 * HPL Version 1.0, Linpack benchmark input file
 * Your message here
 * HPL.out      output file name (if any)
 * 6            device out (6=stdout,7=stderr,file)
 * 4            # of problems sizes (N)
 * 29 30 34 35  Ns
 * 4            # of NBs
 * 1 2 3 4      NBs
 * 0            PMAP process mapping (0=Row-,1=Column-major)
 * 3            # of process grids (P x Q)
 * 2 1 4        Ps
 * 2 4 1        Qs
 * 16.0         threshold
 * 3            # of panel fact
 * 0 1 2        PFACTs (0=left, 1=Crout, 2=Right)
 * 2            # of recursive stopping criterium
 * 2 4          NBMINs (>= 1)
 * 1            # of panels in recursion
 * 2            NDIVs
 * 3            # of recursive panel fact.
 * 0 1 2        RFACTs (0=left, 1=Crout, 2=Right)
 * 1            # of broadcast
 * 0            BCASTs (0=1rg,1=1rM,2=2rg,3=2rM,4=Lng,5=LnM)
 * 1            # of lookahead depth
 * 0            DEPTHs (>=0)
 * 2            SWAP (0=bin-exch,1=long,2=mix)
 * 4            swapping threshold
 * 0            L1 in (0=transposed,1=no-transposed) form
 * 0            U  in (0=transposed,1=no-transposed) form
 * 1            Equilibration (0=no,1=yes)
 * 8            memory alignment in double (> 0)
 */

   HPL_pdinfo( &test, &ns, nval, &nbs, nbval, &pmapping, &npqs, pval, qval,
               &npfs, pfaval, &nbms, nbmval, &ndvs, ndvval, &nrfs, rfaval,
               &ntps, topval, &ndhs, ndhval, &fswap, &tswap, &L1notran,
               &Unotran, &equil, &align);

#ifdef HYBRID
   CommThread_Init();
#endif

   /* Allocating buffer for DTRSM/DGEMM */

   maxnb = 0;

   for( inb = 0; inb < nbs; inb++ ) if (maxnb < nbval[inb]) maxnb = nbval[inb];

#ifdef OFFLOAD
   /* Work buffer for TRSM */
   aligned  = Mmax(maxnb, hpl_global.blaswidth) + 2 * GEMM_UNROLL_N - 1;
   aligned -= aligned % GEMM_UNROLL_N;

   hpl_global.mbsize  = (size_t)Mmax(maxnb, hpl_global.hostK) * aligned * sizeof(double);
   hpl_global.mbsize += hpl_global.offsetB * sizeof(double);
   hpl_global.mbsize  = (hpl_global.mbsize + NPAGE_SIZE - 1) & ~(NPAGE_SIZE - 1);

   hpl_global.buffer = (double *)ialloc(IALLOC_LOCAL, -1, hpl_global.mbsize);

   /* Work buffer for GEMM (no allocation) */
   aligned  = hpl_global.blaswidth + 2 * GEMM_UNROLL_N - 1;
   aligned -= aligned % GEMM_UNROLL_N;

   hpl_global.sbsize  = (size_t)Mmax(maxnb, hpl_global.hostK) * aligned * sizeof(double);
   hpl_global.sbsize += hpl_global.offsetB * sizeof(double);
   hpl_global.sbsize  = (hpl_global.sbsize + NPAGE_SIZE - 1) & ~(NPAGE_SIZE - 1);

   /* Panel buffer for GEMM */
   aligned  = hpl_global.hostM + 2 * GEMM_UNROLL_M - 1;
   aligned -= aligned % GEMM_UNROLL_N;

   hpl_global.pbsize  = (size_t)Mmax(maxnb, hpl_global.hostK) * aligned * sizeof(double);
   hpl_global.pbsize += hpl_global.offsetB * sizeof(double);
   hpl_global.pbsize  = (hpl_global.pbsize + NPAGE_SIZE - 1) & ~(NPAGE_SIZE - 1);

   hpl_global.subbuffer = (double *)ialloc(IALLOC_LOCAL, -1, hpl_global.pbsize);
 
   HPL_pdupdate_start();

   HPL_pdswap_start();

   pdgemm_start();
#endif

/*
 * Loop over different process grids - Define process grid. Go to bottom
 * of process grid loop if this case does not use my process.
 */
   for( ipq = 0; ipq < npqs; ipq++ )
   {
      (void) HPL_grid_init( MPI_COMM_WORLD, pmapping, pval[ipq], qval[ipq],
                            &grid );
      (void) HPL_grid_info( &grid, &nprow, &npcol, &myrow, &mycol );

      if( ( myrow < 0 ) || ( myrow >= nprow ) ||
          ( mycol < 0 ) || ( mycol >= npcol ) ) goto label_end_of_npqs;

#ifndef SWEEP
      for( in = 0; in < ns; in++ )
      {                            /* Loop over various problem sizes */
       for( inb = 0; inb < nbs; inb++ )
       {                        /* Loop over various blocking factors */
        for( indh = 0; indh < ndhs; indh++ )
        {                       /* Loop over various lookahead depths */
         for( itop = 0; itop < ntps; itop++ )
         {                  /* Loop over various broadcast topologies */
          for( irfa = 0; irfa < nrfs; irfa++ )
          {             /* Loop over various recursive factorizations */
           for( ipfa = 0; ipfa < npfs; ipfa++ )
           {                /* Loop over various panel factorizations */
            for( inbm = 0; inbm < nbms; inbm++ )
            {        /* Loop over various recursive stopping criteria */
             for( indv = 0; indv < ndvs; indv++ )
             {          /* Loop over various # of panels in recursion */
/*
 * Set up the algorithm parameters
 */
              algo.btopo = topval[itop]; algo.depth = ndhval[indh];
              algo.nbmin = nbmval[inbm]; algo.nbdiv = ndvval[indv];

              algo.pfact = rpfa = pfaval[ipfa];

              if( L1notran != 0 )
              {
                 if( rpfa == HPL_LEFT_LOOKING ) algo.pffun = HPL_pdpanllN;
                 else if( rpfa == HPL_CROUT   ) algo.pffun = HPL_pdpancrN;
                 else                           algo.pffun = HPL_pdpanrlN;

                 algo.rfact = rpfa = rfaval[irfa];
                 if( rpfa == HPL_LEFT_LOOKING ) algo.rffun = HPL_pdrpanllN;
                 else if( rpfa == HPL_CROUT   ) algo.rffun = HPL_pdrpancrN;
                 else                           algo.rffun = HPL_pdrpanrlN;

#ifdef OFFLOAD
                 algo.upfun = 0;
#else
                 if( Unotran != 0 ) algo.upfun = HPL_pdupdateNN;
                 else               algo.upfun = HPL_pdupdateNT;
#endif
              }
              else
              {
                 if( rpfa == HPL_LEFT_LOOKING ) algo.pffun = HPL_pdpanllT;
                 else if( rpfa == HPL_CROUT   ) algo.pffun = HPL_pdpancrT;
                 else                           algo.pffun = HPL_pdpanrlT;

                 algo.rfact = rpfa = rfaval[irfa];
                 if( rpfa == HPL_LEFT_LOOKING ) algo.rffun = HPL_pdrpanllT;
                 else if( rpfa == HPL_CROUT   ) algo.rffun = HPL_pdrpancrT;
                 else                           algo.rffun = HPL_pdrpanrlT;

#ifdef OFFLOAD
                 algo.upfun = 1;
#else
                 if( Unotran != 0 ) algo.upfun = HPL_pdupdateTN;
                 else               algo.upfun = HPL_pdupdateTT;
#endif
              }

              algo.fswap = fswap; algo.fsthr = tswap;
              algo.equil = equil; algo.align = align;

              HPL_pdtest( &test, &grid, &algo, nval[in], nbval[inb] );
             }
            }
           }
          }
         }
        }
       }
      }
#else
      for (in = nval[0]; in <= nval[1]; in += nval[2])
      {                            /* Loop over various problem sizes */
       for( inb = nbval[0]; inb <= nbval[1]; inb += nbval[2])
       {                        /* Loop over various blocking factors */
        for( indh = 0; indh < ndhs; indh++ )
        {                       /* Loop over various lookahead depths */
         for( itop = 0; itop < ntps; itop++ )
         {                  /* Loop over various broadcast topologies */
          for( irfa = 0; irfa < nrfs; irfa++ )
          {             /* Loop over various recursive factorizations */
           for( ipfa = 0; ipfa < npfs; ipfa++ )
           {                /* Loop over various panel factorizations */
            for( inbm = 0; inbm < nbms; inbm++ )
            {        /* Loop over various recursive stopping criteria */
             for( indv = 0; indv < ndvs; indv++ )
             {          /* Loop over various # of panels in recursion */
/*
 * Set up the algorithm parameters
 */
              algo.btopo = topval[itop]; algo.depth = ndhval[indh];
              algo.nbmin = nbmval[inbm]; algo.nbdiv = ndvval[indv];

              algo.pfact = rpfa = pfaval[ipfa];

              if( L1notran != 0 )
              {
                 if( rpfa == HPL_LEFT_LOOKING ) algo.pffun = HPL_pdpanllN;
                 else if( rpfa == HPL_CROUT   ) algo.pffun = HPL_pdpancrN;
                 else                           algo.pffun = HPL_pdpanrlN;

                 algo.rfact = rpfa = rfaval[irfa];
                 if( rpfa == HPL_LEFT_LOOKING ) algo.rffun = HPL_pdrpanllN;
                 else if( rpfa == HPL_CROUT   ) algo.rffun = HPL_pdrpancrN;
                 else                           algo.rffun = HPL_pdrpanrlN;

#ifdef OFFLOAD
                 algo.upfun = 0;
#else
                 if( Unotran != 0 ) algo.upfun = HPL_pdupdateNN;
                 else               algo.upfun = HPL_pdupdateNT;
#endif
              }
              else
              {
                 if( rpfa == HPL_LEFT_LOOKING ) algo.pffun = HPL_pdpanllT;
                 else if( rpfa == HPL_CROUT   ) algo.pffun = HPL_pdpancrT;
                 else                           algo.pffun = HPL_pdpanrlT;

                 algo.rfact = rpfa = rfaval[irfa];
                 if( rpfa == HPL_LEFT_LOOKING ) algo.rffun = HPL_pdrpanllT;
                 else if( rpfa == HPL_CROUT   ) algo.rffun = HPL_pdrpancrT;
                 else                           algo.rffun = HPL_pdrpanrlT;

#ifdef OFFLOAD
                 algo.upfun = 1;
#else
                 if( Unotran != 0 ) algo.upfun = HPL_pdupdateTN;
                 else               algo.upfun = HPL_pdupdateTT;
#endif
              }

              algo.fswap = fswap; algo.fsthr = tswap;
              algo.equil = equil; algo.align = align;

	      HPL_pdtest( &test, &grid, &algo, in, inb);
             }
            }
           }
          }
         }
        }
       }
      }
#endif
      (void) HPL_grid_exit( &grid );
label_end_of_npqs: ;
   }
#ifdef HYBRID
   CommThread_Deinit();
#endif
/*
 * Print ending messages, close output file, exit.
 */
#ifdef OFFLOAD
   if( hpl_global.rank == 0 )
#else
   if( rank == 0 )
#endif
   {
      test.ktest = test.kpass + test.kfail + test.kskip;
#ifndef HPL_DETAILED_TIMING
      HPL_fprintf( test.outfp, "%s%s\n",
                   "========================================",
                   "========================================" );
#else
      if( test.thrsh > HPL_rzero )
         HPL_fprintf( test.outfp, "%s%s\n",
                      "========================================",
                      "========================================" );
#endif

      HPL_fprintf( test.outfp, "\n%s %6d %s\n", "Finished", test.ktest,
                   "tests with the following results:" );
      if( test.thrsh > HPL_rzero )
      {
         HPL_fprintf( test.outfp, "         %6d %s\n", test.kpass,
                      "tests completed and passed residual checks," );
         HPL_fprintf( test.outfp, "         %6d %s\n", test.kfail,
                      "tests completed and failed residual checks," );
         HPL_fprintf( test.outfp, "         %6d %s\n", test.kskip,
                      "tests skipped because of illegal input values." );
      }
      else
      {
         HPL_fprintf( test.outfp, "         %6d %s\n", test.kpass,
                      "tests completed without checking," );
         HPL_fprintf( test.outfp, "         %6d %s\n", test.kskip,
                      "tests skipped because of illegal input values." );
      }

      HPL_fprintf( test.outfp, "%s%s\n",
                   "----------------------------------------",
                   "----------------------------------------" );
      HPL_fprintf( test.outfp, "\nEnd of Tests.\n" );
      HPL_fprintf( test.outfp, "%s%s\n",
                   "========================================",
                   "========================================" );

      if( ( test.outfp != stdout ) && ( test.outfp != stderr ) )
         (void) fclose( test.outfp );
   }

#ifdef OFFLOAD
   pdgemm_shutdown();

   HPL_pdswap_shutdown();

   HPL_pdupdate_shutdown();

   ifree(hpl_global.subbuffer, hpl_global.pbsize, IALLOC_NONE);

   ifree(hpl_global.buffer, hpl_global.mbsize, IALLOC_NONE);
#endif

#ifdef USE_MIC
   mic_quit();
#endif

#ifdef HPL_CALL_VSIPL
   vsip_finalize((void*)0);
#endif

#ifdef OFFLOAD
   iMPI_Finalize();

   iquit();

   gquit();

   arch_quit();
#else
   MPI_Finalize();
#endif

   return  0;
/*
 * End of main
 */
}
