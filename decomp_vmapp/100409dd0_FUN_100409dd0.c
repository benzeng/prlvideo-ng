
void FUN_100409dd0(undefined8 param_1)

{
  char cVar1;
  long local_30;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,param_1,"2sigReconfigureMasterVolumeSubscription(bool, bool)",param_1,
                   "1onReconfigureMasterVolumeSubscription(bool, bool)",2);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
LAB_100409e2b:
    FUN_1008e3970("","PrlAudioCore",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "CAudioUnitManager.cpp",0x1f,"run");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    if (cVar1 == '\0') goto LAB_100409e2b;
  }
  QObject::connect(&local_28,param_1,"2sigReconfigureDataSourceSubscription(bool, bool)",param_1,
                   "1onReconfigureDataSourceSubscription(bool, bool)",2);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
LAB_100409eba:
    FUN_1008e3970("","PrlAudioCore",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "CAudioUnitManager.cpp",0x23,"run");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    if (cVar1 == '\0') goto LAB_100409eba;
  }
  QObject::connect(&local_30,param_1,"2sigNotifyAboutMasterVolumeChange(bool)",param_1,
                   "1onNotifyAboutMasterVolumeChange(bool)",2);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    if (cVar1 != '\0') goto LAB_100409f8b;
  }
  FUN_1008e3970("","PrlAudioCore",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "CAudioUnitManager.cpp",0x27,"run");
LAB_100409f8b:
  QThread::exec();
  return;
}

