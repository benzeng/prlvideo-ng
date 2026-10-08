
void FUN_10056fa10(long param_1,CPortForwarding *param_2)

{
  QAbstractItemModel::beginResetModel();
  CPortForwarding::operator=((CPortForwarding *)(param_1 + 0x20),param_2);
  QAbstractItemModel::endResetModel();
  return;
}

