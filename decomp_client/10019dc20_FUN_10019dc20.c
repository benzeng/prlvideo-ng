
void FUN_10019dc20(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010019dc35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b0))();
  return;
}

