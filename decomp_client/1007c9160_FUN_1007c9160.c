
void FUN_1007c9160(QObject *param_1,QObject *param_2)

{
  QObject *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222e040;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f79b0;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x20) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1007c8ef0(this);
  return;
}

