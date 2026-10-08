
void FUN_1007819e0(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f7080;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15e8;
  param_1[0x20] = (QObject)0x0;
  pvVar1 = operator_new(0x20);
  FUN_1007825b0(pvVar1,param_1);
  FUN_100781ad0(param_1,pvVar1);
  pvVar1 = operator_new(0x20);
  FUN_1007826e0(pvVar1,param_1);
  FUN_100781ad0(param_1,pvVar1);
  FUN_100781b50(param_1);
  return;
}

