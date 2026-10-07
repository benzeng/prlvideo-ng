
undefined8 FUN_10081e2f0(void)

{
  undefined8 uVar1;
  
  if (DAT_1011c0678 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081e301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_1011c0678)();
    return uVar1;
  }
  return 0;
}

