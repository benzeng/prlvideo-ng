
void FUN_1007c8a70(QObject *param_1,QObject *param_2)

{
  QObject *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222df80;
  this = operator_new(0x30);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f78f0;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(this + 0x18) = param_2;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(this + 0x28) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1007c8290(this);
  return;
}

