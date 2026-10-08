
undefined4 FUN_1002929d0(QObject *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QFutureWatcherBase *this;
  undefined8 uVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  bool *pbVar9;
  bool *pbVar10;
  QFutureInterfaceBase *this_00;
  Connection local_88 [8];
  QImage local_80 [32];
  long local_60;
  undefined **local_58;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_29;
  
  uVar3 = 0x80000009;
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x5c)) {
    return 0x80000009;
  }
  if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x60)) {
    return 0x80000009;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x44)) ||
     (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x48))) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x5c);
  }
  else {
    local_40 = QRect::operator&((QRect *)(param_1 + 0x5c),(QRect *)(param_1 + 0x44));
  }
  local_48 = CONCAT44((local_40._12_4_ + 1) - local_40._4_4_,(local_40._8_4_ + 1) - local_40._0_4_);
  if ((0 < *(int *)(param_1 + 0x38)) && (0 < *(int *)(param_1 + 0x3c))) {
    local_48 = QSize::scaled(&local_48,param_1 + 0x38,*(undefined4 *)(param_1 + 0x40));
  }
  if (param_1[0x58] != (QObject)0x0) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100323e00(uVar4);
    uVar4 = FUN_100319c50(uVar4);
    cVar1 = FUN_100330b70(uVar4);
    if (cVar1 != '\0') {
      return 0x80000009;
    }
    QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)&local_58,0xe);
    local_58 = &PTR_FUN_1022737f0;
    QFutureInterfaceBase::refT();
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100323e00(uVar4);
    uVar4 = FUN_100319c50(uVar4);
    cVar1 = FUN_100332df0(uVar4,local_40,&local_48,&local_58);
    if (cVar1 != '\0') {
      this = operator_new(0x20);
      QFutureWatcherBase::QFutureWatcherBase(this,param_1);
      *(undefined ***)this = &PTR_metaObject_1022726c8;
      this_00 = (QFutureInterfaceBase *)(this + 0x10);
      QFutureInterfaceBase::QFutureInterfaceBase(this_00,0xe);
      *(undefined ***)this_00 = &PTR_FUN_1022737f0;
      QFutureInterfaceBase::refT();
      QObject::connect(&local_60,this,"2finished()",param_1,"1onCoherenceScreenshotFinished()",0);
      if (local_60 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      if (local_50 != *(long *)(this + 0x18)) {
        QFutureWatcherBase::disconnectOutputInterface(SUB81(this,0));
        QFutureInterfaceBase::refT();
        cVar1 = QFutureInterfaceBase::derefT();
        if (cVar1 == '\0') {
          uVar4 = QFutureInterfaceBase::resultStoreBase();
          FUN_100293340(uVar4);
        }
        QFutureInterfaceBase::operator=(this_00,(QFutureInterfaceBase *)&local_58);
        QFutureWatcherBase::connectOutputInterface();
      }
      CAbstractTask::setWaitForSubTaskCompletion();
      FUN_1002932e0(&local_58);
      return 0;
    }
    FUN_1002932e0(&local_58);
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100323e00(uVar4);
  uVar5 = FUN_100319be0(uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100323e20(uVar4);
  pQVar6 = (QObject *)FUN_100329890(uVar5,uVar2,local_40,&local_48);
  piVar7 = (int *)0x0;
  if (pQVar6 != (QObject *)0x0) {
    piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  }
  piVar8 = *(int **)(param_1 + 0x28);
  if (piVar8 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + 0x28);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar7;
    *(QObject **)(param_1 + 0x30) = pQVar6;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_29 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar7);
    }
  }
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QImage::QImage(local_80,&local_48,4);
    QImage::operator=((QImage *)(param_1 + 0x70),local_80);
    QImage::~QImage(local_80);
    pbVar9 = (bool *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pbVar9 = (bool *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pbVar9 = *(bool **)(param_1 + 0x30);
    }
    cVar1 = CSdkRequest::isCompleted(pbVar9,(int *)0x0);
    if (cVar1 == '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      uVar3 = 0;
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x30);
      }
      QObject::connect(local_88,uVar4,"2jobCompleted( PRL_RESULT )",param_1,
                       "1onGrabDisplayScreenCompleted( PRL_RESULT )",0);
      QMetaObject::Connection::~Connection(local_88);
    }
    else {
      pbVar9 = (bool *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pbVar9 = (bool *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pbVar9 = *(bool **)(param_1 + 0x30);
      }
      pbVar10 = (bool *)0x0;
      uVar3 = CSdkRequest::getResultCode(pbVar9);
      FUN_100292e90(param_1,uVar3);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pbVar10 = (bool *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pbVar10 = *(bool **)(param_1 + 0x30);
      }
      uVar3 = CSdkRequest::getResultCode(pbVar10);
    }
  }
  return uVar3;
}

