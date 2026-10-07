
void FUN_1003e1960(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1[0xb] + 2);
  if ((ulong)param_1[0x14] <
      (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x0001003e198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x268))(param_1,0x52100,param_1[0xc]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e1992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))();
  return;
}

