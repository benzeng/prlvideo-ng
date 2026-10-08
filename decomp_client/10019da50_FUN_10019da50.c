
void FUN_10019da50(long *param_1)

{
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010019da6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b0))(param_1,0xffffffff);
  return;
}

