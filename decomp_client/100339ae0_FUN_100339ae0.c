
void FUN_100339ae0(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  FUN_100338800();
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_100319390(uVar4);
    iVar3 = FUN_10018a9d0(uVar4);
    if (iVar3 == 0x30000004) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::getVmFullScreen();
      bVar1 = CVmFullScreen::isUseAllDisplays();
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::getVmFullScreen();
      bVar2 = CVmFullScreen::isUseAllDisplays();
      if ((bVar2 ^ bVar1) == 1) {
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
        }
        local_38 = 3;
        local_30 = 0;
        local_34 = 0;
        local_2c = 0xffff;
        local_28 = 0;
        local_24 = 0;
        FUN_10031bef0(uVar4,2,&local_38);
      }
      return;
    }
    pcVar5 = 
    "VM is not in running state, skipping processing change of useAllDisplaysInFullscreen option";
  }
  else {
    pcVar5 = 
    " VM Desktop Dynamic Layout Logic is BLOCKED, skipping processing change of useAllDisplaysInFullscreen option"
    ;
  }
  FUN_100df99c0("GUI_DDLL","prl_client_app",0,pcVar5);
  return;
}

