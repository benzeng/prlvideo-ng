
void FUN_10038feb0(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f1a40;
  *(QObject **)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0xb0);
  FUN_100396f40(pvVar1,param_2);
  *(void **)(param_1 + 0x160) = pvVar1;
  pvVar1 = operator_new(0x38);
  FUN_1003952b0(pvVar1,0);
  *(void **)(param_1 + 0x168) = pvVar1;
  FUN_10038ff60(param_1);
  FUN_10038ffd0(param_1);
  return;
}

