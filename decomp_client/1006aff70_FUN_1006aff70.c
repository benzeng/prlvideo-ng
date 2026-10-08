
ulong FUN_1006aff70(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1001222e0(*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    uVar1 = CVmVideo::isEnableHiResDrawing();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

