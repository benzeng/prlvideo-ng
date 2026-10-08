
void FUN_100a06f30(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102236d50;
  pvVar1 = operator_new(0x30);
  FUN_100a06b60(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

