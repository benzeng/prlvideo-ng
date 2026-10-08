
void FUN_1001edd70(undefined8 param_1,long param_2)

{
  char cVar1;
  long local_38;
  long local_30;
  long local_28;
  
  if (param_2 == 0) {
    return;
  }
  QObject::connect(&local_28,param_2,"2downloadProgress(const DownloadProgressData&)",param_1,
                   "1onOsImageDownloadProgress(const DownloadProgressData&)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2validationStarted()",param_1,
                     "1onOsImageValidationStarted()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,param_2,"2validationStarted()",param_1,
                     "1onOsImageValidationStarted()",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,param_2,"2taskFinished(PRL_RESULT)",param_1,
                       "1onOsImageDownloadFinished(PRL_RESULT)",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1001edeaf;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,param_2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onOsImageDownloadFinished(PRL_RESULT)",0);
LAB_1001edeaf:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

