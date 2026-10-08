
undefined8 FUN_1002466f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    FUN_100246980(param_1);
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      uVar2 = FUN_100246760(param_1);
      return uVar2;
    }
    FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
    uVar2 = 0x80000001;
  }
  return uVar2;
}

