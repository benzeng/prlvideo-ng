
void FUN_100759560(long param_1)

{
  void *pvVar1;
  long local_20;
  
  pvVar1 = operator_new(0x20);
  FUN_10075ae60(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  QObject::connect(&local_20,pvVar1,"2iconGeometryChanged()",param_1,"2iconGeometryChanged()",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  return;
}

