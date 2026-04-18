/*
 * File: testadpssmodel260402.c
 *
 * Code generated for Simulink model 'testadpssmodel260402'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
<<<<<<< Updated upstream
 * C/C++ source code generated on : Sat Apr 18 15:09:02 2026
=======
<<<<<<< HEAD
<<<<<<< HEAD
 * C/C++ source code generated on : Tue Apr 14 15:08:47 2026
=======
 * C/C++ source code generated on : Tue Apr 14 12:55:08 2026
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
=======
 * C/C++ source code generated on : Tue Apr 14 12:55:08 2026
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "testadpssmodel260402.h"
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
#include "rtwtypes.h"
#include "testadpssmodel260402_private.h"
#include <math.h>
#include <emmintrin.h>
=======
=======
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
#include <emmintrin.h>
#include <math.h>
#include "testadpssmodel260402_private.h"
#include "rtwtypes.h"
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
=======
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
<<<<<<< HEAD

/*
 * Output and update for enable system:
 *    '<S3>/Subsystem - pi//2 delay'
 *    '<S4>/Subsystem - pi//2 delay'
 *    '<S68>/Subsystem - pi//2 delay'
 *    '<S74>/Subsystem - pi//2 delay'
 */
void testadpssmode_Subsystempi2delay(uint8_T rtu_Enable, const real_T
  rtu_alpha_beta[2], real_T rtu_wt, real_T *rty_dq, real_T *rty_dq_n)
{
  real_T tmp_1[2];

  /* Outputs for Enabled SubSystem: '<S3>/Subsystem - pi//2 delay' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    /* Fcn: '<S10>/Fcn' incorporates:
     *  Fcn: '<S10>/Fcn1'
     */
    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    _mm_storeu_pd(&tmp_1[0], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(rtu_alpha_beta[0]),
      _mm_set_pd(tmp, tmp_0)), _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(rtu_alpha_beta
      [1]), _mm_set_pd(tmp_0, tmp)), _mm_set_pd(1.0, -1.0))));
    *rty_dq = tmp_1[0];
    *rty_dq_n = tmp_1[1];
  }

  /* End of Outputs for SubSystem: '<S3>/Subsystem - pi//2 delay' */
}

/*
 * Output and update for enable system:
 *    '<S3>/Subsystem1'
 *    '<S4>/Subsystem1'
 *    '<S68>/Subsystem1'
 *    '<S74>/Subsystem1'
 */
void testadpssmodel260402_Subsystem1(uint8_T rtu_Enable, const real_T
  rtu_alpha_beta[2], real_T rtu_wt, real_T *rty_dq, real_T *rty_dq_e)
{
  real_T tmp_1[2];

  /* Outputs for Enabled SubSystem: '<S3>/Subsystem1' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    /* Fcn: '<S11>/Fcn' incorporates:
     *  Fcn: '<S11>/Fcn1'
     */
    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);

    /* Fcn: '<S11>/Fcn1' incorporates:
     *  Fcn: '<S11>/Fcn'
     */
    _mm_storeu_pd(&tmp_1[0], _mm_add_pd(_mm_mul_pd(_mm_set_pd(-rtu_alpha_beta[0],
      rtu_alpha_beta[0]), _mm_set_pd(tmp, tmp_0)), _mm_mul_pd(_mm_set1_pd
      (rtu_alpha_beta[1]), _mm_set_pd(tmp_0, tmp))));
    *rty_dq = tmp_1[0];
    *rty_dq_e = tmp_1[1];
  }

  /* End of Outputs for SubSystem: '<S3>/Subsystem1' */
}

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
=======
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes

/* Model step function */
void testadpssmodel260402_step(void)
{
<<<<<<< Updated upstream
  real_T tmp[2];
  real_T rtb_Gain1_idx_0;
  real_T rtb_Gain1_idx_1;
  int32_T i;

  /* Gain: '<S56>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
=======
<<<<<<< HEAD
<<<<<<< HEAD
  real_T rtb_Gain1[3];
  real_T tmp_1[2];
  real_T denAccum;
  real_T denAccum_0;
  real_T denAccum_1;
  real_T numAccum;
  real_T numAccum_0;
  real_T numAccum_1;
  real_T rtb_Gain;
  real_T rtb_Gain1_i;
  real_T tmp;
  real_T tmp_0;
  int32_T i;

  /* Gain: '<S75>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
  rtb_Gain1_i = 0.0;
  tmp = 0.0;
  tmp_0 = 0.0;
  for (i = 0; i < 3; i++) {
    _mm_storeu_pd(&tmp_1[0], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&testadpssmodel260402_ConstP.pooled3[3 * i]), _mm_set1_pd
      (testadpssmodel260402_U.Vabc[i])), _mm_set_pd(tmp, rtb_Gain1_i)));
    rtb_Gain1_i = tmp_1[0];
    tmp = tmp_1[1];
    tmp_0 += testadpssmodel260402_ConstP.pooled3[3 * i + 2] *
      testadpssmodel260402_U.Vabc[i];
  }

  /* End of Gain: '<S75>/Gain3' */

  /* Gain: '<S75>/Gain1' */
  rtb_Gain1[0] = 0.66666666666666663 * rtb_Gain1_i;
  rtb_Gain1[1] = 0.66666666666666663 * tmp;
  rtb_Gain1[2] = 0.66666666666666663 * tmp_0;

  /* Outputs for Enabled SubSystem: '<S74>/Subsystem1' */
  /* UnitDelay: '<S2>/Unit Delay2' */
  testadpssmodel260402_Subsystem1(testadpssmodel260402_ConstB.Compare_l,
    &rtb_Gain1[0], testadpssmodel260402_Y.theta, &testadpssmodel260402_B.Fcn,
    &testadpssmodel260402_B.Fcn1);

  /* End of Outputs for SubSystem: '<S74>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S74>/Subsystem - pi//2 delay' */
  testadpssmode_Subsystempi2delay(testadpssmodel260402_ConstB.Compare_a,
    &rtb_Gain1[0], testadpssmodel260402_Y.theta, &testadpssmodel260402_B.Fcn_i,
    &testadpssmodel260402_B.Fcn1_k);

  /* End of Outputs for SubSystem: '<S74>/Subsystem - pi//2 delay' */

  /* Gain: '<S2>/Gain' incorporates:
   *  UnitDelay: '<S2>/Unit Delay2'
   */
  rtb_Gain = 2.0 * testadpssmodel260402_Y.theta;

  /* Outputs for Enabled SubSystem: '<S3>/Subsystem1' */
  /* UnitDelay: '<S2>/Unit Delay1' */
  testadpssmodel260402_Subsystem1(testadpssmodel260402_ConstB.Compare,
    &testadpssmodel260402_DW.UnitDelay1_DSTATE[0], rtb_Gain,
    &testadpssmodel260402_B.Fcn_e5, &testadpssmodel260402_B.Fcn1_h);

  /* End of Outputs for SubSystem: '<S3>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S3>/Subsystem - pi//2 delay' */
  testadpssmode_Subsystempi2delay(testadpssmodel260402_ConstB.Compare_h,
    &testadpssmodel260402_DW.UnitDelay1_DSTATE[0], rtb_Gain,
    &testadpssmodel260402_B.Fcn_bb, &testadpssmodel260402_B.Fcn1_dm);

  /* End of Outputs for SubSystem: '<S3>/Subsystem - pi//2 delay' */

  /* Switch: '<S74>/Switch' */
  if (testadpssmodel260402_ConstB.Compare_l != 0) {
    tmp = testadpssmodel260402_B.Fcn1;
  } else {
    tmp = testadpssmodel260402_B.Fcn1_k;
  }

  /* Switch: '<S3>/Switch' */
  if (testadpssmodel260402_ConstB.Compare != 0) {
    tmp_0 = testadpssmodel260402_B.Fcn1_h;
  } else {
    tmp_0 = testadpssmodel260402_B.Fcn1_dm;
  }

  /* Sum: '<S2>/Sum2' incorporates:
   *  Switch: '<S3>/Switch'
   *  Switch: '<S74>/Switch'
   */
  rtb_Gain = tmp - tmp_0;

  /* Switch: '<S74>/Switch' */
  if (testadpssmodel260402_ConstB.Compare_l != 0) {
    tmp = testadpssmodel260402_B.Fcn;
  } else {
    tmp = testadpssmodel260402_B.Fcn_i;
  }

  /* Switch: '<S3>/Switch' */
  if (testadpssmodel260402_ConstB.Compare != 0) {
    tmp_0 = testadpssmodel260402_B.Fcn_e5;
  } else {
    tmp_0 = testadpssmodel260402_B.Fcn_bb;
  }

  /* DiscreteTransferFcn: '<S2>/LPF_x1' incorporates:
   *  Sum: '<S2>/Sum2'
   *  Switch: '<S3>/Switch'
   *  Switch: '<S74>/Switch'
   *  UnitDelay: '<S2>/Unit Delay1'
   */
  denAccum = (tmp - tmp_0) - -0.99700449326010987 *
    testadpssmodel260402_DW.LPF_x1_states[0];
  numAccum = 0.0014977533699450823 * denAccum + 0.0014977533699450823 *
    testadpssmodel260402_DW.LPF_x1_states[0];
  denAccum_0 = rtb_Gain - -0.99700449326010987 *
    testadpssmodel260402_DW.LPF_x1_states[1];
  numAccum_0 = 0.0014977533699450823 * denAccum_0 + 0.0014977533699450823 *
    testadpssmodel260402_DW.LPF_x1_states[1];
  denAccum_1 = (rtb_Gain1[2] - testadpssmodel260402_DW.UnitDelay1_DSTATE[2]) -
    -0.99700449326010987 * testadpssmodel260402_DW.LPF_x1_states[2];
  numAccum_1 = 0.0014977533699450823 * denAccum_1 + 0.0014977533699450823 *
    testadpssmodel260402_DW.LPF_x1_states[2];

  /* Gain: '<S2>/Gain1' incorporates:
   *  UnitDelay: '<S2>/Unit Delay2'
   */
  rtb_Gain1_i = -2.0 * testadpssmodel260402_Y.theta;

  /* Outputs for Enabled SubSystem: '<S4>/Subsystem - pi//2 delay' */
  /* UnitDelay: '<S2>/Unit Delay' */
  testadpssmode_Subsystempi2delay(testadpssmodel260402_ConstB.Compare_g,
    &testadpssmodel260402_DW.UnitDelay_DSTATE[0], rtb_Gain1_i,
    &testadpssmodel260402_B.Fcn_e, &testadpssmodel260402_B.Fcn1_d);

  /* End of Outputs for SubSystem: '<S4>/Subsystem - pi//2 delay' */

  /* Outputs for Enabled SubSystem: '<S4>/Subsystem1' */
  testadpssmodel260402_Subsystem1(testadpssmodel260402_ConstB.Compare_p,
    &testadpssmodel260402_DW.UnitDelay_DSTATE[0], rtb_Gain1_i,
    &testadpssmodel260402_B.Fcn_i2, &testadpssmodel260402_B.Fcn1_o);

  /* End of Outputs for SubSystem: '<S4>/Subsystem1' */

  /* Gain: '<S69>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
  rtb_Gain1_i = 0.0;
  tmp = 0.0;
  tmp_0 = 0.0;
  for (i = 0; i < 3; i++) {
    _mm_storeu_pd(&tmp_1[0], _mm_add_pd(_mm_mul_pd(_mm_loadu_pd
      (&testadpssmodel260402_ConstP.pooled3[3 * i]), _mm_set1_pd
      (testadpssmodel260402_U.Vabc[i])), _mm_set_pd(tmp, rtb_Gain1_i)));
    rtb_Gain1_i = tmp_1[0];
    tmp = tmp_1[1];
    tmp_0 += testadpssmodel260402_ConstP.pooled3[3 * i + 2] *
      testadpssmodel260402_U.Vabc[i];
  }

  /* End of Gain: '<S69>/Gain3' */

  /* Gain: '<S69>/Gain1' */
  rtb_Gain1[0] = 0.66666666666666663 * rtb_Gain1_i;
  rtb_Gain1[1] = 0.66666666666666663 * tmp;
  rtb_Gain1[2] = 0.66666666666666663 * tmp_0;

  /* Outputs for Enabled SubSystem: '<S68>/Subsystem1' */
  /* Gain: '<S2>/Gain3' incorporates:
   *  UnitDelay: '<S2>/Unit Delay2'
   */
  testadpssmodel260402_Subsystem1(testadpssmodel260402_ConstB.Compare_c,
    &rtb_Gain1[0], -testadpssmodel260402_Y.theta, &testadpssmodel260402_B.Fcn_b,
    &testadpssmodel260402_B.Fcn1_i);

  /* End of Outputs for SubSystem: '<S68>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S68>/Subsystem - pi//2 delay' */
  testadpssmode_Subsystempi2delay(testadpssmodel260402_ConstB.Compare_pd,
    &rtb_Gain1[0], -testadpssmodel260402_Y.theta, &testadpssmodel260402_B.Fcn_c,
    &testadpssmodel260402_B.Fcn1_e);

  /* End of Outputs for SubSystem: '<S68>/Subsystem - pi//2 delay' */

  /* Gain: '<S53>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S45>/Filter'
   *  Gain: '<S43>/Derivative Gain'
   *  Sum: '<S2>/Sum4'
   *  Sum: '<S45>/SumD'
   */
  rtb_Gain1_i = (0.0 * rtb_Gain - testadpssmodel260402_DW.Filter_DSTATE) * 100.0;

  /* Sum: '<S2>/Sum' incorporates:
   *  Constant: '<S2>/f_feedforward'
   *  DiscreteIntegrator: '<S50>/Integrator'
   *  Gain: '<S55>/Proportional Gain'
   *  Sum: '<S2>/Sum4'
   *  Sum: '<S59>/Sum'
   */
  testadpssmodel260402_Y.w = ((166.66 * rtb_Gain +
    testadpssmodel260402_DW.Integrator_DSTATE) + rtb_Gain1_i) +
    314.15926535897933;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  if (testadpssmodel260402_DW.DiscreteTimeIntegrator_SYSTEM_E == 0) {
    /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
    testadpssmodel260402_DW.DiscreteTimeIntegrator_DSTATE += 0.0001 *
      testadpssmodel260402_Y.w;
  }

  /* End of DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */

  /* Math: '<S2>/Math Function' incorporates:
   *  Constant: '<S2>/period mod'
   *  UnitDelay: '<S2>/Unit Delay2'
=======
  real_T tmp[2];
  real_T rtb_Gain1_idx_0;
  real_T rtb_Gain1_idx_1;
  int32_T i;

  /* Gain: '<S56>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
=======
  real_T tmp[2];
  real_T rtb_Gain1_idx_0;
  real_T rtb_Gain1_idx_1;
  int32_T i;

  /* Gain: '<S56>/Gain3' incorporates:
   *  Inport: '<Root>/Vabc'
   */
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
=======
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
   */
  testadpssmodel260402_Y.theta = rt_modd_snf
    (testadpssmodel260402_DW.DiscreteTimeIntegrator_DSTATE, 6.2831853071795862);

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
  /* Outport: '<Root>/Va' incorporates:
   *  Trigonometry: '<Root>/Sin'
   *  UnitDelay: '<S2>/Unit Delay2'
   */
  testadpssmodel260402_Y.Va = sin(testadpssmodel260402_Y.theta);

  /* Switch: '<S68>/Switch' */
  if (testadpssmodel260402_ConstB.Compare_c != 0) {
    tmp = testadpssmodel260402_B.Fcn_b;
  } else {
    tmp = testadpssmodel260402_B.Fcn_c;
  }

  /* Switch: '<S4>/Switch' */
  if (testadpssmodel260402_ConstB.Compare_p != 0) {
    tmp_0 = testadpssmodel260402_B.Fcn_i2;
  } else {
    tmp_0 = testadpssmodel260402_B.Fcn_e;
  }

  /* DiscreteTransferFcn: '<S2>/LPF_y1' incorporates:
   *  Sum: '<S2>/Sum3'
   *  Switch: '<S4>/Switch'
   *  Switch: '<S68>/Switch'
   *  UnitDelay: '<S2>/Unit Delay1'
   */
  tmp = (tmp - tmp_0) - -0.99700449326010987 *
    testadpssmodel260402_DW.LPF_y1_states[0];
  testadpssmodel260402_DW.UnitDelay1_DSTATE[0] = 0.0014977533699450823 * tmp +
    0.0014977533699450823 * testadpssmodel260402_DW.LPF_y1_states[0];

  /* Update for DiscreteTransferFcn: '<S2>/LPF_x1' */
  testadpssmodel260402_DW.LPF_x1_states[0] = denAccum;

  /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
   *  DiscreteTransferFcn: '<S2>/LPF_x1'
   */
  testadpssmodel260402_DW.UnitDelay_DSTATE[0] = numAccum;

  /* Update for DiscreteTransferFcn: '<S2>/LPF_y1' */
  testadpssmodel260402_DW.LPF_y1_states[0] = tmp;

  /* Switch: '<S68>/Switch' */
  if (testadpssmodel260402_ConstB.Compare_c != 0) {
    tmp = testadpssmodel260402_B.Fcn1_i;
  } else {
    tmp = testadpssmodel260402_B.Fcn1_e;
  }

  /* Switch: '<S4>/Switch' */
  if (testadpssmodel260402_ConstB.Compare_p != 0) {
    tmp_0 = testadpssmodel260402_B.Fcn1_o;
  } else {
    tmp_0 = testadpssmodel260402_B.Fcn1_d;
  }

  /* DiscreteTransferFcn: '<S2>/LPF_y1' incorporates:
   *  Sum: '<S2>/Sum3'
   *  Switch: '<S4>/Switch'
   *  Switch: '<S68>/Switch'
   *  UnitDelay: '<S2>/Unit Delay1'
   */
  denAccum = (tmp - tmp_0) - -0.99700449326010987 *
    testadpssmodel260402_DW.LPF_y1_states[1];
  testadpssmodel260402_DW.UnitDelay1_DSTATE[1] = 0.0014977533699450823 *
    denAccum + 0.0014977533699450823 * testadpssmodel260402_DW.LPF_y1_states[1];

  /* Update for DiscreteTransferFcn: '<S2>/LPF_x1' */
  testadpssmodel260402_DW.LPF_x1_states[1] = denAccum_0;

  /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
   *  DiscreteTransferFcn: '<S2>/LPF_x1'
   */
  testadpssmodel260402_DW.UnitDelay_DSTATE[1] = numAccum_0;

  /* Update for DiscreteTransferFcn: '<S2>/LPF_y1' */
  testadpssmodel260402_DW.LPF_y1_states[1] = denAccum;

  /* DiscreteTransferFcn: '<S2>/LPF_y1' incorporates:
   *  Sum: '<S2>/Sum3'
   *  UnitDelay: '<S2>/Unit Delay'
   *  UnitDelay: '<S2>/Unit Delay1'
   */
  denAccum = (rtb_Gain1[2] - testadpssmodel260402_DW.UnitDelay_DSTATE[2]) -
    -0.99700449326010987 * testadpssmodel260402_DW.LPF_y1_states[2];
  testadpssmodel260402_DW.UnitDelay1_DSTATE[2] = 0.0014977533699450823 *
    denAccum + 0.0014977533699450823 * testadpssmodel260402_DW.LPF_y1_states[2];

  /* Update for DiscreteTransferFcn: '<S2>/LPF_x1' */
  testadpssmodel260402_DW.LPF_x1_states[2] = denAccum_1;

  /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
   *  DiscreteTransferFcn: '<S2>/LPF_x1'
   */
  testadpssmodel260402_DW.UnitDelay_DSTATE[2] = numAccum_1;

  /* Update for DiscreteTransferFcn: '<S2>/LPF_y1' */
  testadpssmodel260402_DW.LPF_y1_states[2] = denAccum;

  /* Update for DiscreteIntegrator: '<S50>/Integrator' incorporates:
   *  Gain: '<S47>/Integral Gain'
   *  Sum: '<S2>/Sum4'
   */
  testadpssmodel260402_DW.Integrator_DSTATE += 27755.55 * rtb_Gain * 0.0001;

  /* Update for DiscreteIntegrator: '<S45>/Filter' */
  testadpssmodel260402_DW.Filter_DSTATE += 0.0001 * rtb_Gain1_i;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  testadpssmodel260402_DW.DiscreteTimeIntegrator_SYSTEM_E = 0U;
=======
=======
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
  /* Outport: '<Root>/Out2' incorporates:
   *  Trigonometry: '<Root>/Sin'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  testadpssmodel260402_Y.Va = sin(testadpssmodel260402_Y.theta);

  /* Update for DiscreteIntegrator: '<S32>/Filter' */
  testadpssmodel260402_DW.Filter_DSTATE += 5.0E-5 * rtb_Gain1_idx_0;

  /* Update for DiscreteIntegrator: '<S37>/Integrator' */
  testadpssmodel260402_DW.Integrator_DSTATE += 5.0E-5 * rtb_Gain1_idx_1;
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
=======
>>>>>>> 1440e65b0b71d1d142af91d3861cd499d663b3bd
>>>>>>> Stashed changes
}

/* Model initialize function */
void testadpssmodel260402_initialize(void)
{
  /* Enable for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
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
