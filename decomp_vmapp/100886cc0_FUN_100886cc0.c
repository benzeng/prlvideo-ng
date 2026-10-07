
undefined8 FUN_100886cc0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_10087a520(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_10087c140(param_1);
    if (lVar2 == 0) {
      FUN_10087a5e0(param_1);
      return 0;
    }
  }
  if (DAT_1011c0d98 != 0) {
    FUN_10087a5e0();
  }
  DAT_1011c0da0 = lVar2;
  DAT_1011c0d98 = param_1;
  return 1;
}

