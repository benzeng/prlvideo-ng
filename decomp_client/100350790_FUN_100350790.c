
void FUN_100350790(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if ((*(int *)(param_1 + 0x2c) != 1) && (*(int *)(param_1 + 0x40) < 0)) {
    iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 0x30000004) {
      FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
      CVmConfiguration::getVmSettings();
      CVmSettings::getTravelOptions();
      CVmTravelOptions::getCondition();
      FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
      CVmConfiguration::getVmSettings();
      CVmSettings::getTravelOptions();
      cVar1 = CVmTravelOptions::isEnabled();
      if (cVar1 == '\0') {
        FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
        CVmConfiguration::getVmSettings();
        CVmSettings::getTravelOptions();
        cVar1 = CVmTravelOptions::isEnabled();
        if (cVar1 == '\0') {
          iVar2 = CVmTravelCondition::getEnter();
          if ((iVar2 == 1) && (*(int *)(param_1 + 0x18) == 1)) {
LAB_1003508dc:
            FUN_100350b10(param_1,(param_2 & 0xff) + 1);
            return;
          }
          iVar2 = CVmTravelCondition::getQuit();
          bVar4 = true;
          if (iVar2 != 0) {
            iVar2 = CVmTravelCondition::getQuit();
            if (iVar2 == 1) {
              bVar4 = *(int *)(param_1 + 0x18) == 1;
            }
            else {
              bVar4 = false;
            }
          }
          iVar2 = CVmTravelCondition::getEnter();
          if (iVar2 == 2) {
            iVar2 = *(int *)(param_1 + 0x1c);
            iVar3 = CVmTravelCondition::getEnterBetteryThreshold();
            if ((bool)(bVar4 & iVar2 <= iVar3)) goto LAB_1003508dc;
          }
        }
      }
      else {
        iVar2 = CVmTravelCondition::getQuit();
        if ((iVar2 == 1) && (*(int *)(param_1 + 0x18) == 2)) {
          FUN_100350950(param_1,(param_2 & 0xff) + 1);
          return;
        }
      }
    }
  }
  return;
}

