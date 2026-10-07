
void FUN_100886c60(void)

{
  long lVar1;
  
  if (DAT_1011c0da0 == 0) {
    lVar1 = FUN_10087c120();
    if (lVar1 != 0) {
      DAT_1011c0da0 = FUN_10087c140(lVar1);
      if (DAT_1011c0da0 != 0) {
        DAT_1011c0d98 = lVar1;
        return;
      }
      FUN_10087a5e0(lVar1);
    }
    DAT_1011c0da0 = FUN_1008866e0();
  }
  return;
}

