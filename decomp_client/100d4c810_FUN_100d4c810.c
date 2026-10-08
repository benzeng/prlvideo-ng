
int FUN_100d4c810(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 in_R8B;
  undefined1 in_R9B;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  iVar2 = _PrlVmCfg_CreateShare(*(undefined8 *)(param_1 + 8),&local_40);
  lVar1 = local_40;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.110:\t0x%x",iVar2);
    goto LAB_100d4cad6;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar2 = _PrlShare_SetName(lVar1,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d4c8c8;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100d4c8c8:
  lVar1 = local_40;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.111:\t0x%x",iVar2);
    goto LAB_100d4cad6;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  iVar2 = _PrlShare_SetPath(lVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d4c948;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100d4c948:
  lVar1 = local_40;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.112:\t0x%x",iVar2);
    goto LAB_100d4cad6;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  iVar2 = _PrlShare_SetDescription(lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d4c9c8;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100d4c9c8:
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.113:\t0x%x",iVar2);
  }
  else {
    iVar2 = _PrlShare_SetReadOnly(local_40,in_R8B);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.114:\t0x%x",iVar2);
    }
    else {
      iVar2 = _PrlShare_SetEnabled(local_40,in_R9B);
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.115:\t0x%x",iVar2);
      }
    }
  }
LAB_100d4cad6:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

