
void FUN_1001fc670(long *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    if (-1 < iVar1) {
      iVar1 = CAbstractTask::getCurrentSubTask();
      if ((param_2 != -0x7ffffd8b) || (iVar1 != 0)) {
        CAbstractTask::clearSubTaskList();
        CAbstractTask::appendSubTask((int)param_1);
      }
    }
  }
  CAbstractTask::subTaskCompleted((int)param_1);
  return;
}

