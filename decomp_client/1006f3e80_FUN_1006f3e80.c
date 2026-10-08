
void FUN_1006f3e80(long param_1)

{
  char cVar1;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,*(undefined8 *)(param_1 + 0x40),"2clicked()",param_1,
                   "1onInstallNowClicked()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x38),"2clicked()",param_1,
                     "1onInstallLaterClicked()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x38),"2clicked()",param_1,
                     "1onInstallLaterClicked()",0);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

