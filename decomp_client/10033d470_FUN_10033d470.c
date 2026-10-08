
void FUN_10033d470(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long local_20;
  
  if (param_3 == 1) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193b0(&local_20,uVar4);
    lVar1 = local_20;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_100319c50(uVar4);
    cVar2 = FUN_100330a50(uVar4);
    uVar3 = 1;
    if (cVar2 == '\0') {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar4 = FUN_100319c50(uVar4);
      uVar3 = FUN_100330b70(uVar4);
    }
    _PrlVm_ToolsNotifyCoherenceState(lVar1,uVar3);
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

