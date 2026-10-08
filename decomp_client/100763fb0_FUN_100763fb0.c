
void FUN_100763fb0(QObject *param_1,QObject *param_2)

{
  QObject *this;
  undefined8 uVar1;
  long local_38;
  QObject *local_30;
  QObject *local_28;
  
  local_28 = param_2;
  this = operator_new(0x38);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f65e0;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(this + 0x10) = uVar1;
  *(QObject **)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  local_30 = this;
  QObject::connect(&local_38,this,"2snapshotCountChanged(int)",param_1,"2dataChanged()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  FUN_100764390(param_1 + 0x20,&local_28,&local_30);
  FUN_100763b60(this);
  return;
}

