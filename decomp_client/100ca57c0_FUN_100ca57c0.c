
undefined * FUN_100ca57c0(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (-1 < param_1) {
    if (param_1 < 9) {
      return &DAT_10230be10 + (long)param_1 * 0x30;
    }
    puVar1 = (undefined *)FUN_100c60820(DAT_102318450,param_1 + -9);
  }
  return puVar1;
}

