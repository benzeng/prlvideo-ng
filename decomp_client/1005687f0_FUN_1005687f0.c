
void FUN_1005687f0(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 local_28;
  
  local_28 = in_RAX;
  QAbstractItemModel::beginResetModel();
  if (*(long *)(param_1 + 0x10) != *param_2) {
    FUN_10056ec80(&local_28,param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = local_28;
    local_28 = uVar1;
    FUN_10056e3a0(&local_28);
  }
  QAbstractItemModel::endResetModel();
  return;
}

