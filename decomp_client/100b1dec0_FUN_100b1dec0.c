
void FUN_100b1dec0(long *param_1)

{
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x30));
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100b1ded1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}

