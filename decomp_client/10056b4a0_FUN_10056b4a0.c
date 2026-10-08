
void FUN_10056b4a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  int *local_40;
  Data *local_38;
  undefined1 local_29;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
  }
  cVar3 = FUN_1005a5f40(uVar6);
  if (cVar3 != '\0') {
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
      if ((bool)local_29) goto LAB_10056b528;
    }
    FUN_100533ef0(&local_40,local_40);
  }
LAB_10056b528:
  uVar4 = *(uint *)(local_38 + 8);
  if (*(uint *)(local_38 + 0xc) != uVar4) {
    if (1 < *(uint *)local_38) {
      FUN_100534020(&local_38,*(uint *)(local_38 + 4));
      uVar4 = *(uint *)(local_38 + 8);
    }
    uVar1 = **(undefined4 **)(local_38 + (long)(int)uVar4 * 8 + 0x10);
    QAbstractItemModel::beginResetModel();
    FUN_10056cd10(param_1 + 0x30,uVar1);
    QAbstractItemModel::endResetModel();
    FUN_10083d840(*(undefined8 *)(param_1 + 0x10));
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
    iVar2 = *(int *)(local_38 + 0xc);
    if (iVar2 != *(int *)(local_38 + 8)) {
      lVar7 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = local_38 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

