
undefined8 FUN_100240d60(long param_1)

{
  long lVar1;
  long local_28;
  char local_19;
  
  local_19 = '\0';
  lVar1 = FUN_1002408d0(param_1,&local_19,param_1 + 0x18);
  if (lVar1 == 0) {
    if (local_19 == '\0') {
      return 0x80000009;
    }
  }
  else {
    CAbstractTask::setWaitForSubTaskCompletion();
    QObject::connect(&local_28,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onVmUnregistered(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  return 0;
}

