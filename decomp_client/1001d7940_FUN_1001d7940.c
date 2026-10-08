
void FUN_1001d7940(undefined8 param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  long local_30;
  
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  cVar1 = '\0';
  QObject::connect(&local_30,DAT_1023108e0,"2vmRemoved(const QString&)",param_1,
                   "1onAfterVmRemoved(const QString&)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_38,DAT_1023108e0,
                   "2keyboardGrabStateChanged(const QString &, bool, GUI::InputStateChangeReason)",
                   param_1,
                   "1onKeyboardGrabStateChanged(const QString&, bool, GUI::InputStateChangeReason)",
                   0);
  if ((cVar1 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = FUN_100152280();
    QObject::connect(&local_40,uVar3,"2afterServerAdded(CServerWrap&)",param_1,
                     "1onServerAdded(CServerWrap&)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = FUN_100152280();
    QObject::connect(&local_40,uVar3,"2afterServerAdded(CServerWrap&)",param_1,
                     "1onServerAdded(CServerWrap&)",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

