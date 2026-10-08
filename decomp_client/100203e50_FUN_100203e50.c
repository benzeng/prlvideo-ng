
void FUN_100203e50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if ((param_2 != -0x7ffffd8b) || (iVar1 != 0)) {
      CAbstractTask::clearSubTaskList();
      CAbstractTask::appendSubTask(param_1);
    }
  }
  CAbstractTask::subTaskCompleted(param_1);
  return;
}

