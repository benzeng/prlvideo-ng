
void FUN_100699620(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  FUN_10018c2b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  bVar1 = CVmTravelOptions::isEnabled();
  uVar2 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  uVar2 = FUN_100319ce0(uVar2);
  FUN_1003511a0(uVar2,bVar1 ^ 1);
  return;
}

