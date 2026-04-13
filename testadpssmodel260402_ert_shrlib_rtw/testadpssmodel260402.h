/*
 * File: testadpssmodel260402.h
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

#ifndef testadpssmodel260402_h_
#define testadpssmodel260402_h_
#ifndef testadpssmodel260402_COMMON_INCLUDES_
#define testadpssmodel260402_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                               /* testadpssmodel260402_COMMON_INCLUDES_ */

#include "testadpssmodel260402_types.h"
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Fcn;                          /* '<S79>/Fcn' */
  real_T Fcn1;                         /* '<S79>/Fcn1' */
  real_T Fcn_i;                        /* '<S78>/Fcn' */
  real_T Fcn1_k;                       /* '<S78>/Fcn1' */
  real_T Fcn_b;                        /* '<S73>/Fcn' */
  real_T Fcn1_i;                       /* '<S73>/Fcn1' */
  real_T Fcn_c;                        /* '<S72>/Fcn' */
  real_T Fcn1_e;                       /* '<S72>/Fcn1' */
  real_T Fcn_i2;                       /* '<S15>/Fcn' */
  real_T Fcn1_o;                       /* '<S15>/Fcn1' */
  real_T Fcn_e;                        /* '<S14>/Fcn' */
  real_T Fcn1_d;                       /* '<S14>/Fcn1' */
  real_T Fcn_e5;                       /* '<S11>/Fcn' */
  real_T Fcn1_h;                       /* '<S11>/Fcn1' */
  real_T Fcn_bb;                       /* '<S10>/Fcn' */
  real_T Fcn1_dm;                      /* '<S10>/Fcn1' */
} B_testadpssmodel260402_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE[3];         /* '<S2>/Unit Delay1' */
  real_T LPF_x1_states[3];             /* '<S2>/LPF_x1' */
  real_T UnitDelay_DSTATE[3];          /* '<S2>/Unit Delay' */
  real_T LPF_y1_states[3];             /* '<S2>/LPF_y1' */
  real_T Integrator_DSTATE;            /* '<S50>/Integrator' */
  real_T Filter_DSTATE;                /* '<S45>/Filter' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S2>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;/* '<S2>/Discrete-Time Integrator' */
} DW_testadpssmodel260402_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint8_T Compare;               /* '<S8>/Compare' */
  const uint8_T Compare_h;             /* '<S9>/Compare' */
  const uint8_T Compare_p;             /* '<S12>/Compare' */
  const uint8_T Compare_g;             /* '<S13>/Compare' */
  const uint8_T Compare_c;             /* '<S70>/Compare' */
  const uint8_T Compare_pd;            /* '<S71>/Compare' */
  const uint8_T Compare_l;             /* '<S76>/Compare' */
  const uint8_T Compare_a;             /* '<S77>/Compare' */
} ConstB_testadpssmodel260402_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ] )
   * Referenced by:
   *   '<S69>/Gain3'
   *   '<S75>/Gain3'
   */
  real_T pooled3[9];
} ConstP_testadpssmodel260402_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1[3];                       /* '<Root>/In1' */
} ExtU_testadpssmodel260402_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_testadpssmodel260402_T;

/* Real-time Model Data Structure */
struct tag_RTM_testadpssmodel260402_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_testadpssmodel260402_T testadpssmodel260402_B;

/* Block states (default storage) */
extern DW_testadpssmodel260402_T testadpssmodel260402_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_testadpssmodel260402_T testadpssmodel260402_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_testadpssmodel260402_T testadpssmodel260402_Y;
extern const ConstB_testadpssmodel260402_T testadpssmodel260402_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_testadpssmodel260402_T testadpssmodel260402_ConstP;

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
 * '<S1>'   : 'testadpssmodel260402/PLLs1'
 * '<S2>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF'
 * '<S3>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq0'
 * '<S4>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq1'
 * '<S5>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller'
 * '<S6>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg'
 * '<S7>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos'
 * '<S8>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S9>'   : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S10>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S11>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S12>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq1/Compare To Constant'
 * '<S13>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq1/Compare To Constant1'
 * '<S14>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq1/Subsystem - pi//2 delay'
 * '<S15>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Alpha-Beta-Zero to dq1/Subsystem1'
 * '<S16>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Anti-windup'
 * '<S17>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/D Gain'
 * '<S18>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/External Derivative'
 * '<S19>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Filter'
 * '<S20>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Filter ICs'
 * '<S21>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/I Gain'
 * '<S22>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Ideal P Gain'
 * '<S23>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S24>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Integrator'
 * '<S25>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Integrator ICs'
 * '<S26>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/N Copy'
 * '<S27>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/N Gain'
 * '<S28>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/P Copy'
 * '<S29>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Parallel P Gain'
 * '<S30>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Reset Signal'
 * '<S31>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Saturation'
 * '<S32>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Saturation Fdbk'
 * '<S33>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Sum'
 * '<S34>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Sum Fdbk'
 * '<S35>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tracking Mode'
 * '<S36>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tracking Mode Sum'
 * '<S37>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tsamp - Integral'
 * '<S38>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tsamp - Ngain'
 * '<S39>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/postSat Signal'
 * '<S40>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/preInt Signal'
 * '<S41>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/preSat Signal'
 * '<S42>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S43>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S44>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/External Derivative/Error'
 * '<S45>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S46>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S47>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S48>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S49>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S50>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Integrator/Discrete'
 * '<S51>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S52>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/N Copy/Disabled'
 * '<S53>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S54>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/P Copy/Disabled'
 * '<S55>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S56>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Reset Signal/Disabled'
 * '<S57>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Saturation/Passthrough'
 * '<S58>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S59>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Sum/Sum_PID'
 * '<S60>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S61>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S62>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S63>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S64>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S65>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S66>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/preInt Signal/Internal PreInt'
 * '<S67>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S68>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg/Alpha-Beta-Zero to dq0'
 * '<S69>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg/abc to Alpha-Beta-Zero'
 * '<S70>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S71>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S72>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S73>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 neg/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S74>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos/Alpha-Beta-Zero to dq0'
 * '<S75>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos/abc to Alpha-Beta-Zero'
 * '<S76>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S77>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S78>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S79>'  : 'testadpssmodel260402/PLLs1/PLL_DDSRF/abc to dq0 pos/Alpha-Beta-Zero to dq0/Subsystem1'
 */
#endif                                 /* testadpssmodel260402_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
