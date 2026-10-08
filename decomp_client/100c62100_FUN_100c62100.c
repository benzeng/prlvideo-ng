
undefined8 FUN_100c62100(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1023167d8;
  if (DAT_1023167e0 == 0) {
    lVar1 = FUN_100c57320();
    if (lVar1 != 0) {
      DAT_1023167e0 = FUN_100c57340(lVar1);
      if (DAT_1023167e0 != 0) goto LAB_100c6215f;
      FUN_100c557e0(lVar1);
    }
    DAT_1023167e0 = FUN_100c618e0();
    lVar1 = DAT_1023167d8;
    if (DAT_1023167e0 == 0) {
      return 0xffffffff;
    }
  }
LAB_100c6215f:
  DAT_1023167d8 = lVar1;
  if (*(code **)(DAT_1023167e0 + 8) == (code *)0x0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000100c62178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(DAT_1023167e0 + 8))(param_1,param_2);
  return uVar2;
}

