
void FUN_100494450(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0x600010005;
  local_30 = 0;
  FUN_100493f30(param_1,&local_38);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = CVmTools::isSyncVmHostname();
  bVar2 = CVmTools::isSyncVmHostname();
  if ((bVar2 ^ bVar1) == 1) {
    local_38 = 0xe00010005;
    local_30 = 0;
    FUN_100493f30(param_1,&local_38);
  }
  bVar1 = CVmTools::isSyncSshIds();
  bVar2 = CVmTools::isSyncSshIds();
  if ((bVar2 ^ bVar1) == 1) {
    FUN_10047f560(param_1);
    return;
  }
  return;
}

