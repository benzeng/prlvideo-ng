
void FUN_10026e0b0(QList *param_1)

{
  Data *local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QWidget::close();
  }
  (**(code **)(*(long *)param_1 + 0x88))(&local_28,param_1);
  CAbstractTask::setSubTaskList(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10026e11f;
    }
    QListData::dispose(local_28);
  }
LAB_10026e11f:
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  return;
}

