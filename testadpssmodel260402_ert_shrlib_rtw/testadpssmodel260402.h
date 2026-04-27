/*
 * File: testadpssmodel260402.h
 *
 * Code generated for Simulink model 'testadpssmodel260402'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Mon Apr 27 19:56:09 2026
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef testadpssmodel260402_h_
#define testadpssmodel260402_h_
#ifndef testadpssmodel260402_COMMON_INCLUDES_
#define testadpssmodel260402_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* testadpssmodel260402_COMMON_INCLUDES_ */

#include "testadpssmodel260402_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Vabc;                         /* '<Root>/Vabc' */
} ExtU_testadpssmodel260402_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Va;                           /* '<Root>/Out2' */
} ExtY_testadpssmodel260402_T;

/* Real-time Model Data Structure */
struct tag_RTM_testadpssmodel260402_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_testadpssmodel260402_T testadpssmodel260402_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_testadpssmodel260402_T testadpssmodel260402_Y;

/* Model entry point functions */
extern void testadpssmodel260402_initialize(void);
extern void testadpssmodel260402_step(void);
extern void testadpssmodel260402_terminate(void);

/* Real-time Model object */
extern RT_MODEL_testadpssmodel260402_T *const testadpssmodel260402_M;

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
 * '<Root>' : 'testadpssmodel260402'
 */
#endif                                 /* testadpssmodel260402_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
