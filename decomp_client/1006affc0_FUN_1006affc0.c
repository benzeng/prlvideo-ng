
byte FUN_1006affc0(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  
  uVar5 = FUN_1001222e0(*(undefined8 *)(param_1 + 0x20));
  if ((uVar5 & 2) == 0) {
    bVar1 = 0;
  }
  else {
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar1 = CVmVideo::isEnableHiResDrawing();
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar2 = CVmVideo::isUseHiResInGuest();
    bVar3 = FUN_1001221f0(*(undefined8 *)(param_1 + 0x20));
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar4 = CVmVideo::isNativeScalingInGuest();
    bVar1 = (bVar4 ^ 1) & (~bVar3 | bVar2) & bVar1;
  }
  return bVar1;
}

