
void FUN_100266bf0(long param_1)

{
  char cVar1;
  int iVar2;
  
  if ((((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) &&
      (*(bool **)(param_1 + 0x80) != (bool *)0x0)) &&
     ((cVar1 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x80),(int *)0x0), cVar1 == '\0' &&
      (iVar2 = CAbstractTask::getCurrentSubTask(), iVar2 == 0)))) {
    CSdkRequest::cancel();
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

