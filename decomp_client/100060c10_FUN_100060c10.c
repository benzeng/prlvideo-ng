
void FUN_100060c10(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ff760;
  pvVar1 = operator_new(0x40);
  FUN_10005edb0(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

