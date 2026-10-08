
void FUN_1003491d0(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d2a0;
  pvVar1 = operator_new(0x58);
  FUN_1003477b0(pvVar1,param_1,param_2);
  *(void **)(param_1 + 0x10) = pvVar1;
  pvVar1 = operator_new(0x48);
  FUN_100a678b0(pvVar1,param_2);
  *(void **)(param_1 + 0x18) = pvVar1;
  return;
}

