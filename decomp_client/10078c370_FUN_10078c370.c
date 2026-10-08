
undefined8 FUN_10078c370(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined4 local_e4;
  QVariant local_e0;
  CRequestInfo local_d0 [8];
  QArrayData *local_c8;
  int *local_b8;
  QVariant local_a8;
  long local_98;
  long local_90;
  int local_84;
  QVariant local_80;
  CRequestInfo local_70 [8];
  QArrayData *local_68;
  int *local_58;
  QVariant local_48;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_2 != 9) {
    if (3 < param_2 - 1U) {
      FUN_100786690(&local_f8,param_2);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Unsupported fetch request for VM counter %d [%s]",param_2
                    ,local_f0 + *(long *)(local_f0 + 0x10));
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_21 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10078c599;
        }
        QArrayData::deallocate(local_f0,1,8);
      }
LAB_10078c599:
      if (*(int *)local_f8 == -1) {
        return 0;
      }
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        UNLOCK();
        if (*(int *)local_f8 != 0) {
          return 0;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_f8,2,8);
      return 0;
    }
    if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
       (*(long *)(param_1 + 0x20) == 0)) {
      local_38 = 0;
    }
    else {
      uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
      FUN_10018c250(&local_38,uVar1);
    }
    local_30 = _PrlVm_GetStatistics(local_38);
    local_84 = param_2;
    QVariant::QVariant(&local_80,2,&local_84,0);
    CRequestInfo::CRequestInfo(local_70,0x81f,&local_80);
    uVar1 = CSdkCommunicator::createRequest(lVar2,&local_30,local_70);
    QVariant::~QVariant(&local_48);
    if (local_58 != (int *)0x0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_21 = *local_58 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_58 != (int *)0x0)) {
        operator_delete(local_58);
      }
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10078c4a8;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10078c4a8:
    QVariant::~QVariant(&local_80);
    lVar2 = local_38;
    if (local_30 != 0) {
      _PrlHandle_Free();
      lVar2 = local_38;
    }
    goto LAB_10078c6e6;
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    local_98 = 0;
  }
  else {
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c250(&local_98,uVar1);
  }
  local_90 = _PrlVm_GetStatisticsEx(local_98,0x800);
  local_e4 = 9;
  QVariant::QVariant(&local_e0,2,&local_e4,0);
  CRequestInfo::CRequestInfo(local_d0,0x81f,&local_e0);
  uVar1 = CSdkCommunicator::createRequest(lVar2,&local_90,local_d0);
  QVariant::~QVariant(&local_a8);
  if (local_b8 != (int *)0x0) {
    LOCK();
    *local_b8 = *local_b8 + -1;
    local_21 = *local_b8 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_b8 != (int *)0x0)) {
      operator_delete(local_b8);
    }
  }
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10078c6c2;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10078c6c2:
  QVariant::~QVariant(&local_e0);
  lVar2 = local_98;
  if (local_90 != 0) {
    _PrlHandle_Free();
    lVar2 = local_98;
  }
LAB_10078c6e6:
  if (lVar2 != 0) {
    _PrlHandle_Free();
  }
  return uVar1;
}

