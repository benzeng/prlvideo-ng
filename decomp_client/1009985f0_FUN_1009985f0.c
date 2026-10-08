
void FUN_1009985f0(undefined8 *param_1)

{
  long local_20;
  
  FUN_1009982c0();
  *param_1 = &PTR_FUN_102234270;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  QObject::connect(&local_20,param_1,"2DataChanged()",param_1,"2completeChanged()",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  return;
}

