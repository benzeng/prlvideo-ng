
void FUN_100766f70(undefined8 param_1,undefined8 param_2)

{
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,param_2,"2vmTypeChanged(GUI::VmType)",param_1,"1updateVmsToArchive()",0
                  );
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  FUN_100766d40(param_1);
  return;
}

