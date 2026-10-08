
void FUN_100764a40(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_10018c2b0(param_2);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  uVar1 = CVmMemory::getRamSize();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  uVar2 = CVmVideo::getMemorySize();
  local_30 = ((ulong)uVar2 + (ulong)uVar1) * 0x100000;
  FUN_100764e00(param_1 + 0x20,&local_28,&local_30);
  return;
}

