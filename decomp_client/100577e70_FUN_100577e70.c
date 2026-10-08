
void FUN_100577e70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,param_2,"2subTaskStarted(int)",param_1,
                   "1updateUiForInstallToolboxTaskStage(int)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2taskFinished(PRL_RESULT)",param_1,
                     "1onInstallToolboxTaskFinished(PRL_RESULT)",0);
LAB_10057801b:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_2,"2downloadProgress(DownloadProgressData)",param_1,
                     "1onDownloadProgress(DownloadProgressData)",0);
LAB_100578046:
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,param_2,"2installProgress(int)",param_1,"1onInstallProgress(int)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2taskFinished(PRL_RESULT)",param_1,
                     "1onInstallToolboxTaskFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_30 == 0)) goto LAB_10057801b;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_2,"2downloadProgress(DownloadProgressData)",param_1,
                     "1onDownloadProgress(DownloadProgressData)",0);
    if ((cVar1 == '\0') || (local_38 == 0)) goto LAB_100578046;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,param_2,"2installProgress(int)",param_1,"1onInstallProgress(int)",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,param_2,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                       "1onDownloadStateChanged(CTaskDownloadFile::State)",0);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100578096;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_2,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                   "1onDownloadStateChanged(CTaskDownloadFile::State)",0);
LAB_100578096:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

