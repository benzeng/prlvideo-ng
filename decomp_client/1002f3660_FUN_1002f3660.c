
void FUN_1002f3660(long param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_100df99c0("","prl_client_app",0,"Terminate Parallels Access installation");
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 2) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x8c) = param_2;
    CTaskDownloadFile::cancel();
    return;
  }
  if (iVar1 != 1) {
    FUN_100df99c0("","prl_client_app",0,"The installation cannot be terminated now");
    return;
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

