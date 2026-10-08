
void FUN_10038b930(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f1950;
  *(QObject **)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0xf8);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (QObject)0x0;
  return;
}

