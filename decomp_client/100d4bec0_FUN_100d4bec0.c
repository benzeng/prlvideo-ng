
int FUN_100d4bec0(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  long local_40;
  undefined4 local_34;
  
  local_34 = 0;
  iVar1 = _PrlVmCfg_GetSoundDevsCount(*(undefined8 *)(param_1 + 8),&local_34);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.76\t0x%x",iVar1);
  }
  else {
    iVar1 = FUN_100d47260(param_1,param_2,0xc,0);
    if (-1 < iVar1) {
      local_40 = 0;
      iVar1 = _PrlVmCfg_GetSoundDev(*(undefined8 *)(param_1 + 8),0,&local_40);
      if (iVar1 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.77\t0x%x",iVar1);
      }
      else {
        iVar1 = _PrlVmDev_SetEnabled(local_40,param_3);
        if (iVar1 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"TR00055.78:\t0x%x",iVar1);
        }
        else {
          iVar1 = _PrlVmDev_SetConnected(local_40,param_4);
          if (iVar1 < 0) {
            FUN_100df99c0("","PrlSdkUtils",0,"TR00055.79:\t0x%x",iVar1);
          }
        }
      }
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  return iVar1;
}

