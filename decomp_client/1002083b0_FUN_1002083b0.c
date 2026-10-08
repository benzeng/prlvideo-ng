
int FUN_1002083b0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  iVar2 = 0;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
      return -0x7ffffff7;
    }
    iVar2 = FUN_100208410(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  return iVar2;
}

