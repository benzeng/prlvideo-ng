
void FUN_10009f010(QObject *param_1,undefined8 param_2)

{
  Connection local_30 [8];
  Connection local_28 [8];
  Connection local_20 [8];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f85e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f8668;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_10009f110("package_s",0,0);
  FUN_10009f1e0("handle_s",0,0);
  QObject::connect(local_20,param_1,"2sigPackageReceived(package_s)",param_1,
                   "1onPackageReceived(package_s)",2);
  QMetaObject::Connection::~Connection(local_20);
  QObject::connect(local_28,param_1,"2sigClientConnected(handle_s)",param_1,
                   "1onClientConnected(handle_s)",2);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,param_1,"2sigClientDisconnected(handle_s)",param_1,
                   "1onClientDisconnected(handle_s)",2);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

