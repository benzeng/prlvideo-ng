
void FUN_100031bd0(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_10002dd30();
    FUN_100031c20(param_1,iVar2);
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 != iVar1) {
      FUN_100865100(param_1,iVar2);
      return;
    }
  }
  return;
}

