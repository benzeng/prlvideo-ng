
bool FUN_100793180(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018a9d0(uVar2);
  if (iVar1 != 0x30000004) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar1 = FUN_10018a9d0(uVar2);
    if (iVar1 != 0x30000005) {
      return false;
    }
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018f860(uVar2);
  if (iVar1 == 8) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_10018c280(uVar2);
    lVar3 = FUN_100319cd0(uVar2);
    bVar4 = *(char *)(lVar3 + 0x31) != '\0';
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

