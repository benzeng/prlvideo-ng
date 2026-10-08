
void FUN_10056c540(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  int iVar4;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  int *local_30;
  undefined1 local_21;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == -1) {
    QAbstractItemView::selectionModel();
    QItemSelectionModel::clearSelection();
    return;
  }
  local_30 = (int *)PTR_shared_null_1021e15e8;
  iVar4 = (int)(param_1 + 0x20);
  cVar2 = QAbstractItemModel::hasIndex(iVar4,iVar1,(QModelIndex *)0x0);
  if (cVar2 == '\0') {
    local_48 = -1;
    local_38 = 0;
    local_44 = 0xffffffff;
  }
  else {
    local_44 = 0;
    local_48 = iVar1;
    local_38 = param_1 + 0x20;
  }
  local_40 = 0;
  QAbstractItemModel::hasIndex(iVar4,*(int *)(param_1 + 0x40),(QModelIndex *)0x1);
  QItemSelection::select((QModelIndex *)&local_30,(QModelIndex *)&local_48);
  plVar3 = (long *)QAbstractItemView::selectionModel();
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_30,0x13);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_100533ef0(&local_30,local_30);
  }
  return;
}

