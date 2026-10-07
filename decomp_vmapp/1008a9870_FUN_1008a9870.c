
undefined * FUN_1008a9870(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (-1 < param_1) {
    if (param_1 < 0xb) {
      return (&PTR_DAT_1011af880)[param_1];
    }
    puVar1 = (undefined *)FUN_100885620(DAT_1011c2978,param_1 + -0xb);
  }
  return puVar1;
}

