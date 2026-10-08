
void FUN_10002bc10(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222e370;
  pvVar1 = operator_new(0x48);
  FUN_10002ae10(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_10002b050(pvVar1);
  return;
}

