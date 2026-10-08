
void FUN_1003f99c0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  QObject *this;
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102210ab0;
  this = operator_new(0x50);
  QObject::QObject(this,param_3);
  *(undefined ***)this = &PTR_FUN_1021f2100;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e15d0;
  auVar1._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar1._0_8_ = PTR_shared_null_1021e1288;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(this + 0x28) = auVar1;
  *(undefined4 *)(this + 0x40) = 0x80000000;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined **)(this + 0x48) = PTR_shared_null_1021e12f0;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

