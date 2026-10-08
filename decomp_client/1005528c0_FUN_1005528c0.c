
void FUN_1005528c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  QAbstractItemModel::beginResetModel();
  QAbstractItemModel::endResetModel();
  return;
}

