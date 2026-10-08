
undefined4 FUN_100615d30(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long local_28;
  long local_20;
  
  local_20 = 0;
  iVar1 = _PrlSrv_GetRestrictionInfo(*param_1,param_2,&local_20);
  if (iVar1 < 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"PrlSrv_GetRestrictionInfo failed with RC = %.8X",iVar1);
    }
    uVar2 = 0;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      uVar2 = 0;
    }
  }
  else {
    local_28 = local_20;
    if (local_20 != 0) {
      _PrlHandle_AddRef();
    }
    uVar2 = SdkUtils::getParamUIntValue(&local_28,param_3);
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
  }
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  return uVar2;
}

