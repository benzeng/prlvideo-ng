
undefined1 FUN_100770af0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if ((((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
      (*(long *)(param_1 + 0x30) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    uVar2 = CAbstractTask::canBeTerminated();
  }
  return uVar2;
}

