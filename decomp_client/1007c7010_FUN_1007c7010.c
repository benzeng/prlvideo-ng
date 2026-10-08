
void FUN_1007c7010(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  cVar1 = '\0';
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x18),
                   "2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",param_1,
                   "1onVmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
  if (local_28 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    cVar2 = '\0';
    QObject::connect(&local_30,*(long *)(param_1 + 0x38),
                     "2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onInstallRecordChanged(SdkHandleWrap,PRL_UINT32)",0);
    if (cVar1 != '\0') {
      if (local_30 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
    }
    cVar1 = '\0';
    QObject::connect(&local_38,uVar3,"2tisRecordRemoved(SdkHandleWrap)",param_1,
                     "1onInstallRecordRemoved(SdkHandleWrap)",0);
    if (cVar2 != '\0') {
      if (local_38 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    cVar2 = '\0';
    QObject::connect(&local_40,*(long *)(param_1 + 0x48),
                     "2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1onExecRecordChanged(SdkHandleWrap,PRL_UINT32)",0);
    if (cVar1 != '\0') {
      if (local_40 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
    }
    QObject::connect(&local_48,uVar3,"2tisRecordRemoved(SdkHandleWrap)",param_1,
                     "1onExecRecordRemoved(SdkHandleWrap)",0);
    if ((cVar2 != '\0') && (local_48 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
  }
  return;
}

