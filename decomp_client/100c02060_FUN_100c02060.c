
undefined8 FUN_100c02060(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0) {
    lVar1 = FUN_100c76ba0(*(long *)(param_1 + 0x28) + 8);
    if (lVar1 != 0) {
      FUN_100c6d510(param_2,0x357,lVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

