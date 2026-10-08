
void FUN_100813ef0(long *param_1,int param_2,int param_3,long param_4)

{
  if (param_2 != 0 || param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100813f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1,**(undefined4 **)(param_4 + 8));
  return;
}

