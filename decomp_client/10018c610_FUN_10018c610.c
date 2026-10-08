
void FUN_10018c610(undefined8 param_1)

{
  undefined1 uVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar1 = CVmCommonOptions::isTemplate();
  FUN_1008052a0(param_1,uVar1);
  return;
}

