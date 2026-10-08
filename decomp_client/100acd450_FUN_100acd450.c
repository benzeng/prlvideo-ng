
void FUN_100acd450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100319390(*(undefined8 *)(param_1 + 0x70));
  FUN_10018c2b0(uVar1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getOsVersion();
  return;
}

