
undefined8 FUN_100214e50(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get image converter to convert suspended screen");
    uVar1 = 0x80000009;
  }
  else {
    local_18 = in_RAX;
    QObject::connect(&local_18,*(long *)(param_1 + 0x28),"2finished()",param_1,"1onImageConverted()"
                     ,2);
    if (local_18 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_18);
    QThread::start(*(undefined8 *)(param_1 + 0x28),7);
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar1 = 0;
  }
  return uVar1;
}

