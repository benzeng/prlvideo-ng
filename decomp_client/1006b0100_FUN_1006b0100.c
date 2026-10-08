
byte FUN_1006b0100(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = FUN_1001222e0(*(undefined8 *)(param_1 + 0x20));
  if ((uVar3 & 8) == 0) {
    bVar2 = 0;
  }
  else {
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar1 = CVmVideo::isEnableHiResDrawing();
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar2 = CVmVideo::isNativeScalingInGuest();
    bVar2 = bVar2 & bVar1;
  }
  return bVar2;
}

