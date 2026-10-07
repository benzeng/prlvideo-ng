
undefined8 FUN_1006fb960(undefined8 param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QCryptographicHash local_28 [15];
  undefined1 local_19;
  
  QCryptographicHash::QCryptographicHash(local_28,1);
  QString::toUtf8();
  QCryptographicHash::addData((QByteArray *)local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006fb9c8;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1006fb9c8:
  QCryptographicHash::result();
  QByteArray::toHex();
  pQVar2 = local_48 + *(long *)(local_48 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_48 + 4));
    if ((int)lVar1 == -1) {
      _strlen((char *)pQVar2);
    }
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pQVar2);
  QString::normalized(&local_38,&local_40,1,0);
  QString::toLower();
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006fba79;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006fba79:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006fbaa9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006fbaa9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006fbad9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1006fbad9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006fbb09;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1006fbb09:
  QCryptographicHash::~QCryptographicHash(local_28);
  return param_1;
}

