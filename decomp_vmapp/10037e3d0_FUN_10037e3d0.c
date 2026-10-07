
undefined8 FUN_10037e3d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar3 = 1;
  if (*(long *)(lVar1 + 0x40) != 0) {
    iVar3 = *(int *)(*(long *)(lVar1 + 0x40) + 0xe8);
  }
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x114) != iVar3) {
    *(int *)(lVar1 + 0x114) = iVar3;
    uVar2 = 0x20020008;
  }
  return uVar2;
}

