
undefined8 FUN_1002856b0(long param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  QFutureInterfaceBase *pQVar6;
  QString *pQVar7;
  long local_60;
  QFutureInterfaceBase local_58 [8];
  long local_50;
  long local_48;
  QFutureInterfaceBase local_40 [8];
  long local_38;
  undefined1 local_29;
  
  pQVar7 = (QString *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 == 2) {
    cVar2 = QFile::exists(pQVar7);
    if (cVar2 == '\0') {
      return 0x80000009;
    }
    iVar3 = *(int *)(param_1 + 0x88);
  }
  if (iVar3 == 3) {
    pvVar4 = operator_new(0x200);
    FUN_1002869a0(pvVar4,FUN_1002859a0,param_1 + 0xd0,pQVar7);
    uVar5 = QThreadPool::globalInstance();
    FUN_100287320(local_40,pvVar4,uVar5);
    QObject::connect(&local_48,param_1 + 0xb0,"2finished()",param_1,"1onDetectFromUsbFinished()",0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    if (local_38 != *(long *)(param_1 + 200)) {
      QFutureWatcherBase::disconnectOutputInterface(SUB81(param_1 + 0xb0,0));
      QFutureInterfaceBase::refT();
      cVar2 = QFutureInterfaceBase::derefT();
      if (cVar2 == '\0') {
        uVar5 = QFutureInterfaceBase::resultStoreBase();
        FUN_1002866b0(uVar5);
      }
      QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0xc0),local_40);
      QFutureWatcherBase::connectOutputInterface();
    }
    FUN_100286650(local_40);
  }
  else {
    pQVar6 = operator_new(0x40);
    QFutureInterfaceBase::QFutureInterfaceBase(pQVar6,0);
    *(undefined ***)pQVar6 = &PTR_FUN_102272168;
    QFutureInterfaceBase::refT();
    *(undefined4 *)(pQVar6 + 0x18) = 0;
    *(undefined ***)pQVar6 = &PTR_FUN_102272330;
    *(undefined ***)(pQVar6 + 0x10) = &PTR_FUN_102272360;
    *(code **)(pQVar6 + 0x20) = FUN_1002859c0;
    pQVar1 = pQVar7->field0_0x0;
    *(QTypedArrayData<unsigned_short> **)(pQVar6 + 0x28) = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    *(undefined4 *)(pQVar6 + 0x30) = *(undefined4 *)(param_1 + 0x88);
    *(long *)(pQVar6 + 0x38) = param_1 + 0x18;
    uVar5 = QThreadPool::globalInstance();
    FUN_100287870(local_58,pQVar6,uVar5);
    QObject::connect(&local_60,param_1 + 0x90,"2finished()",param_1,"1onDetectFromDvdFinished()",0);
    if (local_60 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    if (local_50 != *(long *)(param_1 + 0xa8)) {
      QFutureWatcherBase::disconnectOutputInterface(SUB81(param_1 + 0x90,0));
      QFutureInterfaceBase::refT();
      cVar2 = QFutureInterfaceBase::derefT();
      if (cVar2 == '\0') {
        uVar5 = QFutureInterfaceBase::resultStoreBase();
        FUN_1002864f0(uVar5);
      }
      QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0xa0),local_58);
      QFutureWatcherBase::connectOutputInterface();
    }
    FUN_100286490(local_58);
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

