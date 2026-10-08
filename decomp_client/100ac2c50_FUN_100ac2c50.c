
void FUN_100ac2c50(long param_1)

{
  char cVar1;
  char cVar2;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x18),"2OnExposeSignal()",param_1,
                   "1OnExpose()",2);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,param_1 + 0xb28,"2timeout()",param_1,
                     "1OnStopDrawingTimeout()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
LAB_100ac2e14:
    QObject::connect((Connection *)&local_40,param_1 + 0xb48,"2timeout()",param_1,
                     "1OnMetroModeChangedToDesktop()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_1 + 0xb28,"2timeout()",param_1,"1OnStopDrawingTimeout()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      goto LAB_100ac2e14;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,param_1 + 0xb48,"2timeout()",param_1,"1OnMetroModeChangedToDesktop()"
                     ,0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      cVar1 = '\0';
      QObject::connect(&local_48,param_1 + 0xb68,"2timeout()",param_1,"1OnCheckZorderTimeout()",0);
      if (cVar2 != '\0') {
        if (local_48 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_100ac2e4d;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  cVar1 = '\0';
  QObject::connect(&local_48,param_1 + 0xb68,"2timeout()",param_1,"1OnCheckZorderTimeout()",0);
LAB_100ac2e4d:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(param_1 + 0xf8),
                   "2GuestAppActivating(const ProcessSerialNumber, bool)",param_1,
                   "1OnGuestAppActivating(const ProcessSerialNumber, bool)",0);
  if ((cVar1 == '\0') || (local_50 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0xf8),"2MetroModeChanged(int)",param_1,
                     "1OnMetroModeChanged(int)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0xf8),"2MetroModeChanged(int)",param_1,
                     "1OnMetroModeChanged(int)",0);
    if ((cVar1 != '\0') && (local_58 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

