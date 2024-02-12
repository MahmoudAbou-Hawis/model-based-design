/*
 * File: if_and_looping_calculator.c
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

#include "if_and_looping_calculator.h"

/* Include model header file for global data */
#include "if_and_looping.h"
#include "if_and_looping_private.h"

/* Output and update for atomic system: '<Root>/calculator' */
void if_and_looping_calculator(uint32_T rtu_Input, real_T rtu_Input1, real_T
  rtu_Input2, B_calculator_if_and_looping_T *localB)
{
  /* SwitchCase: '<S1>/Switch Case' */
  switch ((int32_T)rtu_Input) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Merge: '<S1>/Merge' incorporates:
     *  Sum: '<S4>/Add'
     */
    localB->Merge = rtu_Input1 + rtu_Input2;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Merge: '<S1>/Merge' incorporates:
     *  Sum: '<S5>/Subtract'
     */
    localB->Merge = rtu_Input2 - rtu_Input1;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem4' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Merge: '<S1>/Merge' incorporates:
     *  Product: '<S7>/Divide'
     */
    localB->Merge = rtu_Input2 * rtu_Input1;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem4' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Merge: '<S1>/Merge' incorporates:
     *  Product: '<S6>/Divide'
     */
    localB->Merge = rtu_Input2 / rtu_Input1;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem2' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
