
void FUN_1006b93e0(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006b93f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x20))();
    return;
  }
  return;
}

