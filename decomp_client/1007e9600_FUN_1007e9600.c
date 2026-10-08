
void FUN_1007e9600(QObject *param_1)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222f9a0;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar2;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(local_30,DAT_1023108e0,"2mountNotification(const QString&)",param_1,
                   "1onMountNotification(const QString&)",2);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

