
ulong FUN_100a66030(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar2 = FUN_100319390(uVar2);
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getLocationProvider();
  cVar1 = CVmLocationProvider::isEnabled();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = CVmTools::isIsolatedVm();
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

