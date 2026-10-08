
void FUN_100380f70(CBaseDialog *param_1,undefined8 param_2)

{
  QObject *this;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0x100);
  *(undefined ***)param_1 = &PTR_FUN_10220edf0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220efe0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10220f030;
  this = operator_new(0x30);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_10220f0d0;
  *(CBaseDialog **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(QObject **)(param_1 + 0x60) = this;
  FUN_1003809f0(this);
  return;
}

