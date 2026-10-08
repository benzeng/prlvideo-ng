
void FUN_10005ea10(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021fef90;
  pvVar1 = operator_new(0x28);
  FUN_10005e560(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_10005e5f0(pvVar1);
  return;
}

