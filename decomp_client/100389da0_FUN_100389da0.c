
void FUN_100389da0(QAbstractListModel *param_1,QObject *param_2)

{
  undefined8 *puVar1;
  
  QAbstractListModel::QAbstractListModel(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220f570;
  puVar1 = operator_new(0x10);
  *puVar1 = PTR_shared_null_1021e15e8;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return;
}

