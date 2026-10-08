
int FUN_100d4cdd0(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long local_30;
  undefined8 local_28;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlSdkUtils",2,"Set predefined VM profile to %d",param_2);
  }
  local_30 = 0;
  iVar1 = FUN_100d415c0(param_1,&local_30,100000);
  if (-1 < iVar1) {
    iVar2 = _PrlVmCfg_SetProfile(*(undefined8 *)(param_1 + 8),local_30,param_2);
    iVar1 = 0;
    if (iVar2 < 0) {
      _PrlDbg_PrlResultToString(iVar2,&local_28);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Error : Failed to set predefined VM profile. error 0x%X \'%s\'",iVar2,local_28)
      ;
      iVar1 = iVar2;
    }
  }
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return iVar1;
}

