
void FUN_10005e5f0(long param_1)

{
  char cVar1;
  void *pvVar2;
  long local_30;
  long local_28;
  
  QTimer::setInterval((int)*(undefined8 *)(param_1 + 0x18));
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_28,DAT_1023108e0,"2exposeActivated()",param_1,"1onExposeActivated()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x18),"2timeout()",param_1,
                     "1checkExposeActive()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x18),"2timeout()",param_1,
                     "1checkExposeActive()",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  FUN_10005e730(param_1);
  return;
}

