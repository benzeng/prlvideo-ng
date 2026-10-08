
undefined8 FUN_10078bec0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_98;
  QArrayData *local_90;
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
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    return 0;
  }
  if (3 < param_2 - 1U) {
    FUN_100786690(&local_98,param_2);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Unsupported fetch request for server counter %d [%s]",
                  param_2,local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10078bfce;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_10078bfce:
    if (*(int *)local_98 == -1) {
      return 0;
    }
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
    return 0;
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    local_38 = 0;
  }
  else {
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    FUN_10015aa20(&local_38,uVar2);
  }
  local_30 = _PrlSrv_GetStatistics(local_38);
  local_84 = param_2;
  QVariant::QVariant(&local_80,2,&local_84,0);
  CRequestInfo::CRequestInfo(local_70,0x81e,&local_80);
  uVar2 = CSdkCommunicator::createRequest(lVar1,&local_30,local_70);
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
      if ((bool)local_21) goto LAB_10078c0c5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10078c0c5:
  QVariant::~QVariant(&local_80);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return uVar2;
}

