
void FUN_1007863c0(QObject *param_1,undefined4 param_2,QObject *param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222b0d0;
  pvVar1 = operator_new(0x50);
  FUN_1007862e0(pvVar1,param_1,param_2,param_3);
  *(void **)(param_1 + 0x10) = pvVar1;
  pvVar2 = operator_new(0x18);
  FUN_10078f3f0(pvVar2,*(undefined8 *)((long)pvVar1 + 0x10));
  *(void **)((long)pvVar1 + 0x40) = pvVar2;
  return;
}

