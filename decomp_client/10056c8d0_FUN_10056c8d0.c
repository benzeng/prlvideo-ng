
void FUN_10056c8d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long local_38;
  undefined8 local_30;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (DAT_102310970 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1006b2390(pvVar3);
    DAT_102274b20 = 1;
    DAT_102310970 = pvVar3;
  }
  FUN_1006b2520(&local_38,DAT_102310970);
  QAbstractItemModel::beginResetModel();
  if (*(long *)(lVar1 + 0x30) != local_38) {
    FUN_10056ec80(&local_30,&local_38);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = local_30;
    local_30 = uVar2;
    FUN_10056e3a0(&local_30);
  }
  QAbstractItemModel::endResetModel();
  FUN_10056e3a0(&local_38);
  FUN_10083d840(param_1);
  return;
}

