
void FUN_1007ef450(QObject *param_1,QObject *param_2)

{
  QObject *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222ff70;
  this = operator_new(0x48);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f7e30;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e1288;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x38] = (QObject)0x0;
  this[0x39] = (QObject)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1007e9e20(this);
  return;
}

