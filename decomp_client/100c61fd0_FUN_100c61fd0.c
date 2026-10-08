
void FUN_100c61fd0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = DAT_1023167d8;
  if (DAT_1023167e0 == (undefined8 *)0x0) {
    lVar1 = FUN_100c57320();
    if (lVar1 != 0) {
      DAT_1023167e0 = (undefined8 *)FUN_100c57340(lVar1);
      if (DAT_1023167e0 != (undefined8 *)0x0) goto LAB_100c6202f;
      FUN_100c557e0(lVar1);
    }
    DAT_1023167e0 = (undefined8 *)FUN_100c618e0();
    lVar1 = DAT_1023167d8;
    if (DAT_1023167e0 == (undefined8 *)0x0) {
      return;
    }
  }
LAB_100c6202f:
  DAT_1023167d8 = lVar1;
  if ((code *)*DAT_1023167e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100c62047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_1023167e0)(param_1,param_2);
  return;
}

