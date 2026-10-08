
void FUN_100769f50(long *param_1,undefined8 param_2)

{
  long local_20;
  
  QObject::connect(&local_20,param_2,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  return;
}

