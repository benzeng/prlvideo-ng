
undefined8 FUN_10026e5f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  uVar2 = 0;
  if (10 < iVar1) {
    uVar2 = 0x80000009;
    if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
       (uVar2 = 0x80000009, *(long *)(param_1 + 0x20) != 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

