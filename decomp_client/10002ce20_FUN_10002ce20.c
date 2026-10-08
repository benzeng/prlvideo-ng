
void FUN_10002ce20(QObject *param_1)

{
  QTimer *this;
  
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x18) = this;
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  return;
}

