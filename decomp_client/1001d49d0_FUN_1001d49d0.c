
void FUN_1001d49d0(QObject *param_1)

{
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ef020;
  this = operator_new(0x20);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021eefb0;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_1001d3dc0(this,1);
  return;
}

