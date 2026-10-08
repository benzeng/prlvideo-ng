
undefined8 FUN_1001f7340(QString *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  QObject *pQVar6;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = CVmClusteredDevice::getStackIndex();
  uVar2 = CVmClusteredDevice::getInterfaceType();
  uVar1 = SdkUtils::getHddOffsetMask(uVar1,uVar2);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  pQVar3 = (QObject *)FUN_100197190(pQVar4,uVar1,0x800);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    pQVar4 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  pQVar5 = param_1[0xb].field0_0x0;
  if (pQVar5 != pQVar4) {
    if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      pQVar5 = param_1[0xb].field0_0x0;
    }
    if (pQVar5 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (param_1[0xb].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0))
      {
        operator_delete(param_1[0xb].field0_0x0);
      }
    }
    param_1[0xb].field0_0x0 = pQVar4;
    param_1[0xc].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  }
  if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    local_21 = *(int *)pQVar4 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(pQVar4);
    }
  }
  if (param_1[0xb].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  if (*(int *)(param_1[0xb].field0_0x0 + 4) == 0) {
    return 0x80000009;
  }
  if (param_1[0xc].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  pQVar3 = (QObject *)param_1[0xc].field0_0x0;
  pQVar3[0x60] = (QObject)0x1;
  pQVar6 = (QObject *)0x0;
  if ((param_1[0xb].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar6 = (QObject *)0x0, *(int *)(param_1[0xb].field0_0x0 + 4) != 0)) {
    pQVar6 = pQVar3;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("handleCompactEvent",0x12);
  CSdkRequest::addEventFilter(pQVar6,param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001f74ca;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001f74ca:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[0xb].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xb].field0_0x0 + 4) != 0))
  {
    pQVar4 = param_1[0xc].field0_0x0;
  }
  QObject::connect(&local_38,pQVar4,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onCompactFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return 0;
}

