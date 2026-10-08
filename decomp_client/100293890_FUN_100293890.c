
undefined8 FUN_100293890(QObject *param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  QFutureWatcherBase *this;
  int *piVar4;
  QThreadPool *pQVar5;
  QRunnable *pQVar6;
  long *plVar7;
  undefined8 uVar8;
  QFutureInterfaceBase *this_00;
  uint local_84;
  long local_78;
  undefined **local_70;
  long local_68;
  long local_60;
  int *local_58;
  QFutureWatcherBase *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  CSdkRequest::getResultHandle();
  uVar8 = 0x80000009;
  if (local_40 != 0) {
    local_48 = local_40;
    _PrlHandle_AddRef();
    uVar3 = SdkUtils::getResultParamCount(&local_48);
    *(uint *)(param_1 + 0x38) = uVar3;
    if (local_48 != 0) {
      _PrlHandle_Free();
      uVar3 = *(uint *)(param_1 + 0x38);
    }
    lVar1 = local_40;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        local_78 = local_40;
        if (local_40 != 0) {
          _PrlHandle_AddRef(local_40);
        }
        plVar7 = (long *)FUN_100293d30(&local_78,0);
        if (lVar1 != 0) {
          _PrlHandle_Free(lVar1);
        }
        if (plVar7 != (long *)0x0) {
          uVar8 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0x20);
          }
          FUN_100293f80(plVar7,uVar8);
          if (*plVar7 != 0) {
            _PrlHandle_Free();
          }
          operator_delete(plVar7);
        }
      }
    }
    else {
      local_84 = 0;
      do {
        this = operator_new(0x20);
        QFutureWatcherBase::QFutureWatcherBase(this,param_1);
        *(undefined ***)this = &PTR_metaObject_1021ef648;
        this_00 = (QFutureInterfaceBase *)(this + 0x10);
        QFutureInterfaceBase::QFutureInterfaceBase(this_00,0xe);
        *(undefined ***)this_00 = &PTR_FUN_1021ef6c8;
        QFutureInterfaceBase::refT();
        piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
        local_58 = piVar4;
        local_50 = this;
        FUN_100294e80(param_1 + 0x40,&local_58);
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          local_31 = *piVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar4);
          }
        }
        QObject::connect((Connection *)&local_60,this,"2finished()",param_1,
                         "1onParamParseFinished()",0);
        if (local_60 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_60);
        pQVar5 = operator_new(0x40);
        QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)pQVar5,0);
        *(undefined ***)pQVar5 = &PTR_FUN_1021ef6c8;
        QFutureInterfaceBase::refT();
        *(undefined4 *)(pQVar5 + 0x18) = 0;
        *(undefined ***)pQVar5 = &PTR_FUN_1021ef708;
        *(undefined ***)(pQVar5 + 0x10) = &PTR_FUN_1021ef738;
        *(code **)(pQVar5 + 0x28) = FUN_100293d30;
        *(long *)(pQVar5 + 0x30) = local_40;
        if (local_40 != 0) {
          _PrlHandle_AddRef();
        }
        *(uint *)(pQVar5 + 0x38) = local_84;
        pQVar6 = (QRunnable *)QThreadPool::globalInstance();
        QFutureInterfaceBase::setThreadPool(pQVar5);
        QFutureInterfaceBase::setRunnable((QRunnable *)pQVar5);
        QFutureInterfaceBase::reportStarted();
        QFutureInterfaceBase::QFutureInterfaceBase
                  ((QFutureInterfaceBase *)&local_70,(QFutureInterfaceBase *)pQVar5);
        local_70 = &PTR_FUN_1021ef6c8;
        QFutureInterfaceBase::refT();
        QThreadPool::start(pQVar6,(int)pQVar5 + 0x10);
        if (local_68 != *(long *)(this + 0x18)) {
          QFutureWatcherBase::disconnectOutputInterface(SUB81(this,0));
          QFutureInterfaceBase::refT();
          cVar2 = QFutureInterfaceBase::derefT();
          if (cVar2 == '\0') {
            uVar8 = QFutureInterfaceBase::resultStoreBase();
            FUN_100294900(uVar8);
          }
          QFutureInterfaceBase::operator=(this_00,(QFutureInterfaceBase *)&local_70);
          QFutureWatcherBase::connectOutputInterface();
        }
        FUN_1002948a0((QFutureInterfaceBase *)&local_70);
        local_84 = local_84 + 1;
      } while (local_84 < *(uint *)(param_1 + 0x38));
      CAbstractTask::setWaitForSubTaskCompletion();
    }
    uVar8 = 0;
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar8;
}

