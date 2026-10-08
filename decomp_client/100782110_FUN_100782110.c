
void FUN_100782110(QObject *param_1,QObject *param_2)

{
  long in_RAX;
  QTimer *this;
  long local_28;
  
  local_28 = in_RAX;
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222a6a0;
  param_1[0x10] = (QObject)0x0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x18) = this;
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  QObject::connect(&local_28,this,"2timeout()",param_1,"1onTimeout()",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

