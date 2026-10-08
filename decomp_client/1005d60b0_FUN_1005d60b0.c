
void FUN_1005d60b0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),
                   "2textChanged(const QString&)",*(undefined8 *)(param_1 + 0x10),
                   "2completeChanged()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                     "2textChanged(const QString&)",*(undefined8 *)(param_1 + 0x10),
                     "2completeChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                     "2textChanged(const QString&)",*(undefined8 *)(param_1 + 0x10),
                     "2completeChanged()",0);
LAB_1005d629d:
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                     "2textChanged(const QString&)",*(undefined8 *)(param_1 + 0x10),
                     "2completeChanged()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                       "2textChanged(const QString&)",*(undefined8 *)(param_1 + 0x10),
                       "2completeChanged()",0);
      goto LAB_1005d629d;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                     "2textChanged(const QString&)",*(undefined8 *)(param_1 + 0x10),
                     "2completeChanged()",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),
                       "2stateChanged(int)",*(undefined8 *)(param_1 + 0x10),"2completeChanged()",0);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1005d62c4;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60);
  }
  QObject::connect(&local_48,uVar3,"2stateChanged(int)",uVar2,"2completeChanged()",0);
LAB_1005d62c4:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

