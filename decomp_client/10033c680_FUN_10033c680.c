
void FUN_10033c680(long param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long local_48;
  long local_40;
  long local_38;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    if (0 < DAT_10230ffd0) {
      pcVar8 = "(!)Error: processing desktop utilities start, VM desktop object does not exist.";
LAB_10033c7cd:
      FUN_100df99c0("DUCLIENT","prl_client_app",1,pcVar8);
      return;
    }
  }
  else {
    lVar6 = FUN_100319390();
    if (lVar6 == 0) {
      if (0 < DAT_10230ffd0) {
        pcVar8 = "(!)Error: processing desktop utilities start, VM object does not exist.";
        goto LAB_10033c7cd;
      }
    }
    else {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar7 = FUN_100319c50(uVar7);
      cVar1 = FUN_100330a50(uVar7);
      cVar2 = '\x01';
      if (cVar1 == '\0') {
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x18);
        }
        uVar7 = FUN_100319c50(uVar7);
        cVar2 = FUN_100330b70(uVar7);
      }
      FUN_10018c2b0(lVar6);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      lVar6 = CVmTools::getVmCoherence();
      if (lVar6 == 0) {
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = CVmCoherence::isShowTaskBarInCoherence();
        uVar4 = CVmCoherence::isShowTaskBar();
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x18);
        }
        if (cVar2 == '\0') {
          FUN_1003193b0(&local_40,uVar7);
          iVar5 = _PrlVm_ToolsSetTaskBarVisibility(local_40,uVar4);
          local_38 = local_40;
        }
        else {
          FUN_1003193b0(&local_38,uVar7);
          iVar5 = _PrlVm_ToolsSetTaskBarVisibility(local_38,uVar3);
        }
        if (local_38 != 0) {
          _PrlHandle_Free();
        }
        if ((iVar5 < 0) && (0 < DAT_10230ffd0)) {
          uVar7 = FUN_100dddcf0(iVar5);
          FUN_100df99c0("DUCLIENT","prl_client_app",1,
                        "PrlVm_ToolsSetTaskBarVisibility call error, RC = %.8X [%s]",iVar5,uVar7);
        }
      }
      FUN_10033ca20(param_1,cVar2);
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_1003193b0(&local_48,uVar7);
      iVar5 = _PrlVm_ToolsNotifyCoherenceState(local_48,cVar2);
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if ((iVar5 < 0) && (0 < DAT_10230ffd0)) {
        uVar7 = FUN_100dddcf0(iVar5);
        FUN_100df99c0("DUCLIENT","prl_client_app",1,
                      "PrlVm_ToolsNotifyCoherenceState call error, RC = %.8X [%s]",iVar5,uVar7);
      }
      FUN_10082f060(param_1);
      FUN_10082f0a0(param_1,uVar4,uVar3);
    }
  }
  return;
}

