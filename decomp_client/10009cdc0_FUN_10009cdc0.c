
void FUN_10009cdc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,param_2,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onAfterVmAdded(const CVmWrap&)",0);
  if (local_18 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_18);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_18);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_100df99c0("INVSC","prl_client_app",0,"Error: failed to connect server slots");
  return;
}

