
void FUN_1001d5fe0(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff6a0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x18);
  FUN_1001e0200(pvVar1,param_1);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x32] = (QObject)0x0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_100066a30(param_1);
  FUN_100a3c710();
  return;
}

