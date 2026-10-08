
void FUN_1007c8f60(long param_1)

{
  int iVar1;
  
  FUN_10018c2b0(*(undefined8 *)(param_1 + 0x18));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getDebugServer();
  iVar1 = CVmDebugServerInfo::getState();
  if (iVar1 == *(int *)(param_1 + 0x20)) {
    return;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_100864660(*(undefined8 *)(param_1 + 0x10),iVar1);
  return;
}

