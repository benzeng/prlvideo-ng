
void FUN_1001e0120(QObject *param_1,QObject *param_2)

{
  QObject *this;
  undefined1 auVar1 [16];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021ff820;
  this = operator_new(0x48);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021ef100;
  *(QObject **)(this + 0x10) = param_1;
  auVar1._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar1._0_8_ = PTR_shared_null_1021e15d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(this + 0x18) = auVar1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  QTimer::singleShot(0,this,"1startApp()");
  FUN_1001d7940(this);
  return;
}

