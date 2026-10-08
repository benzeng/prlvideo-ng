
void FUN_10035fb40(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220dc30;
  pvVar1 = operator_new(0x58);
  FUN_10035f070(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  *(undefined8 *)((long)pvVar1 + 0x18) = param_2;
  *(QObject **)((long)pvVar1 + 0x10) = param_1;
  FUN_10035f270(pvVar1);
  return;
}

