
void FUN_100781ad0(long param_1,undefined8 param_2)

{
  long local_28;
  undefined8 local_20;
  
  local_20 = param_2;
  FUN_100781eb0(param_1 + 0x18,&local_20);
  QObject::connect(&local_28,param_2,"2stateChanged(bool)",param_1,"1onBlockerStateChanged(bool)",0)
  ;
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

