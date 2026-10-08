
void FUN_1000ef920(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f9090;
  pvVar1 = operator_new(0x58);
  FUN_1000efd40(pvVar1,param_1,param_2);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

