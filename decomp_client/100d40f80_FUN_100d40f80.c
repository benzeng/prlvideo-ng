
int FUN_100d40f80(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long local_38;
  int local_2c;
  long local_28;
  
  local_28 = 0;
  iVar1 = _PrlJob_GetResult(*param_1,&local_28);
  if (-1 < iVar1) {
    iVar1 = _PrlResult_GetParamsCount(local_28,&local_2c);
    if ((-1 < iVar1) && (local_2c != 0)) {
      local_38 = 0;
      iVar1 = _PrlResult_GetParamByIndex(local_28,0,&local_38);
      if ((&local_38 != param_2) && (-1 < iVar1)) {
        if (*param_2 != 0) {
          _PrlHandle_Free();
        }
        *param_2 = local_38;
        if (local_38 != 0) {
          _PrlHandle_AddRef();
        }
      }
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return iVar1;
}

