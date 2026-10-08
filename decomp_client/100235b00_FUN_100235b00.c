
void FUN_100235b00(QList *param_1,undefined8 param_2)

{
  Data *local_30;
  undefined1 local_24;
  
  FUN_1002301a0(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_102202d18;
  *(undefined4 *)(param_1 + 0x5c) = 5;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  (*(code *)PTR_FUN_102202da0)(&local_30,param_1);
  CAbstractTask::setSubTaskList(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_24 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_24) goto LAB_100235b8b;
    }
    QListData::dispose(local_30);
  }
LAB_100235b8b:
  CAbstractTask::insertBeforeSubTask((int)param_1,9);
  return;
}

