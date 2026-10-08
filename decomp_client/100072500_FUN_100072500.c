
void FUN_100072500(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102228b30;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_100072590(param_1);
  return;
}

