
bool FUN_1001d1200(long param_1)

{
  char cVar1;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      return true;
    }
  }
  return *(char *)(param_1 + 0x31) != '\0';
}

