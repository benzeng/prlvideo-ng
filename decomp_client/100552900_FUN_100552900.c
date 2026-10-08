
undefined4 * FUN_100552900(undefined4 *param_1,long param_2,undefined8 param_3)

{
  if (*(long *)(param_2 + 0x10) == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    FUN_100559c70(*(long *)(param_2 + 0x10) + 0x10,param_3);
    QAbstractItemModel::beginResetModel();
    QAbstractItemModel::endResetModel();
    FUN_100552350(param_1,param_2,param_3);
  }
  return param_1;
}

