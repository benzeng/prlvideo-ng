
void FUN_10018dc90(long param_1)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0x98) = 0;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::isTemplate();
  CVmConfiguration::getVmSettings();
  bVar1 = (bool)CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setTemplate(bVar1);
  return;
}

