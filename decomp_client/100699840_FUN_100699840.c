
void FUN_100699840(QObject *param_1)

{
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102224d40;
  this = operator_new(0x18);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f55b0;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(param_1 + 0x18) = this;
  return;
}

