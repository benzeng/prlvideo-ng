
void FUN_100389e00(QModelIndex *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  *(undefined ***)param_1 = &PTR_FUN_10220f570;
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(int *)(*plVar1 + 0xc) != *(int *)(*plVar1 + 8)) {
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_30 = 0;
    local_38 = 0;
    QAbstractItemModel::beginRemoveRows(param_1,(int)&local_40,0);
    FUN_10038ae10(*(undefined8 *)(param_1 + 0x10));
    QAbstractItemModel::endRemoveRows();
    plVar1 = *(long **)(param_1 + 0x10);
  }
  if (plVar1 == (long *)0x0) goto LAB_100389ea8;
  piVar2 = (int *)*plVar1;
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100389ea0;
      piVar2 = (int *)*plVar1;
    }
    FUN_10038b140(plVar1,piVar2);
  }
LAB_100389ea0:
  operator_delete(plVar1);
LAB_100389ea8:
  QAbstractListModel::~QAbstractListModel((QAbstractListModel *)param_1);
  return;
}

