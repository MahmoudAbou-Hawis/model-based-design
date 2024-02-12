/*
 * File: isEven.c
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

#include "isEven.h"

/* Include model header file for global data */
#include "if_and_looping.h"
#include "if_and_looping_private.h"

/* Output and update for atomic system: '<Root>/isEven' */
void if_and_looping_isEven(uint32_T rtu_Input, B_isEven_if_and_looping_T *localB)
{
  /* MATLAB Function: '<S3>/isEven' */
  /* MATLAB Function 'isEven/isEven': '<S11>:1' */
  /* '<S11>:1:2' if mod(u, 2) == 0 */
  if (rtu_Input - ((rtu_Input >> 1) << 1) == 0U) {
    /* '<S11>:1:3' y = 1; */
    localB->y = 1.0;
  } else {
    /* '<S11>:1:4' else */
    /* '<S11>:1:5' y = 0; */
    localB->y = 0.0;
  }

  /* End of MATLAB Function: '<S3>/isEven' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
