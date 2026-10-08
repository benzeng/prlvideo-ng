
void FUN_10042e940(long param_1)

{
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  
  QObject::connect(local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),"2stateChanged(int)",
                   param_1,"1onShowPassword(int)",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50),
                   "2textChanged(const QString&)",param_1,"1onPasswordChanged(const QString&)",0);
  QMetaObject::Connection::~Connection(local_30);
  QObject::connect(local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),
                   "2textChanged(const QString&)",param_1,"1onUserChanged(const QString&)",0);
  QMetaObject::Connection::~Connection(local_38);
  return;
}

