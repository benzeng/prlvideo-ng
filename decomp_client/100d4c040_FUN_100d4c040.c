
int FUN_100d4c040(long param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  long local_38;
  undefined4 local_2c;
  
  local_2c = 0;
  iVar1 = _PrlVmCfg_GetUsbDevicesCount(*(undefined8 *)(param_1 + 8),&local_2c);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.80\t0x%x",iVar1);
  }
  else {
    iVar1 = FUN_100d47260(param_1,param_2,0xf,0);
    if (-1 < iVar1) {
      local_38 = 0;
      iVar1 = _PrlVmCfg_GetUsbDevice(*(undefined8 *)(param_1 + 8),0,&local_38);
      if (iVar1 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.81\t0x%x",iVar1);
      }
      else {
        iVar1 = _PrlVmDev_SetEnabled(local_38,param_3);
        if (iVar1 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"TR00055.82:\t0x%x",iVar1);
        }
      }
      if (local_38 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  return iVar1;
}

