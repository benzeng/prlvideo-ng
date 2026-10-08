
int FUN_100d4ec80(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = _PrlVm_RefreshConfig(*param_1);
  iVar1 = FUN_100d429b0(lVar3,"update VM configuration");
  if (-1 < iVar1) {
    uVar4 = *param_1;
    if (*param_2 != 0) {
      _PrlHandle_Free();
    }
    *param_2 = 0;
    iVar2 = _PrlVm_GetConfig(uVar4,param_2);
    iVar1 = 0;
    if (iVar2 < 0) {
      uVar4 = FUN_100dddcf0(iVar2);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to get VM configuration. PrlVm_GetConfig has failed with  RC = %.8X [%s]"
                    ,iVar2,uVar4);
      iVar1 = iVar2;
    }
  }
  if (lVar3 != 0) {
    _PrlHandle_Free(lVar3);
  }
  return iVar1;
}

