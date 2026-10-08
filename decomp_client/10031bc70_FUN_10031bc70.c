
bool FUN_10031bc70(long param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  bVar3 = true;
  if (param_2 != 0) {
    if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
       (*(long *)(param_1 + 0x18) != 0)) {
      uVar7 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x30) == 0) {
        uVar4 = FUN_100319470(param_1);
        uVar7 = 1;
        if (uVar4 != 0) {
          uVar7 = uVar4;
        }
      }
      if (param_2 == 3) {
        return 1 < uVar7;
      }
      if (param_2 == 2) {
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
        }
        FUN_10018c2b0(uVar6);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmRuntimeOptions();
        CVmRunTimeOptions::getVmFullScreen();
        lVar5 = FUN_100319960(param_1);
        bVar1 = 1;
        if (lVar5 != 0) {
          uVar6 = FUN_100319960(param_1);
          bVar1 = FUN_100327830(uVar6);
          bVar1 = bVar1 ^ 1;
        }
        if (1 < uVar7) {
          bVar2 = CVmFullScreen::isUseAllDisplays();
          return (bool)(bVar2 & bVar1);
        }
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

