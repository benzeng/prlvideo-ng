
void FUN_100353170(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long local_28;
  uint local_1c;
  
  local_1c = 0;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_28,uVar3);
  iVar1 = _PrlVm_ToolsGetShutdownCapabilities(local_28,&local_1c);
  if (iVar1 < 0) {
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
  }
  else {
    uVar2 = local_1c & 0x10;
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
    if (uVar2 == 0) {
      FUN_100352ff0(param_1);
    }
  }
  return;
}

