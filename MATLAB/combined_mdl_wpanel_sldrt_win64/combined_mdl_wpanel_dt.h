/*
 * combined_mdl_wpanel_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  8,
  256,
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "string",
  "char_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&combined_mdl_wpanel_B.Sum2), 0, 0, 29 },

  { (char_T *)(&combined_mdl_wpanel_B.StreamInput_o2), 6, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_B.StreamInput_o1[0]), 2, 0, 3 }
  ,

  { (char_T *)(&combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE), 0, 0, 3 },

  { (char_T *)(&combined_mdl_wpanel_DW.Scope_PWORK.LoggedData), 11, 0, 17 },

  { (char_T *)(&combined_mdl_wpanel_DW.clockTickCounter), 6, 0, 2 },

  { (char_T *)(&combined_mdl_wpanel_DW.RandSeed), 7, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_DW.SwitchCase_ActiveSubsystem), 2, 0, 6 },

  { (char_T *)(&combined_mdl_wpanel_DW.Case2_f.Case1_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_DW.Case1_f.Case1_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_DW.Case4.Case2_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_DW.Case3.Case2_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_DW.Case2.Case2_SubsysRanBC), 2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  13U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&combined_mdl_wpanel_P.sample_period_ms), 0, 0, 76 },

  { (char_T *)(&combined_mdl_wpanel_P.MissedTicks_Y0), 6, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_P.PlantConfiguration_Value), 2, 0, 3 },

  { (char_T *)(&combined_mdl_wpanel_P.Case2_f.Constant_Value), 0, 0, 1 },

  { (char_T *)(&combined_mdl_wpanel_P.Case1_f.Constant_Value), 0, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] combined_mdl_wpanel_dt.h */
