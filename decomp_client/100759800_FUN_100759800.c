
void FUN_100759800(long param_1)

{
  char cVar1;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,param_1,"2aboutToShow()",param_1,"1fillMenu()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x30),"2mapped(const QString&)",param_1,
                     "1onActivateVmActionTriggered(const QString&)",2);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x30),"2mapped(const QString&)",param_1,
                     "1onActivateVmActionTriggered(const QString&)",2);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

