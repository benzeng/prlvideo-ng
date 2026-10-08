
void FUN_10023b3e0(QObject *param_1,long param_2,char param_3)

{
  QObject *pQVar1;
  long local_20;
  
  if (param_2 != 0) {
    pQVar1 = (QObject *)FUN_10037a510(param_2);
    if (param_3 == '\0') {
      QObject::disconnect(pQVar1,"2windowDidExitFullScreen()",param_1,"1onDidExitNativeFullScreen()"
                         );
      return;
    }
    QObject::connect(&local_20,pQVar1,"2windowDidExitFullScreen()",param_1,
                     "1onDidExitNativeFullScreen()",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
  }
  return;
}

