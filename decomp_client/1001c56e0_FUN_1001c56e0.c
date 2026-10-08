
void FUN_1001c56e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,param_2,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onAfterVmAdded(const CVmWrap&)",0);
  if ((local_20 == 0) || (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 == '\0')) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
  }
  else {
    QObject::connect(&local_28,param_2,"2beforeVmRemoved(const CVmWrap&)",param_1,
                     "1onBeforeVmRemoved(const CVmWrap&)",0);
    bVar2 = 1;
    if (local_28 != 0) {
      bVar2 = QMetaObject::Connection::isConnected_helper();
      bVar2 = bVar2 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    if (bVar2 == 0) {
      return;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"Error: failed to connect to Server signals");
  return;
}

