
void FUN_1007e4b50(long *param_1)

{
  QArrayData *pQVar1;
  QDateTime local_50;
  QString local_48;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  if ((int)param_1[3] != 0) goto LAB_1007e4c7e;
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30.field7 =
       QString::fromAscii_helper("ParallelsToolbox/ParallelsToolboxPromoLastShowtime",0x32);
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
      if ((bool)local_11) goto LAB_1007e4c0c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1007e4c0c:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_11 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007e4c3c;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007e4c3c:
  QDateTime::~QDateTime(&local_50);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_11 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007e4c75;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_1007e4c75:
  QSettings::~QSettings((QSettings *)local_28);
LAB_1007e4c7e:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

