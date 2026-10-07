
void FUN_10010b9a0(QObject *param_1)

{
  long local_38;
  long local_30;
  long local_28 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100baa810;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_100ba2180;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_100ba2188;
  QObject::connect(local_28,*(undefined8 *)(DAT_1011c3698 + 0xf0),
                   "2sigClientAttached(const IOService::ClientDesc)",param_1,
                   "1onClientAttached(const IOService::ClientDesc)",1);
  if (local_28[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_28);
  QObject::connect(&local_30,*(undefined8 *)(DAT_1011c3698 + 0xf0),
                   "2sigClientDetached(const IOService::ClientDesc)",param_1,
                   "1onClientDetached(const IOService::ClientDesc)",1);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(*(long *)(DAT_1011c3698 + 0xf0) + 0x10),
                   "2onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                   "1onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",1);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

