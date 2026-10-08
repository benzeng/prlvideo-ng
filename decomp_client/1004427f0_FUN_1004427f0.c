
void FUN_1004427f0(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f26f0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0xa0);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

