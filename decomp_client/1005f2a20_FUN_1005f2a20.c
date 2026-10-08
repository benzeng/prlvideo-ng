
void FUN_1005f2a20(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  QTimer *this;
  QTimer *this_00;
  char cVar1;
  long local_48;
  long local_40 [2];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f4b60;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x38) = 0;
  this = (QTimer *)(param_1 + 0x40);
  QTimer::QTimer(this,(QObject *)0x0);
  this_00 = (QTimer *)(param_1 + 0x60);
  QTimer::QTimer(this_00,(QObject *)0x0);
  QTimer::setInterval((int)this);
  param_1[0x5c] = (QObject)((byte)param_1[0x5c] | 1);
  QObject::connect(local_40,this,"2timeout()",param_1,"1onFakeProgressTimeout()",0);
  if (local_40[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_40);
  QTimer::setInterval((int)this_00);
  QObject::connect(&local_48,this_00,"2timeout()",param_1,"1onPollingOsImagesTimeout()",0);
  if ((cVar1 != '\0') && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

