
undefined8 * FUN_100d479b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  iVar3 = _PrlSrv_Create(&local_30);
  lVar2 = local_30;
  if (iVar3 < 0) {
    _PrlDbg_PrlResultToString(iVar3,&local_28);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Error : Failed to create Srv handle object with code 0x%X: \'%s\'",iVar3,local_28
                 );
    *param_1 = 0;
  }
  else {
    local_40 = local_30;
    if (local_30 != 0) {
      _PrlHandle_AddRef(local_30);
    }
    FUN_100d47480(&local_38,&local_40,param_2);
    uVar1 = local_38;
    local_38 = 0;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
  }
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return param_1;
}

