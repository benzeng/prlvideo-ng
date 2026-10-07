
undefined * FUN_1008bf9a0(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (-1 < param_1) {
    if (param_1 < 8) {
      return &DAT_1011b1190 + (long)param_1 * 0x28;
    }
    puVar1 = (undefined *)FUN_100885620(DAT_1011c29f8,param_1 + -8);
  }
  return puVar1;
}

