
long * FUN_10015b140(long *param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  long local_38;
  
  local_38 = 0;
  iVar1 = _PrlSrv_CreateVm(*(undefined8 *)(param_2 + 0x80),&local_38);
  if (iVar1 == 0) {
    iVar1 = _PrlVmCfg_SetDefaultConfig(local_38,*(undefined8 *)(param_2 + 0x90),param_3,param_4);
    if (iVar1 == 0) {
      *param_1 = local_38;
      if (local_38 != 0) {
        _PrlHandle_AddRef();
      }
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"Can\'t apply default VM config. Return code: [%.8X]",
                    iVar1);
      *param_1 = 0;
    }
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Can\'t create VM handle. Return code: [%.8X]",iVar1);
    *param_1 = 0;
  }
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return param_1;
}

