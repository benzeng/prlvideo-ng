
undefined8 FUN_100030df0(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x298) & 2) == 0) {
    return 0;
  }
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar1 = CVmVideo::isEnableHiResDrawing();
  if (cVar1 == '\0') {
    return 0;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar2 = CVmCommonOptions::getOsType();
  if (iVar2 == 8) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar3 = CVmCommonOptions::getOsVersion();
    if (0x80d < uVar3) {
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getVideo();
      cVar1 = CVmVideo::isNativeScalingInGuest();
      if (cVar1 == '\0') {
        return 1;
      }
      return 0;
    }
  }
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar1 = CVmVideo::isUseHiResInGuest();
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}

