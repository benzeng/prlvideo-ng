
void FUN_100cc0040(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  Data *local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmStartupOptions();
  local_40 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_48 = (QArrayData *)QString::fromAscii_helper("Boot",4);
  local_50 = (QArrayData *)QString::fromAscii_helper("_",1);
  FUN_100ccd600(&local_38,param_2,&local_40,&local_48,&local_50);
  FUN_100cc0560(&local_30);
  CVmStartupOptions::setBootDeviceList(uVar3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc00ff;
    }
    QListData::dispose(local_30);
  }
LAB_100cc00ff:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc012f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc012f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc015f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc015f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc018f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc018f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc01bf;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc01bf:
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmStartupOptions();
  local_58 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_60 = (QArrayData *)QString::fromAscii_helper("Start auto",10);
  uVar1 = FUN_100ccd670(param_2,&local_58,&local_60,10,0);
  CVmStartupOptionsBase::setAutoStart(uVar3,uVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc024e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc024e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc027e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc027e:
  local_68 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_70 = (QArrayData *)QString::fromAscii_helper("Window Mode",0xb);
  iVar2 = FUN_100ccd670(param_2,&local_68,&local_70,10,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc02f3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cc02f3:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc0323;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc0323:
  iVar4 = 1;
  if (iVar2 != 2) {
    iVar4 = iVar2;
  }
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmStartupOptions();
  CVmStartupOptionsBase::setWindowMode(uVar3,iVar4);
  return;
}

