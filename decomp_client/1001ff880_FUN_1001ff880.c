
void FUN_1001ff880(long *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 2) {
    MacUtils::showInFinder((QString *)(param_1 + 9));
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ff8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

