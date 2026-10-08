
void FUN_1003f8f90(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  long local_30;
  long local_28;
  uint local_1c;
  
  CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  if (param_3 == 1) {
    local_1c = 0;
    uVar1 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    FUN_10018c250(&local_28,uVar1);
    iVar2 = _PrlVm_ToolsGetShutdownCapabilities(local_28,&local_1c);
    if (-1 < iVar2) {
      uVar3 = local_1c & 0x10;
      if (local_28 != 0) {
        _PrlHandle_Free();
      }
      if (uVar3 == 0) {
        return;
      }
      uVar1 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
      FUN_10018c250(&local_30,uVar1);
      _PrlVm_ToolsSendShutdown(local_30,4);
      local_28 = local_30;
    }
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

