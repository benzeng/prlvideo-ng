
void FUN_1000319c0(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222e5a8;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  pvVar1 = operator_new(0x20);
  FUN_10002cd90(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_100031aa0(param_1);
  return;
}

