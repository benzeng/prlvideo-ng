
void FUN_100add630(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  QTimer *this;
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223ad80;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  this = (QTimer *)(param_1 + 0x28);
  QTimer::QTimer(this,(QObject *)0x0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x44] = (QObject)((byte)param_1[0x44] | 1);
  QTimer::setInterval((int)this);
  QObject::connect(local_40,this,"2timeout()",param_1,"1onResponseTimedOut()",0);
  if (local_40[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_40);
  return;
}

