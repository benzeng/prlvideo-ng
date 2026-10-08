
void FUN_10005e560(QObject *param_1,QObject *param_2)

{
  QTimer *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021ed610;
  *(QObject **)(param_1 + 0x10) = param_2;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x18) = this;
  param_1[0x20] = (QObject)0x0;
  return;
}

