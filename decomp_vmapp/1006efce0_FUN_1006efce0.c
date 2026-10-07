
undefined8 * FUN_1006efce0(undefined8 *param_1)

{
  long lVar1;
  QArrayData *local_28;
  
  QString::toUtf8();
  lVar1 = _getpwnam(local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1006efd37;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1006efd37:
  if (lVar1 == 0) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    QString::number((uint)param_1,*(int *)(lVar1 + 0x10));
  }
  return param_1;
}

