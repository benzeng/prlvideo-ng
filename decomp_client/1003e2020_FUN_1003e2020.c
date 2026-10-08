
void FUN_1003e2020(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  QFutureInterfaceBase *pQVar5;
  QArrayData *local_70;
  QFutureInterfaceBase local_68 [8];
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  FUN_1003e2430();
  uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  QObject::connect(&local_38,uVar3,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1onAfterVmConfigurationChanged(const CVmConfiguration&)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    cVar2 = '\0';
    QObject::connect(&local_40,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1updateItemsAttributes()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    cVar2 = '\0';
    QObject::connect(&local_40,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1updateItemsAttributes()",0);
    if (cVar1 != '\0') {
      if (local_40 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  lVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 != 0) {
    uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    QObject::connect(&local_48,uVar3,"2serverHardwareChanged(const CHostHardwareInfo&)",param_1,
                     "1emitDataChanged()",0);
    if ((cVar2 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      cVar2 = '\0';
      QObject::connect(&local_50,uVar3,"2commonPrefsChanged(const CDispCommonPreferences&)",param_1,
                       "1emitDataChanged()",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      cVar2 = '\0';
      QObject::connect(&local_50,uVar3,"2commonPrefsChanged(const CDispCommonPreferences&)",param_1,
                       "1emitDataChanged()",0);
      if (cVar1 != '\0') {
        if (local_50 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = QMetaObject::Connection::isConnected_helper();
        }
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
  }
  QObject::connect(&local_58,param_1 + 0x78,"2finished()",param_1,"1onInitializeTMValueFinished()",0
                  );
  if ((cVar2 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  FUN_100109d60(&local_70,*(undefined8 *)(param_1 + 0x20),0);
  pQVar5 = operator_new(0x38);
  QFutureInterfaceBase::QFutureInterfaceBase(pQVar5,0);
  *(undefined ***)pQVar5 = &PTR_FUN_1022729d8;
  QFutureInterfaceBase::refT();
  *(undefined4 *)(pQVar5 + 0x18) = 0;
  *(undefined ***)pQVar5 = &PTR_FUN_102273ea8;
  *(undefined ***)(pQVar5 + 0x10) = &PTR_FUN_102273ed8;
  *(code **)(pQVar5 + 0x20) = FUN_100d701e0;
  *(QArrayData **)(pQVar5 + 0x28) = local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_29 = *(int *)local_70 != 0;
    UNLOCK();
  }
  *(undefined8 *)(pQVar5 + 0x30) = 0;
  uVar3 = QThreadPool::globalInstance();
  FUN_1002aa950(local_68,pQVar5,uVar3);
  if (local_60 != *(long *)(param_1 + 0x90)) {
    QFutureWatcherBase::disconnectOutputInterface(SUB81(param_1 + 0x78,0));
    QFutureInterfaceBase::refT();
    cVar2 = QFutureInterfaceBase::derefT();
    if (cVar2 == '\0') {
      uVar3 = QFutureInterfaceBase::resultStoreBase();
      FUN_1002a9de0(uVar3);
    }
    QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0x88),local_68);
    QFutureWatcherBase::connectOutputInterface();
  }
  FUN_1002a9d80(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

