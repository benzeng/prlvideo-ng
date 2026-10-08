
undefined4 FUN_1002c6ae0(long *param_1)

{
  long lVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QNetworkProxy local_30 [8];
  undefined4 local_28;
  undefined1 local_21;
  
  pQVar3 = (QObject *)(**(code **)(*param_1 + 0xc0))();
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar5 = (int *)param_1[5];
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      piVar5 = (int *)param_1[5];
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_21) && ((void *)param_1[5] != (void *)0x0)) {
        operator_delete((void *)param_1[5]);
      }
    }
    param_1[5] = (long)piVar4;
    param_1[6] = (long)pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_21 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar4);
    }
  }
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || ((bool *)param_1[6] == (bool *)0x0))
  {
    FUN_100df99c0("","prl_client_app",0,"Request is null.");
    return 0x80000009;
  }
  cVar2 = CSdkRequest::isCompleted((bool *)param_1[6],(int *)0x0);
  if (cVar2 != '\0') {
    return local_28;
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QNetworkProxy::QNetworkProxy(local_30,3,&local_38,0,&local_40,&local_48);
  QNetworkProxy::operator=((QNetworkProxy *)(param_1 + 8),local_30);
  QNetworkProxy::~QNetworkProxy(local_30);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c6c43;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c6c43:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c6c73;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c6c73:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c6ca3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002c6ca3:
  uVar6 = CSdkCommunicator::eventHandlers();
  local_88 = (QArrayData *)QString::fromAscii_helper("handleHttpProxyAuthRequired",0x1b);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c6b0(local_80,&local_88,param_1,&local_98);
  CEventHandlerStorage::addHandler(uVar6,0x186f2,local_80);
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_21 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c6d7e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002c6d7e:
  CAbstractTask::setWaitForSubTaskCompletion();
  lVar1 = param_1[6];
  *(char *)(lVar1 + 0x60) = (char)param_1[7];
  lVar7 = 0;
  if ((param_1[5] != 0) && (lVar7 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar7 = lVar1;
  }
  QObject::connect(&local_a0,lVar7,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onRequestFinished(PRL_RESULT)",0);
  if (local_a0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  return 0;
}

