
int FUN_100d44030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  long local_48;
  int local_3c;
  long local_38;
  
  local_38 = 0;
  iVar1 = _PrlVm_GetConfig(*param_1,&local_38);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get VM configuration. PrlVm_GetConfig has failed with  RC = %.8X",iVar1
                 );
  }
  else {
    local_3c = 0;
    iVar1 = _PrlVmCfg_GetNetAdaptersCount(local_38,&local_3c);
    if (iVar1 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to get count of network adapters PrlVmCfg_GetNetAdaptersCount has failed with  RC = %.8X"
                    ,iVar1);
    }
    else if (local_3c == 0) {
      iVar1 = -0x7ffffb7b;
      FUN_100df99c0("","PrlSdkUtils",0,"Not found network adapters available for reconfiguration");
    }
    else {
      local_48 = 0;
      iVar1 = _PrlVmCfg_GetNetAdapter(local_38,0,&local_48);
      if (iVar1 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to get Network Adapter PrlVmCfg_GetNetAdapter has failed with  RC = %.8X"
                      ,iVar1);
      }
      else {
        iVar1 = FUN_100d43b30(&local_48,param_2,param_3,param_4,param_5);
        if (iVar1 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to configure Network Adapter");
        }
        else {
          local_50 = 0;
          iVar1 = _PrlVm_ToString(local_38,&local_50);
          if (iVar1 < 0) {
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to generate config PrlVm_ToString has failed with  RC = %.8X",
                          iVar1);
          }
          else {
            lVar2 = _PrlVm_BeginEdit(*param_1);
            iVar1 = _PrlJob_Wait(lVar2,100000);
            if (iVar1 < 0) {
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Failed to edit VM configuration. PrlVm_BeginEdit has failed with  RC = %.8X"
                            ,iVar1);
            }
            else {
              iVar1 = _PrlVm_FromString(*param_1,local_50);
              if (iVar1 < 0) {
                FUN_100df99c0("","PrlSdkUtils",0,
                              "Failed to set config PrlVm_FromString has failed with  RC = %.8X",
                              iVar1);
              }
              else {
                lVar3 = _PrlVm_Commit(*param_1);
                if (lVar2 != 0) {
                  _PrlHandle_Free(lVar2);
                }
                iVar1 = FUN_100d431e0(lVar3,"commit VM",100000);
                lVar2 = lVar3;
                if (-1 < iVar1) {
                  iVar1 = 0;
                  _PrlBuffer_Free(local_50);
                }
              }
            }
            if (lVar2 != 0) {
              _PrlHandle_Free(lVar2);
            }
          }
        }
      }
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return iVar1;
}

