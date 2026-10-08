
undefined8 FUN_1002b4650(QObject *param_1)

{
  char cVar1;
  undefined8 uVar2;
  QFutureWatcherBase *this;
  void *pvVar3;
  QFutureInterfaceBase *this_00;
  QFutureInterfaceBase local_60 [8];
  long local_58;
  long local_50;
  QArrayData *local_48;
  undefined1 local_40 [8];
  undefined *local_38;
  undefined1 local_29;
  
  local_38 = PTR_shared_null_1021e15e8;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  uVar2 = FUN_10015a340(uVar2);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100122bf0(local_40,uVar2,&local_48);
  FUN_1000e5fc0(&local_38,local_40);
  FUN_100039a80(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002b46ea;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002b46ea:
  if (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8)) {
    this = operator_new(0x20);
    QFutureWatcherBase::QFutureWatcherBase(this,param_1);
    *(undefined ***)this = &PTR_metaObject_10226d0a0;
    this_00 = (QFutureInterfaceBase *)(this + 0x10);
    QFutureInterfaceBase::QFutureInterfaceBase(this_00,0xe);
    *(undefined ***)this_00 = &PTR_FUN_10226d138;
    QFutureInterfaceBase::refT();
    QObject::connect(&local_50,this,"2finished()",param_1,
                     "1onSearchImagesOnExternalMountsFinished()",0);
    if (local_50 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    pvVar3 = operator_new(0x38);
    FUN_1002b6060(pvVar3,FUN_1002b48f0,&local_38);
    uVar2 = QThreadPool::globalInstance();
    FUN_1000f1340(local_60,pvVar3,uVar2);
    if (local_58 != *(long *)(this + 0x18)) {
      QFutureWatcherBase::disconnectOutputInterface(SUB81(this,0));
      QFutureInterfaceBase::refT();
      cVar1 = QFutureInterfaceBase::derefT();
      if (cVar1 == '\0') {
        uVar2 = QFutureInterfaceBase::resultStoreBase();
        FUN_1000f03c0(uVar2);
      }
      QFutureInterfaceBase::operator=(this_00,local_60);
      QFutureWatcherBase::connectOutputInterface();
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_1000f0360(local_60);
  }
  FUN_100039a80(&local_38);
  return 0;
}

