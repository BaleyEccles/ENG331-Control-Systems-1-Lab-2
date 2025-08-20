/*
 * combined_mdl_wpanel_data.c
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

/* Block parameters (default storage) */
P_combined_mdl_wpanel_T combined_mdl_wpanel_P = {
  /* Variable: sample_period_ms
   * Referenced by: '<S8>/Constant1'
   */
  100.0,

  /* Mask Parameter: dist_noise_Cov
   * Referenced by: '<S7>/Output'
   */
  0.1,

  /* Mask Parameter: StreamInput_MaxMissedTicks
   * Referenced by: '<S8>/Stream Input'
   */
  50.0,

  /* Mask Parameter: StreamOutput_MaxMissedTicks
   * Referenced by: '<S8>/Stream Output'
   */
  10.0,

  /* Mask Parameter: input_chirp_T
   * Referenced by: '<S23>/targetTime'
   */
  0.0,

  /* Mask Parameter: StreamInput_YieldWhenWaiting
   * Referenced by: '<S8>/Stream Input'
   */
  1.0,

  /* Mask Parameter: StreamOutput_YieldWhenWaiting
   * Referenced by: '<S8>/Stream Output'
   */
  0.0,

  /* Mask Parameter: input_chirp_f1
   * Referenced by:
   *   '<S23>/deltaFreq'
   *   '<S23>/initialFreq'
   */
  0.0,

  /* Mask Parameter: input_chirp_f2
   * Referenced by: '<S23>/deltaFreq'
   */
  0.0,

  /* Mask Parameter: dist_noise_seed
   * Referenced by: '<S7>/White Noise'
   */
  23341.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S18>/Gain'
   */
  0.5,

  /* Expression: 1/12
   * Referenced by: '<S11>/Kp'
   */
  0.083333333333333329,

  /* Expression: 1
   * Referenced by: '<S11>/Kp1'
   */
  1.0,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S12>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge1_InitialOutput
   * Referenced by: '<S12>/Merge1'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S13>/Initial Tank Level (m)'
   */
  0.01,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S13>/Discrete-Time Integrator'
   */
  0.1,

  /* Expression: 20
   * Referenced by: '<S13>/Discrete-Time Integrator'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S13>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S13>/Fluid density (kg//m^3)'
   */
  1.0,

  /* Expression: 9.81
   * Referenced by: '<S13>/accel. due to gravity (m//s^2)'
   */
  9.81,

  /* Expression: 0.001
   * Referenced by: '<S13>/Orifice diameter'
   */
  0.001,

  /* Expression: 0.25*pi()
   * Referenced by: '<S13>/Gain'
   */
  0.78539816339744828,

  /* Expression: 0.01
   * Referenced by: '<S14>/Initial Tank Level (m)'
   */
  0.01,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval_d
   * Referenced by: '<S14>/Discrete-Time Integrator'
   */
  0.1,

  /* Expression: 20
   * Referenced by: '<S14>/Discrete-Time Integrator'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S14>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S14>/Fluid density (kg//m^3)'
   */
  1.0,

  /* Expression: 9.81
   * Referenced by: '<S14>/accel. due to gravity (m//s^2)'
   */
  9.81,

  /* Expression: 0.001
   * Referenced by: '<S14>/Orifice diameter'
   */
  0.001,

  /* Expression: 0.25*pi()
   * Referenced by: '<S14>/Gain'
   */
  0.78539816339744828,

  /* Expression: 0.001
   * Referenced by: '<S13>/Bypass Diameter'
   */
  0.001,

  /* Expression: 0.25*pi()
   * Referenced by: '<S13>/Gain1'
   */
  0.78539816339744828,

  /* Expression: 0.05
   * Referenced by: '<S13>/Tank cross-sectional area (m^2)'
   */
  0.05,

  /* Expression: 0.05
   * Referenced by: '<S14>/Tank cross-sectional area (m^2)'
   */
  0.05,

  /* Expression: 1
   * Referenced by: '<S8>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant'
   */
  0.0,

  /* Expression: 4
   * Referenced by: '<S6>/input_mode'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_default'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_sine'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_sine'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_sine'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_sine'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_sine_offset'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S6>/input_square'
   */
  3.0,

  /* Computed Parameter: input_square_Period
   * Referenced by: '<S6>/input_square'
   */
  100.0,

  /* Computed Parameter: input_square_Duty
   * Referenced by: '<S6>/input_square'
   */
  50.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_square'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_square_offset'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/input_chirp_amplitude'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S23>/Gain'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S4>/dist_mode'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/dist_default'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/dist_constant'
   */
  1.0,

  /* Expression: 6
   * Referenced by: '<S4>/dist_sine'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S4>/dist_sine'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/dist_sine'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/dist_sine'
   */
  0.0,

  /* Expression: 6
   * Referenced by: '<S4>/dist_sine_offset'
   */
  6.0,

  /* Expression: 2
   * Referenced by: '<S4>/dist_square'
   */
  2.0,

  /* Computed Parameter: dist_square_Period
   * Referenced by: '<S4>/dist_square'
   */
  500.0,

  /* Computed Parameter: dist_square_Duty
   * Referenced by: '<S4>/dist_square'
   */
  400.0,

  /* Expression: 0
   * Referenced by: '<S4>/dist_square'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/dist_square_offset'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S7>/White Noise'
   */
  0.0,

  /* Computed Parameter: WhiteNoise_StdDev
   * Referenced by: '<S7>/White Noise'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_2_InitialOutput
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Expression: seed
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Expression: sqrt(Cov)/sqrt(Ts(1))
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_5_InitialOutput
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_6_InitialOutput
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_7_InitialOutput
   * Referenced by: '<S5>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_InitialOutput_j
   * Referenced by: '<S10>/Merge'
   */
  0.0,

  /* Computed Parameter: MissedTicks_Y0
   * Referenced by: '<S8>/Missed Ticks'
   */
  0,

  /* Computed Parameter: PlantConfiguration_Value
   * Referenced by: '<S12>/Plant Configuration'
   */
  0,

  /* Computed Parameter: SimulinkModelConfiguration_Value
   * Referenced by: '<S5>/Simulink Model Configuration'
   */
  0,

  /* Computed Parameter: PlantConfiguration_Value_k
   * Referenced by: '<S10>/Plant Configuration'
   */
  0,

  /* Start of '<S12>/Case #2' */
  {
    /* Expression: 0
     * Referenced by: '<S16>/Constant'
     */
    0.0
  }
  ,

  /* End of '<S12>/Case #2' */

  /* Start of '<S12>/Case #1' */
  {
    /* Expression: 0
     * Referenced by: '<S15>/Constant'
     */
    0.0
  }
  /* End of '<S12>/Case #1' */
};
