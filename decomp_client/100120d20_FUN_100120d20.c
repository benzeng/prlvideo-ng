
ulong FUN_100120d20(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = FUN_10018f890();
  uVar4 = 0x400;
  if ((uVar2 < 0x80c) || (uVar2 != 0x8ff && 0xf < uVar2 - 0x801)) {
    uVar4 = 0x280;
    if (uVar2 - 0x701 < 3) {
      FUN_10018c2b0(param_1);
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getVideo();
      cVar1 = CVmVideo::isEnableHiResDrawing();
      if (cVar1 != '\0') {
        cVar1 = CVmVideo::isUseHiResInGuest();
        uVar4 = 0x640;
        if (cVar1 != '\0') {
          uVar3 = 0x4b000000000;
          goto LAB_100120dcd;
        }
      }
      uVar3 = 0x25800000000;
      uVar4 = 800;
    }
    else {
      uVar3 = 0x1e000000000;
    }
  }
  else {
    uVar3 = 0x30000000000;
  }
LAB_100120dcd:
  return uVar3 | uVar4;
}

