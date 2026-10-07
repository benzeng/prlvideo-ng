
undefined8 FUN_10080f3c0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x170) == 0) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 8);
    if (lVar2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_100885600(lVar2);
  uVar3 = 0;
  if (param_2 < iVar1) {
    lVar2 = FUN_100885620(lVar2,param_2);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 8);
    }
  }
  return uVar3;
}

