
void FUN_100838bf0(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100447250();
      return;
    }
    if (param_3 == 1) {
      FUN_1004470d0();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100838c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
  }
  return;
}

