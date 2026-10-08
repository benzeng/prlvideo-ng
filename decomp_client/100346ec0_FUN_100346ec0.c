
void FUN_100346ec0(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  CVmSettings *pCVar3;
  CVmSettings local_180 [352];
  
  if (*(char *)(param_1 + 0x32) != '\0') {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar2 = FUN_100319390(uVar2);
    FUN_10018c2b0(uVar2);
    pCVar3 = (CVmSettings *)CVmConfiguration::getVmSettings();
    CVmSettings::CVmSettings(local_180,pCVar3);
    CVmSettings::getVmTools();
    CVmTools::getGestures();
    cVar1 = CVmGestures::isEnabled();
    if (cVar1 != '\0') {
      CVmSettings::getVmTools();
      CVmTools::getGestures();
      cVar1 = CVmGestures::isOneFingerSwipe();
      if (cVar1 != '\0') {
        uVar2 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x18);
        }
        uVar2 = FUN_100319c40(uVar2);
        FUN_10032eb10(uVar2,param_2,0);
      }
    }
    CVmSettings::~CVmSettings(local_180);
  }
  return;
}

