
undefined2 FUN_1007c9120(long param_1)

{
  undefined2 uVar1;
  
  FUN_10018c2b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getDebugServer();
  uVar1 = CVmDebugServerInfo::getPort();
  return uVar1;
}

