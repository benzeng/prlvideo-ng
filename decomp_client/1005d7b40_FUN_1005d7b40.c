
void FUN_1005d7b40(QObject *param_1,undefined8 param_2)

{
  QObject *this;
  
  FUN_1005eca00(param_1,param_2,1,0);
  *(undefined ***)param_1 = &PTR_FUN_10221e920;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x58] = (QObject)0x0;
  this = operator_new(0x20);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f4340;
  *(QObject **)(this + 0x10) = param_1;
  FUN_1005d5f50(this);
  FUN_1005d60b0(this);
  *(QObject **)(param_1 + 0x50) = this;
  return;
}

