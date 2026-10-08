
void FUN_10033d060(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_38;
  long local_30;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    lVar2 = FUN_100319390();
    if (lVar2 != 0) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_1003193b0(&local_30,uVar3);
      iVar1 = _PrlVm_ToolsNotifyCoherenceState(local_30,param_2 == 1);
      if (local_30 != 0) {
        _PrlHandle_Free();
      }
      if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
        uVar3 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("DUCLIENT","prl_client_app",1,
                      "PrlVm_ToolsNotifyCoherenceState call failed. RC = %.8X [%s]",iVar1,uVar3);
      }
      FUN_10033d240(param_1,param_2);
      if ((param_2 == 1) && (*(int *)(param_1 + 0x21) != 0)) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x18);
        }
        FUN_1003193b0(&local_38,uVar3);
        iVar1 = _PrlVm_ToolsWindowsShellToggleDesktop(local_38);
        if (local_38 != 0) {
          _PrlHandle_Free();
        }
        if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
          uVar3 = FUN_100dddcf0(iVar1);
          FUN_100df99c0("DUCLIENT","prl_client_app",1,
                        "PrlVm_ToolsWindowsShellToggleDesktop call error, RC = %.8X [%s]",iVar1,
                        uVar3);
        }
      }
    }
  }
  return;
}

