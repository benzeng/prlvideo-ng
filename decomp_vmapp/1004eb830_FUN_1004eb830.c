
void FUN_1004eb830(undefined8 *param_1)

{
  QString local_30;
  undefined1 local_21;
  
  *param_1 = &PTR_FUN_10111ce28;
  param_1[1] = PTR_shared_null_100ba20d0;
  QString::toUtf8_helper(&local_30);
  QByteArray::operator=
            ((QByteArray *)(param_1 + 1),
             (char *)(local_30.field0_0x0 + *(long *)(local_30.field0_0x0 + 0x10)));
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,1,8);
  }
  return;
}

