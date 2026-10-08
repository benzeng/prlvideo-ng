
void FUN_10054e120(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,param_2,"2downloadProgressChanged(int)",param_1,
                   "1onInstallPaxAgentDownloadProgress(int)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2currentStageChanged(int)",param_1,
                     "1updateUiForInstallPaxTaskStage(int)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2currentStageChanged(int)",param_1,
                     "1updateUiForInstallPaxTaskStage(int)",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,param_2,"2taskFinished(PRL_RESULT)",param_1,
                       "1onInstallPaxAgentTaskFinished(PRL_RESULT)",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10054e24f;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,param_2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onInstallPaxAgentTaskFinished(PRL_RESULT)",0);
LAB_10054e24f:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

