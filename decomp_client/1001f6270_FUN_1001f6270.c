
void FUN_1001f6270(long *param_1,int param_2)

{
  if (-1 < param_2) {
    FUN_10080cba0(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001f62a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

