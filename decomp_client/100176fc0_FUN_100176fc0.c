
long * FUN_100176fc0(long *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint local_5c;
  ushort local_56;
  uint local_54;
  long local_50;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = 0;
  local_50 = 0;
  lVar1 = *(long *)(param_2 + 0x80);
  if ((lVar1 != 0) && (_PrlHandle_AddRef(lVar1), local_48 != 0)) {
    _PrlHandle_Free();
  }
  local_48 = 0;
  iVar2 = _PrlSrv_GetSupportedOses(lVar1,&local_48);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  lVar1 = local_48;
  if (iVar2 == -0x7fffffec) {
    CHostHardwareInfoBase::getOsVersion();
    uVar3 = CHwOsVersion::getOsType();
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
    local_50 = 0;
    iVar2 = _PrlApi_GetSupportedOsesVersions(uVar3,param_3,&local_50);
    if (iVar2 < 0) {
      uVar4 = FUN_100dddcf0(iVar2);
      FUN_100df99c0("","prl_client_app",0,"Failed to execute SDK method \'%s\': %.8X \'%s\'",
                    "PrlApi_GetSupportedOsesVersions",iVar2,uVar4);
    }
    else {
LAB_100177100:
      local_54 = 0;
      iVar2 = _PrlOpTypeList_GetItemsCount(local_50,&local_54);
      if (-1 < iVar2) {
        if (local_54 != 0) {
          uVar7 = 0;
          do {
            local_56 = 0;
            iVar2 = _PrlOpTypeList_GetItem(local_50,uVar7,&local_56);
            if (iVar2 < 0) {
              uVar4 = FUN_100dddcf0(iVar2);
              FUN_100df99c0("","prl_client_app",0,"Failed to execute SDK method \'%s\': %.8X \'%s\'"
                            ,"PrlOpTypeList_GetItem",iVar2,uVar4);
              goto LAB_1001772ca;
            }
            local_5c = (uint)local_56;
            FUN_1000bf010(&local_40,&local_5c);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_54);
        }
        *param_1 = (long)local_40;
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 == 0) {
            QListData::detach((int)param_1);
            lVar1 = *param_1;
            lVar5 = (long)*(int *)(lVar1 + 8);
            if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != (Data *)(lVar1 + lVar5 * 8)) &&
               (lVar6 = *(int *)(lVar1 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar1 + 0xc))
               ) {
              _memcpy((void *)(lVar1 + 0x10 + lVar5 * 8),
                      local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,lVar6 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
        }
        goto LAB_1001772d8;
      }
      uVar4 = FUN_100dddcf0(iVar2);
      FUN_100df99c0("","prl_client_app",0,"Failed to execute SDK method \'%s\': %.8X \'%s\'",
                    "PrlOpTypeList_GetItemsCount",iVar2,uVar4);
    }
  }
  else if (iVar2 < 0) {
    uVar4 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",0,"Failed to execute SDK method \'%s\': %.8X \'%s\'",
                  "PrlSrv_GetSupportedOses",iVar2,uVar4);
  }
  else {
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
    local_50 = 0;
    iVar2 = _PrlOsesMatrix_GetSupportedOsesVersions(lVar1,param_3,&local_50);
    if (-1 < iVar2) goto LAB_100177100;
    uVar4 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",0,"Failed to execute SDK method \'%s\': %.8X \'%s\'",
                  "PrlOsesMatrix_GetSupportedOsesVersions",iVar2,uVar4);
  }
LAB_1001772ca:
  *param_1 = (long)PTR_shared_null_1021e15e8;
LAB_1001772d8:
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

