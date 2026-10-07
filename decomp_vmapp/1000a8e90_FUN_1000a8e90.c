
void FUN_1000a8e90(long param_1)

{
  undefined1 uVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  uVar1 = CVmRunTimeOptions::isEnableAdaptiveHypervisor();
  *(undefined1 *)(param_1 + 0x109ed) = uVar1;
  return;
}

