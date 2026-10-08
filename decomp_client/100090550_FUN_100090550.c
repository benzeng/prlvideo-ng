
undefined8 FUN_100090550(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar1 = CVmHostSharing::isEnabled();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (param_2 == '\0') {
    uVar2 = CVmHostSharing::isShareUserHomeDir();
  }
  else {
    uVar2 = CVmHostSharing::isShareAllMacDisks();
  }
  return uVar2;
}

