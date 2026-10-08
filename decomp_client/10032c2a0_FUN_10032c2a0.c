
int FUN_10032c2a0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    local_48 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Subscribing TIS record %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032c343;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10032c343:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032c373;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10032c373:
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  plVar1 = (long *)(param_1 + 0x20);
  pQVar5 = local_50 + *(long *)(local_50 + 0x10);
  if (*plVar1 != 0) {
    _PrlHandle_Free();
  }
  *plVar1 = 0;
  iVar3 = _PrlVm_TisGetEmitter(uVar4,pQVar5,plVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032c41a;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10032c41a:
  if (iVar3 < 0) {
    pQVar5 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar2 = *(long *)(local_58 + 0x10);
    uVar4 = FUN_100dddcf0(iVar3);
    FUN_100df99c0("","prl_client_app",0,
                  "PrlVm_TisGetEmitter call error: record [%s], RC = %.8X [%s]",local_58 + lVar2,
                  iVar3,uVar4);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032c5b3;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10032c5b3:
    if (*(int *)pQVar5 == -1) {
      return iVar3;
    }
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(pQVar5,2,8);
    return iVar3;
  }
  iVar3 = _PrlTisEmitter_RegCallback(*(undefined8 *)(param_1 + 0x20),FUN_10032c790,param_1);
  if (-1 < iVar3) {
    return iVar3;
  }
  pQVar5 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar2 = *(long *)(local_68 + 0x10);
  uVar4 = FUN_100dddcf0(iVar3);
  FUN_100df99c0("","prl_client_app",0,
                "PrlTisEmitter_RegCallback call error: record [%s], RC = %.8X [%s]",local_68 + lVar2
                ,iVar3,uVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032c4d6;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10032c4d6:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032c506;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10032c506:
  if (*plVar1 != 0) {
    _PrlHandle_Free();
  }
  *plVar1 = 0;
  return iVar3;
}

