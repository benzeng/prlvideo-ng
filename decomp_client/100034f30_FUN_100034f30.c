
void FUN_100034f30(long param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x20),"2timeout()",param_1,
                   "1onWriteTimeout()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar2 = '\0';
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x28),"2timeout()",param_1,"1stop()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar2 = '\0';
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x28),"2timeout()",param_1,"1stop()",0);
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
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar1 = '\0';
  QObject::connect(&local_48,DAT_1023108e0,
                   "2vmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",param_1,
                   "1onVmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
  if (cVar2 != '\0') {
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar2 = '\0';
  QObject::connect(&local_50,DAT_1023108e0,"2beforeVmRemoved(GUI::VmId)",param_1,
                   "1onBeforeVmRemoved(GUI::VmId)",0);
  if (cVar1 != '\0') {
    if (local_50 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_58,DAT_1023108e0,"2todayExtensionNotication(QVariantHash)",param_1,
                   "1onTodayExtensionNotification(QVariantHash)",0);
  if ((cVar2 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

