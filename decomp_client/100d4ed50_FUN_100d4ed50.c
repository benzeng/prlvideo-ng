
int FUN_100d4ed50(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  int local_2c;
  
  local_2c = 0;
  iVar2 = _PrlVmCfg_GetOpticalDisksCount(*param_1,&local_2c);
  if (iVar2 < 0) {
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get count of CD-ROM PrlVmCfg_GetOpticalDisksCount has failed with  RC = %.8X [%s]"
                  ,iVar2,uVar3);
    return iVar2;
  }
  FUN_100df99c0("","PrlSdkUtils",0," CD-ROM count %d",local_2c);
  if (local_2c == 0) {
    if (*(int *)(*param_2 + 4) == 0) {
      return 0;
    }
    local_38 = 0;
    iVar2 = _PrlVmCfg_CreateVmDev(*param_1,5,&local_38);
    if (iVar2 < 0) {
      uVar3 = FUN_100dddcf0(iVar2);
      bVar1 = false;
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to create the optical disk device configuration PrlVmCfg_CreateVmDev has failed with  RC = %.8X [%s]"
                    ,iVar2,uVar3);
    }
    else {
      iVar2 = _PrlVmDev_SetIfaceType(local_38,0);
      if (iVar2 < 0) {
        uVar3 = FUN_100dddcf0(iVar2);
        bVar1 = false;
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to set the optical device iface type PrlVmDev_SetIfaceType has failed with  RC = %.8X [%s]"
                      ,iVar2,uVar3);
      }
      else {
        bVar1 = true;
      }
    }
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    if (!bVar1) {
      return iVar2;
    }
  }
  local_40 = 0;
  iVar2 = _PrlVmCfg_GetOpticalDisk(*param_1,0,&local_40);
  if (iVar2 < 0) {
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get CD-ROM PrlVmCfg_GetOpticalDisk has failed with  RC = %.8X [%s]",
                  iVar2,uVar3);
  }
  else {
    if (*(int *)(*param_2 + 4) == 0) {
      iVar2 = _PrlVmDev_SetConnected(local_40,0);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to set connected the optical disk devicePrlVmDev_SetConnected has failed with  RC = %.8X"
                      ,iVar2);
        goto LAB_100d4ef3e;
      }
    }
    else {
      iVar2 = FUN_100d42ef0(&local_40,param_2);
      if (iVar2 < 0) goto LAB_100d4ef3e;
    }
    iVar2 = 0;
  }
LAB_100d4ef3e:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

