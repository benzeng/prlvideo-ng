
void FUN_10074a300(QObject *param_1,QObject *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102228300;
  pvVar1 = operator_new(0x68);
  FUN_100748a60(pvVar1,param_1,param_3,param_4,param_5);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

