
int FUN_100d4c170(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long local_68;
  long local_60;
  long local_58;
  undefined8 *local_50;
  long local_48;
  undefined *local_40;
  uint local_34;
  
  local_34 = 0;
  iVar3 = _PrlVmCfg_GetBootDevCount(*(undefined8 *)(param_1 + 8),&local_34);
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the boot devices count, 0x%x",iVar3);
  }
  else {
    local_40 = PTR_shared_null_1021e15e8;
    if (local_34 != 0) {
      uVar5 = 0;
      do {
        local_48 = 0;
        iVar4 = _PrlVmCfg_GetBootDev(*(undefined8 *)(param_1 + 8),uVar5,&local_48);
        if (iVar4 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the boot device by index, 0x%x",iVar4);
          iVar3 = iVar4;
        }
        else {
          FUN_10014a450(&local_40,&local_48);
        }
        if (local_48 != 0) {
          _PrlHandle_Free();
        }
        if (iVar4 < 0) goto LAB_100d4c5db;
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_34);
    }
    FUN_10014a970(&local_58,&local_40);
    local_50 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 8) * 8);
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        puVar1 = local_50 + 1;
        lVar2 = *(long *)*local_50;
        local_50 = puVar1;
        if (lVar2 != 0) {
          _PrlHandle_AddRef(lVar2);
        }
        iVar4 = _PrlBootDev_Remove(lVar2);
        if (iVar4 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to remove the boot device from list, 0x%x",iVar4)
          ;
          iVar3 = iVar4;
        }
        if (lVar2 != 0) {
          _PrlHandle_Free(lVar2);
        }
        if (iVar4 < 0) goto LAB_100d4c5d2;
      } while (local_50 != (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 0xc) * 8));
    }
    local_60 = 0;
    iVar3 = _PrlVmCfg_CreateBootDev(*(undefined8 *)(param_1 + 8),&local_60);
    if (iVar3 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to create the hdd boot device, 0x%x",iVar3);
    }
    else {
      iVar3 = _PrlBootDev_SetType(local_60,6);
      if (iVar3 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the hdd boot device type, 0x%x",iVar3);
      }
      else {
        iVar3 = _PrlBootDev_SetIndex(local_60,0);
        if (iVar3 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the hdd boot device index, 0x%x",iVar3);
        }
        else {
          iVar3 = _PrlBootDev_SetSequenceIndex(local_60,0);
          if (iVar3 < 0) {
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to set the hdd boot device sequence index, 0x%x",iVar3);
          }
          else {
            iVar3 = _PrlBootDev_SetInUse(local_60,1);
            if (iVar3 < 0) {
              FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the hdd boot device used, 0x%x",iVar3)
              ;
            }
            else {
              local_68 = 0;
              iVar3 = _PrlVmCfg_CreateBootDev(*(undefined8 *)(param_1 + 8),&local_68);
              if (iVar3 < 0) {
                FUN_100df99c0("","PrlSdkUtils",0,"Failed to create the optical boot device, 0x%x",
                              iVar3);
              }
              else {
                iVar3 = _PrlBootDev_SetType(local_68,5);
                if (iVar3 < 0) {
                  FUN_100df99c0("","PrlSdkUtils",0,
                                "Failed to set the optical boot device type, 0x%x",iVar3);
                }
                else {
                  iVar3 = _PrlBootDev_SetIndex(local_68,0);
                  if (iVar3 < 0) {
                    FUN_100df99c0("","PrlSdkUtils",0,
                                  "Failed to set the optical boot device index, 0x%x",iVar3);
                  }
                  else {
                    iVar3 = _PrlBootDev_SetSequenceIndex(local_68,1);
                    if (iVar3 < 0) {
                      FUN_100df99c0("","PrlSdkUtils",0,
                                    "Failed to set the optical boot device sequence index, 0x%x",
                                    iVar3);
                    }
                    else {
                      iVar4 = _PrlBootDev_SetInUse(local_68,1);
                      iVar3 = 0;
                      if (iVar4 < 0) {
                        FUN_100df99c0("","PrlSdkUtils",0,
                                      "Failed to set the optical boot device used, 0x%x",iVar4);
                        iVar3 = iVar4;
                      }
                    }
                  }
                }
              }
              if (local_68 != 0) {
                _PrlHandle_Free();
              }
            }
          }
        }
      }
    }
    if (local_60 != 0) {
      _PrlHandle_Free();
    }
LAB_100d4c5d2:
    FUN_10014a540(&local_58);
LAB_100d4c5db:
    FUN_10014a540(&local_40);
  }
  return iVar3;
}

