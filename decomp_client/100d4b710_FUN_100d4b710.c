
int FUN_100d4b710(long param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 local_858;
  undefined4 local_854;
  long local_850;
  undefined4 local_844;
  long local_840;
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_840 = 0;
  local_844 = 0;
  iVar2 = _PrlSrvCfg_GetFloppyDisksCount(*param_2,&local_844);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.58:\t0x%x",iVar2);
  }
  else {
    local_850 = 0;
    iVar2 = _PrlSrvCfg_GetFloppyDisk(*param_2,param_3,&local_850);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.59:\t0x%x",iVar2);
    }
    else {
      local_854 = 0x400;
      iVar2 = _PrlSrvCfgDev_GetName(local_850,local_438,&local_854);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.60:\t0x%x",iVar2);
      }
      else {
        local_858 = 0x400;
        iVar2 = _PrlSrvCfgDev_GetId(local_850,local_838,&local_858);
        if (iVar2 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"TR00055.61:\t0x%x",iVar2);
        }
        else {
          uVar1 = *(undefined8 *)(param_1 + 8);
          if (local_840 != 0) {
            _PrlHandle_Free();
          }
          local_840 = 0;
          iVar2 = _PrlVmCfg_CreateVmDev(uVar1,3,&local_840);
          if (iVar2 < 0) {
            FUN_100df99c0("","PrlSdkUtils",0,"TR00055.62:\t0x%x",iVar2);
          }
          else {
            iVar2 = _PrlVmDev_SetEmulatedType(local_840,0);
            if (iVar2 < 0) {
              FUN_100df99c0("","PrlSdkUtils",0,"TR00055.63:\t0x%x",iVar2);
            }
            else {
              iVar2 = _PrlVmDev_SetSysName(local_840,local_838);
              if (iVar2 < 0) {
                FUN_100df99c0("","PrlSdkUtils",0,"TR00055.64:\t0x%x",iVar2);
              }
              else {
                iVar2 = _PrlVmDev_SetFriendlyName(local_840,local_438);
                if (iVar2 < 0) {
                  FUN_100df99c0("","PrlSdkUtils",0,"TR00055.65:\t0x%x",iVar2);
                }
                else {
                  iVar2 = _PrlVmDev_SetEnabled(local_840,param_4);
                  if (iVar2 < 0) {
                    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.66:\t0x%x",iVar2);
                  }
                  else {
                    iVar2 = _PrlVmDev_SetConnected(local_840,param_5);
                    if (iVar2 < 0) {
                      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.67:\t0x%x",iVar2);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (local_850 != 0) {
      _PrlHandle_Free();
    }
  }
  if (local_840 != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

