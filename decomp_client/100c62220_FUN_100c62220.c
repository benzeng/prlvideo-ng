
undefined8 FUN_100c62220(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1023167d8;
  if (DAT_1023167e0 == 0) {
    lVar1 = FUN_100c57320();
    if (lVar1 != 0) {
      DAT_1023167e0 = FUN_100c57340(lVar1);
      if (DAT_1023167e0 != 0) goto LAB_100c62275;
      FUN_100c557e0(lVar1);
    }
    DAT_1023167e0 = FUN_100c618e0();
    lVar1 = DAT_1023167d8;
    if (DAT_1023167e0 == 0) {
      return 0;
    }
  }
LAB_100c62275:
  DAT_1023167d8 = lVar1;
  if (*(code **)(DAT_1023167e0 + 0x28) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100c62284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(DAT_1023167e0 + 0x28))();
  return uVar2;
}

