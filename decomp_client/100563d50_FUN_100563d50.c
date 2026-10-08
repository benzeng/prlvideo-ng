
void FUN_100563d50(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  QKeySequence *this;
  Data *pDVar5;
  long lVar6;
  Data *local_50 [2];
  int *local_40;
  Data *local_38;
  undefined1 local_29;
  
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),0));
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_29 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100563dea;
    }
    FUN_100533ef0(&local_40,local_40);
  }
LAB_100563dea:
  uVar4 = *(uint *)(local_38 + 8);
  if (*(uint *)(local_38 + 0xc) != uVar4) {
    if (1 < *(uint *)local_38) {
      FUN_100534020(&local_38,*(uint *)(local_38 + 4));
      uVar4 = *(uint *)(local_38 + 8);
    }
    FUN_100560f00(local_50,param_1 + 0x20,*(undefined8 *)(local_38 + (long)(int)uVar4 * 8 + 0x10));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
    uVar3 = FUN_100708300(local_50);
    if ((uVar3 & 8) == 0) {
      FUN_1005a5f40(*(undefined8 *)(param_1 + 0x48));
    }
    QWidget::setEnabled(SUB81(uVar2,0));
    if (*(int *)local_50[0] != -1) {
      if (*(int *)local_50[0] != 0) {
        LOCK();
        *(int *)local_50[0] = *(int *)local_50[0] + -1;
        local_29 = *(int *)local_50[0] != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100563eba;
      }
      iVar1 = *(int *)(local_50[0] + 0xc);
      if (iVar1 != *(int *)(local_50[0] + 8)) {
        lVar6 = (long)*(int *)(local_50[0] + 8) * 8 + (long)iVar1 * -8;
        this = (QKeySequence *)(local_50[0] + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_50[0]);
    }
  }
LAB_100563eba:
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
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

