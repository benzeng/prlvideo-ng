
void FUN_100443790(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  QObject *this;
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0xb);
  *(undefined ***)param_1 = &PTR_FUN_102212650;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212840;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102212890;
  this = operator_new(0x30);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021f26f0;
  *(CBaseDialog **)(this + 0x10) = param_1;
  pvVar1 = operator_new(0xa0);
  *(void **)(this + 0x18) = pvVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(QObject **)(param_1 + 0x60) = this;
  FUN_1004428b0(this,param_2);
  return;
}

