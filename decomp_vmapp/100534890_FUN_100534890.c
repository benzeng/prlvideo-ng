
undefined8 FUN_100534890(long param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long local_30;
  
  LOCK();
  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20) = 1;
  UNLOCK();
  lVar5 = *(long *)(param_1 + 0x38);
  QMutex::lock();
  *(undefined1 *)(lVar5 + 0x28) = 1;
  QMutex::unlock();
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
    bVar3 = 1;
    if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      bVar3 = CVmTools::isIsolatedVm();
      bVar3 = bVar3 ^ 1;
    }
  }
  lVar5 = FUN_1002a6010(param_2);
  uVar1 = *(ushort *)(param_2 + 0x14);
  ___bzero(lVar5,uVar1);
  if (bVar3 != 0) {
    *(undefined4 *)(lVar5 + 4) = 1;
    if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      CVmSharing::getGuestSharing();
    }
    cVar2 = CVmGuestSharing::isAutoMountNetworkDrives();
    if (cVar2 != '\0') {
      *(byte *)(lVar5 + 4) = *(byte *)(lVar5 + 4) | 2;
    }
    if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      CVmSharing::getGuestSharing();
    }
    cVar2 = CVmGuestSharing::isAutoMountCloudDrives();
    if (cVar2 != '\0') {
      *(byte *)(lVar5 + 4) = *(byte *)(lVar5 + 4) | 4;
    }
    if (*(long *)(DAT_1011c3698 + 0x118) != 0) {
      CDispCommonPreferences::getWorkspacePreferences();
      cVar2 = CDispWorkspacePreferences::isMountNTFSToHostOnConnectionToVm();
      if (cVar2 != '\0') {
        *(byte *)(lVar5 + 4) = *(byte *)(lVar5 + 4) | 8;
      }
    }
    if (0xb < uVar1) {
      local_30 = DAT_1011c3698 + 0x110;
      iVar4 = FUN_1000b4970(&local_30);
      if (0 < iVar4) {
        *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 1;
      }
    }
  }
  return 0;
}

