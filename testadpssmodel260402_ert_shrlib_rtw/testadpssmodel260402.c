/*
 * File: testadpssmodel260402.c
 *
 * Code generated for Simulink model 'testadpssmodel260402'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Fri Apr 10 20:22:24 2026
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
  real_T tmp[2];
  real_T rtb_Gain1_idx_0;
  real_T rtb_Gain1_idx_1;
  int32_T i;

  /* Gain: '<S56>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
  rtb_Gain1_idx_0 = 0.0;
  rtb_Gain1_idx_1 = 0.0;
  for (i = 0; i < 3; i++) {
    _mm_storeu_pd(&tmp[0], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&testadpssmodel260402_ConstP.Gain3_Gain[3 * i]), _mm_set1_pd
      (testadpssmodel260402_U.Vabc[i])), _mm_set_pd(rtb_Gain1_idx_1,
      rtb_Gain1_idx_0)));
    rtb_Gain1_idx_0 = tmp[0];
    rtb_Gain1_idx_1 = tmp[1];
  }

  /* End of Gain: '<S56>/Gain3' */

  /* Gain: '<S56>/Gain1' */
  rtb_Gain1_idx_0 *= 0.66666666666666663;
  rtb_Gain1_idx_1 *= 0.66666666666666663;

  /* Outputs for Enabled SubSystem: '<S55>/Subsystem1' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  if (testadpssmodel260402_ConstB.Compare > 0) {
    /* Fcn: '<S60>/Fcn1' incorporates:
     *  Fcn: '<S60>/Fcn'
     *  UnitDelay: '<Root>/Unit Delay'
     */
    testadpssmodel260402_B.Fcn1 = -rtb_Gain1_idx_0 * sin
      (testadpssmodel260402_Y.theta) + rtb_Gain1_idx_1 * cos
      (testadpssmodel260402_Y.theta);
  }

  /* End of Outputs for SubSystem: '<S55>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S55>/Subsystem - pi//2 delay' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  if (testadpssmodel260402_ConstB.Compare_h > 0) {
    /* Fcn: '<S59>/Fcn1' incorporates:
     *  Fcn: '<S59>/Fcn'
     *  UnitDelay: '<Root>/Unit Delay'
     */
    testadpssmodel260402_B.Fcn1_o = rtb_Gain1_idx_0 * cos
      (testadpssmodel260402_Y.theta) + rtb_Gain1_idx_1 * sin
      (testadpssmodel260402_Y.theta);
  }

  /* End of Outputs for SubSystem: '<S55>/Subsystem - pi//2 delay' */

  /* Switch: '<S55>/Switch' */
  if (testadpssmodel260402_ConstB.Compare != 0) {
    /* Sum: '<Root>/Sum' */
    rtb_Gain1_idx_1 = testadpssmodel260402_B.Fcn1;
  } else {
    /* Sum: '<Root>/Sum' */
    rtb_Gain1_idx_1 = testadpssmodel260402_B.Fcn1_o;
  }

  /* End of Switch: '<S55>/Switch' */

  /* Gain: '<S40>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S32>/Filter'
   *  Gain: '<S30>/Derivative Gain'
   *  Sum: '<S32>/SumD'
   */
  rtb_Gain1_idx_0 = (0.0 * rtb_Gain1_idx_1 -
                     testadpssmodel260402_DW.Filter_DSTATE) * 100.0;

  /* DiscreteIntegrator: '<Root>/Discrete-Time Integrator' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DiscreteIntegrator: '<S37>/Integrator'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<S46>/Sum'
   */
  testadpssmodel260402_DW.DiscreteTimeIntegrator_DSTATE += (((rtb_Gain1_idx_1 +
    testadpssmodel260402_DW.Integrator_DSTATE) + rtb_Gain1_idx_0) +
    314.15926535897933) * 5.0E-5;

  /* Math: '<Root>/Mod' incorporates:
   *  Constant: '<Root>/Constant2'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  testadpssmodel260402_Y.theta = rt_modd_snf
    (testadpssmodel260402_DW.DiscreteTimeIntegrator_DSTATE, 6.2831853071795862);

  /* Outport: '<Root>/Out2' incorporates:
   *  Trigonometry: '<Root>/Sin'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  testadpssmodel260402_Y.Va = sin(testadpssmodel260402_Y.theta);

  /* Update for DiscreteIntegrator: '<S32>/Filter' */
  testadpssmodel260402_DW.Filter_DSTATE += 5.0E-5 * rtb_Gain1_idx_0;

  /* Update for DiscreteIntegrator: '<S37>/Integrator' */
  testadpssmodel260402_DW.Integrator_DSTATE += 5.0E-5 * rtb_Gain1_idx_1;
}

/* Model initialize function */
void testadpssmodel260402_initialize(void)
{
  /* (no initialization code required) */
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
