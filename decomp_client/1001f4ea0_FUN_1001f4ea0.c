
void FUN_1001f4ea0(long *param_1,int param_2)

{
  if (param_2 == -0x7ffffede) {
    FUN_1001f4af0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001f4ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}

