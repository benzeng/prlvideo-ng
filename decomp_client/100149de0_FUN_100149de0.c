
void FUN_100149de0(long param_1,undefined8 *param_2)

{
  int iVar1;
  QArrayData *local_48;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(int *)(param_1 + 0x20) != 8) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  if (2 < DAT_10230ffd0) {
    local_38 = (QArrayData *)*param_2;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Updating virtual network. Virtual Network: %s ",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100149e8d;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_100149e8d:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100149ebd;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100149ebd:
  FUN_100146b90(&local_40,param_1);
  if (local_40 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid device handle");
    return;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar1 = _PrlVmDevNet_SetVirtualNetworkId(local_40,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100149f4b;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100149f4b:
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Error while setting adapter name: RC [%.8X]",iVar1);
  }
  else {
    FUN_1001496b0(param_1,2);
  }
  if (local_40 != 0) {
    _PrlHandle_Free(local_40);
  }
  return;
}

