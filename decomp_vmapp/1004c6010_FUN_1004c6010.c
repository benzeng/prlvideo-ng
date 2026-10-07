
void FUN_1004c6010(void)

{
  char cVar1;
  byte bVar2;
  
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    cVar1 = CVmTools::isIsolatedVm();
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    bVar2 = CVmHostSharing::isSetExecBitForFiles();
    DAT_1011bc070 = (uint)bVar2;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    bVar2 = CVmHostSharing::isVirtualLinks();
    DAT_10111cc68 = (uint)bVar2;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    bVar2 = CVmHostSharing::isEnableDos8dot3Names();
    DAT_10111cc6c = (uint)bVar2;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharedProfile();
    if (cVar1 == '\0') {
      cVar1 = CVmSharedProfile::isEnabled();
      if (cVar1 == '\0') {
        bVar2 = 0;
      }
      else {
        bVar2 = CVmSharedProfile::isUseTrashBin();
      }
    }
    else {
      bVar2 = 0;
    }
    DAT_10111cc74 = (uint)bVar2;
  }
  return;
}

