
void FUN_100562190(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  *param_1 = param_2;
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*param_2 + 0x240))(param_2);
    (**(code **)(*plVar1 + 0x30))(plVar1);
    plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x240))();
                    /* WARNING: Could not recover jumptable at 0x0001005621ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1);
    return;
  }
  return;
}

