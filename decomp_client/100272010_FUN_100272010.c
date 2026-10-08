
void FUN_100272010(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if ((iVar1 < 10) || (iVar1 = CAbstractTask::getCurrentSubTask(), 0xd < iVar1)) {
    return;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (((*(int *)(*(long *)(param_1 + 0x18) + 4) != 0 && (*(long *)(param_1 + 0x20) != 0)) &&
      (iVar1 = FUN_10015a6e0(), iVar1 == 0)))) {
    return;
  }
  uVar2 = FUN_1001d50a0();
  uVar2 = FUN_1001d50d0(uVar2);
  FUN_1001e18f0(uVar2);
  return;
}

