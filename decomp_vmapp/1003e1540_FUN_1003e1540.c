
void FUN_1003e1540(long *param_1)

{
  *(uint *)((long)param_1 + 0x8c) = *(byte *)(param_1[0xb] + 4) & 1;
                    /* WARNING: Could not recover jumptable at 0x0001003e1559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))();
  return;
}

