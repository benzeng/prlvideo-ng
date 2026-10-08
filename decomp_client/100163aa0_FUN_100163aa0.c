
void FUN_100163aa0(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  if (((*(long *)(param_1 + 0xa8) != 0) && (*(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) &&
     (*(long *)(param_1 + 0xb0) != 0)) {
    local_28 = *param_2;
    if (local_28 != 0) {
      _PrlHandle_AddRef();
    }
    SdkUtils::getResultHandle(&local_20,&local_28);
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
    if (local_20 != 0) {
      local_30 = 0;
      iVar1 = _PrlResult_GetParam(local_20,&local_30);
      if (iVar1 < 0) {
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to extract license handle from result handle. Error code: %.8X");
      }
      else {
        uVar2 = 0;
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0xb0);
        }
        local_38 = local_30;
        if (local_30 != 0) {
          _PrlHandle_AddRef();
        }
        FUN_100617790(uVar2,&local_38);
        if (local_38 != 0) {
          _PrlHandle_Free();
        }
      }
      if (local_30 != 0) {
        _PrlHandle_Free();
      }
      if (local_20 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  return;
}

