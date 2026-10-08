
void FUN_1000a50f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,param_2,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onAfterVmAdded(const CVmWrap&)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    if (cVar1 != '\0') goto LAB_1000a5168;
  }
  FUN_100df99c0("VSDD","prl_client_app",0,"Failed to connect server slots");
LAB_1000a5168:
  QObject::connect(&local_30,param_2,"2beforeVmRemoved(const CVmWrap&)",param_1,
                   "1onBeforeVmRemoved(const CVmWrap&)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_100df99c0("VSDD","prl_client_app",0,"Failed to connect server slots");
  return;
}

