
void FUN_100786550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
  }
  uVar2 = FUN_1007878d0(uVar2);
  FUN_10078b4d0(uVar2,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18));
  return;
}

