
void FUN_1005c10c0(long param_1)

{
  Connection local_18 [8];
  
  QObject::connect(local_18,*(undefined8 *)(param_1 + 0x28),"2done(int)",param_1,"2finished(int)",0)
  ;
  QMetaObject::Connection::~Connection(local_18);
  return;
}

