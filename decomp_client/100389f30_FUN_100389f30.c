
void FUN_100389f30(QModelIndex *param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(int *)(**(long **)(param_1 + 0x10) + 0xc) != *(int *)(**(long **)(param_1 + 0x10) + 8)) {
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    local_18 = 0;
    local_20 = 0;
    QAbstractItemModel::beginRemoveRows(param_1,(int)&local_28,0);
    FUN_10038ae10(*(undefined8 *)(param_1 + 0x10));
    QAbstractItemModel::endRemoveRows();
  }
  return;
}

