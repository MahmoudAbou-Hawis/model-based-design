/*
 * File: grading_system.c
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

#include "grading_system.h"

/* Include model header file for global data */
#include "if_and_looping.h"
#include "if_and_looping_private.h"

/* Output and update for atomic system: '<Root>/grading_system' */
void if_and_looping_grading_system(real_T rtu_Input3,
  B_grading_system_if_and_loopi_T *localB)
{
  /* If: '<S2>/If' incorporates:
   *  Merge: '<S2>/Merge'
   *  StringConstant: '<S10>/String Constant'
   *  StringConstant: '<S8>/String Constant'
   *  StringConstant: '<S9>/String Constant'
   */
  if ((rtu_Input3 >= 80.0) && (rtu_Input3 <= 100.0)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    strncpy(&localB->Merge[0], &if_and_looping_ConstP.StringConstant_String[0],
            255U);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    localB->Merge[255] = '\x00';
  } else if ((rtu_Input3 > 50.0) && (rtu_Input3 < 80.0)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    strncpy(&localB->Merge[0], &if_and_looping_ConstP.StringConstant_String_k[0],
            255U);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
    localB->Merge[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    strncpy(&localB->Merge[0], &if_and_looping_ConstP.StringConstant_String_h[0],
            255U);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
    localB->Merge[255] = '\x00';
  }

  /* End of If: '<S2>/If' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
