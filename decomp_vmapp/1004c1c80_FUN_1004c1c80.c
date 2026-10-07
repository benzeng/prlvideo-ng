
bool FUN_1004c1c80(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    if (DAT_1011b55f8 < 1) {
      bVar3 = false;
    }
    else {
      bVar3 = false;
      FUN_1008e3970("","SharedProfileHost",1,"Configuration is not available");
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    cVar1 = CVmTools::isIsolatedVm();
    if (cVar1 == '\0') {
      cVar2 = CVmHostSharing::isEnabled();
      cVar1 = '\0';
      if (cVar2 != '\0') {
        cVar2 = CVmHostSharing::isShareAllMacDisks();
        cVar1 = '\x01';
        if (cVar2 == '\0') {
          cVar1 = CVmHostSharing::isShareUserHomeDir();
        }
      }
    }
    else {
      cVar1 = '\0';
    }
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}

