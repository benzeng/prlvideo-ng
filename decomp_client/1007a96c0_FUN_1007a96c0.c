
void FUN_1007a96c0(long param_1,QString *param_2)

{
  undefined *puVar1;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CSnapshotProgressDialog","Snapshot Manager",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007a9730;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007a9730:
  puVar1 = PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 8));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
  return;
}

