
void FUN_10076a4d0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  long local_30;
  long local_28;
  long local_20;
  
  uVar1 = FUN_100152280();
  QObject::connect(&local_20,uVar1,"2afterServerAdded(CServerWrap&)",param_1,
                   "1onServerAdded(CServerWrap&)",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar1 = FUN_100152280();
    QObject::connect(&local_28,uVar1,"2beforeServerRemoved(CServerWrap&)",param_1,
                     "1onServerRemoved(CServerWrap&)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    uVar1 = FUN_100152280();
    QObject::connect(&local_28,uVar1,"2beforeServerRemoved(CServerWrap&)",param_1,
                     "1onServerRemoved(CServerWrap&)",0);
    if ((cVar2 != '\0') && (local_28 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      uVar1 = CMessageManager::instance();
      QObject::connect(&local_30,uVar1,"2notificationClicked(PRL_RESULT)",param_1,
                       "1onNoticationActivated(PRL_RESULT)",0);
      if ((cVar2 != '\0') && (local_30 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10076a61e;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  uVar1 = CMessageManager::instance();
  QObject::connect(&local_30,uVar1,"2notificationClicked(PRL_RESULT)",param_1,
                   "1onNoticationActivated(PRL_RESULT)",0);
LAB_10076a61e:
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

