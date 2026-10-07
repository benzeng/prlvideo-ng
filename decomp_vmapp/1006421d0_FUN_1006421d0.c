
void FUN_1006421d0(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bc9690;
  pvVar1 = operator_new(0x30);
  FUN_100641e00(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

