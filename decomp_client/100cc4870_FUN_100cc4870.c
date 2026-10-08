
void FUN_100cc4870(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedApplications();
  local_30 = (QArrayData *)QString::fromAscii_helper("Shared Application",0x12);
  local_38 = (QArrayData *)QString::fromAscii_helper("Shared from Win to Mac",0x16);
  FUN_100ccd670(param_2,&local_30,&local_38,10,1);
  CVmSharedApplications::setWinToMac(bVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4923;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc4923:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4953;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100cc4953:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedApplications();
  local_40 = (QArrayData *)QString::fromAscii_helper("Shared Application",0x12);
  local_48 = (QArrayData *)QString::fromAscii_helper("Shared from Mac to Win",0x16);
  FUN_100ccd670(param_2,&local_40,&local_48,10,1);
  CVmSharedApplications::setMacToWin(bVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc49f3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc49f3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4a23;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc4a23:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedApplications();
  local_50 = (QArrayData *)QString::fromAscii_helper("Shared Application",0x12);
  local_58 = (QArrayData *)QString::fromAscii_helper("SmartSelect",0xb);
  FUN_100ccd670(param_2,&local_50,&local_58,10,1);
  CVmSharedApplications::setSmartSelect(bVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4ac3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc4ac3:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4af3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc4af3:
  local_60 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_68 = (QArrayData *)QString::fromAscii_helper("Application Doc Icon",0x14);
  iVar2 = FUN_100ccd670(param_2,&local_60,&local_68,10,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4b6a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc4b6a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4b9a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc4b9a:
  if (iVar2 == 1) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar3 = CVmTools::getVmSharedApplications();
    uVar4 = 2;
  }
  else if (iVar2 == 2) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar3 = CVmTools::getVmSharedApplications();
    uVar4 = 1;
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar3 = CVmTools::getVmSharedApplications();
    uVar4 = 0;
  }
  CVmSharedApplications::setApplicationInDock(uVar3,uVar4);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  uVar3 = CVmSharedApplications::getWebApplications();
  WebApplications::setWebBrowser(uVar3,0);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  uVar3 = CVmSharedApplications::getWebApplications();
  WebApplications::setEmailClient(uVar3,0);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  uVar3 = CVmSharedApplications::getWebApplications();
  WebApplications::setFtpClient(uVar3,0);
  return;
}

