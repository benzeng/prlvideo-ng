
double FUN_100352f80(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = FUN_100319390(uVar3);
  if (lVar2 != 0) {
    FUN_10018c2b0(lVar2);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    dVar4 = (double)CVmVideo::getHostScaleFactor();
    if (dVar4 != 0.0) {
      return dVar4;
    }
    if (NAN(dVar4)) {
      return dVar4;
    }
  }
  cVar1 = FUN_10011bfc0();
  if (cVar1 == '\0') {
    return DAT_100e11050;
  }
  return DAT_100e12b90;
}

