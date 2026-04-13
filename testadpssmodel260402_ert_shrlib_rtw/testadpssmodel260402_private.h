/*
 * File: testadpssmodel260402_private.h
 *
 * Code generated for Simulink model 'testadpssmodel260402'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Mon Apr 13 20:38:13 2026
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef testadpssmodel260402_private_h_
#define testadpssmodel260402_private_h_
#include "rtwtypes.h"
#include "testadpssmodel260402_types.h"
#include "testadpssmodel260402.h"

extern real_T rt_modd_snf(real_T u0, real_T u1);
extern void testadpssmode_Subsystempi2delay(uint8_T rtu_Enable, const real_T
  rtu_alpha_beta[2], real_T rtu_wt, real_T *rty_dq, real_T *rty_dq_n);
extern void testadpssmodel260402_Subsystem1(uint8_T rtu_Enable, const real_T
  rtu_alpha_beta[2], real_T rtu_wt, real_T *rty_dq, real_T *rty_dq_e);

#endif                                 /* testadpssmodel260402_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
