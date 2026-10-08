
void FUN_100764b40(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_38 = param_2;
  if (param_3 == 0x30000009) {
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
LAB_100764bbc:
    FUN_10085bca0(param_1);
    return;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (*(uint *)(plVar1 + 4) != 0) {
    uVar2 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar1 + 0x24);
    plVar4 = *(long **)(plVar1[1] + ((ulong)uVar2 % (ulong)*(uint *)(plVar1 + 4)) * 8);
    if (plVar4 != plVar1) {
      do {
        if ((*(uint *)(plVar4 + 1) == uVar2) && (plVar4[2] == param_2)) {
          if (plVar4 == plVar1) {
            return;
          }
          FUN_100764c30(param_1 + 0x20,&local_38);
          goto LAB_100764bbc;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != plVar1);
    }
  }
  return;
}

