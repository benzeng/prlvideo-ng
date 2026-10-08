
void FUN_1001f4e80(long *param_1,int param_2)

{
  if (param_2 == -0x7ffffee8) {
    FUN_1001f4af0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001f4e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}

