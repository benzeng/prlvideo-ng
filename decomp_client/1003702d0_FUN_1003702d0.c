
void FUN_1003702d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,param_2,"2vmUnregistered(PRL_RESULT, const QString&)",param_1,
                   "1onAfterVmUnregistered(PRL_RESULT, const QString&)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2afterVmRemoved(const QString&)",param_1,
                     "1onAfterVmRemoved(const QString&)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2afterVmRemoved(const QString&)",param_1,
                     "1onAfterVmRemoved(const QString&)",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

