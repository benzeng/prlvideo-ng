
void FUN_100629f00(long *param_1,int param_2)

{
  long lVar1;
  QString local_38;
  undefined1 local_2a;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_1022218d0);
  if ((-1 < param_2) && (lVar1 != 0)) {
    FUN_10062aa00(&local_38,lVar1);
    QString::operator=((QString *)(param_1 + 8),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_2a = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_100629f87;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100629f87:
  if (*(int *)(param_1[8] + 4) == 0) {
    CAbstractTask::clearSubTaskList();
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

