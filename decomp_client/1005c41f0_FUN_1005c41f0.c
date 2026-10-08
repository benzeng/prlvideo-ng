
void FUN_1005c41f0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  QObject *this;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f4100;
  *(QObject **)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  this = operator_new(0x18);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f41b8;
  *(undefined8 *)(this + 0x10) = param_2;
  *(QObject **)(param_1 + 0x18) = this;
  return;
}

