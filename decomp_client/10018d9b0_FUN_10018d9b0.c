
void FUN_10018d9b0(long param_1)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0x98) = 1;
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setTemplate(bVar1);
  FUN_100192800(param_1);
  return;
}

