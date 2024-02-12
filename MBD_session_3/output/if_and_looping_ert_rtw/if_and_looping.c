/*
 * File: if_and_looping.c
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

#include "if_and_looping.h"
#include "if_and_looping_private.h"

/* Block signals (default storage) */
B_if_and_looping_T if_and_looping_B;

/* External inputs (root inport signals with default storage) */
ExtU_if_and_looping_T if_and_looping_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_if_and_looping_T if_and_looping_Y;

/* Real-time model */
static RT_MODEL_if_and_looping_T if_and_looping_M_;
RT_MODEL_if_and_looping_T *const if_and_looping_M = &if_and_looping_M_;

/* Model step function */
void if_and_looping_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/calculator' */

  /* Inport: '<Root>/operation' incorporates:
   *  Inport: '<Root>/Number 2'
   *  Inport: '<Root>/Numnber 1'
   */
  if_and_looping_calculator(if_and_looping_U.operation,
    if_and_looping_U.Numnber1, if_and_looping_U.Number2,
    &if_and_looping_B.calculator);

  /* End of Outputs for SubSystem: '<Root>/calculator' */

  /* Outport: '<Root>/calc_result' */
  if_and_looping_Y.calc_result = if_and_looping_B.calculator.Merge;

  /* Outputs for Atomic SubSystem: '<Root>/grading_system' */

  /* Inport: '<Root>/grade' */
  if_and_looping_grading_system(if_and_looping_U.grade,
    &if_and_looping_B.grading_system);

  /* End of Outputs for SubSystem: '<Root>/grading_system' */

  /* Outport: '<Root>/result' */
  strncpy(&if_and_looping_Y.result[0], &if_and_looping_B.grading_system.Merge[0],
          255U);
  if_and_looping_Y.result[255] = '\x00';

  /* Outputs for Atomic SubSystem: '<Root>/isEven' */

  /* Inport: '<Root>/Input' */
  if_and_looping_isEven(if_and_looping_U.Input, &if_and_looping_B.isEven);

  /* End of Outputs for SubSystem: '<Root>/isEven' */

  /* Outport: '<Root>/Output' */
  if_and_looping_Y.Output = if_and_looping_B.isEven.y;
}

/* Model initialize function */
void if_and_looping_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(if_and_looping_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &if_and_looping_B), 0,
                sizeof(B_if_and_looping_T));

  /* external inputs */
  (void)memset(&if_and_looping_U, 0, sizeof(ExtU_if_and_looping_T));

  /* external outputs */
  (void) memset((void *)&if_and_looping_Y, 0,
                sizeof(ExtY_if_and_looping_T));
}

/* Model terminate function */
void if_and_looping_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
