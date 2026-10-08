
ulong FUN_100d466a0(long param_1,long *param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  long local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_8c = 0;
  lVar1 = *(long *)(*param_2 + 8);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  uVar2 = _PrlVmCfg_GetBootDevCount(lVar1,&local_8c);
  uVar4 = (ulong)uVar2;
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if ((int)uVar2 < 0) {
    _PrlDbg_PrlResultToString(uVar2,&local_88);
    FUN_100df99c0("","PrlSdkUtils",0,"PrlVmCfg_GetBootDevCount error 0x%X \'%s\'",uVar2,local_88);
  }
  else {
    uVar4 = 0;
    if (local_8c != 0) {
      uVar2 = 0;
      piVar7 = param_3;
      do {
        local_98 = 0;
        lVar1 = *(long *)(*param_2 + 8);
        if ((lVar1 != 0) && (_PrlHandle_AddRef(lVar1), local_98 != 0)) {
          _PrlHandle_Free();
        }
        local_98 = 0;
        uVar3 = _PrlVmCfg_GetBootDev(lVar1,uVar2,&local_98);
        if (lVar1 != 0) {
          _PrlHandle_Free(lVar1);
        }
        if ((int)uVar3 < 0) {
          _PrlDbg_PrlResultToString(uVar3,&local_78);
          iVar5 = 1;
          FUN_100df99c0("","PrlSdkUtils",0,"PrlVmCfg_GetBootDev error 0x%X \'%s\'",uVar3,local_78);
          piVar6 = (int *)(ulong)uVar3;
        }
        else {
          local_9c = 0;
          uVar3 = _PrlBootDev_GetType(local_98,&local_9c);
          if ((int)uVar3 < 0) {
            _PrlDbg_PrlResultToString(uVar3,&local_68);
            iVar5 = 1;
            FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_GetType error 0x%X \'%s\'",uVar3,local_68);
            piVar6 = (int *)(ulong)uVar3;
          }
          else if ((param_3 == (int *)0x0) || (iVar5 = 6, piVar6 = piVar7, *param_3 == local_9c)) {
            local_a0 = 0;
            uVar3 = _PrlBootDev_GetIndex(local_98,&local_a0);
            if ((int)uVar3 < 0) {
              _PrlDbg_PrlResultToString(uVar3,&local_58);
              iVar5 = 1;
              FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_GetIndex error 0x%X \'%s\'",uVar3,
                            local_58);
              piVar6 = (int *)(ulong)uVar3;
            }
            else {
              local_a4 = 0;
              uVar3 = _PrlBootDev_GetSequenceIndex(local_98,&local_a4);
              if ((int)uVar3 < 0) {
                _PrlDbg_PrlResultToString(uVar3,&local_48);
                iVar5 = 1;
                FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_GetSequenceIndex error 0x%X \'%s\'",
                              uVar3,local_48);
                piVar6 = (int *)(ulong)uVar3;
              }
              else {
                local_a8 = 0;
                uVar3 = _PrlBootDev_IsInUse(local_98,&local_a8);
                if ((int)uVar3 < 0) {
                  _PrlDbg_PrlResultToString(uVar3,&local_40);
                  iVar5 = 1;
                  FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_IsInUse error 0x%X \'%s\'",uVar3,
                                local_40);
                  piVar6 = (int *)(ulong)uVar3;
                }
                else {
                  local_b0 = 0;
                  uVar3 = _PrlVmCfg_CreateBootDev(*(undefined8 *)(param_1 + 8),&local_b0);
                  piVar6 = (int *)(ulong)uVar3;
                  if ((int)uVar3 < 0) {
                    _PrlDbg_PrlResultToString(piVar6,&local_38);
                    iVar5 = 1;
                    FUN_100df99c0("","PrlSdkUtils",0,"PrlVmCfg_CreateBootDev error 0x%X \'%s\'",
                                  uVar3,local_38);
                  }
                  else {
                    uVar3 = _PrlBootDev_SetType(local_b0,local_9c);
                    piVar6 = (int *)(ulong)uVar3;
                    if ((int)uVar3 < 0) {
                      _PrlDbg_PrlResultToString(piVar6,&local_50);
                      iVar5 = 1;
                      FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetType error 0x%X \'%s\'",uVar3,
                                    local_50);
                    }
                    else {
                      uVar3 = _PrlBootDev_SetIndex(local_b0,local_a0);
                      piVar6 = (int *)(ulong)uVar3;
                      if ((int)uVar3 < 0) {
                        _PrlDbg_PrlResultToString(piVar6,&local_60);
                        iVar5 = 1;
                        FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetIndex error 0x%X \'%s\'",
                                      uVar3,local_60);
                      }
                      else {
                        uVar3 = _PrlBootDev_SetSequenceIndex(local_b0,local_a4);
                        piVar6 = (int *)(ulong)uVar3;
                        if ((int)uVar3 < 0) {
                          _PrlDbg_PrlResultToString(piVar6,&local_70);
                          iVar5 = 1;
                          FUN_100df99c0("","PrlSdkUtils",0,
                                        "PrlBootDev_SetSequenceIndex error 0x%X \'%s\'",uVar3,
                                        local_70);
                        }
                        else {
                          uVar3 = _PrlBootDev_SetInUse(local_b0,local_a8);
                          iVar5 = 0;
                          piVar6 = (int *)((ulong)piVar7 & 0xffffffff);
                          if ((int)uVar3 < 0) {
                            _PrlDbg_PrlResultToString(uVar3,&local_80);
                            iVar5 = 1;
                            FUN_100df99c0("","PrlSdkUtils",0,"PrlBootDev_SetInUse error 0x%X \'%s\'"
                                          ,uVar3,local_80);
                            piVar6 = (int *)(ulong)uVar3;
                          }
                        }
                      }
                    }
                  }
                  if (local_b0 != 0) {
                    _PrlHandle_Free();
                  }
                }
              }
            }
          }
        }
        if (local_98 != 0) {
          _PrlHandle_Free();
        }
        if (iVar5 == 1) {
          return (ulong)piVar6 & 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        uVar4 = 0;
        piVar7 = piVar6;
      } while (uVar2 < local_8c);
    }
  }
  return uVar4;
}

