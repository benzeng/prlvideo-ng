
int FUN_100568870(long param_1,undefined8 param_2)

{
  QAbstractItemModel::beginResetModel();
  FUN_10056cc00(param_1 + 0x10,param_2);
  QAbstractItemModel::endResetModel();
  return (*(int *)(*(long *)(param_1 + 0x10) + 0xc) + -1) - *(int *)(*(long *)(param_1 + 0x10) + 8);
}

