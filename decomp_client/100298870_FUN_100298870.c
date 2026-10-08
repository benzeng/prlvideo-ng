
undefined4 FUN_100298870(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long local_20;
  
  uVar1 = 0x80000009;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x30) == '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    else {
      uVar1 = 0;
      QObject::connect(&local_20,param_2,"2switchFinished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_20 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_20);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
  }
  return uVar1;
}

