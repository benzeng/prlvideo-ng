
void FUN_100766a00(undefined8 *param_1)

{
  void *pvVar1;
  long local_30 [2];
  
  FUN_100769d40();
  *param_1 = &PTR_FUN_102229780;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_100766b20(param_1);
  FUN_100766d40(param_1);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(local_30,DAT_1023108e0,
                   "2vmConfigurationChanged(const QString&, const CVmConfiguration&)",param_1,
                   "1updateVmsToArchive()",0);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

