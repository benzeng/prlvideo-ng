
undefined8 FUN_1000b2290(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar1 = 0;
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmEncryption();
    uVar1 = CVmEncryption::isEnabled();
  }
  return uVar1;
}

