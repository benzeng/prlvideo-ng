
void FUN_1001a6110(QObject *param_1)

{
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021fe230;
  this = operator_new(0x20);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021fe2f0;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  FUN_1001a5f80(this);
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1001a6230(param_1);
  return;
}

