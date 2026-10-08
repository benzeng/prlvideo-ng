
void FUN_100b5edf0(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100b5ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x20))();
    return;
  }
  return;
}

