
void FUN_10055e570(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  QString *pQVar4;
  int *piVar5;
  uint *puVar6;
  Data *this;
  QKeySequence *this_00;
  bool bVar7;
  long lVar8;
  Data *pDVar9;
  undefined1 local_48;
  undefined7 uStack_47;
  Data *local_40;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) != *param_2) {
    FUN_1005607f0(&local_40,param_2);
    pDVar9 = (Data *)*puVar1;
    *puVar1 = local_40;
    local_40 = pDVar9;
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_48 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_48) goto LAB_10055e61e;
      }
      iVar2 = *(int *)(pDVar9 + 0xc);
      if (iVar2 != *(int *)(pDVar9 + 8)) {
        lVar8 = (long)*(int *)(pDVar9 + 8) * 8 + (long)iVar2 * -8;
        this = pDVar9 + (long)iVar2 * 8 + 8;
        do {
          QKeySequence::~QKeySequence((QKeySequence *)this);
          this = this + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_10055e61e:
  *(int *)(param_1 + 0x30) = (int)param_2[1];
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
  pQVar4 = *(QString **)(*(long *)(param_1 + 0x18) + 0x40);
  FUN_100708300(puVar1);
  bVar7 = SUB81(pQVar4,0);
  QObject::blockSignals(bVar7);
  FUN_100708240(&local_48,puVar1);
  puVar6 = (uint *)CONCAT71(uStack_47,local_48);
  if (1 < *puVar6) {
    FUN_100560930(&local_48,puVar6[1]);
    puVar6 = (uint *)CONCAT71(uStack_47,local_48);
  }
  FUN_1007170a0(&local_40,puVar6 + (long)(int)puVar6[2] * 2 + 4,0);
  QLineEdit::setText(pQVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055e6c2;
    }
    QArrayData::deallocate((QArrayData *)local_40,2,8);
  }
LAB_10055e6c2:
  piVar5 = (int *)CONCAT71(uStack_47,local_48);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055e73e;
    }
    pDVar9 = (Data *)CONCAT71(uStack_47,local_48);
    iVar2 = *(int *)(pDVar9 + 0xc);
    if (iVar2 != *(int *)(pDVar9 + 8)) {
      lVar8 = (long)*(int *)(pDVar9 + 8) * 8 + (long)iVar2 * -8;
      this_00 = (QKeySequence *)(pDVar9 + (long)iVar2 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this_00);
        this_00 = this_00 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_10055e73e:
  QWidget::setEnabled(bVar7);
  QObject::blockSignals(bVar7);
  bVar7 = SUB81(uVar3,0);
  QObject::blockSignals(bVar7);
  QAbstractButton::setChecked(bVar7);
  QObject::blockSignals(bVar7);
  return;
}

