
void FUN_100886dd0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = DAT_1011c0d98;
  if (DAT_1011c0da0 == (undefined8 *)0x0) {
    lVar1 = FUN_10087c120();
    if (lVar1 != 0) {
      DAT_1011c0da0 = (undefined8 *)FUN_10087c140(lVar1);
      if (DAT_1011c0da0 != (undefined8 *)0x0) goto LAB_100886e2f;
      FUN_10087a5e0(lVar1);
    }
    DAT_1011c0da0 = (undefined8 *)FUN_1008866e0();
    lVar1 = DAT_1011c0d98;
    if (DAT_1011c0da0 == (undefined8 *)0x0) {
      return;
    }
  }
LAB_100886e2f:
  DAT_1011c0d98 = lVar1;
  if ((code *)*DAT_1011c0da0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100886e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_1011c0da0)(param_1,param_2);
  return;
}

