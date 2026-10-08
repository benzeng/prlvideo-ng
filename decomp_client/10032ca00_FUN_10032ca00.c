
long * FUN_10032ca00(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  QString::toUtf8();
  if ((*(uint *)local_40 < 2) && (*(long *)(local_40 + 0x10) == 0x18)) {
    pQVar4 = local_40 + *(long *)(local_40 + 0x10);
  }
  else {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
    pQVar4 = local_40 + *(long *)(local_40 + 0x10);
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
  }
  local_38 = 0;
  iVar2 = _PrlVm_TisGetRecord(uVar3,pQVar4,&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10032cabc;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10032cabc:
  if (-1 < iVar2) {
    *param_1 = local_38;
    if (local_38 != 0) {
      _PrlHandle_AddRef();
    }
    goto LAB_10032cbb6;
  }
  if (2 < DAT_10230ffd0) {
    pQVar4 = *(QArrayData **)(param_2 + 0x18);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar1 = *(long *)(local_48 + 0x10);
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",3,"PrlVm_TisGetRecord call error: record [%s], RC = %.8X [%s]"
                  ,local_48 + lVar1,iVar2,uVar3);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10032cb7f;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10032cb7f:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10032cbaf;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_10032cbaf:
  *param_1 = 0;
LAB_10032cbb6:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return param_1;
}

