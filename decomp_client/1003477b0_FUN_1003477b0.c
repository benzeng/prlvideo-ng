
void FUN_1003477b0(QObject *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  QTimer *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021efac0;
  *(QObject **)(param_1 + 0x10) = param_2;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x28) = this;
  FUN_100d79750(param_1 + 0x30);
  param_1[0x50] = (QObject)0x0;
  *(byte *)(*(long *)(param_1 + 0x28) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x28) + 0x1c) | 1;
  QTimer::setInterval((int)*(undefined8 *)(param_1 + 0x28));
  FUN_1003478b0(param_1);
  return;
}

