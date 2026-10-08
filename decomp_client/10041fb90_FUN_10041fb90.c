
void FUN_10041fb90(long param_1)

{
  Connection local_28 [8];
  Connection local_20 [8];
  
  QObject::connect(local_20,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),"2accepted()",param_1,
                   "1accept()",0);
  QMetaObject::Connection::~Connection(local_20);
  QObject::connect(local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),"2rejected()",param_1,
                   "1reject()",0);
  QMetaObject::Connection::~Connection(local_28);
  return;
}

