
void FUN_1005fb9e0(QObject *param_1)

{
  QObject *this;
  
  FUN_1005ecd90();
  *(undefined ***)param_1 = &PTR_FUN_1022202c0;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f4c20;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(QObject **)(param_1 + 0x40) = this;
  return;
}

