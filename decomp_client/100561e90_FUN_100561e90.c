
void FUN_100561e90(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f3390;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x68);
  *(void **)(param_1 + 0x18) = pvVar1;
  QAbstractItemModel::QAbstractItemModel((QAbstractItemModel *)(param_1 + 0x20),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f3210;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15d0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}

