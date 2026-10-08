
void FUN_1007669b0(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  FUN_10085bca0();
                    /* WARNING: Could not recover jumptable at 0x0001007669ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}

