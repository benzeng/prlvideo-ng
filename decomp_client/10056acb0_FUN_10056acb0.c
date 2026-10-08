
void FUN_10056acb0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar1 = FUN_1005a5f40(uVar2);
  QAbstractItemModel::beginResetModel();
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  QAbstractItemModel::endResetModel();
  FUN_10056aa80(param_1);
  return;
}

