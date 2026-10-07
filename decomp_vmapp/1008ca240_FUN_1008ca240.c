
undefined * FUN_1008ca240(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (-1 < param_1) {
    if (param_1 < 9) {
      return &DAT_1011b2040 + (long)param_1 * 0x30;
    }
    puVar1 = (undefined *)FUN_100885620(DAT_1011c2a10,param_1 + -9);
  }
  return puVar1;
}

