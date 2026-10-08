
void FUN_1009c0ad0(long *param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_1009b3ee0();
      return;
    }
    if (param_3 == 1) {
      FUN_1009b40f0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009c0b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))
                (param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

