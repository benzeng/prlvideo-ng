
void FUN_100a4db40(QObject *param_1,undefined8 param_2)

{
  long in_RAX;
  long local_28;
  
  local_28 = in_RAX;
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_102238790;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102238810;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_10009c520("SmartPtr<char>",0,0);
  FUN_10009bee0("unsigned",0,0);
  QObject::connect(&local_28,param_1,"2PasswordDataReceivedSignal(SmartPtr<char>, unsigned)",param_1
                   ,"1PasswordDataReceivedSlot(SmartPtr<char>, unsigned)",2);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

