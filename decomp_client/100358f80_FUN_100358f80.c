
void FUN_100358f80(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QWidget *pQVar6;
  int *local_40;
  int *local_38;
  long *local_30;
  long *local_28;
  int local_20;
  undefined1 local_11;
  
  iVar3 = FUN_100319ae0();
  if (iVar3 != 2) {
    return;
  }
  cVar2 = MacUtils::screensHaveSeparateSpaces();
  if (cVar2 == '\0') {
    return;
  }
  uVar4 = FUN_100319390(param_1);
  FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  cVar2 = CVmFullScreen::isUseAllDisplays();
  if (cVar2 == '\0') {
    return;
  }
  uVar4 = FUN_100319390(param_1);
  FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  cVar2 = CVmFullScreen::isActivateSpacesOnClick();
  if (cVar2 == '\0') {
    return;
  }
  uVar4 = FUN_100319950(param_1);
  FUN_1003591b0(&local_40,uVar4);
  FUN_100359780(&local_38,&local_40);
  local_30 = (long *)(local_38 + (long)local_38[2] * 2 + 4);
  local_28 = (long *)(local_38 + (long)local_38[3] * 2 + 4);
  local_20 = 1;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
LAB_100359080:
      FUN_100359550(&local_40,local_40);
    }
    else {
      LOCK();
      *local_40 = *local_40 + -1;
      local_11 = *local_40 != 0;
      UNLOCK();
      if (!(bool)local_11) goto LAB_100359080;
    }
    if (local_20 == 0) goto LAB_10035913e;
  }
  for (; local_30 != local_28; local_30 = local_30 + 1) {
    lVar1 = *(long *)*local_30;
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
        (lVar1 = ((long *)*local_30)[1], lVar1 != 0)) &&
       ((iVar3 = FUN_100325aa0(lVar1), iVar3 == 2 && (lVar5 = FUN_100326190(lVar1), lVar5 != 0)))) {
      pQVar6 = (QWidget *)FUN_100326190(lVar1);
      cVar2 = MacUtils::isOnActiveWorkspace(pQVar6);
      if (cVar2 == '\0') {
        FUN_100325fe0(lVar1);
      }
    }
    local_20 = 1;
  }
LAB_10035913e:
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      if (*local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    FUN_100359550(&local_38,local_38);
  }
  return;
}

