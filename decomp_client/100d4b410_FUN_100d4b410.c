
int FUN_100d4b410(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  int iVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = 0;
  iVar2 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 8),3,&local_38);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.51:\t0x%x",iVar2);
    goto LAB_100d4b668;
  }
  iVar2 = _PrlVmDev_SetEmulatedType(local_38,1);
  lVar1 = local_38;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.53:\t0x%x",iVar2);
    goto LAB_100d4b668;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmDev_SetSysName(lVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4b4dc;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d4b4dc:
  lVar1 = local_38;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.54:\t0x%x",iVar2);
    goto LAB_100d4b668;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmDev_SetFriendlyName(lVar1,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4b55c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100d4b55c:
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.55:\t0x%x",iVar2);
  }
  else {
    iVar2 = _PrlVmDev_SetEnabled(local_38,param_3);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.56:\t0x%x",iVar2);
    }
    else {
      iVar2 = _PrlVmDev_SetConnected(local_38,param_4);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.57:\t0x%x",iVar2);
      }
    }
  }
LAB_100d4b668:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

