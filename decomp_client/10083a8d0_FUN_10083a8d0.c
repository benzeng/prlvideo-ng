
void FUN_10083a8d0(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_1004c0b40();
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010083a8e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010083a8fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
  }
  return;
}

