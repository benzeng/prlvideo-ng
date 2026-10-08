
undefined1 FUN_1006041a0(void)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar5 = CVmCommonOptions::getOsType();
  if (iVar5 == 8) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getSharedVolumes();
    cVar2 = CVmSharedVolumes::isEnabled();
  }
  else {
    cVar2 = '\0';
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar3 = CVmHostSharing::isEnabled();
  if (cVar2 == '\0') {
    uVar4 = 1;
    if (cVar3 == '\0') goto LAB_100604444;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    cVar2 = CVmHostSharing::isShareAllMacDisks();
    if (cVar2 == '\0') {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      CVmSharing::getHostSharing();
      cVar2 = CVmHostSharing::isShareUserHomeDir();
      if (cVar2 == '\0') goto LAB_100604444;
      FUN_100d898d0(&local_48);
      local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[SF]",4);
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      uVar4 = SandboxFileAccessHelpers::checkAvailability(&local_48,&local_50,true,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_21 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006043e4;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1006043e4:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_21 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100604414;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100604414:
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_21 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100604444;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
      goto LAB_100604444;
    }
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/",1);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[SF]",4);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar4 = SandboxFileAccessHelpers::checkAvailability(&local_30,&local_38,true,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006042d5;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006042d5:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100604305;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100604305:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100604444;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100604444:
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return uVar4;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return uVar4;
}

