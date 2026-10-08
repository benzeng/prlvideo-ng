
void FUN_1006913f0(QObject *param_1)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102224860;
  pvVar1 = operator_new(0x30);
  FUN_100690c70(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_1000871d0("Actions::ActionType",0,1);
  return;
}

