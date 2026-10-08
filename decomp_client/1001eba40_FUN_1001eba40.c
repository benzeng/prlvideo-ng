
void FUN_1001eba40(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021ef250;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1001eef00(param_1 + 0x28);
  return;
}

