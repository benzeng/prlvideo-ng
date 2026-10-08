
undefined8 FUN_100175050(long param_1,bool param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  CVirtualNetwork::getUuid();
  FUN_100174c40(&local_38,param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001750b0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001750b0:
  if (local_38 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid handle to network device.");
    return 0;
  }
  CBaseNode::toString(SUB81(&local_50,0),param_2);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar1 = _PrlHandle_FromString(local_38,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100175143;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100175143:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100175173;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100175173:
  if (iVar1 < 0) {
    uVar3 = FUN_100dddcf0(iVar1);
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlHandle_FromString failed. RC: %s [%.8X]",uVar3
                  ,iVar1);
  }
  else {
    uVar2 = _PrlSrv_UpdateVirtualNetwork(*(undefined8 *)(param_1 + 0x80),local_38,0);
    local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar2 = FUN_10015c580(param_1,uVar2,0x840,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100175234;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100175234:
  if (local_38 != 0) {
    _PrlHandle_Free(local_38);
  }
  return uVar2;
}

