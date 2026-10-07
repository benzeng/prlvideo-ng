
undefined1 FUN_100711500(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *local_78;
  QMapNodeBase *local_70;
  QMapNodeBase *local_68;
  undefined8 local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QString local_48 [2];
  QArrayData *local_38;
  QSettings local_30 [23];
  undefined1 local_19;
  
  local_38 = (QArrayData *)
             QString::fromAscii_helper
                       ("/Library/Preferences/SystemConfiguration/com.apple.PowerManagement.plist",
                        0x48);
  QSettings::QSettings(local_30,&local_38,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100711564;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100711564:
  local_50 = (QArrayData *)QString::fromAscii_helper("Custom Profile",0xe);
  local_58 = 0x80000000;
  local_60 = 0;
  QSettings::value(local_48,(QVariant *)local_30);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007115d6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007115d6:
  QVariant::toMap();
  FUN_1004a0bc0(&local_70,param_1);
  QVariant::toMap();
  local_78 = (QArrayData *)QString::fromAscii_helper("DarkWakeBackgroundTasks",0x17);
  FUN_1004a0bc0(&local_68,&local_78);
  uVar1 = QVariant::toBool();
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100711658;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100711658:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007116a0;
    }
    if (*(long *)(local_68 + 0x10) != 0) {
      FUN_1004a11c0();
      QMapDataBase::freeTree(local_68,(int)*(undefined8 *)(local_68 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_68);
  }
LAB_1007116a0:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007116e8;
    }
    if (*(long *)(local_70 + 0x10) != 0) {
      FUN_1004a11c0();
      QMapDataBase::freeTree(local_70,(int)*(undefined8 *)(local_70 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_70);
  }
LAB_1007116e8:
  QVariant::~QVariant((QVariant *)local_48);
  QSettings::~QSettings(local_30);
  return uVar1;
}

