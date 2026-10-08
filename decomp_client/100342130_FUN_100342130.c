
void FUN_100342130(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  QTimer *this;
  long local_30 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220cc00;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  param_1[0x20] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x38) = this;
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  QObject::connect(local_30,this,"2timeout()",param_1,"1onWatchedWidgetResized()",0);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

