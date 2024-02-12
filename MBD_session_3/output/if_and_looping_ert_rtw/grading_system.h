/*
 * File: grading_system.h
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

#ifndef RTW_HEADER_grading_system_h_
#define RTW_HEADER_grading_system_h_
#include <string.h>
#ifndef if_and_looping_COMMON_INCLUDES_
#define if_and_looping_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* if_and_looping_COMMON_INCLUDES_ */

#include "if_and_looping_types.h"

/* Block signals for system '<Root>/grading_system' */
typedef struct {
  char_T Merge[256];                   /* '<S2>/Merge' */
} B_grading_system_if_and_loopi_T;

extern void if_and_looping_grading_system(real_T rtu_Input3,
  B_grading_system_if_and_loopi_T *localB);

#endif                                 /* RTW_HEADER_grading_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
