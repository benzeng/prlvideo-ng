
undefined8 FUN_10041cff0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x640);
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 8) == 0x10)) && (*(int *)(lVar1 + 0x18) == 8)) &&
     (*(int *)(lVar1 + 0x10) == 0)) {
    FUN_10041d4a0(param_1,lVar1 + 0x2c);
  }
  FUN_100416cc0(param_1);
  return 1;
}

