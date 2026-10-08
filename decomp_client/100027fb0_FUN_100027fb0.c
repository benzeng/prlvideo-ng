
void FUN_100027fb0(long param_1)

{
  char cVar1;
  void *pvVar2;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  cVar1 = '\0';
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x10),"2currentPageIdChanged(int,int)",
                   param_1,"1updateButtonState()",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_38,DAT_1023108e0,
                   "2licenseChanged(const QString&, const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,param_1,"1updateButtonState()",0);
  if ((cVar1 == '\0') || (local_38 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x10),"2busyChanged(bool)",param_1,
                     "1onBusyStateChanged(bool)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x10),"2busyChanged(bool)",param_1,
                     "1onBusyStateChanged(bool)",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x10),"2finished(int)",param_1,
                       "1cleanupButton()",0);
      if ((cVar1 != '\0') && (local_48 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100028166;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x10),"2finished(int)",param_1,
                   "1cleanupButton()",0);
LAB_100028166:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

