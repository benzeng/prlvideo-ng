
void FUN_1001d6a70(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  long local_30;
  long local_28;
  
  puVar1 = PTR_self_1021e1388;
  QObject::connect(&local_28,*(undefined8 *)PTR_self_1021e1388,"2messageReceived(const QString&)",
                   param_1,"1activate(const QString&)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)puVar1,"2activeStateWillChange(bool)",param_1,
                     "1onActiveStateWillChange(bool)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)puVar1,"2activeStateWillChange(bool)",param_1,
                     "1onActiveStateWillChange(bool)",0);
    if ((cVar2 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

