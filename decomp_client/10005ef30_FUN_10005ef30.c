
void FUN_10005ef30(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  cVar1 = '\0';
  QObject::connect(&local_38,*(undefined8 *)PTR_self_1021e1388,
                   "2activeWindowChanged(QWidget*, QWidget*)",param_1,
                   "1onActiveWindowChanged(QWidget*, QWidget*)",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar2 = '\0';
  QObject::connect(&local_40,DAT_1023108e0,"2coherenceWndActivated(const QString&)",param_1,
                   "1onCoherenceWindowActivated(const QString&)",0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
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
  QObject::connect(&local_48,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"1onVmAdded(GUI::VmId)",0);
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
  QObject::connect(&local_50,DAT_1023108e0,"2serverAdded(const QString&)",param_1,
                   "1onServerAdded(const QString&)",0);
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
  cVar1 = '\0';
  QObject::connect(&local_58,DAT_1023108e0,"2beforeServerRemoved(const QString&)",param_1,
                   "1onBeforeServerRemoved(const QString&)",0);
  if (cVar2 != '\0') {
    if (local_58 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  cVar2 = '\0';
  QObject::connect(&local_60,DAT_1023108e0,"2beforeVmRemoved(const GUI::VmId&)",param_1,
                   "1onBeforeVmRemoved(const GUI::VmId&)",0);
  if (cVar1 != '\0') {
    if (local_60 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_68,DAT_1023108e0,"2serverStateChanged(const QString&, GUI::ServerState)",
                   param_1,"1onServerStateChanged(const QString&, GUI::ServerState)",0);
  if ((cVar2 != '\0') && (local_68 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  return;
}

