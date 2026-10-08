
void FUN_1002b6f90(long param_1)

{
  char cVar1;
  
  if (((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) &&
     (*(long *)(param_1 + 0x80) != 0)) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      (**(code **)(**(long **)(param_1 + 0x80) + 0x78))(*(long **)(param_1 + 0x80),0x80000275);
    }
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

