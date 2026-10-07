
void FUN_1005621e0(long *param_1)

{
  long *plVar1;
  
  if ((long *)*param_1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x240))();
    (**(code **)(*plVar1 + 0x28))(plVar1);
    plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x240))();
                    /* WARNING: Could not recover jumptable at 0x00010056221b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1);
    return;
  }
  return;
}

