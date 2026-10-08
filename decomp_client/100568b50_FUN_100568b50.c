
void FUN_100568b50(QObject *param_1,QObject *param_2)

{
  void *pvVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f3620;
  pvVar1 = operator_new(0x80);
  *(void **)(param_1 + 0x18) = pvVar1;
  QAbstractItemModel::QAbstractItemModel((QAbstractItemModel *)(param_1 + 0x20),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f34a0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  param_1[0x38] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

