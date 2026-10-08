
bool FUN_10018f660(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  int local_20;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0x48) != 0x30000001) {
    return false;
  }
  local_20 = 0;
  lVar2 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar2 + 0x1b0) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1b0) + 8)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: hard disk wasn\'t added to config.");
    return false;
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  iVar1 = _PrlDisk_IsBootable_Local(local_30 + *(long *)(local_30 + 0x10),&local_20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10018f726;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10018f726:
  if (iVar1 != 0 || local_20 != 0) {
    bVar3 = false;
    goto LAB_10018f79f;
  }
  if ((*(int *)(*(long *)(lVar2 + 0x1a8) + 0xc) != *(int *)(*(long *)(lVar2 + 0x1a8) + 8)) &&
     (iVar1 = CVmDevice::getEmulatedType(), iVar1 == 1)) {
    CVmDevice::getSystemName();
    iVar1 = *(int *)(local_38 + 4);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10018f790;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10018f790:
    if (iVar1 != 0) {
      bVar3 = false;
      goto LAB_10018f79f;
    }
  }
  bVar3 = local_20 == 0;
LAB_10018f79f:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return bVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return bVar3;
}

