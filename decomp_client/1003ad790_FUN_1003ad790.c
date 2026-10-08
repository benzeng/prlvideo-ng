
void FUN_1003ad790(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  undefined *puVar1;
  QObject *this;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1022105a0;
  this = operator_new(0x40);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f1c50;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  puVar1 = PTR_shared_null_1021e12f0;
  auVar2._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar2._0_8_ = PTR_shared_null_1021e12f0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(this + 0x28) = auVar2;
  *(undefined **)(this + 0x38) = puVar1;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

