
undefined1
FUN_1001a6390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined1 uVar1;
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,param_2,param_3,param_1,param_4,param_5);
  if (local_18 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return uVar1;
}

