
void FUN_1009bcdf0(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102236340;
  pvVar1 = operator_new(0x50);
  FUN_1009bc670(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

