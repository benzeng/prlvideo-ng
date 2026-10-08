
undefined8 FUN_1002d1100(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  uint local_1c;
  
  local_1c = 0;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c250(&local_28,uVar3);
  iVar1 = _PrlVm_ToolsGetShutdownCapabilities(local_28,&local_1c);
  if (-1 < iVar1) {
    uVar2 = local_1c & 0x10;
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
    if (uVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018c250(&local_30,uVar3);
    _PrlVm_ToolsSendShutdown(local_30,4);
    local_28 = local_30;
  }
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return 0;
}

