
void FUN_10055dc60(long param_1)

{
  char cVar1;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  cVar1 = '\0';
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),
                   "2currentIndexChanged(int)",*(undefined8 *)(param_1 + 0x10),"2dataChanged()",0);
  if (local_20 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),"2stateChanged(int)",
                   param_1,"1onShowHideAppShortcutStateChanged(int)",0);
  if ((cVar1 == '\0') || (local_28 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
                     "2keyChanged(int,int)",param_1,"1onShowHideAppShortcutChanged(int,int)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),
                     "2keyChanged(int,int)",param_1,"1onShowHideAppShortcutChanged(int,int)",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),"2clicked()",
                       param_1,"1openKeyboardPreferences()",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10055de01;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),"2clicked()",param_1,
                   "1openKeyboardPreferences()",0);
LAB_10055de01:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

