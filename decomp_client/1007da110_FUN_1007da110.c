
void FUN_1007da110(QObject *param_1,QObject *param_2)

{
  QTimer *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f7a70;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x20) = this;
  return;
}

