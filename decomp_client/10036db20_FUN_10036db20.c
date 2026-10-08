
undefined4 FUN_10036db20(long *param_1)

{
  undefined4 uVar1;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  (**(code **)(*param_1 + 0x1a8))(&local_58,param_1);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  local_60 = (QArrayData *)QString::fromAscii_helper("Scale View Mode",0xf);
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  QVariant::QVariant(&local_70,0);
  QSettings::value((QString *)&local_38,&local_28);
  uVar1 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10036dc15;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10036dc15:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10036dc45;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10036dc45:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10036dc75;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10036dc75:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10036dca5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10036dca5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10036dcd5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10036dcd5:
  QSettings::~QSettings((QSettings *)&local_28);
  return uVar1;
}

