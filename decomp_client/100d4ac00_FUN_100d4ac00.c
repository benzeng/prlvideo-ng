
int FUN_100d4ac00(long param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_70 = 0;
  iVar1 = _PrlVmCfg_CreateBootDev(*(undefined8 *)(param_1 + 8),&local_70);
  if (iVar1 < 0) {
    _PrlDbg_PrlResultToString(iVar1,&local_68);
    FUN_100df99c0("","PrlSdkUtils",0,"PrlVmCfg_CreateBootDev error 0x%X \'%s\'",iVar1,local_68);
  }
  else {
    local_74 = 0;
    iVar1 = _PrlVmDev_GetType(*param_2,&local_74);
    if (iVar1 < 0) {
      _PrlDbg_PrlResultToString(iVar1,&local_60);
      FUN_100df99c0("","PrlSdkUtils",0,"PrlVmDev_GetType error 0x%X \'%s\'",iVar1,local_60);
    }
    else {
      iVar1 = _PrlBootDev_SetType(local_70,local_74);
      if (iVar1 < 0) {
        _PrlDbg_PrlResultToString(iVar1,&local_58);
        FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetType error 0x%X \'%s\'",iVar1,local_58);
      }
      else {
        local_78 = 0;
        iVar1 = _PrlVmDev_GetIndex(*param_2,&local_78);
        if (iVar1 < 0) {
          _PrlDbg_PrlResultToString(iVar1,&local_48);
          FUN_100df99c0("","PrlSdkUtils",0,"PrlVmDev_GetIndex error 0x%X \'%s\'",iVar1,local_48);
        }
        else {
          iVar1 = _PrlBootDev_SetIndex(local_70,local_78);
          if (iVar1 < 0) {
            _PrlDbg_PrlResultToString(iVar1,&local_38);
            FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetIndex error 0x%X \'%s\'",iVar1,local_38)
            ;
          }
          else {
            iVar1 = _PrlBootDev_SetSequenceIndex(local_70,param_3);
            if (iVar1 < 0) {
              _PrlDbg_PrlResultToString(iVar1,&local_40);
              FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetSequenceIndex error 0x%X \'%s\'",iVar1
                            ,local_40);
            }
            else {
              iVar1 = _PrlBootDev_SetInUse(local_70,1);
              if (iVar1 < 0) {
                _PrlDbg_PrlResultToString(iVar1,&local_50);
                FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetInUse error 0x%X \'%s\'",iVar1,
                              local_50);
              }
              else {
                iVar1 = 0;
                if ((param_4 != (long *)0x0) && (&local_70 != param_4)) {
                  if (*param_4 != 0) {
                    _PrlHandle_Free();
                  }
                  *param_4 = local_70;
                  if (local_70 != 0) {
                    _PrlHandle_AddRef();
                    iVar1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_70 != 0) {
    _PrlHandle_Free();
  }
  return iVar1;
}

