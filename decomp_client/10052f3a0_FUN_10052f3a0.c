
void FUN_10052f3a0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f29f0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x40);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15d0;
  return;
}

