
undefined1 FUN_100603d50(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar3 = CVmCommonOptions::getOsType();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar4 = CVmCommonOptions::getOsVersion();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar1 = CVmHostSharing::isEnabled();
  cVar2 = FUN_100110b70(iVar3,uVar4);
  if (cVar2 == '\0') {
    return 0;
  }
  if (iVar3 == 8) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getSharedVolumes();
    cVar2 = CVmSharedVolumes::isEnabled();
    if (cVar2 == '\0') goto LAB_100603dfb;
LAB_100603e34:
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/",1);
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[SF]",4);
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    cVar2 = SandboxFileAccessHelpers::checkAvailability(&local_38,&local_40,false,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100603eaf;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100603eaf:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100603edf;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100603edf:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100603f0f;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_100603f0f:
    if (cVar2 == '\0') {
      return 1;
    }
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
LAB_100603dfb:
    if (cVar1 == '\0') {
      return 0;
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    cVar2 = CVmHostSharing::isShareAllMacDisks();
    if (cVar2 != '\0') goto LAB_100603e34;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar1 = CVmHostSharing::isShareUserHomeDir();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_100d898d0(&local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[SF]",4);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = SandboxFileAccessHelpers::checkAvailability(&local_50,&local_58,false,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100603fc1;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100603fc1:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100603ff1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100603ff1:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) goto LAB_100604021;
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100604021:
  if (cVar1 != '\0') {
    return 0;
  }
  return 1;
}

