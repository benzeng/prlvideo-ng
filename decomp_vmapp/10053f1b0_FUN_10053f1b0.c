
void FUN_10053f1b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  *param_1 = param_2;
  piVar1 = (int *)*param_3;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("[%driveletter%] %vmname%",0x18);
  local_38 = (QArrayData *)QString::fromAscii_helper("%vmname%",8);
  puVar5 = (undefined8 *)QString::replace(&local_30,&local_38,param_5,1);
  piVar1 = (int *)*puVar5;
  param_1[3] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10053f27d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10053f27d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10053f2ad;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10053f2ad:
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getGuestSharing();
  }
  cVar2 = CVmGuestSharing::isEnabled();
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
      bVar3 = 0;
    }
    else {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      bVar3 = CVmTools::isIsolatedVm();
    }
    bVar3 = bVar3 ^ 1;
  }
  *(uint *)((long)param_1 + 0x24) = (uint)bVar3;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getGuestSharing();
  }
  uVar4 = CVmGuestSharing::isAutoMount();
  *(undefined1 *)(param_1 + 5) = uVar4;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getGuestSharing();
  }
  uVar4 = CVmGuestSharing::isAllowExec();
  *(undefined1 *)((long)param_1 + 0x29) = uVar4;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getGuestSharing();
  }
  uVar4 = CVmGuestSharing::isAutoMountNetworkDrives();
  *(undefined1 *)((long)param_1 + 0x2a) = uVar4;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getGuestSharing();
  }
  uVar4 = CVmGuestSharing::isAutoMountCloudDrives();
  *(undefined1 *)((long)param_1 + 0x2b) = uVar4;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getGuestSharing();
  }
  uVar4 = CVmGuestSharing::isEnableSpotlight();
  *(undefined1 *)((long)param_1 + 0x2c) = uVar4;
  FUN_10053e120(param_1 + 6,param_1);
  return;
}

