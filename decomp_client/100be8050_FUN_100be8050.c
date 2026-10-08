
undefined8 FUN_100be8050(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x110) == 0) {
      lVar2 = FUN_100c60010();
      *(long *)(param_1 + 0x110) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_100c92690(param_2);
    lVar2 = FUN_100c7c750(uVar3);
    if (lVar2 != 0) {
      iVar1 = FUN_100c604e0(*(undefined8 *)(param_1 + 0x110),lVar2);
      uVar4 = 1;
      if (iVar1 == 0) {
        FUN_100c7c730(lVar2);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

