
undefined1 FUN_100108890(long param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_38;
  
  CVmConfiguration::getVmSettings();
  lVar5 = CVmSettings::getVmTools();
  if (lVar5 == 0) {
    pcVar7 = "Error: Vm Tools configuration object is absent";
LAB_10010890c:
    FUN_100df99c0("SHAC","prl_client_app",0,pcVar7);
    return 0;
  }
  lVar5 = CVmTools::getVmSharedApplications();
  if (lVar5 == 0) {
    pcVar7 = "Error: current Shared Applications configuration is absent";
    goto LAB_10010890c;
  }
  cVar1 = CVmTools::isIsolatedVm();
  if (cVar1 != '\0') {
    uVar2 = 0;
    goto LAB_1001089c6;
  }
  uVar6 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar6,param_1 + 0x20);
  if (lVar5 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SHAC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1001089c0;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    iVar3 = FUN_10018f860(lVar5);
    if (iVar3 == 8) {
      uVar4 = FUN_10018f890(lVar5);
      if (uVar4 < 0x806) {
        uVar2 = 0;
      }
      else {
        uVar2 = CVmSharedApplications::isMacToWin();
      }
      goto LAB_1001089c6;
    }
  }
LAB_1001089c0:
  uVar2 = 0;
LAB_1001089c6:
  *param_3 = uVar2;
  return 1;
}

