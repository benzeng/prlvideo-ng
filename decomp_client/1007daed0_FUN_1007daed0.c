
void FUN_1007daed0(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222e430;
  pvVar1 = operator_new(0x30);
  FUN_1007da110(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_1007da2a0(pvVar1);
  return;
}

