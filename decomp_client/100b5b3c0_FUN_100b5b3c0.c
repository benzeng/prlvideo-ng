
undefined1
FUN_100b5b3c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             long param_6,long param_7,long param_8,undefined4 param_9)

{
  char cVar1;
  undefined1 uVar2;
  Connection *this;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_3 == 0) {
LAB_100b5b446:
    if (param_4 != 0) {
      QObject::connect(&local_40,param_1,"2onHasWakeup()",param_2,param_4,param_9);
      if (local_40 == 0) {
        this = (Connection *)&local_40;
        goto LAB_100b5b5e7;
      }
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (param_5 != 0) {
      QObject::connect(&local_48,param_1,"2onWillWakeup()",param_2,param_5,param_9);
      if (local_48 == 0) {
        this = (Connection *)&local_48;
        goto LAB_100b5b5e7;
      }
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (param_6 != 0) {
      QObject::connect(&local_50,param_1,"2onCancelSleep()",param_2,param_6,param_9);
      if (local_50 == 0) {
        this = (Connection *)&local_50;
        goto LAB_100b5b5e7;
      }
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (param_7 != 0) {
      QObject::connect(&local_58,param_1,"2onStarted()",param_2,param_7,param_9);
      if (local_58 == 0) {
        this = (Connection *)&local_58;
        goto LAB_100b5b5e7;
      }
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (param_8 != 0) {
      QObject::connect(&local_60,param_1,"2onStopped()",param_2,param_8,param_9);
      if (local_60 == 0) {
        this = (Connection *)&local_60;
        goto LAB_100b5b5e7;
      }
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    QObject::connect(&local_38,param_1,"2onSleep()",param_2,param_3,param_9);
    if (local_38 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      if (cVar1 == '\0') {
        return 0;
      }
      goto LAB_100b5b446;
    }
    this = (Connection *)&local_38;
LAB_100b5b5e7:
    QMetaObject::Connection::~Connection(this);
    uVar2 = 0;
  }
  return uVar2;
}

