
void FUN_100346950(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319390(uVar2);
  iVar1 = FUN_10018a9d0(uVar2);
  if (iVar1 != 0x30000004) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar2 = FUN_100319390(uVar2);
    iVar1 = FUN_10018a9d0(uVar2);
    if (iVar1 != 0x30000005) {
      bVar3 = false;
      goto LAB_1003469ba;
    }
  }
  bVar3 = *(char *)(param_1 + 0x30) != '\0';
LAB_1003469ba:
  if (bVar3 == (bool)*(char *)(param_1 + 0x31)) {
    return;
  }
  *(bool *)(param_1 + 0x31) = bVar3;
  FUN_100830780(param_1);
  FUN_10009db20(*(undefined8 *)(param_1 + 0x1a8),*(undefined1 *)(param_1 + 0x31));
  FUN_1003471c0(param_1);
  return;
}

