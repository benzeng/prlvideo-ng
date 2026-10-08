
int FUN_100d47260(long param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long local_28;
  
  local_28 = 0;
  iVar1 = _PrlVmCfg_AddDefaultDeviceEx(*(undefined8 *)(param_1 + 8),*param_2,param_3,&local_28);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.75:\t0x%x",iVar1);
  }
  if ((param_4 != (long *)0x0) && (&local_28 != param_4)) {
    if (*param_4 != 0) {
      _PrlHandle_Free();
    }
    *param_4 = local_28;
    if (local_28 != 0) {
      _PrlHandle_AddRef();
    }
  }
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return iVar1;
}

