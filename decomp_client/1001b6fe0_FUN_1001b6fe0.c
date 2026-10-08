
void FUN_1001b6fe0(void)

{
  QArrayData *pQVar1;
  QDateTime local_50;
  QString local_48;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30.field7 = QString::fromAscii_helper("Antivirus/HavPromoLastShowtime",0x1e);
  QDateTime::currentDateTime();
  pQVar1 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_48);
  QVariant::QVariant(&local_40,&local_48);
  QSettings::setValue(local_28,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_11 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b708f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001b708f:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_11 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b70bf;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001b70bf:
  QDateTime::~QDateTime(&local_50);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_11 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b70f8;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_1001b70f8:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

