
void FUN_100324300(long param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  QWidget *pQVar5;
  double dVar6;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar4 = FUN_100319390(*(long *)(param_1 + 0x18));
    }
  }
  FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar1 = CVmVideo::isEnableHiResDrawing();
  dVar6 = DAT_100e11050;
  if ((((cVar1 != '\0') && (*(long *)(param_1 + 0x10) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar4 = FUN_100319390();
    uVar3 = FUN_10018f890(uVar4);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar4 = FUN_100319390(*(long *)(param_1 + 0x18));
      }
    }
    FUN_10018c2b0(uVar4);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    bVar2 = CVmVideo::isNativeScalingInGuest();
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar1 = FUN_10031bc70(uVar4,*(undefined4 *)(param_1 + 0x34));
    if (((uVar3 & 0xffffff00) != 0x800 | bVar2) == 1) {
      pQVar5 = (QWidget *)0x0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (pQVar5 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        pQVar5 = *(QWidget **)(param_1 + 0x28);
      }
      dVar6 = (double)WidgetUtils::getWindowScaleFactor(pQVar5);
    }
    else if (cVar1 == '\0') {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar4 = FUN_100319cf0(uVar4);
      dVar6 = (double)FUN_100352f80(uVar4);
    }
    else {
      cVar1 = FUN_10011bfc0();
      dVar6 = DAT_100e12b90;
      if (cVar1 == '\0') {
        dVar6 = DAT_100e11050;
      }
    }
  }
  if ((*(double *)(param_1 + 0xc0) == dVar6) && (!NAN(*(double *)(param_1 + 0xc0)) && !NAN(dVar6)))
  {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"Updating display scale factor to %f");
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  *(double *)(param_1 + 0xc0) = dVar6;
  FUN_10082a7f0(dVar6,uVar4,param_1);
  return;
}

