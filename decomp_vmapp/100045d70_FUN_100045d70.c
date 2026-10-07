
undefined8 FUN_100045d70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x128) + 0x110) != 0) {
    lVar1 = CVmConfiguration::getVmSettings();
    if (lVar1 != 0) {
      uVar2 = CVmSettings::getVmTools();
      return uVar2;
    }
  }
  return 0;
}

