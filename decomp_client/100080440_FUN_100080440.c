
void FUN_100080440(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222fd30;
  pvVar1 = operator_new(0x30);
  FUN_10007f170(pvVar1);
  *(void **)(param_1 + 0x10) = pvVar1;
  *(QObject **)((long)pvVar1 + 0x10) = param_1;
  *(undefined8 *)((long)pvVar1 + 0x18) = param_2;
  return;
}

