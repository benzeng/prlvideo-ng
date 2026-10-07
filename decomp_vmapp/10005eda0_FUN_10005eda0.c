
void FUN_10005eda0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  QDateTime local_50 [8];
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if ((param_3 & 0x10) == 0) {
    FUN_1008e3970("","vm",0,"TIS Guest validation record does not contain information");
    return;
  }
  QByteArray::toHex();
  lVar1 = 0;
  pQVar2 = local_28 + *(long *)(local_28 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_28 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_28 + 4));
  }
  local_20 = (QArrayData *)QString::fromAscii_helper((char *)pQVar2,(int)lVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ee46;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10005ee46:
  local_40 = (QArrayData *)QString::fromAscii_helper("%1 GuestInfo:%2",0xf);
  QDateTime::currentDateTime();
  pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_48);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  QString::arg(&local_30,&local_38,&local_20,0,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005eeec;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10005eeec:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_11 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ef1c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10005ef1c:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_11 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ef4c;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10005ef4c:
  QDateTime::~QDateTime(local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005ef85;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005ef85:
  FUN_10005c750(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005efbe;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10005efbe:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

