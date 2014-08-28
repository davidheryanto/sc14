/**
***  Copyright (c) 1995, 1996, 1997, 1998, 1999, 2000 by
***  The Board of Trustees of the University of Illinois.
***  All rights reserved.
**/

#ifndef BROADCASTS_H
#define BROADCASTS_H

#include "NamdTypes.h"
#include "Lattice.h"
#include "BroadcastObject.h"

enum {
  SCRIPT_END,
  SCRIPT_RUN,
  SCRIPT_OUTPUT,
  SCRIPT_FORCEOUTPUT,
  SCRIPT_MEASURE,
  SCRIPT_REINITVELS,
  SCRIPT_RESCALEVELS,
  SCRIPT_RELOADCHARGES,
  SCRIPT_CHECKPOINT,
  SCRIPT_REVERT,
  SCRIPT_MINIMIZE,
  SCRIPT_DUMMY
};

// Tags used in common by all users of broadcast system.
enum {
  velocityRescaleFactorTag,
  positionRescaleFactorTag,
  tcoupleCoefficientTag,
  minimizeCoefficientTag,
  momentumCorrectionTag,
#if USE_BARRIER
  cycleBarrierTag,
#endif
  scriptBarrierTag,
  traceBarrierTag,
  accelMDRescaleFactorTag,
  adaptTemperatureTag, //Tag for adaptive tempering temperature updates to Sequencer
#ifdef MEASURE_NAMD_WITH_PAPI
  papiMeasureTag,
#endif
  dummyTag
};

// Broadcasts used by Contoller <-> Sequencer communication.
struct ControllerBroadcasts
{
  SimpleBroadcastObject<BigReal> velocityRescaleFactor;
  SimpleBroadcastObject<Tensor> positionRescaleFactor;
  SimpleBroadcastObject<BigReal> tcoupleCoefficient;
  SimpleBroadcastObject<BigReal> minimizeCoefficient;
  SimpleBroadcastObject<Vector> momentumCorrection;
#if USE_BARRIER
  SimpleBroadcastObject<int> cycleBarrier;
#endif
  SimpleBroadcastObject<int> scriptBarrier;
  SimpleBroadcastObject<int> traceBarrier;
  SimpleBroadcastObject<Vector> accelMDRescaleFactor;
  SimpleBroadcastObject<BigReal> adaptTemperature; 
#ifdef MEASURE_NAMD_WITH_PAPI
  SimpleBroadcastObject<int> papiMeasureBarrier;
#endif

  ControllerBroadcasts() : 
    velocityRescaleFactor(velocityRescaleFactorTag),
    positionRescaleFactor(positionRescaleFactorTag),
    tcoupleCoefficient(tcoupleCoefficientTag),
    minimizeCoefficient(minimizeCoefficientTag),
    momentumCorrection(momentumCorrectionTag),
#if USE_BARRIER
    cycleBarrier(cycleBarrierTag),
#endif
    accelMDRescaleFactor(accelMDRescaleFactorTag),
    adaptTemperature(adaptTemperatureTag), 
    scriptBarrier(scriptBarrierTag),
#ifdef MEASURE_NAMD_WITH_PAPI
	papiMeasureBarrier(papiMeasureTag),
#endif
	traceBarrier(traceBarrierTag)
  { ; }
};

#endif // BROADCASTS_H

