
void FUN_100641e00(QObject *param_1,undefined8 param_2)

{
  byte bVar1;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bc95a0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_100ba20d0;
  param_1[0x20] = (QObject)0x0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  QTimer::singleShot(180000,param_1,"1cancel()");
  QObject::connect(local_30,param_1,"2finished(const QString&)",*(undefined8 *)(param_1 + 0x10),
                   "2collected(const QString&)",2);
  bVar1 = 1;
  if (local_30[0] != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  if (bVar1 != 0) {
    FUN_1008e3970("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "CInstalledSoftwareCollector.cpp",0x1ae,"CInstalledSoftwareCollectorPrivate");
  }
  return;
}

