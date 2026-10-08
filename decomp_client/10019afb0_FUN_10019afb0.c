
/* WARNING: Removing unreachable block (ram,0x00010019b38a) */

bool * FUN_10019afb0(undefined8 param_1,long param_2,uint param_3,QVariant *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  bool *pbVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  undefined1 local_b9;
  long local_b8;
  QString local_b0;
  CRequestInfo local_a8 [8];
  QArrayData *local_a0;
  int *local_90;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar1 == 0) {
    uVar2 = FUN_100dd9170(param_3);
    pbVar4 = (bool *)0x0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: [%s] can\'t get server instance to send the request.",uVar2);
    goto LAB_10019b4a6;
  }
  uVar2 = FUN_100152280();
  FUN_1001884b0(&local_40,lVar1);
  lVar3 = FUN_100152a20(uVar2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b040;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10019b040:
  if (lVar3 == 0) {
    uVar2 = FUN_100dd9170(param_3);
    pbVar4 = (bool *)0x0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: [%s] can\'t get server instance to send the request.",uVar2);
    goto LAB_10019b4a6;
  }
  FUN_10015a060(&local_50);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  pQVar6 = local_48 + *(long *)(local_48 + 0x10);
  uVar2 = FUN_100dd9170(param_3);
  FUN_100188480(&local_60,lVar1);
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  pQVar5 = local_58 + *(long *)(local_58 + 0x10);
  FUN_10018d830(&local_70,lVar1);
  QString::toUtf8();
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"%s: sending [%s] request for VM %s [%s] ...",pQVar6,uVar2,
                pQVar5,local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b19b;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10019b19b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b1cb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10019b1cb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b1fb;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10019b1fb:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b22b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10019b22b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b269;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10019b269:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b299;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10019b299:
  if (param_2 == 0) {
    uVar2 = FUN_100dd9170(param_3);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: [%s] request failed. Job handle is invalid.",
                  uVar2);
    return (bool *)0x0;
  }
  FUN_100188480(&local_b0,lVar1);
  CRequestInfo::CRequestInfo(local_a8,param_3,&local_b0,param_4);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b300;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10019b300:
  uVar2 = CSdkCommunicator::requestStorage();
  local_b8 = param_2;
  _PrlHandle_AddRef();
  pbVar4 = (bool *)CRequestStorage::addRequest(uVar2,&local_b8,local_a8);
  if (local_b8 != 0) {
    _PrlHandle_Free();
  }
  local_b9 = 0;
  CSdkRequest::isCompleted(pbVar4,(int *)&local_b9);
  QVariant::~QVariant(&local_80);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    local_31 = *local_90 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_90 != (int *)0x0)) {
      operator_delete(local_90);
    }
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b4a6;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10019b4a6:
  if (param_2 != 0) {
    _PrlHandle_Free(param_2);
  }
  return pbVar4;
}

