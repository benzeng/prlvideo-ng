
void FUN_100644f70(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_100658fb0();
  uVar2 = FUN_100778290(0x80000000,0);
  if (0x80000000 < uVar2) {
    FUN_1007782b0(0x80000001,0);
  }
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setHostRamSize(uVar2);
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setMinVmMemory(uVar2);
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setMaxVmMemory(uVar2);
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setMaxReservedMemoryLimit(uVar2);
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setReservedMemoryLimit(uVar2);
  FUN_100779310(uVar1);
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setRecommendedMaxVmMemory(uVar2);
  FUN_1006592b0(param_1);
  return;
}

