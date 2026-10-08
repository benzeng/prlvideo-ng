
void FUN_1008381a0(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001008381b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c0))();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008381bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
  }
  return;
}

