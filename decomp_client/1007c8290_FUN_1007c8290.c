
void FUN_1007c8290(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long local_28;
  long local_20;
  
  uVar1 = FUN_10018f5c0(*(undefined8 *)(param_1 + 0x18));
  QObject::connect(&local_20,uVar1,"2execToolStateChanged(CVmToolsWatcher::ToolState)",param_1,
                   "1updateNetworkAddresses()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x18),
                     "2vmConfigurationChanged(CVmConfiguration,CVmConfiguration)",param_1,
                     "1onVmConfigurationChanged(CVmConfiguration,CVmConfiguration)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x18),
                     "2vmConfigurationChanged(CVmConfiguration,CVmConfiguration)",param_1,
                     "1onVmConfigurationChanged(CVmConfiguration,CVmConfiguration)",0);
    if ((cVar2 != '\0') && (local_28 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

