
void FUN_10054b520(QObject *param_1)

{
  QObject *this;
  void *pvVar1;
  
  FUN_100525900();
  *(undefined ***)param_1 = &PTR_FUN_10221b160;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221b348;
  this = operator_new(0x40);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f2c30;
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = operator_new(0x58);
  *(void **)(this + 0x18) = pvVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x30) = PTR_shared_null_1021e1288;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(QObject **)(param_1 + 0x48) = this;
  *(QObject **)(this + 0x10) = param_1;
  (**(code **)(*(long *)param_1 + 0x1a8))(param_1);
  return;
}

