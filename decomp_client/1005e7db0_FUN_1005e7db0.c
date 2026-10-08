
void FUN_1005e7db0(QObject *param_1,long param_2)

{
  char cVar1;
  QObject *pQVar2;
  long local_38;
  long local_30;
  long local_28;
  
  if (param_2 == 0) {
    return;
  }
  pQVar2 = (QObject *)FUN_10075bd70(*(undefined8 *)(param_1 + 0x10));
  if (pQVar2 != (QObject *)0x0) {
    QObject::disconnect(pQVar2,(char *)0x0,param_1,(char *)0x0);
  }
  QObject::connect(&local_28,param_2,"2urlChanged(const QUrl&)",param_1,
                   "1onPageUrlChanged(const QUrl&)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2loadStarted()",param_1,"1onPageLoadStarted()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2loadStarted()",param_1,"1onPageLoadStarted()",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,param_2,"2loadFinished(bool)",param_1,"1onPageLoadFinished(bool)",0
                      );
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1005e7f0c;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,param_2,"2loadFinished(bool)",param_1,"1onPageLoadFinished(bool)",0);
LAB_1005e7f0c:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

