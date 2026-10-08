
undefined8 FUN_10073ce30(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_100154930(uVar3,param_1 + 8,param_1);
  if (lVar4 != 0) {
    FUN_10018c2b0(lVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getSharedCamera();
    cVar1 = CVmSharedCamera::isEnabled();
    if (cVar1 != '\0') {
      uVar3 = FUN_10018c280(lVar4);
      uVar3 = FUN_100319be0(uVar3);
      iVar2 = FUN_10032b900(uVar3);
      if (iVar2 == 1) {
        FUN_10018c2b0(lVar4);
        lVar5 = CVmConfiguration::getVmHardwareList();
        lVar4 = *(long *)(lVar5 + 0x1e0);
        iVar2 = *(int *)(lVar4 + 8);
        iVar6 = *(int *)(lVar4 + 0xc) - iVar2;
        if (0 < iVar6) {
          lVar7 = (long)iVar6 + 1;
          while( true ) {
            if (*(long *)(lVar4 + (iVar2 + lVar7) * 8) != 0) {
              iVar2 = CVmDevice::getEnabled();
              if (iVar2 == 1) {
                return 1;
              }
            }
            lVar7 = lVar7 + -1;
            if (lVar7 < 2) break;
            lVar4 = *(long *)(lVar5 + 0x1e0);
            iVar2 = *(int *)(lVar4 + 8);
          }
        }
      }
    }
  }
  return 0;
}

