
long FUN_10012e0f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = FUN_10015d3a0(param_2);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      lVar2 = FUN_10015d330(param_2,iVar5);
      if (lVar2 != 0) {
        FUN_10018c2b0(lVar2);
        uVar3 = CVmConfiguration::getVmHardwareList();
        lVar4 = FUN_10012cb20(param_1,uVar3,0,0);
        if (lVar4 != 0) {
          return lVar2;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_10015d3a0(param_2);
    } while (iVar5 < iVar1);
  }
  return 0;
}

