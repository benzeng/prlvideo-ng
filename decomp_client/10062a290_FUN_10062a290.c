
void FUN_10062a290(long *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  QString local_38;
  undefined1 local_2a;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  if (param_2 == -0x7ffb8fba) {
    CAbstractTask::prependSubTask((int)param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = 0;
  }
  else {
    if (-1 < param_2) {
      QObject::sender();
      lVar2 = QMetaObject::cast((QObject *)&PTR_PTR_102221a00);
      if (lVar2 != 0) {
        FUN_10062af80(&local_38,lVar2);
        QString::operator=((QString *)(param_1 + 9),&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_2a = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_2a) goto LAB_10062a34f;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
      }
LAB_10062a34f:
      (**(code **)(*param_1 + 0xb0))(param_1,param_2);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010062a387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

