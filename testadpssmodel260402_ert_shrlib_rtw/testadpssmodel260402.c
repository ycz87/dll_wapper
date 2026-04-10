/*
 * File: testadpssmodel260402.c
 *
 * Code generated for Simulink model 'testadpssmodel260402'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Fri Apr 10 09:36:45 2026
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "testadpssmodel260402.h"

/* External inputs (root inport signals with default storage) */
ExtU_testadpssmodel260402_T testadpssmodel260402_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_testadpssmodel260402_T testadpssmodel260402_Y;

/* Real-time model */
static RT_MODEL_testadpssmodel260402_T testadpssmodel260402_M_;
RT_MODEL_testadpssmodel260402_T *const testadpssmodel260402_M =
  &testadpssmodel260402_M_;

/* Model step function */
void testadpssmodel260402_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/In1'
   *  Product: '<Root>/Product'
   *  Sum: '<Root>/Add'
   */
  testadpssmodel260402_Y.Out1 = (testadpssmodel260402_U.In1 + 4.0) * 3.0;
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
