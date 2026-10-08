
int FUN_100d43b30(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  QArrayData *local_70;
  long local_68;
  QArrayData *local_60;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  iVar3 = _PrlVmDevNet_SetAutoApply(*param_1,1);
  if (iVar3 < 0) {
    pcVar5 = "Failed to set auto configuration PrlVmDevNet_SetAutoApply has failed with  RC = %.8X";
LAB_100d43e3e:
    FUN_100df99c0("","PrlSdkUtils",0,pcVar5,iVar3);
    return iVar3;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    iVar3 = _PrlVmDevNet_SetConfigureWithDhcp(*param_1,1);
    if (-1 < iVar3) {
      return iVar3;
    }
    pcVar5 = 
    "Failed to set dncp configuration PrlVmDevNet_SetConfigureWithDhcp has failed with  RC = %.8X";
    goto LAB_100d43e3e;
  }
  local_40 = 0;
  iVar3 = _PrlApi_CreateStringsList(&local_40);
  lVar2 = local_40;
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to create list of strings PrlApi_CreateStringsList has failed with  RC = %.8X"
                  ,iVar3);
    goto LAB_100d43ed9;
  }
  QString::toUtf8();
  iVar3 = _PrlStrList_AddItem(lVar2,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d43be2;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100d43be2:
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to add ip to list PrlStrList_AddItem has failed with  RC = %.8X",iVar3);
    goto LAB_100d43ed9;
  }
  iVar3 = _PrlVmDevNet_SetNetAddresses(*param_1,local_40);
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to set ip addresses PrlVmDevNet_SetNetAddresses has failed with  RC = %.8X"
                  ,iVar3);
    goto LAB_100d43ed9;
  }
  if (*(int *)(*param_3 + 4) != 0) {
    uVar1 = *param_1;
    QString::toUtf8();
    iVar3 = _PrlVmDevNet_SetDefaultGateway(uVar1,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d43c5b;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100d43c5b:
    if (iVar3 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to set gateway PrlVmDevNet_SetDefaultGateway has failed with  RC = %.8X"
                    ,iVar3);
      goto LAB_100d43ed9;
    }
  }
  if (*(int *)(*param_4 + 4) != 0) {
    local_58 = 0;
    _PrlApi_CreateStringsList(&local_58);
    lVar2 = local_58;
    QString::toUtf8();
    _PrlStrList_AddItem(lVar2,local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d43cd2;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100d43cd2:
    iVar3 = _PrlVmDevNet_SetDnsServers(*param_1,local_58);
    if (iVar3 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to set dns server PrlVmDevNet_SetDnsServers has failed with  RC = %.8X",
                    iVar3);
    }
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
    if (iVar3 < 0) goto LAB_100d43ed9;
  }
  iVar4 = iVar3;
  if (*(int *)(*param_5 + 4) != 0) {
    local_68 = 0;
    _PrlApi_CreateStringsList(&local_68);
    lVar2 = local_68;
    QString::toUtf8();
    _PrlStrList_AddItem(lVar2,local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d43d9b;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_100d43d9b:
    iVar4 = _PrlVmDevNet_SetSearchDomains(*param_1,local_68);
    if (iVar4 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to set search domain PrlVmDevNet_SetSearchDomains has failed with  RC = %.8X"
                    ,iVar4);
      iVar3 = iVar4;
    }
    if (local_68 != 0) {
      _PrlHandle_Free();
    }
    if (iVar4 < 0) goto LAB_100d43ed9;
  }
  iVar3 = iVar4;
LAB_100d43ed9:
  if (local_40 == 0) {
    return iVar3;
  }
  _PrlHandle_Free();
  return iVar3;
}

