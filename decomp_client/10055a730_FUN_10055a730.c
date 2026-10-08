
void FUN_10055a730(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f3090;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x58);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  return;
}

