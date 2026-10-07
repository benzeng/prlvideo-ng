
ulong FUN_1004aeef0(void)

{
  ulong uVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmCoherence();
  uVar1 = CVmCoherence::isDisableAero();
  return uVar1 ^ 1;
}

