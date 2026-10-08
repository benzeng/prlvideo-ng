
void FUN_100278a20(long param_1)

{
  char cVar1;
  
  if ((((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
      (*(long *)(param_1 + 0x60) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    CTaskDownloadFile::cancel();
    return;
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

