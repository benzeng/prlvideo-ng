
void FUN_10036a250(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10220df30;
  pvVar1 = operator_new(0x98);
  FUN_1003689f0(pvVar1,param_1,param_2,param_3,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

