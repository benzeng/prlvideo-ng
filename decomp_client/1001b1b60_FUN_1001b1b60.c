
void FUN_1001b1b60(int param_1)

{
  QVariant local_48;
  Data_conflict local_38;
  QArrayData *local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30 = (QArrayData *)QString::fromAscii_helper("Settings Versions",0x11);
  QSettings::beginGroup(local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b1bc8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001b1bc8:
  local_38.field7 = QString::fromAscii_helper("Usb List Version",0x10);
  QVariant::QVariant(&local_48,param_1);
  QSettings::setValue(local_28,(QVariant *)&local_38);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_11 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b1c32;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_1001b1c32:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

