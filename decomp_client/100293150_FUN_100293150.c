
void FUN_100293150(long param_1)

{
  char cVar1;
  
  if ((((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
      (*(bool **)(param_1 + 0x30) != (bool *)0x0)) &&
     (cVar1 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x30),(int *)0x0), cVar1 == '\0')) {
    CSdkRequest::cancel();
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

