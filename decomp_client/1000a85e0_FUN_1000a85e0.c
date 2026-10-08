
void FUN_1000a85e0(long *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,param_2,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onAfterVmAdded(const CVmWrap&)",0);
  if ((local_28 == 0) || (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 == '\0')) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  else {
    QObject::connect(&local_30,param_2,"2vmRegistered(PRL_RESULT, const QString&)",param_1,
                     "1onVmRegistered(PRL_RESULT, const QString&)",0);
    bVar2 = 1;
    if ((local_30 != 0) && (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 != '\0')) {
      QObject::connect(&local_38,param_2,"2vmUnregistered(PRL_RESULT, const QString&)",param_1,
                       "1onVmUnregistered(PRL_RESULT, const QString&)",0);
      bVar2 = 1;
      if (local_38 != 0) {
        bVar2 = QMetaObject::Connection::isConnected_helper();
        bVar2 = bVar2 ^ 1;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_38);
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    if (bVar2 == 0) goto LAB_1000a86e6;
  }
  FUN_100df99c0("SGAD","prl_client_app",0,"Error: failed to connect server slots");
LAB_1000a86e6:
  (**(code **)(*param_1 + 0x88))(param_1,param_2);
  return;
}

