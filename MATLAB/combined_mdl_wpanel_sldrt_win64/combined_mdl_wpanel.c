/*
 * combined_mdl_wpanel.c
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

#include "combined_mdl_wpanel.h"
#include "rtwtypes.h"
#include "combined_mdl_wpanel_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include "combined_mdl_wpanel_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  9600.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.1, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
const SLDRTBOARD SLDRTBoards[1] = {
  { "Standard_Devices/Serial_Port", 8U, 8, SLDRTBoardOptions0 },
};

/* Block signals (default storage) */
B_combined_mdl_wpanel_T combined_mdl_wpanel_B;

/* Block states (default storage) */
DW_combined_mdl_wpanel_T combined_mdl_wpanel_DW;

/* Real-time model */
static RT_MODEL_combined_mdl_wpanel_T combined_mdl_wpanel_M_;
RT_MODEL_combined_mdl_wpanel_T *const combined_mdl_wpanel_M =
  &combined_mdl_wpanel_M_;

/*
 * Output and update for action system:
 *    '<S10>/Case #2'
 *    '<S10>/Case #3'
 *    '<S10>/Case #4'
 */
void combined_mdl_wpanel_Case2(real_T rtu_In1, real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S20>/Out1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S12>/Case #1'
 *    '<S12>/Case #2'
 */
void combined_mdl_wpanel_Case1(real_T rtu_In1, real_T *rty_Out1, real_T
  *rty_Out2, P_Case1_combined_mdl_wpanel_T *localP)
{
  /* SignalConversion generated from: '<S15>/In1' */
  *rty_Out1 = rtu_In1;

  /* SignalConversion generated from: '<S15>/Out2' incorporates:
   *  Constant: '<S15>/Constant'
   */
  *rty_Out2 = localP->Constant_Value;
}

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T hi;
  uint32_T lo;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (real_T)*u * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T si;
  real_T sr;
  real_T y;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sqrt(-2.0 * log(si) / si) * sr;
  return y;
}

/* Model output function */
void combined_mdl_wpanel_output(void)
{
  real_T rtb_WhiteNoise;
  int8_T rtAction;
  int8_T rtPrevAction;

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.Case1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.Case2.Case2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.Case1_f.Case1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.Case3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.Case4_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.CoupledTanksModel_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(combined_mdl_wpanel_DW.CoupledTanks_SubsysRanBC);

  /* DiscretePulseGenerator: '<S6>/input_square' */
  if ((combined_mdl_wpanel_DW.clockTickCounter <
       combined_mdl_wpanel_P.input_square_Duty) &&
      (combined_mdl_wpanel_DW.clockTickCounter >= 0)) {
    rtb_WhiteNoise = combined_mdl_wpanel_P.input_square_Amp;
  } else {
    rtb_WhiteNoise = 0.0;
  }

  if (combined_mdl_wpanel_DW.clockTickCounter >=
      combined_mdl_wpanel_P.input_square_Period - 1.0) {
    combined_mdl_wpanel_DW.clockTickCounter = 0;
  } else {
    combined_mdl_wpanel_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S6>/input_square' */

  /* Sum: '<S6>/Sum2' incorporates:
   *  Constant: '<S6>/input_square_offset'
   */
  combined_mdl_wpanel_B.Sum2 = rtb_WhiteNoise +
    combined_mdl_wpanel_P.input_square_offset_Value;

  /* Clock: '<S23>/Clock1' */
  rtb_WhiteNoise = combined_mdl_wpanel_M->Timing.t[0];

  /* Gain: '<S23>/Gain' incorporates:
   *  Constant: '<S23>/deltaFreq'
   *  Constant: '<S23>/targetTime'
   *  Product: '<S23>/Product'
   */
  combined_mdl_wpanel_B.Gain = (combined_mdl_wpanel_P.input_chirp_f2 -
    combined_mdl_wpanel_P.input_chirp_f1) * 6.2831853071795862 /
    combined_mdl_wpanel_P.input_chirp_T * combined_mdl_wpanel_P.Gain_Gain_d;

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<S6>/input_mode'
   */
  switch ((int32_T)combined_mdl_wpanel_P.input_mode_Value) {
   case 1:
    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S6>/input_default'
     */
    combined_mdl_wpanel_B.MultiportSwitch =
      combined_mdl_wpanel_P.input_default_Value;
    break;

   case 2:
    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S6>/input_constant'
     */
    combined_mdl_wpanel_B.MultiportSwitch =
      combined_mdl_wpanel_P.input_constant_Value;
    break;

   case 3:
    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S6>/input_sine_offset'
     *  Sin: '<S6>/input_sine'
     *  Sum: '<S6>/Sum1'
     */
    combined_mdl_wpanel_B.MultiportSwitch = (sin
      (combined_mdl_wpanel_P.input_sine_Freq * combined_mdl_wpanel_M->Timing.t[0]
       + combined_mdl_wpanel_P.input_sine_Phase) *
      combined_mdl_wpanel_P.input_sine_Amp +
      combined_mdl_wpanel_P.input_sine_Bias) +
      combined_mdl_wpanel_P.input_sine_offset_Value;
    break;

   case 4:
    /* MultiPortSwitch: '<S6>/Multiport Switch' */
    combined_mdl_wpanel_B.MultiportSwitch = combined_mdl_wpanel_B.Sum2;
    break;

   case 5:
    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S23>/initialFreq'
     *  Constant: '<S6>/input_chirp_amplitude'
     *  Product: '<S23>/Product1'
     *  Product: '<S23>/Product2'
     *  Product: '<S6>/Product'
     *  Sum: '<S23>/Sum'
     *  Trigonometry: '<S23>/Output'
     */
    combined_mdl_wpanel_B.MultiportSwitch = sin((rtb_WhiteNoise *
      combined_mdl_wpanel_B.Gain + 6.2831853071795862 *
      combined_mdl_wpanel_P.input_chirp_f1) * rtb_WhiteNoise) *
      combined_mdl_wpanel_P.input_chirp_amplitude_Value;
    break;

   case 6:
    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S6>/input_default'
     */
    combined_mdl_wpanel_B.MultiportSwitch =
      combined_mdl_wpanel_P.input_default_Value;
    break;

   default:
    /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
     *  Constant: '<S6>/input_default'
     */
    combined_mdl_wpanel_B.MultiportSwitch =
      combined_mdl_wpanel_P.input_default_Value;
    break;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* DiscretePulseGenerator: '<S4>/dist_square' */
  if ((combined_mdl_wpanel_DW.clockTickCounter_e <
       combined_mdl_wpanel_P.dist_square_Duty) &&
      (combined_mdl_wpanel_DW.clockTickCounter_e >= 0)) {
    rtb_WhiteNoise = combined_mdl_wpanel_P.dist_square_Amp;
  } else {
    rtb_WhiteNoise = 0.0;
  }

  if (combined_mdl_wpanel_DW.clockTickCounter_e >=
      combined_mdl_wpanel_P.dist_square_Period - 1.0) {
    combined_mdl_wpanel_DW.clockTickCounter_e = 0;
  } else {
    combined_mdl_wpanel_DW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<S4>/dist_square' */

  /* Sum: '<S4>/Sum2' incorporates:
   *  Constant: '<S4>/dist_square_offset'
   */
  combined_mdl_wpanel_B.Sum2_p = rtb_WhiteNoise +
    combined_mdl_wpanel_P.dist_square_offset_Value;

  /* Gain: '<S7>/Output' incorporates:
   *  RandomNumber: '<S7>/White Noise'
   */
  combined_mdl_wpanel_B.Output = sqrt(combined_mdl_wpanel_P.dist_noise_Cov) /
    0.31622776601683794 * combined_mdl_wpanel_DW.NextOutput;

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<S4>/dist_mode'
   */
  switch ((int32_T)combined_mdl_wpanel_P.dist_mode_Value) {
   case 1:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/dist_default'
     */
    combined_mdl_wpanel_B.MultiportSwitch_b =
      combined_mdl_wpanel_P.dist_default_Value;
    break;

   case 2:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/dist_constant'
     */
    combined_mdl_wpanel_B.MultiportSwitch_b =
      combined_mdl_wpanel_P.dist_constant_Value;
    break;

   case 3:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/dist_sine_offset'
     *  Sin: '<S4>/dist_sine'
     *  Sum: '<S4>/Sum1'
     */
    combined_mdl_wpanel_B.MultiportSwitch_b = (sin
      (combined_mdl_wpanel_P.dist_sine_Freq * combined_mdl_wpanel_M->Timing.t[0]
       + combined_mdl_wpanel_P.dist_sine_Phase) *
      combined_mdl_wpanel_P.dist_sine_Amp + combined_mdl_wpanel_P.dist_sine_Bias)
      + combined_mdl_wpanel_P.dist_sine_offset_Value;
    break;

   case 4:
    /* MultiPortSwitch: '<S4>/Multiport Switch' */
    combined_mdl_wpanel_B.MultiportSwitch_b = combined_mdl_wpanel_B.Sum2_p;
    break;

   case 5:
    /* MultiPortSwitch: '<S4>/Multiport Switch' */
    combined_mdl_wpanel_B.MultiportSwitch_b = combined_mdl_wpanel_B.Output;
    break;

   case 6:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/dist_default'
     */
    combined_mdl_wpanel_B.MultiportSwitch_b =
      combined_mdl_wpanel_P.dist_default_Value;
    break;

   default:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/dist_default'
     */
    combined_mdl_wpanel_B.MultiportSwitch_b =
      combined_mdl_wpanel_P.dist_default_Value;
    break;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

  /* SwitchCase: '<S5>/Switch Case' incorporates:
   *  Constant: '<S13>/Initial Tank Level (m)'
   *  Constant: '<S14>/Initial Tank Level (m)'
   *  Constant: '<S5>/Simulink Model Configuration'
   */
  rtPrevAction = combined_mdl_wpanel_DW.SwitchCase_ActiveSubsystem;
  switch (combined_mdl_wpanel_P.SimulinkModelConfiguration_Value) {
   case 0:
    rtAction = 0;
    break;

   case 1:
    rtAction = 1;
    break;

   default:
    rtAction = 2;
    break;
  }

  combined_mdl_wpanel_DW.SwitchCase_ActiveSubsystem = rtAction;
  if (rtPrevAction != rtAction) {
    rtsiSetBlockStateForSolverChangedAtMajorStep
      (&combined_mdl_wpanel_M->solverInfo, true);
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S5>/Coupled Tanks Model' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Gain: '<S11>/Kp' */
    rtb_WhiteNoise = combined_mdl_wpanel_P.Kp_Gain *
      combined_mdl_wpanel_B.MultiportSwitch;

    /* Gain: '<S11>/Kp1' */
    combined_mdl_wpanel_B.Kp1 = combined_mdl_wpanel_P.Kp1_Gain * rtb_WhiteNoise;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.PumpCurrentA = rtb_WhiteNoise;

    /* SwitchCase: '<S12>/Switch Case' incorporates:
     *  Constant: '<S12>/Plant Configuration'
     */
    switch (combined_mdl_wpanel_P.PlantConfiguration_Value) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S12>/Case #1' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      combined_mdl_wpanel_Case1(combined_mdl_wpanel_B.Kp1,
        &combined_mdl_wpanel_B.Merge_e, &combined_mdl_wpanel_B.Merge1,
        &combined_mdl_wpanel_P.Case1_f);

      /* End of Outputs for SubSystem: '<S12>/Case #1' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S12>/Case #2' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      combined_mdl_wpanel_Case1(combined_mdl_wpanel_B.Kp1,
        &combined_mdl_wpanel_B.Merge_e, &combined_mdl_wpanel_B.Merge1,
        &combined_mdl_wpanel_P.Case2_f);

      /* End of Outputs for SubSystem: '<S12>/Case #2' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S12>/Case #3' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      /* Merge: '<S12>/Merge' incorporates:
       *  Constant: '<S17>/Constant'
       *  SignalConversion generated from: '<S17>/Out1'
       */
      combined_mdl_wpanel_B.Merge_e = combined_mdl_wpanel_P.Constant_Value;

      /* Merge: '<S12>/Merge1' incorporates:
       *  SignalConversion generated from: '<S17>/In1'
       */
      combined_mdl_wpanel_B.Merge1 = combined_mdl_wpanel_B.Kp1;

      /* End of Outputs for SubSystem: '<S12>/Case #3' */

      /* Update for IfAction SubSystem: '<S12>/Case #3' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      /* Update for SwitchCase: '<S12>/Switch Case' */
      srUpdateBC(combined_mdl_wpanel_DW.Case3_SubsysRanBC);

      /* End of Update for SubSystem: '<S12>/Case #3' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S12>/Case #4' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      /* Gain: '<S18>/Gain' */
      rtb_WhiteNoise = combined_mdl_wpanel_P.Gain_Gain *
        combined_mdl_wpanel_B.Kp1;

      /* Merge: '<S12>/Merge' incorporates:
       *  SignalConversion generated from: '<S18>/Out1'
       */
      combined_mdl_wpanel_B.Merge_e = rtb_WhiteNoise;

      /* Merge: '<S12>/Merge1' incorporates:
       *  SignalConversion generated from: '<S18>/Out2'
       */
      combined_mdl_wpanel_B.Merge1 = rtb_WhiteNoise;

      /* End of Outputs for SubSystem: '<S12>/Case #4' */

      /* Update for IfAction SubSystem: '<S12>/Case #4' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      /* Update for SwitchCase: '<S12>/Switch Case' */
      srUpdateBC(combined_mdl_wpanel_DW.Case4_SubsysRanBC);

      /* End of Update for SubSystem: '<S12>/Case #4' */
      break;
    }

    /* End of SwitchCase: '<S12>/Switch Case' */

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.Out1FlowLmin = combined_mdl_wpanel_B.Merge_e;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.Out2FlowLmin = combined_mdl_wpanel_B.Merge1;
    combined_mdl_wpanel_B.InitialTankLevelm =
      combined_mdl_wpanel_P.InitialTankLevelm_Value;

    /* DiscreteIntegrator: '<S13>/Discrete-Time Integrator' incorporates:
     *  Constant: '<S13>/Initial Tank Level (m)'
     */
    combined_mdl_wpanel_B.DiscreteTimeIntegrator =
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.Tank1Levelm =
      combined_mdl_wpanel_B.DiscreteTimeIntegrator;

    /* Sqrt: '<S13>/Sqrt' incorporates:
     *  Constant: '<S13>/Fluid density (kg//m^3)'
     *  Constant: '<S13>/accel. due to gravity (m//s^2)'
     *  Product: '<S13>/Product1'
     */
    combined_mdl_wpanel_B.Sqrt = sqrt
      (combined_mdl_wpanel_B.DiscreteTimeIntegrator *
       combined_mdl_wpanel_P.Fluiddensitykgm3_Value *
       combined_mdl_wpanel_P.accelduetogravityms2_Value);

    /* Gain: '<S13>/Gain' incorporates:
     *  Constant: '<S13>/Orifice diameter'
     *  Sqrt: '<S13>/Sqrt1'
     */
    combined_mdl_wpanel_B.Gain_l = combined_mdl_wpanel_P.Gain_Gain_o * sqrt
      (combined_mdl_wpanel_P.Orificediameter_Value);

    /* Product: '<S13>/Product2' */
    combined_mdl_wpanel_B.Product2 = combined_mdl_wpanel_B.Sqrt *
      combined_mdl_wpanel_B.Gain_l;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.Tank1OutletFlowLmin = combined_mdl_wpanel_B.Product2;
    combined_mdl_wpanel_B.InitialTankLevelm_h =
      combined_mdl_wpanel_P.InitialTankLevelm_Value_n;

    /* DiscreteIntegrator: '<S14>/Discrete-Time Integrator' incorporates:
     *  Constant: '<S14>/Initial Tank Level (m)'
     */
    combined_mdl_wpanel_B.DiscreteTimeIntegrator_k =
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.Tank2Levelm =
      combined_mdl_wpanel_B.DiscreteTimeIntegrator_k;

    /* Gain: '<S14>/Gain' incorporates:
     *  Constant: '<S14>/Orifice diameter'
     *  Sqrt: '<S14>/Sqrt1'
     */
    combined_mdl_wpanel_B.Gain_a = combined_mdl_wpanel_P.Gain_Gain_f * sqrt
      (combined_mdl_wpanel_P.Orificediameter_Value_c);

    /* Product: '<S14>/Product2' incorporates:
     *  Constant: '<S14>/Fluid density (kg//m^3)'
     *  Constant: '<S14>/accel. due to gravity (m//s^2)'
     *  Product: '<S14>/Product1'
     *  Sqrt: '<S14>/Sqrt'
     */
    combined_mdl_wpanel_B.Product2_j = sqrt
      (combined_mdl_wpanel_B.DiscreteTimeIntegrator_k *
       combined_mdl_wpanel_P.Fluiddensitykgm3_Value_j *
       combined_mdl_wpanel_P.accelduetogravityms2_Value_b) *
      combined_mdl_wpanel_B.Gain_a;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S9>/Signals_Outport_1'
     */
    combined_mdl_wpanel_B.Tank2OutletFlowLmin = combined_mdl_wpanel_B.Product2_j;

    /* Product: '<S13>/dV to dL' incorporates:
     *  Constant: '<S13>/Bypass Diameter'
     *  Constant: '<S13>/Tank cross-sectional area (m^2)'
     *  Gain: '<S13>/Gain1'
     *  Product: '<S13>/Product3'
     *  Product: '<S13>/Product4'
     *  Sqrt: '<S13>/Sqrt2'
     *  Sum: '<S13>/Sum'
     *  Sum: '<S13>/Sum1'
     */
    combined_mdl_wpanel_B.dVtodL = (combined_mdl_wpanel_B.Merge_e - (sqrt
      (combined_mdl_wpanel_P.BypassDiameter_Value *
       combined_mdl_wpanel_B.MultiportSwitch_b) *
      combined_mdl_wpanel_P.Gain1_Gain * combined_mdl_wpanel_B.Sqrt +
      combined_mdl_wpanel_B.Product2)) /
      combined_mdl_wpanel_P.Tankcrosssectionalaream2_Value;

    /* Product: '<S14>/dV to dL' incorporates:
     *  Constant: '<S14>/Tank cross-sectional area (m^2)'
     *  Sum: '<S14>/Sum'
     *  Sum: '<S14>/Sum1'
     */
    combined_mdl_wpanel_B.dVtodL_g = ((combined_mdl_wpanel_B.Product2 +
      combined_mdl_wpanel_B.Merge1) - combined_mdl_wpanel_B.Product2_j) /
      combined_mdl_wpanel_P.Tankcrosssectionalaream2_Value_k;
    srUpdateBC(combined_mdl_wpanel_DW.CoupledTanksModel_SubsysRanBC);

    /* End of Outputs for SubSystem: '<S5>/Coupled Tanks Model' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S5>/Coupled Tanks' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* S-Function (sldrtsi): '<S8>/Stream Input' */
    /* S-Function Block: <S8>/Stream Input */
    {
      char indata[44U];
      int status;
      const char* terminators = "\r\0\n\0";
      memset(indata, 0, sizeof(indata));
      status = RTBIO_DriverIO(0, STREAMINPUT, IOREADWITHRESET, 43U, NULL,
        (double*) indata, terminators);
      combined_mdl_wpanel_B.StreamInput_o2 = 0;/* Missed Ticks value is always zero */
      if (status & 0x1) {
        int32_T var0;
        int32_T var1;
        int32_T var2;
        int nscan = sscanf(indata, "%d,%d,%d", &var0, &var1, &var2);
        if (nscan > 0)
          combined_mdl_wpanel_B.StreamInput_o1[0] = (int8_T) var0;
        if (nscan > 1)
          combined_mdl_wpanel_B.StreamInput_o1[1] = (int8_T) var1;
        if (nscan > 2)
          combined_mdl_wpanel_B.StreamInput_o1[2] = (int8_T) var2;
      }
    }

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  DataTypeConversion: '<S8>/Cast To Double'
     *  Gain: '<S8>/Gain'
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.PumpCurrentA = combined_mdl_wpanel_P.Gain_Gain_i *
      (real_T)combined_mdl_wpanel_B.StreamInput_o1[0];

    /* SignalConversion generated from: '<S8>/Constant' incorporates:
     *  Constant: '<S8>/Constant'
     */
    combined_mdl_wpanel_B.TmpBufferAtConstantOutport1 =
      combined_mdl_wpanel_P.Constant_Value_e;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.Out1FlowLmin =
      combined_mdl_wpanel_B.TmpBufferAtConstantOutport1;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.Out2FlowLmin =
      combined_mdl_wpanel_B.TmpBufferAtConstantOutport1;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  DataTypeConversion: '<S8>/Cast To Double'
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.Tank1Levelm = combined_mdl_wpanel_B.StreamInput_o1[1];

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.Tank1OutletFlowLmin =
      combined_mdl_wpanel_B.TmpBufferAtConstantOutport1;

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  DataTypeConversion: '<S8>/Cast To Double'
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.Tank2Levelm = combined_mdl_wpanel_B.StreamInput_o1[2];

    /* Merge generated from: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S8>/Signals_Outport_2'
     */
    combined_mdl_wpanel_B.Tank2OutletFlowLmin =
      combined_mdl_wpanel_B.TmpBufferAtConstantOutport1;

    /* S-Function (sldrtso): '<S8>/Stream Output' */
    /* S-Function Block: <S8>/Stream Output */

    /* no code required */
    srUpdateBC(combined_mdl_wpanel_DW.CoupledTanks_SubsysRanBC);

    /* End of Outputs for SubSystem: '<S5>/Coupled Tanks' */
    break;
  }

  /* End of SwitchCase: '<S5>/Switch Case' */
  /* SwitchCase: '<S10>/Switch Case' incorporates:
   *  Constant: '<S10>/Plant Configuration'
   */
  switch (combined_mdl_wpanel_P.PlantConfiguration_Value_k) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S10>/Case #1' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* Merge: '<S10>/Merge' incorporates:
     *  SignalConversion generated from: '<S19>/Out1'
     */
    combined_mdl_wpanel_B.Merge = combined_mdl_wpanel_B.Tank1Levelm;

    /* End of Outputs for SubSystem: '<S10>/Case #1' */

    /* Update for IfAction SubSystem: '<S10>/Case #1' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* Update for SwitchCase: '<S10>/Switch Case' */
    srUpdateBC(combined_mdl_wpanel_DW.Case1_SubsysRanBC);

    /* End of Update for SubSystem: '<S10>/Case #1' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S10>/Case #2' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    combined_mdl_wpanel_Case2(combined_mdl_wpanel_B.Tank2Levelm,
      &combined_mdl_wpanel_B.Merge);

    /* End of Outputs for SubSystem: '<S10>/Case #2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S10>/Case #3' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    combined_mdl_wpanel_Case2(combined_mdl_wpanel_B.Tank2Levelm,
      &combined_mdl_wpanel_B.Merge);

    /* End of Outputs for SubSystem: '<S10>/Case #3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S10>/Case #4' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    combined_mdl_wpanel_Case2(combined_mdl_wpanel_B.Tank2Levelm,
      &combined_mdl_wpanel_B.Merge);

    /* End of Outputs for SubSystem: '<S10>/Case #4' */
    break;
  }

  /* End of SwitchCase: '<S10>/Switch Case' */
  /* ToAsyncQueueBlock generated from: '<S1>/Controller' */
  {
    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.MultiportSwitch;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(248932402U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock generated from: '<S1>/Disturbance' */
  {
    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.MultiportSwitch_b;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(1952531358U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock generated from: '<S1>/Plant - Coupled Tanks' */
  {
    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Merge;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(2980778114U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock generated from: '<S1>/Plant - Coupled Tanks' */
  {
    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.PumpCurrentA;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(1818983624U, time, pData, size);
    }

    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Out1FlowLmin;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3288150252U, time, pData, size);
    }

    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Out2FlowLmin;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3385412045U, time, pData, size);
    }

    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Tank1Levelm;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(4253358767U, time, pData, size);
    }

    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Tank1OutletFlowLmin;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(1615004414U, time, pData, size);
    }

    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Tank2Levelm;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(357502782U, time, pData, size);
    }

    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.Tank2OutletFlowLmin;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(873267610U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock generated from: '<S1>/Reference Signal' */
  {
    {
      double time = combined_mdl_wpanel_M->Timing.t[1];
      void *pData = (void *)&combined_mdl_wpanel_B.MultiportSwitch;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(611960820U, time, pData, size);
    }
  }
}

/* Model update function */
void combined_mdl_wpanel_update(void)
{
  /* Update for RandomNumber: '<S7>/White Noise' */
  combined_mdl_wpanel_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf
    (&combined_mdl_wpanel_DW.RandSeed) * combined_mdl_wpanel_P.WhiteNoise_StdDev
    + combined_mdl_wpanel_P.WhiteNoise_Mean;

  /* Update for SwitchCase: '<S5>/Switch Case' */
  switch (combined_mdl_wpanel_DW.SwitchCase_ActiveSubsystem) {
   case 0:
    /* Update for IfAction SubSystem: '<S5>/Coupled Tanks Model' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
    combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE +=
      combined_mdl_wpanel_P.DiscreteTimeIntegrator_gainval *
      combined_mdl_wpanel_B.dVtodL;
    if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE >
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat;
    } else if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE <
               combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */

    /* Update for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
    combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j +=
      combined_mdl_wpanel_P.DiscreteTimeIntegrator_gainval_d *
      combined_mdl_wpanel_B.dVtodL_g;
    if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j >
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat_c) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat_c;
    } else if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j <
               combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat_p) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat_p;
    }

    /* End of Update for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
    /* End of Update for SubSystem: '<S5>/Coupled Tanks Model' */
    break;

   case 1:
    /* Update for IfAction SubSystem: '<S5>/Coupled Tanks' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Update for S-Function (sldrtso): '<S8>/Stream Output' incorporates:
     *  Constant: '<S8>/Constant1'
     */

    /* S-Function Block: <S8>/Stream Output */
    {
      char_T outstring[970U];
      int n = snprintf(outstring, 970U, "%g,%g,%g", (real_T)
                       combined_mdl_wpanel_B.MultiportSwitch, (real_T)
                       combined_mdl_wpanel_B.MultiportSwitch_b, (real_T)
                       combined_mdl_wpanel_P.sample_period_ms);
      RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, n, NULL, (double*) outstring,
                     NULL);
    }

    /* End of Update for SubSystem: '<S5>/Coupled Tanks' */
    break;
  }

  /* End of Update for SwitchCase: '<S5>/Switch Case' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++combined_mdl_wpanel_M->Timing.clockTick0)) {
    ++combined_mdl_wpanel_M->Timing.clockTickH0;
  }

  combined_mdl_wpanel_M->Timing.t[0] = combined_mdl_wpanel_M->Timing.clockTick0 *
    combined_mdl_wpanel_M->Timing.stepSize0 +
    combined_mdl_wpanel_M->Timing.clockTickH0 *
    combined_mdl_wpanel_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++combined_mdl_wpanel_M->Timing.clockTick1)) {
      ++combined_mdl_wpanel_M->Timing.clockTickH1;
    }

    combined_mdl_wpanel_M->Timing.t[1] =
      combined_mdl_wpanel_M->Timing.clockTick1 *
      combined_mdl_wpanel_M->Timing.stepSize1 +
      combined_mdl_wpanel_M->Timing.clockTickH1 *
      combined_mdl_wpanel_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void combined_mdl_wpanel_initialize(void)
{
  /* Start for DiscretePulseGenerator: '<S6>/input_square' */
  combined_mdl_wpanel_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S4>/dist_square' */
  combined_mdl_wpanel_DW.clockTickCounter_e = 0;

  /* Start for SwitchCase: '<S5>/Switch Case' */
  combined_mdl_wpanel_DW.SwitchCase_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S5>/Coupled Tanks Model' */
  /* Start for Constant: '<S13>/Initial Tank Level (m)' */
  combined_mdl_wpanel_B.InitialTankLevelm =
    combined_mdl_wpanel_P.InitialTankLevelm_Value;

  /* Start for Constant: '<S14>/Initial Tank Level (m)' */
  combined_mdl_wpanel_B.InitialTankLevelm_h =
    combined_mdl_wpanel_P.InitialTankLevelm_Value_n;

  /* End of Start for SubSystem: '<S5>/Coupled Tanks Model' */

  /* Start for IfAction SubSystem: '<S5>/Coupled Tanks' */
  /* Start for S-Function (sldrtso): '<S8>/Stream Output' */

  /* S-Function Block: <S8>/Stream Output */
  /* no initial value required */

  /* End of Start for SubSystem: '<S5>/Coupled Tanks' */
  {
    real_T tmp;
    uint32_T r;
    uint32_T t;
    uint32_T tseed;

    /* InitializeConditions for RandomNumber: '<S7>/White Noise' */
    tmp = floor(combined_mdl_wpanel_P.dist_noise_seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    if (tmp < 0.0) {
      tseed = (uint32_T)-(int32_T)(uint32_T)-tmp;
    } else {
      tseed = (uint32_T)tmp;
    }

    r = tseed >> 16U;
    t = tseed & 32768U;
    tseed = ((((tseed - (r << 16U)) + t) << 16U) + t) + r;
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else if (tseed > 2147483646U) {
      tseed = 2147483646U;
    }

    combined_mdl_wpanel_DW.RandSeed = tseed;
    combined_mdl_wpanel_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf
      (&combined_mdl_wpanel_DW.RandSeed) *
      combined_mdl_wpanel_P.WhiteNoise_StdDev +
      combined_mdl_wpanel_P.WhiteNoise_Mean;

    /* End of InitializeConditions for RandomNumber: '<S7>/White Noise' */

    /* SystemInitialize for IfAction SubSystem: '<S5>/Coupled Tanks Model' */
    /* InitializeConditions for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
    combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE =
      combined_mdl_wpanel_B.InitialTankLevelm;
    if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE >
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat;
    } else if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE <
               combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat;
    }

    /* End of InitializeConditions for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
    combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j =
      combined_mdl_wpanel_B.InitialTankLevelm_h;
    if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j >
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat_c) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat_c;
    } else if (combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j <
               combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat_p) {
      combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j =
        combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat_p;
    }

    /* End of InitializeConditions for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */

    /* SystemInitialize for Merge: '<S12>/Merge' */
    combined_mdl_wpanel_B.Merge_e = combined_mdl_wpanel_P.Merge_InitialOutput;

    /* SystemInitialize for Merge: '<S12>/Merge1' */
    combined_mdl_wpanel_B.Merge1 = combined_mdl_wpanel_P.Merge1_InitialOutput;

    /* End of SystemInitialize for SubSystem: '<S5>/Coupled Tanks Model' */

    /* SystemInitialize for IfAction SubSystem: '<S5>/Coupled Tanks' */
    /* SystemInitialize for S-Function (sldrtsi): '<S8>/Stream Input' incorporates:
     *  Outport: '<S8>/Missed Ticks'
     */
    combined_mdl_wpanel_B.StreamInput_o2 = combined_mdl_wpanel_P.MissedTicks_Y0;

    /* End of SystemInitialize for SubSystem: '<S5>/Coupled Tanks' */

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.PumpCurrentA =
      combined_mdl_wpanel_P.Merge_1_InitialOutput;

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.Out1FlowLmin =
      combined_mdl_wpanel_P.Merge_2_InitialOutput;

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.Out2FlowLmin =
      combined_mdl_wpanel_P.Merge_3_InitialOutput;

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.Tank1Levelm =
      combined_mdl_wpanel_P.Merge_4_InitialOutput;

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.Tank1OutletFlowLmin =
      combined_mdl_wpanel_P.Merge_5_InitialOutput;

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.Tank2Levelm =
      combined_mdl_wpanel_P.Merge_6_InitialOutput;

    /* SystemInitialize for Merge generated from: '<S5>/Merge' */
    combined_mdl_wpanel_B.Tank2OutletFlowLmin =
      combined_mdl_wpanel_P.Merge_7_InitialOutput;

    /* SystemInitialize for Merge: '<S10>/Merge' */
    combined_mdl_wpanel_B.Merge = combined_mdl_wpanel_P.Merge_InitialOutput_j;
  }
}

/* Model terminate function */
void combined_mdl_wpanel_terminate(void)
{
  /* Terminate for IfAction SubSystem: '<S5>/Coupled Tanks' */
  /* Terminate for S-Function (sldrtso): '<S8>/Stream Output' */

  /* no final value required */

  /* End of Terminate for SubSystem: '<S5>/Coupled Tanks' */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  combined_mdl_wpanel_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  combined_mdl_wpanel_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  combined_mdl_wpanel_initialize();
}

void MdlTerminate(void)
{
  combined_mdl_wpanel_terminate();
}

/* Registration function */
RT_MODEL_combined_mdl_wpanel_T *combined_mdl_wpanel(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)combined_mdl_wpanel_M, 0,
                sizeof(RT_MODEL_combined_mdl_wpanel_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&combined_mdl_wpanel_M->solverInfo,
                          &combined_mdl_wpanel_M->Timing.simTimeStep);
    rtsiSetTPtr(&combined_mdl_wpanel_M->solverInfo, &rtmGetTPtr
                (combined_mdl_wpanel_M));
    rtsiSetStepSizePtr(&combined_mdl_wpanel_M->solverInfo,
                       &combined_mdl_wpanel_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&combined_mdl_wpanel_M->solverInfo,
                          (&rtmGetErrorStatus(combined_mdl_wpanel_M)));
    rtsiSetRTModelPtr(&combined_mdl_wpanel_M->solverInfo, combined_mdl_wpanel_M);
  }

  rtsiSetSimTimeStep(&combined_mdl_wpanel_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&combined_mdl_wpanel_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&combined_mdl_wpanel_M->solverInfo, false);
  rtsiSetSolverName(&combined_mdl_wpanel_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = combined_mdl_wpanel_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    combined_mdl_wpanel_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    combined_mdl_wpanel_M->Timing.sampleTimes =
      (&combined_mdl_wpanel_M->Timing.sampleTimesArray[0]);
    combined_mdl_wpanel_M->Timing.offsetTimes =
      (&combined_mdl_wpanel_M->Timing.offsetTimesArray[0]);

    /* task periods */
    combined_mdl_wpanel_M->Timing.sampleTimes[0] = (0.0);
    combined_mdl_wpanel_M->Timing.sampleTimes[1] = (0.1);

    /* task offsets */
    combined_mdl_wpanel_M->Timing.offsetTimes[0] = (0.0);
    combined_mdl_wpanel_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(combined_mdl_wpanel_M, &combined_mdl_wpanel_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = combined_mdl_wpanel_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    combined_mdl_wpanel_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(combined_mdl_wpanel_M, -1);
  combined_mdl_wpanel_M->Timing.stepSize0 = 0.1;
  combined_mdl_wpanel_M->Timing.stepSize1 = 0.1;

  /* External mode info */
  combined_mdl_wpanel_M->Sizes.checksums[0] = (580702543U);
  combined_mdl_wpanel_M->Sizes.checksums[1] = (3115436072U);
  combined_mdl_wpanel_M->Sizes.checksums[2] = (1001837882U);
  combined_mdl_wpanel_M->Sizes.checksums[3] = (1357627866U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[14];
    combined_mdl_wpanel_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &combined_mdl_wpanel_DW.CoupledTanks_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &combined_mdl_wpanel_DW.Case1_f.Case1_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &combined_mdl_wpanel_DW.Case2_f.Case1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&combined_mdl_wpanel_DW.Case3_SubsysRanBC;
    systemRan[6] = (sysRanDType *)&combined_mdl_wpanel_DW.Case4_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &combined_mdl_wpanel_DW.CoupledTanksModel_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&combined_mdl_wpanel_DW.Case1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &combined_mdl_wpanel_DW.Case2.Case2_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &combined_mdl_wpanel_DW.Case3.Case2_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &combined_mdl_wpanel_DW.Case4.Case2_SubsysRanBC;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(combined_mdl_wpanel_M->extModeInfo,
      &combined_mdl_wpanel_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(combined_mdl_wpanel_M->extModeInfo,
                        combined_mdl_wpanel_M->Sizes.checksums);
    rteiSetTPtr(combined_mdl_wpanel_M->extModeInfo, rtmGetTPtr
                (combined_mdl_wpanel_M));
  }

  combined_mdl_wpanel_M->solverInfoPtr = (&combined_mdl_wpanel_M->solverInfo);
  combined_mdl_wpanel_M->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&combined_mdl_wpanel_M->solverInfo, 0.1);
  rtsiSetSolverMode(&combined_mdl_wpanel_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  combined_mdl_wpanel_M->blockIO = ((void *) &combined_mdl_wpanel_B);
  (void) memset(((void *) &combined_mdl_wpanel_B), 0,
                sizeof(B_combined_mdl_wpanel_T));

  /* parameters */
  combined_mdl_wpanel_M->defaultParam = ((real_T *)&combined_mdl_wpanel_P);

  /* states (dwork) */
  combined_mdl_wpanel_M->dwork = ((void *) &combined_mdl_wpanel_DW);
  (void) memset((void *)&combined_mdl_wpanel_DW, 0,
                sizeof(DW_combined_mdl_wpanel_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    combined_mdl_wpanel_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 25;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  combined_mdl_wpanel_M->Sizes.numContStates = (0);/* Number of continuous states */
  combined_mdl_wpanel_M->Sizes.numY = (0);/* Number of model outputs */
  combined_mdl_wpanel_M->Sizes.numU = (0);/* Number of model inputs */
  combined_mdl_wpanel_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  combined_mdl_wpanel_M->Sizes.numSampTimes = (2);/* Number of sample times */
  combined_mdl_wpanel_M->Sizes.numBlocks = (137);/* Number of blocks */
  combined_mdl_wpanel_M->Sizes.numBlockIO = (31);/* Number of block outputs */
  combined_mdl_wpanel_M->Sizes.numBlockPrms = (82);/* Sum of parameter "widths" */
  return combined_mdl_wpanel_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
