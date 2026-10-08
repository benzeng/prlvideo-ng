
undefined8 FUN_100293690(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x80000009;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if ((iVar1 != 1) ||
       (((*(long *)(param_1 + 0x28) != 0 && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
        (*(long *)(param_1 + 0x30) != 0)))) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

