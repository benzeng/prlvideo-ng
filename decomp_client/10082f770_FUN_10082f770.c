
void FUN_10082f770(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100343cb0();
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010082f786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010082f797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
  }
  return;
}

