
undefined1 FUN_100626e10(void)

{
  undefined1 uVar1;
  Data_conflict local_50;
  undefined4 local_48;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("PDL/AppStoreTrialExpiredScreenShown",0x23);
  local_48 = 0x80000000;
  local_50.field7 = 0;
  QSettings::value((QString *)&local_28,&local_38);
  uVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  QVariant::~QVariant((QVariant *)&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100626eaa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100626eaa:
  QSettings::~QSettings((QSettings *)&local_38);
  return uVar1;
}

