
void FUN_100aed0c0(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_100b01670();
  uVar2 = FUN_100dc8a00(0x80000000,0);
  if (0x80000000 < uVar2) {
    FUN_100dc8a20(0x80000001,0);
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
  FUN_100dc9a80(uVar1);
  uVar2 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setRecommendedMaxVmMemory(uVar2);
  FUN_100b01970(param_1);
  return;
}

