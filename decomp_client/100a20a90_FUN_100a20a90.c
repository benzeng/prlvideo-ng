
void FUN_100a20a90(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  Connection local_30 [8];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102237ad0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  if (DAT_102311298 == (void *)0x0) {
    pvVar1 = operator_new(0x10);
    FUN_100a22ec0(pvVar1);
    DAT_102280cc8 = 1;
    DAT_102311298 = pvVar1;
  }
  QObject::connect(local_30,param_2,"2sslErrors(QList<QSslError>)",param_1,
                   "1qrepSslErrors(QList<QSslError>)",1);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

