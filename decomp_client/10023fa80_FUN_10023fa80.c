
undefined8 FUN_10023fa80(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_10023fb70(param_1);
  }
  else if (iVar1 == 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_10023fad0(param_1);
  }
  return 0;
}

