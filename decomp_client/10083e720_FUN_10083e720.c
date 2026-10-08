
void FUN_10083e720(long *param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_1005a6ef0();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010083e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b0))(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}

