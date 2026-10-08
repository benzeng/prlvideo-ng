
void FUN_10054a080(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f2c30;
  *(undefined8 *)(param_1 + 0x10) = 0;
  pvVar1 = operator_new(0x58);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  return;
}

