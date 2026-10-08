
undefined8 FUN_100bf3a60(void)

{
  undefined8 uVar1;
  
  if (DAT_102316068 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf3a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_102316068)();
    return uVar1;
  }
  return 0;
}

