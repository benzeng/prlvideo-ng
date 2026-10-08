
void FUN_10035ab50(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220da50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220dad0;
  pvVar1 = operator_new(0xb0);
  FUN_10035d790(pvVar1,param_2,param_1 + 0x10);
  *(void **)(param_1 + 0x18) = pvVar1;
  pvVar2 = operator_new(0x38);
  FUN_100361630(pvVar2,pvVar1);
  *(void **)(param_1 + 0x20) = pvVar2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_10035ac20(param_1);
  FUN_10006af70(param_1,1);
  return;
}

