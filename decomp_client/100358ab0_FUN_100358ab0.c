
ulong FUN_100358ab0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  QArrayData *local_30;
  char local_23;
  undefined1 local_22;
  
  if (param_1 != 0) {
    FUN_10018c2b0(param_1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmStartupOptions();
    iVar1 = CVmStartupOptionsBase::getWindowMode();
    if (iVar1 == 0) {
      uVar5 = FUN_100370280();
      FUN_100188480(&local_30,param_1);
      uVar3 = FUN_100375450(uVar5,&local_30,&local_23);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) goto LAB_100358b86;
          local_22 = 0;
        }
        QArrayData::deallocate(local_30,2,8);
      }
LAB_100358b86:
      if (local_23 == '\0') {
        return 0;
      }
      return (ulong)uVar3;
    }
    if (iVar1 - 1U < 4) {
      FUN_10018c2b0(param_1);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmStartupOptions();
      uVar2 = CVmStartupOptionsBase::getWindowMode();
      uVar4 = EnumUtils::pwmToConsoleWindowMode(uVar2);
      return uVar4;
    }
  }
  return 0;
}

