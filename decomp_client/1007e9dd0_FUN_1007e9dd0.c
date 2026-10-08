
void FUN_1007e9dd0(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f7e30;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x38] = (QObject)0x0;
  param_1[0x39] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

