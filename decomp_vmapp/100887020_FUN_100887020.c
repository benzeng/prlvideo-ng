
undefined8 FUN_100887020(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1011c0d98;
  if (DAT_1011c0da0 == 0) {
    lVar1 = FUN_10087c120();
    if (lVar1 != 0) {
      DAT_1011c0da0 = FUN_10087c140(lVar1);
      if (DAT_1011c0da0 != 0) goto LAB_100887075;
      FUN_10087a5e0(lVar1);
    }
    DAT_1011c0da0 = FUN_1008866e0();
    lVar1 = DAT_1011c0d98;
    if (DAT_1011c0da0 == 0) {
      return 0;
    }
  }
LAB_100887075:
  DAT_1011c0d98 = lVar1;
  if (*(code **)(DAT_1011c0da0 + 0x28) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100887084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(DAT_1011c0da0 + 0x28))();
  return uVar2;
}

