
void FUN_10077bd00(long param_1)

{
  QArrayData *pQVar1;
  QDateTime local_48;
  QDateTime local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  QDateTime::currentDateTime();
  QDateTime::addMSecs((longlong)&local_40);
  pQVar1 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_38);
  QString::toUtf8();
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Next check scheduled on %s",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077bdc2;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10077bdc2:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077bdf2;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10077bdf2:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077be22;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10077be22:
  QDateTime::~QDateTime(&local_40);
  QDateTime::~QDateTime(&local_48);
  QTimer::start((int)*(undefined8 *)(param_1 + 0x10));
  return;
}

