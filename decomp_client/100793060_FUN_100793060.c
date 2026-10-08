
bool FUN_100793060(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018a9d0(uVar2);
  bVar3 = true;
  if (iVar1 != 0x30000004) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar1 = FUN_10018a9d0(uVar2);
    bVar3 = iVar1 == 0x30000005;
  }
  return bVar3;
}

