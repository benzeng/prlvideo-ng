
void FUN_1005715f0(long param_1,CPortForwarding *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  QAbstractItemModel::beginResetModel();
  CPortForwarding::operator=((CPortForwarding *)(lVar1 + 0x20),param_2);
  QAbstractItemModel::endResetModel();
  FUN_100571430(param_1);
  return;
}

