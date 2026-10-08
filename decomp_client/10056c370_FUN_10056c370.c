
void FUN_10056c370(long param_1)

{
  int iVar1;
  uint uVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_40;
  int *local_38;
  undefined1 local_29;
  
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  uVar2 = *(uint *)(local_40 + 8);
  if (*(uint *)(local_40 + 0xc) == uVar2) {
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  else {
    if (1 < *(uint *)local_40) {
      FUN_100534020(&local_40,*(uint *)(local_40 + 4));
      uVar2 = *(uint *)(local_40 + 8);
    }
    *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(local_40 + (long)(int)uVar2 * 8 + 0x10);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10056c44f;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_10056c44f:
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      if (*local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    FUN_100533ef0(&local_38,local_38);
  }
  return;
}

