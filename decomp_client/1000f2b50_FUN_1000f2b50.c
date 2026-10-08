
char FUN_1000f2b50(long param_1,QString *param_2,QString *param_3,QString *param_4)

{
  int iVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  QString::operator=((QString *)(param_1 + 0x18),param_2);
  QString::operator=((QString *)(param_1 + 0x20),param_3);
  QString::operator=((QString *)(param_1 + 0x28),param_4);
  param_1 = param_1 + 0x30;
  FUN_100d72f80(param_1,0);
  QString::toUtf8();
  iVar1 = FUN_100d73ce0(param_1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1000f2bee;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000f2bee:
  if (iVar1 != 0) {
    return '\x03';
  }
  QString::toUtf8();
  iVar1 = FUN_100d73d20(param_1,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1000f2c4c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000f2c4c:
  if (iVar1 != 0) {
    return '\x03';
  }
  QString::toUtf8();
  iVar1 = FUN_100d73d60(param_1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_1000f2c9f;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000f2c9f:
  return (iVar1 != 0) * '\x03';
}

