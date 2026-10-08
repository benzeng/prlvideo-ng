
void FUN_100229fc0(long param_1)

{
  char cVar1;
  int iVar2;
  
  if ((((*(long *)(param_1 + 0x90) != 0) && (*(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) &&
      (*(bool **)(param_1 + 0x98) != (bool *)0x0)) &&
     ((cVar1 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x98),(int *)0x0), cVar1 == '\0' &&
      (iVar2 = CAbstractTask::getCurrentSubTask(), iVar2 == 1)))) {
    CSdkRequest::cancel();
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

