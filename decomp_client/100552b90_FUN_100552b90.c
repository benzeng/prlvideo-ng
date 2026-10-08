
void FUN_100552b90(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f2f80;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0xa0);
  *(void **)(param_1 + 0x18) = pvVar1;
  QAbstractItemModel::QAbstractItemModel((QAbstractItemModel *)(param_1 + 0x20),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f2e00;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar2._0_8_ = PTR_shared_null_1021e15e8;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar2;
  return;
}

