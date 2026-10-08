
void FUN_100554d00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  Data *pDVar6;
  int *local_40;
  Data *local_38;
  undefined1 local_29;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
  QWidget::setDisabled(SUB81(uVar2,0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),0));
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_29 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100554dac;
    }
    FUN_100533ef0(&local_40,local_40);
  }
LAB_100554dac:
  uVar5 = *(uint *)(local_38 + 8);
  if (*(uint *)(local_38 + 0xc) != uVar5) {
    if (1 < *(uint *)local_38) {
      FUN_100534020(&local_38,*(uint *)(local_38 + 4));
      uVar5 = *(uint *)(local_38 + 8);
    }
    lVar3 = FUN_100552190(param_1 + 0x20,*(undefined8 *)(local_38 + (long)(int)uVar5 * 8 + 0x10));
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80);
      uVar4 = FUN_100714bb0(lVar3);
      if ((uVar4 & 8) == 0) {
        FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
      }
      QWidget::setEnabled(SUB81(uVar2,0));
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
      uVar4 = FUN_100714bb0(lVar3);
      if ((uVar4 & 8) == 0) {
        FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
      }
      QWidget::setEnabled(SUB81(uVar2,0));
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
      pDVar6 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

