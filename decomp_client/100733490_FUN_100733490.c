
undefined8 FUN_100733490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  return uVar2;
}

