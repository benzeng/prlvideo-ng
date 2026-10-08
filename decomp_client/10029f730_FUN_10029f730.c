
void FUN_10029f730(long *param_1,int param_2)

{
  if (-1 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010029f745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}

