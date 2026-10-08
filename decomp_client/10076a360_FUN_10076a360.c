
void FUN_10076a360(QObject *param_1,QObject *param_2)

{
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f6820;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15e8;
  param_1[0x30] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

