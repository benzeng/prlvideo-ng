
void FUN_10054ea80(QObject *param_1)

{
  QObject *this;
  void *pvVar1;
  
  FUN_100525900();
  *(undefined ***)param_1 = &PTR_FUN_10221b3f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221b5d8;
  this = operator_new(0x30);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f2d40;
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = operator_new(0x110);
  *(void **)(this + 0x18) = pvVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(QObject **)(param_1 + 0x48) = this;
  *(QObject **)(this + 0x10) = param_1;
  (**(code **)(*(long *)param_1 + 0x1a8))(param_1);
  return;
}

