
undefined8 FUN_10031bac0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x168) != 0) &&
     (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) {
    lVar1 = *(long *)(param_1 + 0x170);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((*(long *)(lVar1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(lVar1 + 0x10) + 4) != 0))
      {
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
      }
    }
  }
  return uVar2;
}

