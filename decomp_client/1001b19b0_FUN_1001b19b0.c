
undefined4 FUN_1001b19b0(void)

{
  undefined4 uVar1;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  local_30 = (QArrayData *)QString::fromAscii_helper("Settings Versions",0x11);
  QSettings::beginGroup((QString *)&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b1a16;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001b1a16:
  local_48 = (QArrayData *)QString::fromAscii_helper("Usb List Version",0x10);
  QVariant::QVariant(&local_58,0);
  QSettings::value((QString *)&local_40,&local_28);
  uVar1 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b1a9a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001b1a9a:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)&local_28);
  return uVar1;
}

