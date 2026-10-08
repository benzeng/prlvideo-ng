
undefined8 FUN_10036c900(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x40) + 0x30) != 0)) {
    lVar1 = FUN_1003797e0();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      uVar2 = 0;
      if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
        uVar2 = 0;
        if (lVar1 != 0) {
          uVar2 = FUN_1003797e0(lVar1);
        }
      }
      uVar2 = FUN_100325aa0(uVar2);
      return uVar2;
    }
  }
  return 0;
}

