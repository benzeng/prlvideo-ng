
void FUN_100b5e350(QObject *param_1,QObject *param_2,undefined4 param_3)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10223f810;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = (QObject)0x0;
  return;
}

