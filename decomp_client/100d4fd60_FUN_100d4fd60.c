
int FUN_100d4fd60(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = _PrlVmDev_SetEmulatedType(*param_1,*(undefined4 *)(param_2 + 0x2004));
  if (iVar1 < 0) {
    uVar2 = FUN_100dddcf0(iVar1);
    pcVar3 = 
    "Failed to set Serial port emulation type PrlVmDev_SetEmulatedType has failed with  RC = %.8X [%s]"
    ;
  }
  else {
    iVar1 = _PrlVmDev_SetSysName(*param_1,param_2 + 1);
    if (iVar1 < 0) {
      uVar2 = FUN_100dddcf0(iVar1);
      pcVar3 = 
      "Failed to set Serial port output file sys name PrlVmDev_SetSysName has failed with  RC = %.8X [%s]"
      ;
    }
    else {
      iVar1 = _PrlVmDev_SetFriendlyName(*param_1,param_2 + 0x1001);
      if (-1 < iVar1) {
        iVar1 = _PrlVmDev_SetEnabled(*param_1,*(undefined4 *)(param_2 + 0x2008));
        if (-1 < iVar1) {
          return 0;
        }
        uVar2 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to enable Serial port PrlVmDev_SetEnabled has failed with  RC = %.8X [%s]"
                      ,iVar1,uVar2);
        return iVar1;
      }
      uVar2 = FUN_100dddcf0(iVar1);
      pcVar3 = 
      "Failed to set Serial port output file friendly name PrlVmDev_SetFriendlyName has failed with  RC = %.8X [%s]"
      ;
    }
  }
  FUN_100df99c0("","PrlSdkUtils",0,pcVar3,iVar1,uVar2);
  return iVar1;
}

