
undefined4 FUN_100273ee0(void)

{
  undefined4 uVar1;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  uVar1 = FUN_100273fe0();
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30.field7 = QString::fromAscii_helper("WasLaunched",0xb);
  QVariant::QVariant(&local_40,true);
  QSettings::setValue(local_28,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_11 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100273f68;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_100273f68:
  QSettings::~QSettings((QSettings *)local_28);
  return uVar1;
}

