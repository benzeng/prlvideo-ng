
void FUN_10002cd90(QObject *param_1,undefined8 param_2)

{
  QTimer *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222e520;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x18) = this;
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  FUN_10002ce70(param_1);
  return;
}

