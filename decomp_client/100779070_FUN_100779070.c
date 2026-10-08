
void FUN_100779070(long param_1)

{
  QArrayData *pQVar1;
  QDateTime local_70;
  QString local_68;
  QVariant local_60;
  QString local_50;
  QString local_48;
  Data_conflict local_40;
  QString local_38 [2];
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_11 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1e2468c);
  QString::append(&local_50);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007790f2;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007790f2:
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_11 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  local_40.field15 = (QObject *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_11 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1e16267);
  QString::append((QString *)&local_40);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100779186;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100779186:
  QDateTime::currentDateTime();
  pQVar1 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_68);
  QVariant::QVariant(&local_60,&local_68);
  QSettings::setValue(local_38,(QVariant *)&local_40);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_11 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10077920c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10077920c:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_11 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10077923c;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10077923c:
  QDateTime::~QDateTime(&local_70);
  if (*(int *)local_40.field15 != -1) {
    if (*(int *)local_40.field15 != 0) {
      LOCK();
      *(int *)local_40.field15 = *(int *)local_40.field15 + -1;
      local_11 = *(int *)local_40.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100779275;
    }
    QArrayData::deallocate((QArrayData *)local_40.field15,2,8);
  }
LAB_100779275:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_11 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007792a5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1007792a5:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_11 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007792d5;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007792d5:
  QSettings::~QSettings((QSettings *)local_38);
  return;
}

