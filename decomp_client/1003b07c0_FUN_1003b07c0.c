
void FUN_1003b07c0(QObject *param_1,QObject *param_2,undefined8 param_3,QObject *param_4)

{
  QObject *this;
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_102210660;
  this = operator_new(0x80);
  QObject::QObject(this,param_4);
  *(undefined ***)this = &PTR_FUN_1021f1d50;
  *(QObject **)(this + 0x10) = param_1;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(QObject **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = param_3;
  this[0x78] = (QObject)0x0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1003b0540(this);
  return;
}

