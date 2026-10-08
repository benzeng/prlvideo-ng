
undefined8 FUN_100c61ec0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_100c55720(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_100c57340(param_1);
    if (lVar2 == 0) {
      FUN_100c557e0(param_1);
      return 0;
    }
  }
  if (DAT_1023167d8 != 0) {
    FUN_100c557e0();
  }
  DAT_1023167e0 = lVar2;
  DAT_1023167d8 = param_1;
  return 1;
}

