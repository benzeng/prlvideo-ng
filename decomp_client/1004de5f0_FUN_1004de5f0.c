
void FUN_1004de5f0(long param_1,undefined8 param_2)

{
  long in_RAX;
  long local_18;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  local_18 = in_RAX;
  QObject::connect(&local_18,param_2,"2clicked()",param_1,"1onRestoreDefaults()",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

