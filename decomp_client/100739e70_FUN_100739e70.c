
void FUN_100739e70(long param_1,int param_2)

{
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x28) == param_2) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x10) + 0x28) = param_2;
  QSortFilterProxyModel::sort(param_1,0,param_2);
  FUN_100857f00(param_1,param_2);
  return;
}

