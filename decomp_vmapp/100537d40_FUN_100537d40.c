
void FUN_100537d40(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  
  lVar5 = 0;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    lVar5 = CVmSharing::getGuestSharing();
  }
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  if (lVar5 != 0) {
    cVar1 = CVmGuestSharing::isEnabled();
    cVar2 = CVmGuestSharing::isEnabled();
    if (cVar1 == cVar2) {
      cVar1 = CVmGuestSharing::isAutoMount();
      cVar2 = CVmGuestSharing::isAutoMount();
      if (cVar1 == cVar2) {
        cVar1 = CVmGuestSharing::isAutoMountNetworkDrives();
        cVar2 = CVmGuestSharing::isAutoMountNetworkDrives();
        if (cVar1 == cVar2) {
          cVar1 = CVmGuestSharing::isAutoMountCloudDrives();
          cVar2 = CVmGuestSharing::isAutoMountCloudDrives();
          if (cVar1 == cVar2) {
            cVar1 = CVmGuestSharing::isEnableSpotlight();
            cVar2 = CVmGuestSharing::isEnableSpotlight();
            if (cVar1 == cVar2) {
              if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
                cVar1 = CVmTools::isIsolatedVm();
                if (cVar1 == '\0') {
                  return;
                }
              }
              else {
                CVmConfiguration::getVmSettings();
                CVmSettings::getVmTools();
                bVar3 = CVmTools::isIsolatedVm();
                bVar4 = CVmTools::isIsolatedVm();
                if ((bVar4 ^ bVar3) != 1) {
                  return;
                }
              }
            }
          }
        }
      }
    }
    FUN_100537ec0(*(undefined8 *)(param_1 + 0x40));
    return;
  }
  return;
}

