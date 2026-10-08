
void FUN_1005e15f0(QObject *param_1)

{
  QObject *this;
  
  FUN_1005eca00();
  *(undefined ***)param_1 = &PTR_FUN_10221eb80;
  *(undefined8 *)(param_1 + 0x50) = 0;
  this = operator_new(0x20);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f44c0;
  *(QObject **)(this + 0x10) = param_1;
  FUN_1005e1010(this);
  *(QObject **)(param_1 + 0x50) = this;
  return;
}

