
void FUN_10056aa80(long param_1)

{
  int iVar1;
  char cVar2;
  Data *pDVar3;
  undefined8 uVar4;
  long lVar5;
  int *local_40;
  Data *local_38;
  undefined1 local_29;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  cVar2 = FUN_1005a5f40(uVar4);
  if (cVar2 != '\0') {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0));
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
      if ((bool)local_29) goto LAB_10056ab39;
    }
    FUN_100533ef0(&local_40,local_40);
  }
LAB_10056ab39:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0));
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
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

