
undefined1 FUN_100b5b9b0(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *local_78;
  QMapNodeBase *local_70;
  QMapNodeBase *local_68;
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  local_38 = (QArrayData *)
             QString::fromAscii_helper
                       ("/Library/Preferences/SystemConfiguration/com.apple.PowerManagement.plist",
                        0x48);
  QSettings::QSettings((QSettings *)&local_30,&local_38,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b5ba14;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b5ba14:
  local_50 = (QArrayData *)QString::fromAscii_helper("Custom Profile",0xe);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_48,&local_30);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b5ba86;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b5ba86:
  QVariant::toMap();
  FUN_10008c590(&local_70,param_1);
  QVariant::toMap();
  local_78 = (QArrayData *)QString::fromAscii_helper("DarkWakeBackgroundTasks",0x17);
  FUN_10008c590(&local_68,&local_78);
  uVar1 = QVariant::toBool();
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b5bb08;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b5bb08:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b5bb50;
    }
    if (*(long *)(local_68 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_68,(int)*(undefined8 *)(local_68 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_68);
  }
LAB_100b5bb50:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b5bb98;
    }
    if (*(long *)(local_70 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_70,(int)*(undefined8 *)(local_70 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_70);
  }
LAB_100b5bb98:
  QVariant::~QVariant(&local_48);
  QSettings::~QSettings((QSettings *)&local_30);
  return uVar1;
}

