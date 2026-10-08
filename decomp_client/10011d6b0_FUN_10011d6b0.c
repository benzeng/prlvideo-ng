
int FUN_10011d6b0(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar2 = CVmCommonOptions::getOsType();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar3 = CVmCommonOptions::getOsVersion();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getChipset();
  uVar4 = Chipset::getType();
  bVar1 = FUN_100cd0070(uVar2,uVar3,uVar4);
  return (uint)bVar1 * 2;
}

