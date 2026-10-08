
void FUN_10056c830(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_38 = in_RAX;
  QAbstractItemModel::beginResetModel();
  if (*(long *)(lVar1 + 0x30) != *param_2) {
    FUN_10056ec80(&local_38,param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = local_38;
    local_38 = uVar2;
    FUN_10056e3a0(&local_38);
  }
  QAbstractItemModel::endResetModel();
  FUN_10056aa80(*(undefined8 *)(param_1 + 0x30));
  return;
}

