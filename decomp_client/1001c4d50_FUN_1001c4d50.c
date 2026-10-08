
undefined8 FUN_1001c4d50(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getRemoteControl();
  cVar1 = CVmRemoteControl::isEnabled();
  if (cVar1 != '\0') {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar2 = CVmCommonOptions::getOsType();
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar3 = CVmCommonOptions::getOsVersion();
    uVar4 = FUN_100110a10(uVar2,uVar3);
    return uVar4;
  }
  return 0;
}

