
undefined8 FUN_100552d70(long param_1)

{
  long lVar1;
  char cVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    QString::toUtf8();
    FUN_100761940(local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 == -1) {
      return 0;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_30,1,8);
    return 0;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_38 + 0x10);
  QString::toUtf8();
  cVar2 = FUN_1007619a0(local_38 + lVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100552df4;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100552df4:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100552e24;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100552e24:
  if (cVar2 != '\0') {
    return 0;
  }
  return 3;
}

