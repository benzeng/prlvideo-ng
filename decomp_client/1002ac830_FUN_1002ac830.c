
undefined8 FUN_1002ac830(long param_1)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  long local_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  Data *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10061b510(uVar4);
  FUN_10015aa50(&local_40,uVar4);
  lVar1 = local_40;
  if (local_40 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to update the proxy credentials - invalid profile handle");
    goto LAB_1002acbd2;
  }
  QNetworkProxy::hostName();
  QString::toUtf8();
  pQVar6 = local_48 + *(long *)(local_48 + 0x10);
  uVar2 = QNetworkProxy::port();
  QNetworkProxy::user();
  QString::toUtf8();
  pQVar7 = local_58 + *(long *)(local_58 + 0x10);
  QNetworkProxy::password();
  QString::toUtf8();
  iVar3 = _PrlUsrCfg_AddProxy(lVar1,pQVar6,uVar2,pQVar7,local_68 + *(long *)(local_68 + 0x10),0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ac93c;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1002ac93c:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ac96c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002ac96c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ac9a3;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1002ac9a3:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ac9d3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002ac9d3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002aca03;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1002aca03:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002aca33;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002aca33:
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to update the proxy credentials");
  }
  else {
    local_78 = (Data *)PTR_shared_null_1021e15e8;
    local_7c = 0;
    FUN_100129840(&local_78,&local_7c);
    local_80 = 2;
    FUN_100129840(&local_78,&local_80);
    pvVar5 = operator_new(0x50);
    local_88 = local_40;
    if (local_40 != 0) {
      _PrlHandle_AddRef();
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_10061b510(uVar4);
    FUN_10015aa80(&local_90,uVar4);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_10061b510(uVar4);
    FUN_1001f41a0(pvVar5,&local_88,&local_90,&local_78,uVar4,0);
    if (local_90 != 0) {
      _PrlHandle_Free();
    }
    if (local_88 != 0) {
      _PrlHandle_Free();
    }
    QObject::connect(&local_98,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1onCommitCredentialsFinished(PRL_RESULT)",0);
    if (local_98 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    CAbstractTask::setWaitForSubTaskCompletion();
    CAbstractTask::execute();
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002acbd2;
      }
      QListData::dispose(local_78);
    }
  }
LAB_1002acbd2:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return 0;
}

