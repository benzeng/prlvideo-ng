
void FUN_1002082e0(QList *param_1)

{
  Data *local_28;
  undefined1 local_1a;
  
  CAbstractTask::clearSubTaskList();
  (**(code **)(*(long *)param_1 + 0x88))(&local_28,param_1);
  CAbstractTask::setSubTaskList(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100208337;
    }
    QListData::dispose(local_28);
  }
LAB_100208337:
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
     (*(long *)(param_1 + 0x50) != 0)) {
    FUN_100422740(*(long *)(param_1 + 0x50),0);
  }
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  return;
}

