
void FUN_100626f30(bool param_1)

{
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30.field7 = QString::fromAscii_helper("PDL/AppStoreTrialExpiredScreenShown",0x23);
  QVariant::QVariant(&local_40,param_1);
  QSettings::setValue(local_28,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_11 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100626fb1;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_100626fb1:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

