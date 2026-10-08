
void FUN_1007871c0(QObject *param_1,QObject *param_2)

{
  QObject *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222b190;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f72c0;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(this + 0x18) = param_2;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e15d0;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

