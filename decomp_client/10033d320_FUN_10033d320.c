
void FUN_10033d320(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_20;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar3 = FUN_100319390(uVar4);
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  uVar4 = FUN_100319c50();
  cVar1 = FUN_100330a50(uVar4);
  if (cVar1 == '\0') {
    uVar5 = 0;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_100319c50(uVar4);
    cVar1 = FUN_100330b70(uVar4);
    if (cVar1 == '\0') goto LAB_10033d3c9;
  }
  uVar5 = 1;
  FUN_10033ca20(param_1,1);
LAB_10033d3c9:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_20,uVar4);
  iVar2 = _PrlVm_ToolsNotifyCoherenceState(local_20,uVar5);
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  if ((iVar2 < 0) && (2 < DAT_10230ffd0)) {
    uVar4 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("DUCLIENT","prl_client_app",3,
                  "Error handling VM desktop size change. Failed to call PrlVm_ToolsNotifyCoherenceState. RC = %.8X [%s]"
                  ,iVar2,uVar4);
  }
  return;
}

