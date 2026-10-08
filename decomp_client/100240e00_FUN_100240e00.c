
void FUN_100240e00(long *param_1,int param_2)

{
  if (-1 < param_2) {
    MacUtils::forgetRecentDocument((QString *)(param_1 + 4));
  }
                    /* WARNING: Could not recover jumptable at 0x000100240e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

