
undefined * FUN_100c9af20(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (-1 < param_1) {
    if (param_1 < 8) {
      return &DAT_10230af60 + (long)param_1 * 0x28;
    }
    puVar1 = (undefined *)FUN_100c60820(DAT_102318438,param_1 + -8);
  }
  return puVar1;
}

