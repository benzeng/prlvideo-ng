
void FUN_100272880(long *param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010027289a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
  return;
}

