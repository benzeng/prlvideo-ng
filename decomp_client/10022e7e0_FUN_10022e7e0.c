
void FUN_10022e7e0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_10022e840(param_1,param_2);
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: unsupported task type.");
    }
  }
  CAbstractTask::subTaskCompleted((int)param_1);
  return;
}

