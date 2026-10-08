
undefined8 FUN_10026bd70(QString *param_1)

{
  char cVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  uint uVar6;
  uint uVar7;
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar6 = (uint)(*(int *)&param_1[0xb].field0_0x0 == 1) * 0x800;
  uVar7 = uVar6 + 0x2000;
  if (*(int *)&param_1[0xb].field0_0x0 != 3) {
    uVar7 = uVar6;
  }
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  cVar1 = FUN_10018c770(pQVar4);
  if ((cVar1 != '\0') && (*(int *)&param_1[0xb].field0_0x0 != 2)) {
    uVar7 = uVar7 | 0x800;
  }
  if (*(char *)((long)&param_1[0xb].field0_0x0 + 4) != '\0') {
    uVar7 = uVar7 | 0x1000;
  }
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  uVar2 = FUN_10018d490(pQVar4);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  pQVar3 = (QObject *)FUN_10015efb0(uVar2,pQVar4,param_1 + 9,param_1 + 10,uVar7,param_1 + 0xd);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    pQVar4 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  pQVar5 = param_1[7].field0_0x0;
  if (pQVar5 != pQVar4) {
    if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      pQVar5 = param_1[7].field0_0x0;
    }
    if (pQVar5 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0)) {
        operator_delete(param_1[7].field0_0x0);
      }
    }
    param_1[7].field0_0x0 = pQVar4;
    param_1[8].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
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
  if (param_1[7].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  if (*(int *)(param_1[7].field0_0x0 + 4) == 0) {
    return 0x80000009;
  }
  pQVar3 = (QObject *)param_1[8].field0_0x0;
  if (pQVar3 == (QObject *)0x0) {
    return 0x80000009;
  }
  pQVar3[0x60] = (QObject)0x1;
  local_30 = (QArrayData *)QString::fromAscii_helper("handleQuestionEvent",0x13);
  CSdkRequest::addEventFilter(pQVar3,param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10026bf19;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10026bf19:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[8].field0_0x0;
  }
  QObject::connect(local_38,pQVar4,"2jobCompleted( PRL_RESULT )",param_1,
                   "1onCloneCompleted( PRL_RESULT )",0x80);
  QMetaObject::Connection::~Connection(local_38);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  uVar2 = FUN_10018d490(pQVar4);
  QObject::connect(local_40,uVar2,"2deviceCopyProgressChanged( uint, uint, uint )",param_1,
                   "1onDeviceCopyProgressChanged( uint, uint, uint )",0x80);
  QMetaObject::Connection::~Connection(local_40);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  uVar2 = FUN_10018d490(pQVar4);
  QObject::connect(local_48,uVar2,"2jobCloneProgressChanged( uint )",param_1,
                   "1onJobCloneProgressChanged( uint )",0x80);
  QMetaObject::Connection::~Connection(local_48);
  FUN_10026c060(param_1);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

