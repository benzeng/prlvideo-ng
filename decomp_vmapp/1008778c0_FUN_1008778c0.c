
undefined8 FUN_1008778c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10084b840(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_10084b4b0();
      lVar2 = *(long *)(param_1 + 0x20);
    }
    *(long *)(lVar2 + 8) = lVar1;
    lVar1 = FUN_10084b840(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar2 + 0x10) != 0) {
        FUN_10084b4b0();
        lVar2 = *(long *)(param_1 + 0x20);
      }
      *(long *)(lVar2 + 0x10) = lVar1;
      uVar3 = 1;
    }
  }
  return uVar3;
}

