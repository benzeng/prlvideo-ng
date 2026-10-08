
void FUN_10098e060(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1022334e0;
  pvVar1 = operator_new(8);
  FUN_10098d770(pvVar1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

