
undefined8 FUN_1002d6b00(long param_1)

{
  bool bVar1;
  CVmConfiguration *pCVar2;
  undefined8 uVar3;
  CVmSharing *pCVar4;
  undefined8 uVar5;
  long lVar6;
  long local_1e0;
  QArrayData *local_1d8;
  CVmSharing local_1d0 [184];
  CVmConfiguration local_118 [255];
  undefined1 local_19;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  pCVar2 = (CVmConfiguration *)FUN_10018c2b0(uVar3);
  CVmConfiguration::CVmConfiguration(local_118,pCVar2);
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    bVar1 = (bool)CVmTools::getVmSharedProfile();
    CVmSharedProfile::setEnabled(bVar1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharedProfile();
    FUN_100198070(uVar3,uVar5);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar3 = CVmTools::getVmSharing();
    FUN_1002d70e0(uVar3,0);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharing();
    lVar6 = FUN_100197ee0(uVar3,uVar5);
    break;
  case 1:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar3 = CVmTools::getVmSharing();
    FUN_1002d70e0(uVar3,1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    pCVar4 = (CVmSharing *)CVmTools::getVmSharing();
    CVmSharing::CVmSharing(local_1d0,pCVar4);
    lVar6 = FUN_100197ee0(uVar3,local_1d0);
    CVmSharing::~CVmSharing(local_1d0);
    break;
  case 2:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setShareAllMacDisks(bVar1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setShareUserHomeDir(bVar1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharing();
    lVar6 = FUN_100197ee0(uVar3,uVar5);
    break;
  case 3:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getGuestSharing();
    CVmGuestSharing::setEnabled(bVar1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharing();
    lVar6 = FUN_100197ee0(uVar3,uVar5);
    break;
  case 4:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setShareUserHomeDir(bVar1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setShareAllMacDisks(bVar1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharing();
    lVar6 = FUN_100197ee0(uVar3,uVar5);
    break;
  case 5:
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    local_1d8 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_10018fd80(uVar3,&local_1d8);
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_19 = *(int *)local_1d8 != 0;
        UNLOCK();
        if ((bool)local_19) goto switchD_1002d6b58_default;
      }
      QArrayData::deallocate(local_1d8,2,8);
    }
    goto switchD_1002d6b58_default;
  case 6:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    bVar1 = (bool)CVmTools::getVmSharedProfile();
    CVmSharedProfile::setEnabled(bVar1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharedProfile();
    FUN_100198070(uVar3,uVar5);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setEnabled(bVar1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    uVar5 = CVmTools::getVmSharing();
    lVar6 = FUN_100197ee0(uVar3,uVar5);
    break;
  default:
    goto switchD_1002d6b58_default;
  }
  if (lVar6 != 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    QObject::connect(&local_1e0,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_1e0 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_1e0);
  }
switchD_1002d6b58_default:
  CVmConfiguration::~CVmConfiguration(local_118);
  return 0;
}

