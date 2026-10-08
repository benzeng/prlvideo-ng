
ulong FUN_1006b0070(long param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1001222e0(*(undefined8 *)(param_1 + 0x20));
  if ((uVar3 & 4) != 0) {
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    cVar1 = CVmVideo::isEnableHiResDrawing();
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar2 = CVmVideo::isUseHiResInGuest();
    uVar4 = FUN_1001221f0(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      return CONCAT71((int7)((ulong)uVar4 >> 8),bVar2 & (byte)uVar4) ^ 1;
    }
  }
  return 0;
}

