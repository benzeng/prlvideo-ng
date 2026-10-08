
bool FUN_100369fb0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar3 = FUN_100323dd0(uVar3);
  cVar1 = FUN_10018ffc0(uVar3);
  bVar4 = true;
  if (cVar1 == '\0') {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar3 = FUN_100323dd0(uVar3);
    FUN_10018c2b0(uVar3);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    iVar2 = CVmVideo::getEnable3DAcceleration();
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}

