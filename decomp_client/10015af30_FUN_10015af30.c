
long * FUN_10015af30(long *param_1,long param_2,char param_3)

{
  long lVar1;
  int iVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = 0;
  iVar2 = _PrlSrv_CreateVm(*(undefined8 *)(param_2 + 0x80),&local_38);
  lVar1 = local_38;
  if (iVar2 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t create VM handle. Return code: [%.8X]",iVar2);
    *param_1 = 0;
    goto LAB_10015b08e;
  }
  CBaseNode::toString(SUB81(&local_48,0),(bool)(param_3 + '\x10'));
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar2 = _PrlVm_FromString(lVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10015b01e;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10015b01e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10015b04e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10015b04e:
  if (iVar2 == 0) {
    *param_1 = local_38;
    if (local_38 != 0) {
      _PrlHandle_AddRef();
    }
  }
  else {
    FUN_100df99c0("","prl_client_app",0,
                  "Can\'t initialize VM handle with configuration XML. Return code: [%.8X]",iVar2);
    *param_1 = 0;
  }
LAB_10015b08e:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return param_1;
}

