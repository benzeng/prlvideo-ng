
QObject * FUN_10098fba0(int param_1,QObject *param_2)

{
  QObject *this;
  undefined8 uVar1;
  
  this = (QObject *)0x0;
  if (param_1 == 1) {
    this = operator_new(0x20);
    FUN_10098fdb0(this,param_2,0);
  }
  else if (param_1 == 0) {
    this = operator_new(0x20);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_102233ae0;
    uVar1 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    *(undefined8 *)(this + 0x10) = uVar1;
    *(QObject **)(this + 0x18) = param_2;
    *(undefined ***)this = &PTR_FUN_1022335b0;
  }
  return this;
}

