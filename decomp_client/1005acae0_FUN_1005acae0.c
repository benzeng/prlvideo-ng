
undefined1 FUN_1005acae0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if ((((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
      (*(long *)(param_1 + 0x50) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    uVar2 = CAbstractTask::canBeTerminated();
  }
  return uVar2;
}

