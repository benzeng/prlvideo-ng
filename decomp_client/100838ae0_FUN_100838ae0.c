
void FUN_100838ae0(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100445de0();
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100838af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
    if (param_3 == 0) {
      FUN_100445b70();
      return;
    }
  }
  return;
}

