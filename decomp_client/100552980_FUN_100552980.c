
void FUN_100552980(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100557c00(*(long *)(param_1 + 0x10) + 0x10);
    QAbstractItemModel::beginResetModel();
    QAbstractItemModel::endResetModel();
    return;
  }
  return;
}

