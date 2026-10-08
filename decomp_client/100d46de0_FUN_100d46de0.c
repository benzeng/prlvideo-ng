
int FUN_100d46de0(long param_1,undefined4 param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,int param_6,long *param_7)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  iVar4 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 8),5,&local_40);
  if (iVar4 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to create the optical disk device configuration, 0x%x",
                  iVar4);
    goto LAB_100d4714c;
  }
  iVar4 = _PrlVmDev_SetEmulatedType(local_40,param_2);
  lVar3 = local_40;
  if (iVar4 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the optical device emulated type, 0x%x",iVar4);
    goto LAB_100d4714c;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar4 = _PrlVmDev_SetSysName(lVar3,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d46eb3;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100d46eb3:
  lVar3 = local_40;
  if (iVar4 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the optical device system name, 0x%x",iVar4);
    goto LAB_100d4714c;
  }
  if (*(int *)(*param_4 + 4) == 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    pQVar5 = local_50 + *(long *)(local_50 + 0x10);
    bVar2 = true;
    bVar1 = false;
  }
  else {
    QString::toUtf8();
    if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f)
      ;
    }
    pQVar5 = local_58 + *(long *)(local_58 + 0x10);
    bVar1 = true;
    bVar2 = false;
  }
  iVar4 = _PrlVmDev_SetFriendlyName(lVar3,pQVar5);
  if ((bVar1) && (*(int *)local_58 != -1)) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d47003;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100d47003:
  if ((bVar2) && (*(int *)local_50 != -1)) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d47038;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100d47038:
  if (iVar4 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the optical device friendly name, 0x%x",iVar4);
  }
  else {
    iVar4 = _PrlVmDev_SetIfaceType(local_40,param_5);
    if (iVar4 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the optical device iface type, 0x%x",iVar4);
    }
    else if ((param_6 == -1) || (iVar4 = _PrlVmDev_SetStackIndex(local_40), -1 < iVar4)) {
      iVar4 = _PrlVmDev_SetEnabled(local_40,1);
      if (iVar4 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to enable the optical disk device, 0x%x",iVar4);
      }
      if ((param_7 != (long *)0x0) && (&local_40 != param_7)) {
        if (*param_7 != 0) {
          _PrlHandle_Free();
        }
        *param_7 = local_40;
        if (local_40 != 0) {
          _PrlHandle_AddRef();
        }
      }
    }
    else {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to set optical disk device stack index, 0x%x",iVar4);
    }
  }
LAB_100d4714c:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return iVar4;
}

