
void FUN_100746ec0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  char cVar1;
  void *pvVar2;
  long local_40;
  long local_38 [2];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f62e0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(local_38,DAT_1023108e0,"2serverStateChanged(const QString&, GUI::ServerState)",
                   param_1,"1onServerStateChanged(const QString&, GUI::ServerState)",0);
  if (local_38[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_40,DAT_1023108e0,
                   "2licenseChanged(const QString&, const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,param_1,"1onLicenseChanged()",0);
  if ((cVar1 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

