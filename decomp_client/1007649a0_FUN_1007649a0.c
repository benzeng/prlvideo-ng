
void FUN_1007649a0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long local_30;
  undefined8 local_28;
  
  iVar1 = FUN_10018a9d0(param_2);
  if (iVar1 == 0x30000009) {
    local_28 = param_2;
    FUN_10018c2b0(param_2);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    uVar2 = CVmMemory::getRamSize();
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    uVar3 = CVmVideo::getMemorySize();
    local_30 = ((ulong)uVar3 + (ulong)uVar2) * 0x100000;
    FUN_100764e00(param_1 + 0x20,&local_28,&local_30);
    FUN_10085bca0(param_1);
    return;
  }
  return;
}

