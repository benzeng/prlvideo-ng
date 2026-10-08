
void FUN_100ac5e10(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar1 = CVmVideo::isEnableHiResDrawing();
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0xac0) = 0x3ff0000000000000;
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar3 = "Coherence will use default scale factor %f";
    uVar2 = DAT_100e11050;
  }
  else {
    uVar2 = FUN_100319cf0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = FUN_100352f80(uVar2);
    *(undefined8 *)(param_1 + 0xac0) = uVar2;
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar3 = "Coherence will use scale factor %f";
  }
  FUN_100df99c0(uVar2,"CHRCLIENT","ChrToolClient",2,pcVar3);
  return;
}

