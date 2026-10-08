
char FUN_10027b220(long param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if ((((iVar2 != 5) || (*(long *)(param_1 + 0x58) == 0)) ||
      (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0)) ||
     ((*(long *)(param_1 + 0x60) == 0 ||
      (cVar1 = '\x03', *(int *)(*(long *)(param_1 + 0x60) + 0x48) != 3)))) {
    iVar2 = CAbstractTask::state();
    cVar1 = (iVar2 != 1) + '\x01';
    if (iVar2 == 0) {
      cVar1 = '\0';
    }
  }
  return cVar1;
}

