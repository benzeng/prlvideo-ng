
undefined8 FUN_1002ea8c0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 1) {
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_1002eab10(param_1);
  }
  else if (iVar1 == 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_1002ea910(param_1);
    FUN_1002eaa50(param_1);
  }
  return 0;
}

