
void FUN_100cc11d0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmRuntimeOptions();
  local_30 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_38 = (QArrayData *)QString::fromAscii_helper("Enable write-back disk cache",0x1c);
  uVar2 = FUN_100ccd670(param_2,&local_30,&local_38,10,1);
  CVmRunTimeOptions::setDiskCachePolicy(uVar3,uVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc1275;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc1275:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc12a5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100cc12a5:
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::setUndoDisksMode(uVar3,0);
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getVmRuntimeOptions();
  local_40 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_48 = (QArrayData *)QString::fromAscii_helper("AutoShutdown",0xc);
  FUN_100ccd670(param_2,&local_40,&local_48,10,0);
  CVmRunTimeOptions::setCloseAppOnShutdown(bVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc1354;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc1354:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc1384;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc1384:
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmRuntimeOptions();
  local_50 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_58 = (QArrayData *)QString::fromAscii_helper("Foreground priority",0x13);
  uVar2 = FUN_100ccd670(param_2,&local_50,&local_58,10,1);
  CVmRunTimeOptions::setForegroundPriority(uVar3,uVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc1416;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc1416:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc1446;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc1446:
  CVmConfiguration::getVmSettings();
  uVar3 = CVmSettings::getVmRuntimeOptions();
  local_60 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_68 = (QArrayData *)QString::fromAscii_helper("Background priority",0x13);
  uVar2 = FUN_100ccd670(param_2,&local_60,&local_68,10,1);
  CVmRunTimeOptions::setBackgroundPriority(uVar3,uVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc14d8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc14d8:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

