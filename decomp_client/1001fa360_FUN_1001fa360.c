
void FUN_1001fa360(long param_1)

{
  char cVar1;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_10015a6f0();
  }
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     ((*(bool **)(param_1 + 0x38) != (bool *)0x0 &&
      (cVar1 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x38),(int *)0x0), cVar1 == '\0')))) {
    CSdkRequest::cancel();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

