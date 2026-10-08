
void FUN_100690c70(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f5420;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x18);
  FUN_100692520(pvVar1,param_1);
  *(void **)(param_1 + 0x18) = pvVar1;
  pvVar2 = operator_new(0x30);
  FUN_1006a5250(pvVar2,pvVar1,param_1);
  *(void **)(param_1 + 0x20) = pvVar2;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15d0;
  FUN_100690d60(param_1);
  return;
}

