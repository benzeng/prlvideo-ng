
void FUN_1006d45e0(undefined8 param_1)

{
  char cVar1;
  long local_20;
  
  QObject::connect(&local_20,param_1,"2sigAudioDeviceListHasChanged()",param_1,
                   "1onAudioDeviceListHasChanged()",2);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    if (cVar1 != '\0') goto LAB_1006d467f;
  }
  FUN_1008e3970("","PrlAudioDeviceManager",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "CAudioDeviceManager.cpp",0x1b,"run");
LAB_1006d467f:
  QThread::exec();
  return;
}

