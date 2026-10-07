
undefined8 FUN_10082a680(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0) {
    lVar1 = FUN_10089b620(*(long *)(param_1 + 0x28) + 8);
    if (lVar1 != 0) {
      FUN_100892130(param_2,0x357,lVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

