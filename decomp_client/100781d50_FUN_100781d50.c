
void FUN_100781d50(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222a5e0;
  pvVar1 = operator_new(0x28);
  FUN_1007819e0(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

