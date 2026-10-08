
int FUN_100d47c70(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,long *param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_48 = 0;
  iVar2 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 8),6,&local_48);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.13:\t0x%x",iVar2);
    goto LAB_100d4804a;
  }
  iVar2 = _PrlVmDev_SetEmulatedType(local_48,1);
  lVar1 = local_48;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.14:\t0x%x",iVar2);
    goto LAB_100d4804a;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmDev_SetSysName(lVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_39 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100d47d45;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100d47d45:
  lVar1 = local_48;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.15:\t0x%x",iVar2);
    goto LAB_100d4804a;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmDev_SetFriendlyName(lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_39 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100d47dc5;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100d47dc5:
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.16:\t0x%x",iVar2);
  }
  else {
    iVar2 = _PrlVmDev_SetIfaceType(local_48,param_3);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.17:\t0x%x",iVar2);
    }
    else {
      iVar2 = _PrlVmDev_SetStackIndex(local_48,param_4);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.18:\t0x%x",iVar2);
      }
      else {
        iVar2 = _PrlVmDevHd_SetDiskType(local_48,1);
        if (iVar2 < 0) {
          FUN_100df99c0("","PrlSdkUtils",0,"TR00055.19:\t0x%x",iVar2);
        }
        else {
          iVar2 = _PrlVmDevHd_SetDiskSize(local_48,param_5);
          if (iVar2 < 0) {
            FUN_100df99c0("","PrlSdkUtils",0,"TR00055.20:\t0x%x",iVar2);
          }
          else {
            iVar2 = _PrlVmDev_SetEnabled(local_48,1);
            if (iVar2 < 0) {
              FUN_100df99c0("","PrlSdkUtils",0,"TR00055.21:\t0x%x",iVar2);
            }
            if ((param_6 == 0xff) || (iVar3 = _PrlVmDev_SetSubType(local_48), -1 < iVar3)) {
              if ((param_7 != (long *)0x0) && (&local_48 != param_7)) {
                if (*param_7 != 0) {
                  _PrlHandle_Free();
                }
                *param_7 = local_48;
                if (local_48 != 0) {
                  _PrlHandle_AddRef();
                }
              }
            }
            else {
              _PrlDbg_PrlResultToString(iVar3,&local_38);
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Error : Failed to set hard disk subtype error 0x%X \'%s\'",iVar3,
                            local_38);
              iVar2 = iVar3;
            }
          }
        }
      }
    }
  }
LAB_100d4804a:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

