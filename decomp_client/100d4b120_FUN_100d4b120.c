
uint FUN_100d4b120(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_34 = 0xffff;
  uVar1 = _PrlVmCfg_GetOsVersion(*(undefined8 *)(param_1 + 8),&local_34);
  if ((int)uVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the guest OS version, 0x%x",uVar1);
  }
  else {
    local_38 = 0;
    uVar1 = _PrlVmCfg_GetDefaultMemSize(local_34,param_2,&local_38);
    if ((int)uVar1 < 0) {
      _PrlDbg_PrlResultToString(uVar1,&local_30);
      FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to get default mem size. error 0x%X \'%s\'",
                    uVar1,local_30);
    }
    else {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","PrlSdkUtils",2,
                      "Setting RAM size to default value %u, for guest OS 0x%X, host RAM size %u.",
                      local_38,local_34,param_2);
      }
      uVar1 = FUN_100d4c680(param_1,local_38,param_3);
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return uVar1;
}

