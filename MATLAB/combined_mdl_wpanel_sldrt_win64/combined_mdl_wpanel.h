/*
 * combined_mdl_wpanel.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "combined_mdl_wpanel".
 *
 * Model version              : 7.58
 * Simulink Coder version : 25.1 (R2025a) 21-Nov-2024
 * C source code generated on : Thu Jul  3 15:35:33 2025
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef combined_mdl_wpanel_h_
#define combined_mdl_wpanel_h_
#ifndef combined_mdl_wpanel_COMMON_INCLUDES_
#define combined_mdl_wpanel_COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include "ToAsyncQueueTgtAppSvc/ToAsyncQueueTgtAppSvcCIntrf.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "sldrtdef.h"
#endif                                /* combined_mdl_wpanel_COMMON_INCLUDES_ */

#include "combined_mdl_wpanel_types.h"
#include <stddef.h>
#include "rt_defines.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetProxyFunctions
#define rtmGetProxyFunctions(rtm)      ()
#endif

#ifndef rtmSetProxyFunctions
#define rtmSetProxyFunctions(rtm, val) ()
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStubFunctions
#define rtmGetStubFunctions(rtm)       ()
#endif

#ifndef rtmSetStubFunctions
#define rtmSetStubFunctions(rtm, val)  ()
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define combined_mdl_wpanel_rtModel    RT_MODEL_combined_mdl_wpanel_T

/* Block states (default storage) for system '<S10>/Case #2' */
typedef struct {
  int8_T Case2_SubsysRanBC;            /* '<S10>/Case #2' */
} DW_Case2_combined_mdl_wpanel_T;

/* Block states (default storage) for system '<S12>/Case #1' */
typedef struct {
  int8_T Case1_SubsysRanBC;            /* '<S12>/Case #1' */
} DW_Case1_combined_mdl_wpanel_T;

/* Block signals (default storage) */
typedef struct {
  real_T Sum2;                         /* '<S6>/Sum2' */
  real_T Gain;                         /* '<S23>/Gain' */
  real_T MultiportSwitch;              /* '<S6>/Multiport Switch' */
  real_T Sum2_p;                       /* '<S4>/Sum2' */
  real_T Output;                       /* '<S7>/Output' */
  real_T MultiportSwitch_b;            /* '<S4>/Multiport Switch' */
  real_T PumpCurrentA;                 /* '<S5>/Merge' */
  real_T Out1FlowLmin;                 /* '<S5>/Merge' */
  real_T Out2FlowLmin;                 /* '<S5>/Merge' */
  real_T Tank1Levelm;                  /* '<S5>/Merge' */
  real_T Tank1OutletFlowLmin;          /* '<S5>/Merge' */
  real_T Tank2Levelm;                  /* '<S5>/Merge' */
  real_T Tank2OutletFlowLmin;          /* '<S5>/Merge' */
  real_T Merge;                        /* '<S10>/Merge' */
  real_T TmpBufferAtConstantOutport1;  /* '<S8>/Constant' */
  real_T Kp1;                          /* '<S11>/Kp1' */
  real_T Merge_e;                      /* '<S12>/Merge' */
  real_T Merge1;                       /* '<S12>/Merge1' */
  real_T InitialTankLevelm;            /* '<S13>/Initial Tank Level (m)' */
  real_T DiscreteTimeIntegrator;       /* '<S13>/Discrete-Time Integrator' */
  real_T Sqrt;                         /* '<S13>/Sqrt' */
  real_T Gain_l;                       /* '<S13>/Gain' */
  real_T Product2;                     /* '<S13>/Product2' */
  real_T InitialTankLevelm_h;          /* '<S14>/Initial Tank Level (m)' */
  real_T DiscreteTimeIntegrator_k;     /* '<S14>/Discrete-Time Integrator' */
  real_T Gain_a;                       /* '<S14>/Gain' */
  real_T Product2_j;                   /* '<S14>/Product2' */
  real_T dVtodL;                       /* '<S13>/dV to dL' */
  real_T dVtodL_g;                     /* '<S14>/dV to dL' */
  int32_T StreamInput_o2;              /* '<S8>/Stream Input' */
  int8_T StreamInput_o1[3];            /* '<S8>/Stream Input' */
} B_combined_mdl_wpanel_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S13>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S14>/Discrete-Time Integrator' */
  real_T NextOutput;                   /* '<S7>/White Noise' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S1>/Scope1' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Controller_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Disturbance_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PlantCoupledTanks_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles[7];
  } TAQSigLogging_InsertedFor_PlantCoupledTanks_at_outport_1_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_ReferenceSignal_at_outport_0_PWORK;/* synthesized block */

  void *StreamInput_PWORK[2];          /* '<S8>/Stream Input' */
  void *StreamOutput_PWORK[2];         /* '<S8>/Stream Output' */
  int32_T clockTickCounter;            /* '<S6>/input_square' */
  int32_T clockTickCounter_e;          /* '<S4>/dist_square' */
  uint32_T RandSeed;                   /* '<S7>/White Noise' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S5>/Switch Case' */
  int8_T CoupledTanks_SubsysRanBC;     /* '<S5>/Coupled Tanks' */
  int8_T CoupledTanksModel_SubsysRanBC;/* '<S5>/Coupled Tanks Model' */
  int8_T Case4_SubsysRanBC;            /* '<S12>/Case #4' */
  int8_T Case3_SubsysRanBC;            /* '<S12>/Case #3' */
  int8_T Case1_SubsysRanBC;            /* '<S10>/Case #1' */
  DW_Case1_combined_mdl_wpanel_T Case2_f;/* '<S12>/Case #2' */
  DW_Case1_combined_mdl_wpanel_T Case1_f;/* '<S12>/Case #1' */
  DW_Case2_combined_mdl_wpanel_T Case4;/* '<S10>/Case #4' */
  DW_Case2_combined_mdl_wpanel_T Case3;/* '<S10>/Case #3' */
  DW_Case2_combined_mdl_wpanel_T Case2;/* '<S10>/Case #2' */
} DW_combined_mdl_wpanel_T;

/* Backward compatible GRT Identifiers */
#define rtB                            combined_mdl_wpanel_B
#define BlockIO                        B_combined_mdl_wpanel_T
#define rtP                            combined_mdl_wpanel_P
#define Parameters                     P_combined_mdl_wpanel_T
#define rtDWork                        combined_mdl_wpanel_DW
#define D_Work                         DW_combined_mdl_wpanel_T

/* Parameters for system: '<S12>/Case #1' */
struct P_Case1_combined_mdl_wpanel_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_combined_mdl_wpanel_T_ {
  real_T sample_period_ms;             /* Variable: sample_period_ms
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T dist_noise_Cov;               /* Mask Parameter: dist_noise_Cov
                                        * Referenced by: '<S7>/Output'
                                        */
  real_T StreamInput_MaxMissedTicks;
                                   /* Mask Parameter: StreamInput_MaxMissedTicks
                                    * Referenced by: '<S8>/Stream Input'
                                    */
  real_T StreamOutput_MaxMissedTicks;
                                  /* Mask Parameter: StreamOutput_MaxMissedTicks
                                   * Referenced by: '<S8>/Stream Output'
                                   */
  real_T input_chirp_T;                /* Mask Parameter: input_chirp_T
                                        * Referenced by: '<S23>/targetTime'
                                        */
  real_T StreamInput_YieldWhenWaiting;
                                 /* Mask Parameter: StreamInput_YieldWhenWaiting
                                  * Referenced by: '<S8>/Stream Input'
                                  */
  real_T StreamOutput_YieldWhenWaiting;
                                /* Mask Parameter: StreamOutput_YieldWhenWaiting
                                 * Referenced by: '<S8>/Stream Output'
                                 */
  real_T input_chirp_f1;               /* Mask Parameter: input_chirp_f1
                                        * Referenced by:
                                        *   '<S23>/deltaFreq'
                                        *   '<S23>/initialFreq'
                                        */
  real_T input_chirp_f2;               /* Mask Parameter: input_chirp_f2
                                        * Referenced by: '<S23>/deltaFreq'
                                        */
  real_T dist_noise_seed;              /* Mask Parameter: dist_noise_seed
                                        * Referenced by: '<S7>/White Noise'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S18>/Gain'
                                        */
  real_T Kp_Gain;                      /* Expression: 1/12
                                        * Referenced by: '<S11>/Kp'
                                        */
  real_T Kp1_Gain;                     /* Expression: 1
                                        * Referenced by: '<S11>/Kp1'
                                        */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S12>/Merge'
                                       */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S12>/Merge1'
                                      */
  real_T InitialTankLevelm_Value;      /* Expression: 0.01
                                        * Referenced by: '<S13>/Initial Tank Level (m)'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S13>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 20
                                          * Referenced by: '<S13>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: 0
                                          * Referenced by: '<S13>/Discrete-Time Integrator'
                                          */
  real_T Fluiddensitykgm3_Value;       /* Expression: 1
                                        * Referenced by: '<S13>/Fluid density (kg//m^3)'
                                        */
  real_T accelduetogravityms2_Value;   /* Expression: 9.81
                                        * Referenced by: '<S13>/accel. due to gravity (m//s^2)'
                                        */
  real_T Orificediameter_Value;        /* Expression: 0.001
                                        * Referenced by: '<S13>/Orifice diameter'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 0.25*pi()
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T InitialTankLevelm_Value_n;    /* Expression: 0.01
                                        * Referenced by: '<S14>/Initial Tank Level (m)'
                                        */
  real_T DiscreteTimeIntegrator_gainval_d;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_d
                          * Referenced by: '<S14>/Discrete-Time Integrator'
                          */
  real_T DiscreteTimeIntegrator_UpperSat_c;/* Expression: 20
                                            * Referenced by: '<S14>/Discrete-Time Integrator'
                                            */
  real_T DiscreteTimeIntegrator_LowerSat_p;/* Expression: 0
                                            * Referenced by: '<S14>/Discrete-Time Integrator'
                                            */
  real_T Fluiddensitykgm3_Value_j;     /* Expression: 1
                                        * Referenced by: '<S14>/Fluid density (kg//m^3)'
                                        */
  real_T accelduetogravityms2_Value_b; /* Expression: 9.81
                                        * Referenced by: '<S14>/accel. due to gravity (m//s^2)'
                                        */
  real_T Orificediameter_Value_c;      /* Expression: 0.001
                                        * Referenced by: '<S14>/Orifice diameter'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 0.25*pi()
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T BypassDiameter_Value;         /* Expression: 0.001
                                        * Referenced by: '<S13>/Bypass Diameter'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.25*pi()
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T Tankcrosssectionalaream2_Value;/* Expression: 0.05
                                         * Referenced by: '<S13>/Tank cross-sectional area (m^2)'
                                         */
  real_T Tankcrosssectionalaream2_Value_k;/* Expression: 0.05
                                           * Referenced by: '<S14>/Tank cross-sectional area (m^2)'
                                           */
  real_T Gain_Gain_i;                  /* Expression: 1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T input_mode_Value;             /* Expression: 4
                                        * Referenced by: '<S6>/input_mode'
                                        */
  real_T input_default_Value;          /* Expression: 0
                                        * Referenced by: '<S6>/input_default'
                                        */
  real_T input_constant_Value;         /* Expression: 0
                                        * Referenced by: '<S6>/input_constant'
                                        */
  real_T input_sine_Amp;               /* Expression: 0
                                        * Referenced by: '<S6>/input_sine'
                                        */
  real_T input_sine_Bias;              /* Expression: 0
                                        * Referenced by: '<S6>/input_sine'
                                        */
  real_T input_sine_Freq;              /* Expression: 0
                                        * Referenced by: '<S6>/input_sine'
                                        */
  real_T input_sine_Phase;             /* Expression: 0
                                        * Referenced by: '<S6>/input_sine'
                                        */
  real_T input_sine_offset_Value;      /* Expression: 0
                                        * Referenced by: '<S6>/input_sine_offset'
                                        */
  real_T input_square_Amp;             /* Expression: 3
                                        * Referenced by: '<S6>/input_square'
                                        */
  real_T input_square_Period;         /* Computed Parameter: input_square_Period
                                       * Referenced by: '<S6>/input_square'
                                       */
  real_T input_square_Duty;            /* Computed Parameter: input_square_Duty
                                        * Referenced by: '<S6>/input_square'
                                        */
  real_T input_square_PhaseDelay;      /* Expression: 0
                                        * Referenced by: '<S6>/input_square'
                                        */
  real_T input_square_offset_Value;    /* Expression: 0
                                        * Referenced by: '<S6>/input_square_offset'
                                        */
  real_T input_chirp_amplitude_Value;  /* Expression: 0
                                        * Referenced by: '<S6>/input_chirp_amplitude'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.5
                                        * Referenced by: '<S23>/Gain'
                                        */
  real_T dist_mode_Value;              /* Expression: 1
                                        * Referenced by: '<S4>/dist_mode'
                                        */
  real_T dist_default_Value;           /* Expression: 0
                                        * Referenced by: '<S4>/dist_default'
                                        */
  real_T dist_constant_Value;          /* Expression: 1
                                        * Referenced by: '<S4>/dist_constant'
                                        */
  real_T dist_sine_Amp;                /* Expression: 6
                                        * Referenced by: '<S4>/dist_sine'
                                        */
  real_T dist_sine_Bias;               /* Expression: 0
                                        * Referenced by: '<S4>/dist_sine'
                                        */
  real_T dist_sine_Freq;               /* Expression: 1
                                        * Referenced by: '<S4>/dist_sine'
                                        */
  real_T dist_sine_Phase;              /* Expression: 0
                                        * Referenced by: '<S4>/dist_sine'
                                        */
  real_T dist_sine_offset_Value;       /* Expression: 6
                                        * Referenced by: '<S4>/dist_sine_offset'
                                        */
  real_T dist_square_Amp;              /* Expression: 2
                                        * Referenced by: '<S4>/dist_square'
                                        */
  real_T dist_square_Period;           /* Computed Parameter: dist_square_Period
                                        * Referenced by: '<S4>/dist_square'
                                        */
  real_T dist_square_Duty;             /* Computed Parameter: dist_square_Duty
                                        * Referenced by: '<S4>/dist_square'
                                        */
  real_T dist_square_PhaseDelay;       /* Expression: 0
                                        * Referenced by: '<S4>/dist_square'
                                        */
  real_T dist_square_offset_Value;     /* Expression: 1
                                        * Referenced by: '<S4>/dist_square_offset'
                                        */
  real_T WhiteNoise_Mean;              /* Expression: 0
                                        * Referenced by: '<S7>/White Noise'
                                        */
  real_T WhiteNoise_StdDev;            /* Computed Parameter: WhiteNoise_StdDev
                                        * Referenced by: '<S7>/White Noise'
                                        */
  real_T Merge_1_InitialOutput;        /* Expression: 0
                                        * Referenced by: '<S5>/Merge'
                                        */
  real_T Merge_2_InitialOutput;     /* Computed Parameter: Merge_2_InitialOutput
                                     * Referenced by: '<S5>/Merge'
                                     */
  real_T Merge_3_InitialOutput;        /* Expression: seed
                                        * Referenced by: '<S5>/Merge'
                                        */
  real_T Merge_4_InitialOutput;        /* Expression: sqrt(Cov)/sqrt(Ts(1))
                                        * Referenced by: '<S5>/Merge'
                                        */
  real_T Merge_5_InitialOutput;     /* Computed Parameter: Merge_5_InitialOutput
                                     * Referenced by: '<S5>/Merge'
                                     */
  real_T Merge_6_InitialOutput;     /* Computed Parameter: Merge_6_InitialOutput
                                     * Referenced by: '<S5>/Merge'
                                     */
  real_T Merge_7_InitialOutput;     /* Computed Parameter: Merge_7_InitialOutput
                                     * Referenced by: '<S5>/Merge'
                                     */
  real_T Merge_InitialOutput_j;     /* Computed Parameter: Merge_InitialOutput_j
                                     * Referenced by: '<S10>/Merge'
                                     */
  int32_T MissedTicks_Y0;              /* Computed Parameter: MissedTicks_Y0
                                        * Referenced by: '<S8>/Missed Ticks'
                                        */
  int8_T PlantConfiguration_Value;
                                 /* Computed Parameter: PlantConfiguration_Value
                                  * Referenced by: '<S12>/Plant Configuration'
                                  */
  int8_T SimulinkModelConfiguration_Value;
                         /* Computed Parameter: SimulinkModelConfiguration_Value
                          * Referenced by: '<S5>/Simulink Model Configuration'
                          */
  int8_T PlantConfiguration_Value_k;
                               /* Computed Parameter: PlantConfiguration_Value_k
                                * Referenced by: '<S10>/Plant Configuration'
                                */
  P_Case1_combined_mdl_wpanel_T Case2_f;/* '<S12>/Case #2' */
  P_Case1_combined_mdl_wpanel_T Case1_f;/* '<S12>/Case #1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_combined_mdl_wpanel_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_combined_mdl_wpanel_T combined_mdl_wpanel_P;

/* Block signals (default storage) */
extern B_combined_mdl_wpanel_T combined_mdl_wpanel_B;

/* Block states (default storage) */
extern DW_combined_mdl_wpanel_T combined_mdl_wpanel_DW;

/* Model entry point functions */
extern void combined_mdl_wpanel_initialize(void);
extern void combined_mdl_wpanel_output(void);
extern void combined_mdl_wpanel_update(void);
extern void combined_mdl_wpanel_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern combined_mdl_wpanel_rtModel *combined_mdl_wpanel(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_combined_mdl_wpanel_T *const combined_mdl_wpanel_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'combined_mdl_wpanel'
 * '<S1>'   : 'combined_mdl_wpanel/Coupled Tanks System'
 * '<S2>'   : 'combined_mdl_wpanel/untitledPanel'
 * '<S3>'   : 'combined_mdl_wpanel/Coupled Tanks System/Controller'
 * '<S4>'   : 'combined_mdl_wpanel/Coupled Tanks System/Disturbance'
 * '<S5>'   : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks'
 * '<S6>'   : 'combined_mdl_wpanel/Coupled Tanks System/Reference Signal'
 * '<S7>'   : 'combined_mdl_wpanel/Coupled Tanks System/Disturbance/dist_noise'
 * '<S8>'   : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks'
 * '<S9>'   : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model'
 * '<S10>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Pump Output Configuration'
 * '<S11>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Actuator Model'
 * '<S12>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Pump Output Configuration'
 * '<S13>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Tank 1'
 * '<S14>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Tank 2'
 * '<S15>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Pump Output Configuration/Case #1'
 * '<S16>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Pump Output Configuration/Case #2'
 * '<S17>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Pump Output Configuration/Case #3'
 * '<S18>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Coupled Tanks Model/Pump Output Configuration/Case #4'
 * '<S19>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Pump Output Configuration/Case #1'
 * '<S20>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Pump Output Configuration/Case #2'
 * '<S21>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Pump Output Configuration/Case #3'
 * '<S22>'  : 'combined_mdl_wpanel/Coupled Tanks System/Plant - Coupled Tanks/Pump Output Configuration/Case #4'
 * '<S23>'  : 'combined_mdl_wpanel/Coupled Tanks System/Reference Signal/input_chirp'
 */
#endif                                 /* combined_mdl_wpanel_h_ */
