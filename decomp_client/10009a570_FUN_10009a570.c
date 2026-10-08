
void FUN_10009a570(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  QTimer *this;
  long in_RAX;
  long local_38;
  
  local_38 = in_RAX;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f82b0;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  this = (QTimer *)(param_1 + 0x28);
  QTimer::QTimer(this,(QObject *)0x0);
  param_1[0x44] = (QObject)((byte)param_1[0x44] | 1);
  QTimer::setInterval((int)this);
  QObject::connect(&local_38,this,"2timeout()",param_1,"1onTimeout()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

