
uint FUN_1001248e0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  FUN_10018c2b0();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  cVar1 = CVmRunTimeOptions::isCpuFeaturesMaskValid();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_10018c2b0(param_1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    uVar2 = CVmRunTimeOptions::getEXT_80000008_EAX();
  }
  uVar6 = FUN_10018d490(param_1);
  FUN_10015a330(uVar6);
  CDispCommonPreferences::getMemoryPreferences();
  cVar1 = CDispMemoryPreferences::isAdjustMemAuto();
  uVar6 = FUN_10018d490(param_1);
  FUN_10015a330(uVar6);
  CDispCommonPreferences::getMemoryPreferences();
  if (cVar1 == '\0') {
    uVar3 = CDispMemoryPreferences::getReservedMemoryLimit();
  }
  else {
    uVar3 = CDispMemoryPreferences::getMaxReservedMemoryLimit();
  }
  FUN_10018c2b0(param_1);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  iVar4 = CVmMemory::getMaxBalloonSize();
  uVar7 = 0x40;
  if (0x58 < uVar3) {
    uVar7 = ((uint)(((((ulong)uVar3 * 100) / (ulong)(100 - iVar4)) * 0x640000 - 0x29680000) /
                   0x664200) & 0xfffffffc) - 0x20;
  }
  uVar3 = FUN_100dc9a40(uVar2);
  if (uVar7 <= uVar3) {
    FUN_10018c2b0(param_1);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    uVar5 = CVmVideo::getMemorySize();
    uVar3 = 0;
    if (uVar5 < uVar7) {
      FUN_10018c2b0(param_1);
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getVideo();
      iVar4 = CVmVideo::getMemorySize();
      uVar3 = uVar7 - iVar4;
    }
  }
  return uVar3 & 0xfffffffc;
}

