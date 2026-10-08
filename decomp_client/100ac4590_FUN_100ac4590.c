
bool FUN_100ac4590(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar1 = CVmCommonOptions::getOsType();
  if (iVar1 == 7) {
    bVar3 = false;
  }
  else {
    iVar1 = CVmCoherence::getWindowAnimation();
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

