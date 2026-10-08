
void FUN_10076b3d0(QObject *param_1)

{
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102229a20;
  this = operator_new(0x38);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f6820;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e15e8;
  this[0x30] = (QObject)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_10076a4d0(this);
  return;
}

