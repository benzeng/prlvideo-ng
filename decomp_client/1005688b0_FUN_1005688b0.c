
void FUN_1005688b0(long param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  
  QAbstractItemModel::beginResetModel();
  puVar1 = *(uint **)(param_1 + 0x10);
  if (1 < *puVar1) {
    FUN_10056ea70((undefined8 *)(param_1 + 0x10),puVar1[1]);
    puVar1 = *(uint **)(param_1 + 0x10);
  }
  FUN_1006b0df0(*(undefined8 *)(puVar1 + ((long)param_2 + (long)(int)puVar1[2]) * 2 + 4),param_3);
  QAbstractItemModel::endResetModel();
  return;
}

