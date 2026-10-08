
void FUN_1007c7c10(QObject *param_1,QObject *param_2)

{
  QObject *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222dec0;
  this = operator_new(0x50);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f7830;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(this + 0x18) = param_2;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e1288;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1007c6940(this);
  return;
}

