
void FUN_10023e000(QObject *param_1,long param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  QObject *pQVar3;
  long local_38;
  long local_30;
  
  if (param_2 != 0) {
    pQVar3 = (QObject *)FUN_10037a510(param_2);
    if (param_3 == '\0') {
      QObject::disconnect(pQVar3,"2windowDidEnterFullScreen()",param_1,
                          "1onDidEnterNativeFullScreen()");
      pQVar3 = (QObject *)FUN_10037a510(param_2);
      QObject::disconnect(pQVar3,"2windowDidFailToEnterFullScreen()",param_1,
                          "1onDidFailToEnterNativeFullScreen()");
      return;
    }
    QObject::connect(&local_30,pQVar3,"2windowDidEnterFullScreen()",param_1,
                     "1onDidEnterNativeFullScreen()",0);
    if (local_30 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar1 = FUN_10037a510(param_2);
      QObject::connect(&local_38,uVar1,"2windowDidFailToEnterFullScreen()",param_1,
                       "1onDidFailToEnterNativeFullScreen()",0);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar1 = FUN_10037a510(param_2);
      QObject::connect(&local_38,uVar1,"2windowDidFailToEnterFullScreen()",param_1,
                       "1onDidFailToEnterNativeFullScreen()",0);
      if ((cVar2 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  return;
}

