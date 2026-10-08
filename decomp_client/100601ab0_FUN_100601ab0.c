
void FUN_100601ab0(QObject *param_1,QObject *param_2,undefined8 param_3,undefined1 param_4,
                  QObject *param_5)

{
  QObject *this;
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102220b60;
  this = operator_new(0x40);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f4e80;
  *(QObject **)(this + 0x10) = param_1;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(this + 0x28) = uVar1;
  *(QObject **)(this + 0x30) = param_2;
  this[0x38] = (QObject)0x0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1006017e0(this,param_3,param_4);
  return;
}

