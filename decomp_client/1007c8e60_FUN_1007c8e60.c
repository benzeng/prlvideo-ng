
void FUN_1007c8e60(QObject *param_1,QObject *param_2,undefined8 param_3)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f79b0;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

