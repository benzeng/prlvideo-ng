
void FUN_1006faed0(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022267c0;
  pvVar1 = operator_new(0x60);
  FUN_1006f9300(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_1006f94d0(pvVar1);
  FUN_1006f9d50(pvVar1);
  FUN_100720b40((long)pvVar1 + 0x48);
  return;
}

