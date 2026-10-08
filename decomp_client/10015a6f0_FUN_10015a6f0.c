
void FUN_10015a6f0(long param_1,uint param_2)

{
  uint uVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(uint *)(param_1 + 0xf0) == param_2) {
    return;
  }
  *(ulong *)(param_1 + 0x118) = ((ulong)param_2 << 0x20) + 1;
  if (param_2 == 1) {
    while (*(int *)(*(long *)(param_1 + 200) + 0xc) != *(int *)(*(long *)(param_1 + 200) + 8)) {
      FUN_10015ba20(param_1,0);
    }
    QString::toUtf8();
    if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"%s status: disconnected",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(uint *)local_38 == 0xffffffff) goto LAB_10015a8f8;
    local_30 = local_38;
    if (*(uint *)local_38 != 0) {
      LOCK();
      *(uint *)local_38 = *(uint *)local_38 - 1;
      uVar1 = *(uint *)local_38;
      UNLOCK();
      goto joined_r0x00010015a866;
    }
  }
  else if (param_2 == 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"%s status: connected",local_30 + *(long *)(local_30 + 0x10)
                 );
    if (*(uint *)local_30 == 0xffffffff) goto LAB_10015a8f8;
    if (*(uint *)local_30 != 0) {
      LOCK();
      *(uint *)local_30 = *(uint *)local_30 - 1;
      uVar1 = *(uint *)local_30;
      UNLOCK();
joined_r0x00010015a866:
      local_21 = uVar1 != 0;
      if ((bool)local_21) goto LAB_10015a8f8;
    }
  }
  else {
    QString::toUtf8();
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"%s status: connecting",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(uint *)local_40 == 0xffffffff) goto LAB_10015a8f8;
    local_30 = local_40;
    if (*(uint *)local_40 != 0) {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 - 1;
      uVar1 = *(uint *)local_40;
      UNLOCK();
      goto joined_r0x00010015a866;
    }
  }
  QArrayData::deallocate(local_30,1,8);
LAB_10015a8f8:
  *(uint *)(param_1 + 0xf0) = param_2;
  *(ulong *)(param_1 + 0x118) = (ulong)param_2 << 0x20;
  FUN_1008003e0(param_1,param_2);
  FUN_100800440(param_1,param_1 + 0x68,param_2);
  return;
}

