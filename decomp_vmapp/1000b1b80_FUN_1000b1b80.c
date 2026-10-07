
void FUN_1000b1b80(undefined8 param_1)

{
  undefined8 uVar1;
  
  CVmConfiguration::getVmHardwareList();
  uVar1 = CVmHardware::getMemory();
  CVmMemory::setRamSize((uint)uVar1);
  FUN_1000af6b0(param_1,uVar1);
  return;
}

