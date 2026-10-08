
undefined8 FUN_100174800(long param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  local_30 = 0;
  iVar2 = _PrlVirtNet_Create(&local_30);
  lVar1 = local_30;
  if (iVar2 < 0) {
    uVar4 = FUN_100dddcf0(iVar2);
    uVar3 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVirtNet_Create failed. RC: %s [%.8X]",uVar4,
                  iVar2);
    goto LAB_1001749c3;
  }
  CBaseNode::toString(SUB81(&local_40,0),param_2);
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  iVar2 = _PrlHandle_FromString(lVar1,local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001748b8;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1001748b8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001748e8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001748e8:
  if (iVar2 < 0) {
    uVar4 = FUN_100dddcf0(iVar2);
    uVar3 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlHandle_FromString failed. RC: %s [%.8X]",uVar4
                  ,iVar2);
  }
  else {
    uVar3 = _PrlSrv_AddVirtualNetwork(*(undefined8 *)(param_1 + 0x80),local_30,0);
    local_48 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar3 = FUN_10015c580(param_1,uVar3,0x83f,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001749c3;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1001749c3:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

