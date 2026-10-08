
void FUN_10079c430(QObject *param_1)

{
  undefined8 uVar1;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222c5f0;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e12f0;
  uVar1 = FUN_100794960();
  QObject::connect(local_30,uVar1,"2beforeApplianceRemoved(const CApplianceWrap&)",param_1,
                   "1onApplianceRemove(const CApplianceWrap&)",0);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

