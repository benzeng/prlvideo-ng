
void FUN_100378a30(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar2 = FUN_100323dd0();
    if (lVar2 != 0) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar3 = FUN_100323dd0(uVar3);
      FUN_10018c2b0(uVar3);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::getVmFullScreen();
      iVar1 = CVmFullScreen::getScaleViewMode();
      cVar4 = '\x01';
      if (iVar1 != 0) {
        iVar1 = CVmFullScreen::getScaleViewMode();
        cVar4 = (iVar1 != 1) * '\x02' + '\x01';
      }
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100325d70(uVar3,2,cVar4);
      return;
    }
  }
  return;
}

