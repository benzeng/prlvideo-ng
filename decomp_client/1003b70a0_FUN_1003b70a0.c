
undefined4 FUN_1003b70a0(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar1 = CVmHostSharing::isEnabled();
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar2 = CVmHostSharing::isShareAllMacDisks();
    cVar1 = '\x01';
    if (cVar2 == '\0') {
      cVar1 = CVmHostSharing::isShareUserHomeDir();
    }
  }
  bVar3 = CVmHostSharing::isUserDefinedFoldersEnabled();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  bVar4 = CVmGuestSharing::isEnabled();
  if ((((cVar1 == '\0') && (bVar3 == 0)) && (uVar5 = 2, bVar4 == 0)) ||
     ((uVar6 = 0, (bVar3 | bVar4) == 1 && (uVar5 = 1, cVar1 != '\x01')))) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharedApplications();
    cVar1 = CVmSharedApplications::isWinToMac();
    uVar6 = 1;
    if ((cVar1 == '\0') &&
       (cVar1 = CVmSharedApplications::isSmartSelect(), uVar6 = uVar5, cVar1 != '\0')) {
      uVar6 = 1;
    }
  }
  return uVar6;
}

