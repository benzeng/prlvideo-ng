
void FUN_1006eee60(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x38),"2urlChanged(const QUrl&)",param_1,
                   "1onPageUrlChanged(const QUrl&)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x38),"2loadStarted()",param_1,
                     "1onPageLoadStarted()",0);
LAB_1006ef011:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x38),"2loadFinished(bool)",param_1,
                     "1onPageLoadFinished(bool)",0);
LAB_1006ef03d:
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,*(undefined8 *)(param_1 + 0x60),"2clicked()",param_1,
                     "1onInstallNowClicked()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x38),"2loadStarted()",param_1,
                     "1onPageLoadStarted()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) goto LAB_1006ef011;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x38),"2loadFinished(bool)",param_1,
                     "1onPageLoadFinished(bool)",0);
    if ((cVar1 == '\0') || (local_38 == 0)) goto LAB_1006ef03d;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x60),"2clicked()",param_1,
                     "1onInstallNowClicked()",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x58),"2clicked()",param_1,
                       "1onInstallLaterClicked()",0);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1006ef08e;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  QObject::connect(&local_48,uVar2,"2clicked()",param_1,"1onInstallLaterClicked()",0);
LAB_1006ef08e:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

