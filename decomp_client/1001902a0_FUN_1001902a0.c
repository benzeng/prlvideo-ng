
undefined8 FUN_1001902a0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CVmConfiguration::getVmSettings();
  if (lVar1 != 0) {
    lVar1 = CVmSettings::getVmCommonOptions();
    if (lVar1 != 0) {
      uVar2 = CVmCommonOptions::getVmColor();
      return uVar2;
    }
  }
  return 0;
}

