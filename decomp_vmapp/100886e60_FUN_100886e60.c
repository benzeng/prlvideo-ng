
void FUN_100886e60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = DAT_1011c0d98;
  if (DAT_1011c0da0 == 0) {
    lVar1 = FUN_10087c120();
    if (lVar1 != 0) {
      DAT_1011c0da0 = FUN_10087c140(lVar1);
      if (DAT_1011c0da0 != 0) goto LAB_100886ece;
      FUN_10087a5e0(lVar1);
    }
    DAT_1011c0da0 = FUN_1008866e0();
    lVar1 = DAT_1011c0d98;
    if (DAT_1011c0da0 == 0) {
      return;
    }
  }
LAB_100886ece:
  DAT_1011c0d98 = lVar1;
  if (*(code **)(DAT_1011c0da0 + 0x18) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100886ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1011c0da0 + 0x18))(param_1,param_2,param_3);
  return;
}

