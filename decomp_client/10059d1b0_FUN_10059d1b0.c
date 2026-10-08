
void FUN_10059d1b0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10221d8e0;
  pvVar1 = operator_new(0x60);
  FUN_100599d90(pvVar1,param_1,param_2,param_3);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

