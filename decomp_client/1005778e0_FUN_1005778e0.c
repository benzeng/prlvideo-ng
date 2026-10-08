
void FUN_1005778e0(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f3990;
  *(undefined8 *)(param_1 + 0x10) = 0;
  pvVar1 = operator_new(0xb0);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

