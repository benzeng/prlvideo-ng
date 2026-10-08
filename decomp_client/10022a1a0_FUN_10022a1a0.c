
undefined8 FUN_10022a1a0(QString *param_1)

{
  bool bVar1;
  QObject *pQVar2;
  QObject *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  uint uVar6;
  Data_conflict *pDVar7;
  undefined8 uVar8;
  long local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data_conflict local_58;
  uint uStack_50;
  QObject *local_48;
  QObject *pQStack_40;
  QVariant local_38;
  bool local_21;
  
  if (*(int *)(param_1[6].field0_0x0 + 4) == 0) {
    return 0x80000009;
  }
  FUN_100812f60(param_1,1,param_1 + 5);
  if ((((param_1[0xd].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) ||
       (*(int *)(param_1[0xd].field0_0x0 + 4) == 0)) ||
      (pQVar4 = param_1[0xe].field0_0x0, pQVar4 == (QTypedArrayData<unsigned_short> *)0x0)) ||
     ((*(long *)(pQVar4 + 0x10) == 0 || (*(int *)(*(long *)(pQVar4 + 0x10) + 4) == 0)))) {
    pQVar3 = (QObject *)0x0;
    local_48 = (QObject *)0x0;
  }
  else {
    pQVar3 = *(QObject **)(pQVar4 + 0x18);
    local_48 = (QObject *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      local_48 = (QObject *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
  }
  pQStack_40 = pQVar3;
  uStack_50 = 0x80000000;
  local_58.field7 = 0;
  bVar1 = true;
  if (DAT_10226dd98 == 0) {
    DAT_10226dd98 = FUN_10019a9a0("QPointer<QWidget>",0xffffffffffffffff,1);
    uVar6 = uStack_50 & 0x40000000;
    if (uVar6 == 0) {
      uVar6 = 0;
      goto LAB_10022a27d;
    }
    if (*(int *)(local_58.field7 + 8) == 1) {
      bVar1 = false;
      goto LAB_10022a27d;
    }
LAB_10022a28d:
    QVariant::QVariant(&local_38,DAT_10226dd98,&local_48,0);
    QVariant::operator=((QVariant *)&local_58,&local_38);
    QVariant::~QVariant(&local_38);
  }
  else {
    uVar6 = 0;
LAB_10022a27d:
    if ((DAT_10226dd98 != (uStack_50 & 0x3fffffff)) &&
       (7 < (uStack_50 & 0x3fffffff | DAT_10226dd98))) goto LAB_10022a28d;
    uStack_50 = uVar6 | DAT_10226dd98 & 0x3fffffff;
    if (bVar1) {
      pDVar7 = &local_58;
    }
    else {
      pDVar7 = *(Data_conflict **)local_58.field15;
    }
    pQVar3 = pDVar7->field15;
    if (pQVar3 != (QObject *)0x0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      local_21 = *(int *)pQVar3 != 0;
      if ((*(int *)pQVar3 == 0) && (pDVar7->field16 != (void *)0x0)) {
        operator_delete(pDVar7->field16);
      }
    }
    pQVar2 = pQStack_40;
    pQVar3 = local_48;
    pDVar7->field15 = local_48;
    pDVar7[1].field15 = pQVar2;
    if (pQVar3 != (QObject *)0x0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar3 = (QObject *)
           FUN_10015e230(pQVar4,param_1 + 6,*(undefined1 *)&param_1[0xb].field0_0x0,&local_60,
                         &local_58);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    pQVar4 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  pQVar5 = param_1[0x12].field0_0x0;
  if (pQVar5 != pQVar4) {
    if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      pQVar5 = param_1[0x12].field0_0x0;
    }
    if (pQVar5 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((!local_21) && (param_1[0x12].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0)) {
        operator_delete(param_1[0x12].field0_0x0);
      }
    }
    param_1[0x12].field0_0x0 = pQVar4;
    param_1[0x13].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  }
  if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    local_21 = *(int *)pQVar4 != 0;
    UNLOCK();
    if (!local_21) {
      operator_delete(pQVar4);
    }
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_21) goto LAB_10022a3fe;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10022a3fe:
  uVar8 = 0x80000009;
  if (((param_1[0x12].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) ||
      (*(int *)(param_1[0x12].field0_0x0 + 4) == 0)) ||
     (pQVar3 = (QObject *)param_1[0x13].field0_0x0, pQVar3 == (QObject *)0x0)) goto LAB_10022a4d6;
  local_68 = (QArrayData *)QString::fromAscii_helper("handleRegistrationEvent",0x17);
  CSdkRequest::addEventFilter(pQVar3,param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_21) goto LAB_10022a481;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10022a481:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[0x12].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0x12].field0_0x0 + 4) != 0))
  {
    pQVar4 = param_1[0x13].field0_0x0;
  }
  QObject::connect(&local_70,pQVar4,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onVmRegisterFinished(PRL_RESULT)",0);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  uVar8 = 0;
  QMetaObject::Connection::~Connection((Connection *)&local_70);
LAB_10022a4d6:
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_48 != (QObject *)0x0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
    if ((!local_21) && (local_48 != (QObject *)0x0)) {
      operator_delete(local_48);
    }
  }
  return uVar8;
}

