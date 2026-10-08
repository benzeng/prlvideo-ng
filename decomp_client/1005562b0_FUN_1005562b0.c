
void FUN_1005562b0(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  Data *pDVar5;
  int *local_40;
  Data *local_38;
  undefined1 local_29;
  
  cVar2 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    return;
  }
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_29 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100556325;
    }
    FUN_100533ef0(&local_40,local_40);
  }
LAB_100556325:
  uVar4 = *(uint *)(local_38 + 8);
  if (*(uint *)(local_38 + 0xc) != uVar4) {
    if (1 < *(uint *)local_38) {
      FUN_100534020(&local_38,*(uint *)(local_38 + 4));
      uVar4 = *(uint *)(local_38 + 8);
    }
    lVar3 = FUN_100552190(param_1 + 0x20,*(undefined8 *)(local_38 + (long)(int)uVar4 * 8 + 0x10));
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_100557c00(*(long *)(param_1 + 0x30) + 0x10,lVar3);
        QAbstractItemModel::beginResetModel();
        QAbstractItemModel::endResetModel();
      }
      FUN_10083d2c0(*(undefined8 *)(param_1 + 0x10));
      FUN_100554d00(param_1);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

