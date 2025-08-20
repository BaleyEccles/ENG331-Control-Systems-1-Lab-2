/*
 * combined_mdl_wpanel_private.h
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

#ifndef combined_mdl_wpanel_private_h_
#define combined_mdl_wpanel_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "combined_mdl_wpanel.h"
#include "combined_mdl_wpanel_types.h"

extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern void combined_mdl_wpanel_Case2(real_T rtu_In1, real_T *rty_Out1);
extern void combined_mdl_wpanel_Case1(real_T rtu_In1, real_T *rty_Out1, real_T
  *rty_Out2, P_Case1_combined_mdl_wpanel_T *localP);

#endif                                 /* combined_mdl_wpanel_private_h_ */
