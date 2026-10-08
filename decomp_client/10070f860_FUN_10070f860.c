
void FUN_10070f860(QObject *param_1,QObject *param_2)

{
  QObject *this;
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102226970;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f5bc0;
  *(QObject **)(this + 0x10) = param_1;
  auVar1._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar1._0_8_ = PTR_shared_null_1021e15e8;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(this + 0x18) = auVar1;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

