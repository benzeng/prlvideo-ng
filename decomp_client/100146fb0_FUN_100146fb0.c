
undefined8 FUN_100146fb0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  QString local_a8;
  CRequestInfo local_a0 [8];
  QArrayData *local_98;
  int *local_88;
  QVariant local_78;
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1001884b0(&local_40,uVar5);
  lVar4 = FUN_100152a20(uVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100147038;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100147038:
  if (lVar4 == 0) {
    uVar5 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance to send request.");
    goto LAB_10014731a;
  }
  FUN_10015a060(&local_50,lVar4);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  pQVar6 = local_48 + *(long *)(local_48 + 0x10);
  uVar5 = FUN_100dd9170(param_3);
  EnumUtils::enumToString(&local_60,*(undefined4 *)(param_1 + 0x20));
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"%s: sending [%s] request for %s %d ...",pQVar6,uVar5,
                local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(param_1 + 0x24));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014713a;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10014713a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014716a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10014716a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014719a;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10014719a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001471ca;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001471ca:
  uVar5 = CSdkCommunicator::requestStorage();
  local_68 = param_2;
  if (param_2 != 0) {
    _PrlHandle_AddRef(param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_a8,uVar3);
  CRequestInfo::CRequestInfo(local_a0,param_3,uVar1,uVar2,&local_a8,(QObject *)0x0);
  uVar5 = CRequestStorage::addRequest(uVar5,&local_68,local_a0);
  QVariant::~QVariant(&local_78);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_31 = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001472b4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001472b4:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001472ea;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1001472ea:
  if (local_68 != 0) {
    _PrlHandle_Free();
  }
LAB_10014731a:
  if (param_2 != 0) {
    _PrlHandle_Free();
  }
  return uVar5;
}

