/*
 * File: testadpssmodel260402.c
 *
 * Code generated for Simulink model 'testadpssmodel260402'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Fri Apr 10 09:29:34 2026
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "testadpssmodel260402.h"
#include <emmintrin.h>
#include <math.h>
#include "testadpssmodel260402_private.h"
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include <float.h>

/* Block signals (default storage) */
B_testadpssmodel260402_T testadpssmodel260402_B;

/* Block states (default storage) */
DW_testadpssmodel260402_T testadpssmodel260402_DW;

/* External inputs (root inport signals with default storage) */
ExtU_testadpssmodel260402_T testadpssmodel260402_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_testadpssmodel260402_T testadpssmodel260402_Y;

/* Real-time model */
static RT_MODEL_testadpssmodel260402_T testadpssmodel260402_M_;
RT_MODEL_testadpssmodel260402_T *const testadpssmodel260402_M =
  &testadpssmodel260402_M_;
real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void testadpssmodel260402_step(void)
{
  real_T tmp_1[2];
  real_T Fcn_tmp;
  real_T rtb_Gain1_idx_0;
  real_T rtb_Gain1_idx_1;
  real_T rtb_Switch_f_idx_1;
  int32_T i;
  int8_T tmp;
  int8_T tmp_0;

  /* Gain: '<S58>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
  rtb_Gain1_idx_0 = 0.0;
  rtb_Gain1_idx_1 = 0.0;
  for (i = 0; i < 3; i++) {
    _mm_storeu_pd(&tmp_1[0], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&testadpssmodel260402_ConstP.Gain3_Gain[3 * i]), _mm_set1_pd
      (testadpssmodel260402_U.Vabc[i])), _mm_set_pd(rtb_Gain1_idx_1,
      rtb_Gain1_idx_0)));
    rtb_Gain1_idx_0 = tmp_1[0];
    rtb_Gain1_idx_1 = tmp_1[1];
  }

  /* End of Gain: '<S58>/Gain3' */

  /* Gain: '<S58>/Gain1' */
  rtb_Gain1_idx_0 *= 0.66666666666666663;
  rtb_Gain1_idx_1 *= 0.66666666666666663;

  /* Outputs for Enabled SubSystem: '<S57>/Subsystem1' incorporates:
   *  EnablePort: '<S62>/Enable'
   */
  if (testadpssmodel260402_ConstB.Compare > 0) {
    /* Fcn: '<S62>/Fcn' incorporates:
     *  Fcn: '<S62>/Fcn1'
     *  UnitDelay: '<Root>/Unit Delay'
     */
    rtb_Switch_f_idx_1 = sin(testadpssmodel260402_Y.theta);
    Fcn_tmp = cos(testadpssmodel260402_Y.theta);

    /* Fcn: '<S62>/Fcn' */
    testadpssmodel260402_B.Fcn = rtb_Gain1_idx_0 * Fcn_tmp + rtb_Gain1_idx_1 *
      rtb_Switch_f_idx_1;

    /* Fcn: '<S62>/Fcn1' */
    testadpssmodel260402_B.Fcn1 = -rtb_Gain1_idx_0 * rtb_Switch_f_idx_1 +
      rtb_Gain1_idx_1 * Fcn_tmp;
  }

  /* End of Outputs for SubSystem: '<S57>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S57>/Subsystem - pi//2 delay' incorporates:
   *  EnablePort: '<S61>/Enable'
   */
  if (testadpssmodel260402_ConstB.Compare_d > 0) {
    /* Fcn: '<S61>/Fcn' incorporates:
     *  Fcn: '<S61>/Fcn1'
     *  UnitDelay: '<Root>/Unit Delay'
     */
    rtb_Switch_f_idx_1 = cos(testadpssmodel260402_Y.theta);
    Fcn_tmp = sin(testadpssmodel260402_Y.theta);

    /* Fcn: '<S61>/Fcn' */
    testadpssmodel260402_B.Fcn_f = rtb_Gain1_idx_0 * Fcn_tmp - rtb_Gain1_idx_1 *
      rtb_Switch_f_idx_1;

    /* Fcn: '<S61>/Fcn1' */
    testadpssmodel260402_B.Fcn1_f = rtb_Gain1_idx_0 * rtb_Switch_f_idx_1 +
      rtb_Gain1_idx_1 * Fcn_tmp;
  }

  /* End of Outputs for SubSystem: '<S57>/Subsystem - pi//2 delay' */

  /* Switch: '<S57>/Switch' */
  if (testadpssmodel260402_ConstB.Compare != 0) {
    /* Outport: '<Root>/d' */
    testadpssmodel260402_Y.d = testadpssmodel260402_B.Fcn;
    rtb_Switch_f_idx_1 = testadpssmodel260402_B.Fcn1;
  } else {
    /* Outport: '<Root>/d' */
    testadpssmodel260402_Y.d = testadpssmodel260402_B.Fcn_f;
    rtb_Switch_f_idx_1 = testadpssmodel260402_B.Fcn1_f;
  }

  /* End of Switch: '<S57>/Switch' */

  /* Gain: '<S42>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S34>/Filter'
   *  Gain: '<S32>/Derivative Gain'
   *  Sum: '<Root>/Sum4'
   *  Sum: '<S34>/SumD'
   */
  rtb_Gain1_idx_0 = (0.0 * rtb_Switch_f_idx_1 -
                     testadpssmodel260402_DW.Filter_DSTATE) * 100.0;

  /* Sum: '<S48>/Sum' incorporates:
   *  DiscreteIntegrator: '<S39>/Integrator'
   *  Gain: '<S44>/Proportional Gain'
   *  Sum: '<Root>/Sum4'
   */
  rtb_Gain1_idx_1 = (177.7 * rtb_Switch_f_idx_1 +
                     testadpssmodel260402_DW.Integrator_DSTATE) +
    rtb_Gain1_idx_0;

  /* Saturate: '<S46>/Saturation' */
  if (rtb_Gain1_idx_1 > 62.831853071795862) {
    Fcn_tmp = 62.831853071795862;
  } else if (rtb_Gain1_idx_1 < -62.831853071795862) {
    Fcn_tmp = -62.831853071795862;
  } else {
    Fcn_tmp = rtb_Gain1_idx_1;
  }

  /* End of Saturate: '<S46>/Saturation' */

  /* Outport: '<Root>/w' incorporates:
   *  Constant: '<Root>/f_feedforward'
   *  Sum: '<Root>/Sum'
   */
  testadpssmodel260402_Y.w = Fcn_tmp + 314.15926535897933;

  /* DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  if (testadpssmodel260402_DW.DiscreteTimeIntegrator_SYSTEM_E == 0) {
    /* DiscreteIntegrator: '<Root>/Discrete-Time Integrator' incorporates:
     *  Constant: '<Root>/f_feedforward'
     *  Sum: '<Root>/Sum'
     */
    testadpssmodel260402_DW.DiscreteTimeIntegrator_DSTATE += (Fcn_tmp +
      314.15926535897933) * 5.0E-5;
  }

  /* End of DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */

  /* Math: '<Root>/Math Function' incorporates:
   *  Constant: '<Root>/period mod'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  testadpssmodel260402_Y.theta = rt_modd_snf
    (testadpssmodel260402_DW.DiscreteTimeIntegrator_DSTATE, 6.2831853071795862);

  /* DeadZone: '<S31>/DeadZone' */
  if (rtb_Gain1_idx_1 > 62.831853071795862) {
    rtb_Gain1_idx_1 -= 62.831853071795862;
  } else if (rtb_Gain1_idx_1 >= -62.831853071795862) {
    rtb_Gain1_idx_1 = 0.0;
  } else {
    rtb_Gain1_idx_1 -= -62.831853071795862;
  }

  /* End of DeadZone: '<S31>/DeadZone' */

  /* Gain: '<S36>/Integral Gain' incorporates:
   *  Sum: '<Root>/Sum4'
   */
  rtb_Switch_f_idx_1 *= 0.79;

  /* Switch: '<S29>/Switch1' incorporates:
   *  Constant: '<S29>/Clamping_zero'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S29>/Constant2'
   *  RelationalOperator: '<S29>/fix for DT propagation issue'
   */
  if (rtb_Gain1_idx_1 > 0.0) {
    tmp = 1;
  } else {
    tmp = -1;
  }

  /* Switch: '<S29>/Switch2' incorporates:
   *  Constant: '<S29>/Clamping_zero'
   *  Constant: '<S29>/Constant3'
   *  Constant: '<S29>/Constant4'
   *  RelationalOperator: '<S29>/fix for DT propagation issue1'
   */
  if (rtb_Switch_f_idx_1 > 0.0) {
    tmp_0 = 1;
  } else {
    tmp_0 = -1;
  }

  /* Switch: '<S29>/Switch' incorporates:
   *  Constant: '<S29>/Clamping_zero'
   *  Constant: '<S29>/Constant1'
   *  Logic: '<S29>/AND3'
   *  RelationalOperator: '<S29>/Equal1'
   *  RelationalOperator: '<S29>/Relational Operator'
   *  Switch: '<S29>/Switch1'
   *  Switch: '<S29>/Switch2'
   */
  if ((rtb_Gain1_idx_1 != 0.0) && (tmp == tmp_0)) {
    rtb_Switch_f_idx_1 = 0.0;
  }

  /* Update for DiscreteIntegrator: '<S39>/Integrator' incorporates:
   *  Switch: '<S29>/Switch'
   */
  testadpssmodel260402_DW.Integrator_DSTATE += 5.0E-5 * rtb_Switch_f_idx_1;

  /* Update for DiscreteIntegrator: '<S34>/Filter' */
  testadpssmodel260402_DW.Filter_DSTATE += 5.0E-5 * rtb_Gain1_idx_0;

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  testadpssmodel260402_DW.DiscreteTimeIntegrator_SYSTEM_E = 0U;
}

/* Model initialize function */
void testadpssmodel260402_initialize(void)
{
  /* Enable for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  testadpssmodel260402_DW.DiscreteTimeIntegrator_SYSTEM_E = 1U;
}

/* Model terminate function */
void testadpssmodel260402_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
