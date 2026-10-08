
void FUN_100532150(QObject *param_1)

{
  QObject *this;
  void *pvVar1;
  
  FUN_100525900();
  *(undefined ***)param_1 = &PTR_FUN_10221a600;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221a7e8;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f29f0;
  *(QObject **)(this + 0x10) = param_1;
  pvVar1 = operator_new(0x40);
  *(void **)(this + 0x18) = pvVar1;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e15d0;
  *(QObject **)(param_1 + 0x48) = this;
  FUN_10052f560(this);
  FUN_10052f6f0(this);
  FUN_10052f8c0(this);
  return;
}

