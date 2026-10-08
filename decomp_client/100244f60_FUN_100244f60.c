
void FUN_100244f60(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      FUN_100242400(param_1);
      return;
    }
  }
  return;
}

