
void FUN_100b5eb50(QObject *param_1,undefined4 param_2,QObject *param_3)

{
  QObject *this;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10223f750;
  this = operator_new(0x48);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_10223f810;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (QObject)0x0;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

