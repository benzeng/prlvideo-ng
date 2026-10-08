
void FUN_10063d790(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  Data *pDVar6;
  long lVar7;
  Data_conflict local_60;
  undefined4 local_58;
  QString local_50;
  int *local_48;
  Data *local_40;
  QString local_38;
  undefined1 local_29;
  
  QString::fromUtf8_helper((char *)&local_38,0x1e41978);
  QString::operator=((QString *)(param_1 + 0x200),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10063d7f9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10063d7f9:
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_29 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10063d84b;
    }
    FUN_100533ef0(&local_48,local_48);
  }
LAB_10063d84b:
  cVar4 = QAbstractButton::isChecked();
  if ((cVar4 == '\0') || (uVar5 = *(uint *)(local_40 + 8), *(uint *)(local_40 + 0xc) == uVar5))
  goto LAB_10063d911;
  if (1 < *(uint *)local_40) {
    FUN_100534020(&local_40,*(uint *)(local_40 + 4));
    uVar5 = *(uint *)(local_40 + 8);
  }
  plVar2 = *(long **)(*(long *)(local_40 + (long)(int)uVar5 * 8 + 0x10) + 0x10);
  if (plVar2 == (long *)0x0) {
    local_58 = 0x80000000;
    local_60.field7 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x90))
              (&local_60,plVar2,*(long *)(local_40 + (long)(int)uVar5 * 8 + 0x10),0x100);
  }
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 0x200),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10063d908;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10063d908:
  QVariant::~QVariant((QVariant *)&local_60);
LAB_10063d911:
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 == '\0') {
    QAbstractButton::isChecked();
  }
  QWidget::setEnabled(SUB81(uVar3,0));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

