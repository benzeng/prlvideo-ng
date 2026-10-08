
void FUN_1001bc010(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  
  CVmConfiguration::getVmSettings();
  bVar2 = (bool)CVmSettings::getVmRuntimeOptions();
  FUN_10011bfc0();
  CVmRunTimeOptions::setHostRetinaEnabled(bVar2);
  uVar1 = FUN_10015a340(param_2);
  CVmProfileHelper::set_vm_profile(param_1,uVar1,param_3);
  cVar3 = FUN_1001754c0(param_2,0x1a);
  if (cVar3 == '\0') {
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    uVar4 = CVmMemory::getRamSize();
    if (0x2000 < uVar4) {
      CVmConfiguration::getVmHardwareList();
      uVar4 = CVmHardware::getMemory();
      CVmMemory::setRamSize(uVar4);
    }
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getCpu();
    uVar4 = CVmCpu::getNumber();
    if (4 < uVar4) {
      CVmConfiguration::getVmHardwareList();
      uVar4 = CVmHardware::getCpu();
      CVmCpu::setNumber(uVar4);
      return;
    }
  }
  return;
}

