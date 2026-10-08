
void FUN_1005cfb10(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  cVar1 = '\0';
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),
                   "2textChanged(const QString&)",param_1,"1onKeyChanded(const QString&)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),"2toggled(bool)",
                   *(undefined8 *)(param_1 + 0x10),"2completeChanged()",0);
  if ((cVar1 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                     "2stateChanged(int)",*(undefined8 *)(param_1 + 0x10),"2completeChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect((Connection *)&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),
                     "2currentIndexChanged(int)",*(undefined8 *)(param_1 + 0x10),
                     "2completeChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
LAB_1005cfe00:
    QObject::connect(&local_50,uVar2,"2currentIndexChanged(int)",param_1,"1onUse64bitChanged(int)",0
                    );
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),
                     "2stateChanged(int)",*(undefined8 *)(param_1 + 0x10),"2completeChanged()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect((Connection *)&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),
                       "2currentIndexChanged(int)",*(undefined8 *)(param_1 + 0x10),
                       "2completeChanged()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      goto LAB_1005cfe00;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),
                     "2currentIndexChanged(int)",*(undefined8 *)(param_1 + 0x10),
                     "2completeChanged()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      goto LAB_1005cfe00;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                     "2currentIndexChanged(int)",param_1,"1onUse64bitChanged(int)",0);
    if ((cVar1 != '\0') && (local_50 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),"2toggled(bool)",
                       param_1,"1onWinKeyToggled(bool)",0);
      if ((cVar1 != '\0') && (local_58 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1005cfe35;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),"2toggled(bool)",
                   param_1,"1onWinKeyToggled(bool)",0);
LAB_1005cfe35:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

