/*
 * File: if_and_looping.h
 *
 * Code generated for Simulink model 'if_and_looping'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 12 02:48:11 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_if_and_looping_h_
#define RTW_HEADER_if_and_looping_h_
#include <string.h>
#include <stddef.h>
#ifndef if_and_looping_COMMON_INCLUDES_
#define if_and_looping_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* if_and_looping_COMMON_INCLUDES_ */

#include "if_and_looping_types.h"

/* Child system includes */
#include "grading_system.h"
#include "if_and_looping_calculator.h"
#include "isEven.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_isEven_if_and_looping_T isEven;    /* '<Root>/isEven' */
  B_grading_system_if_and_loopi_T grading_system;/* '<Root>/grading_system' */
  B_calculator_if_and_looping_T calculator;/* '<Root>/calculator' */
} B_if_and_looping_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S8>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_k
   * Referenced by: '<S9>/String Constant'
   */
  char_T StringConstant_String_k[256];

  /* Computed Parameter: StringConstant_String_h
   * Referenced by: '<S10>/String Constant'
   */
  char_T StringConstant_String_h[256];
} ConstP_if_and_looping_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T operation;                  /* '<Root>/operation' */
  real_T Numnber1;                     /* '<Root>/Numnber 1' */
  real_T Number2;                      /* '<Root>/Number 2' */
  real_T grade;                        /* '<Root>/grade' */
  uint32_T Input;                      /* '<Root>/Input' */
} ExtU_if_and_looping_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T calc_result;                  /* '<Root>/calc_result' */
  char_T result[256];                  /* '<Root>/result' */
  real_T Output;                       /* '<Root>/Output' */
} ExtY_if_and_looping_T;

/* Real-time Model Data Structure */
struct tag_RTM_if_and_looping_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_if_and_looping_T if_and_looping_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_if_and_looping_T if_and_looping_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_if_and_looping_T if_and_looping_Y;

/* Constant parameters (default storage) */
extern const ConstP_if_and_looping_T if_and_looping_ConstP;

/* Model entry point functions */
extern void if_and_looping_initialize(void);
extern void if_and_looping_step(void);
extern void if_and_looping_terminate(void);

/* Real-time Model object */
extern RT_MODEL_if_and_looping_T *const if_and_looping_M;

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
 * '<Root>' : 'if_and_looping'
 * '<S1>'   : 'if_and_looping/calculator'
 * '<S2>'   : 'if_and_looping/grading_system'
 * '<S3>'   : 'if_and_looping/isEven'
 * '<S4>'   : 'if_and_looping/calculator/Switch Case Action Subsystem'
 * '<S5>'   : 'if_and_looping/calculator/Switch Case Action Subsystem1'
 * '<S6>'   : 'if_and_looping/calculator/Switch Case Action Subsystem2'
 * '<S7>'   : 'if_and_looping/calculator/Switch Case Action Subsystem4'
 * '<S8>'   : 'if_and_looping/grading_system/If Action Subsystem'
 * '<S9>'   : 'if_and_looping/grading_system/If Action Subsystem1'
 * '<S10>'  : 'if_and_looping/grading_system/If Action Subsystem2'
 * '<S11>'  : 'if_and_looping/isEven/isEven'
 */
#endif                                 /* RTW_HEADER_if_and_looping_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
