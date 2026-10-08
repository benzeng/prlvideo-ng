
void FUN_100c62060(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = DAT_1023167d8;
  if (DAT_1023167e0 == 0) {
    lVar1 = FUN_100c57320();
    if (lVar1 != 0) {
      DAT_1023167e0 = FUN_100c57340(lVar1);
      if (DAT_1023167e0 != 0) goto LAB_100c620ce;
      FUN_100c557e0(lVar1);
    }
    DAT_1023167e0 = FUN_100c618e0();
    lVar1 = DAT_1023167d8;
    if (DAT_1023167e0 == 0) {
      return;
    }
  }
LAB_100c620ce:
  DAT_1023167d8 = lVar1;
  if (*(code **)(DAT_1023167e0 + 0x18) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100c620e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1023167e0 + 0x18))(param_1,param_2,param_3);
  return;
}

