
void FUN_100266810(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  QString local_38;
  undefined1 local_2a;
  
  if (*(int *)(*(long *)(param_1 + 0x90) + 4) == 0) {
    return;
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 0) {
    return;
  }
  FUN_100188480(&local_38,param_2);
  cVar1 = operator==(&local_38,(QString *)(param_1 + 0x90));
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100266892;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100266892:
  if (cVar1 != '\0') {
    CAbstractTask::subTaskCompleted((int)param_1);
  }
  return;
}

