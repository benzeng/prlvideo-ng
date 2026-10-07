
void FUN_100886d40(void)

{
  long lVar1;
  
  lVar1 = DAT_1011c0d98;
  if (DAT_1011c0da0 == 0) {
    lVar1 = FUN_10087c120();
    if (lVar1 != 0) {
      DAT_1011c0da0 = FUN_10087c140(lVar1);
      if (DAT_1011c0da0 != 0) goto LAB_100886d95;
      FUN_10087a5e0(lVar1);
    }
    DAT_1011c0da0 = FUN_1008866e0();
    lVar1 = DAT_1011c0d98;
    if (DAT_1011c0da0 == 0) goto LAB_100886da0;
  }
LAB_100886d95:
  DAT_1011c0d98 = lVar1;
  if (*(code **)(DAT_1011c0da0 + 0x10) != (code *)0x0) {
    (**(code **)(DAT_1011c0da0 + 0x10))();
  }
LAB_100886da0:
  if (DAT_1011c0d98 != 0) {
    FUN_10087a5e0();
    DAT_1011c0d98 = 0;
  }
  DAT_1011c0da0 = 0;
  return;
}

