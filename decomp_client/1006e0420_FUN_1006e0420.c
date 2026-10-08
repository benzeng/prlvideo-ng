
void FUN_1006e0420(undefined8 param_1,long param_2)

{
  int *piVar1;
  Data *pDVar2;
  bool bVar3;
  int iVar4;
  CIfaceMenu *this;
  QString QVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  QKeySequence *pQVar12;
  int *local_c0;
  QArrayData *local_b8;
  QKeySequence local_b0 [8];
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  uint local_88;
  int *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  CIfaceMenu *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar8 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar8 * 8) &&
         (lVar10 = *(int *)(local_58 + 0xc) - lVar8,
         lVar10 != 0 && lVar8 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar8 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1006e04ee:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006e04ee;
    }
    if (local_40 == 0) goto LAB_1006e09d4;
  }
  if (local_50 != local_48) {
    do {
      this = operator_new(0xa8);
      CIfaceMenu::CIfaceMenu(this);
      local_68 = this;
      lVar8 = QAction::menu();
      if (lVar8 == 0) {
        bVar3 = (bool)CIfaceMenu::getAction();
        QAction::isCheckable();
        CIfaceAction::setCheckable(bVar3);
        bVar3 = (bool)CIfaceMenu::getAction();
        QAction::isChecked();
        CIfaceAction::setChecked(bVar3);
        QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)CIfaceMenu::getAction();
        QAction::text();
        CIfaceAction::setName(QVar5);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006e0689;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1006e0689:
        bVar3 = (bool)CIfaceMenu::getAction();
        QAction::isEnabled();
        CIfaceAction::setEnabled(bVar3);
        local_80 = (int *)PTR_shared_null_1021e15e8;
        QAction::shortcuts();
        FUN_1005607f0(&local_a0,&local_a8);
        pDVar2 = local_a8;
        local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
        local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
        local_88 = 1;
        if (*(int *)local_a8 == -1) {
LAB_1006e0792:
          do {
            if (local_98 == local_90) break;
            QKeySequence::QKeySequence(local_b0,(QKeySequence *)local_98);
            if (local_88 != 0) {
              QKeySequence::toString(&local_b8,local_b0,1);
              FUN_1000341d0(&local_80,&local_b8);
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006e080d;
                }
                QArrayData::deallocate(local_b8,2,8);
              }
LAB_1006e080d:
              local_88 = 0;
            }
            QKeySequence::~QKeySequence(local_b0);
            local_98 = local_98 + 8;
            uVar7 = local_88 ^ 1;
            bVar3 = local_88 != 1;
            local_88 = uVar7;
          } while (bVar3);
        }
        else {
          if (*(int *)local_a8 == 0) {
LAB_1006e073d:
            iVar4 = *(int *)(local_a8 + 0xc);
            if (iVar4 != *(int *)(local_a8 + 8)) {
              lVar8 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar4 * -8;
              pQVar12 = (QKeySequence *)(local_a8 + (long)iVar4 * 8 + 8);
              do {
                QKeySequence::~QKeySequence(pQVar12);
                pQVar12 = pQVar12 + -8;
                lVar8 = lVar8 + 8;
              } while (lVar8 != 0);
            }
            QListData::dispose(pDVar2);
          }
          else {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1006e073d;
          }
          if (local_88 != 0) goto LAB_1006e0792;
        }
        pDVar2 = local_a0;
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006e08c1;
          }
          iVar4 = *(int *)(local_a0 + 0xc);
          if (iVar4 != *(int *)(local_a0 + 8)) {
            lVar8 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar4 * -8;
            pQVar12 = (QKeySequence *)(local_a0 + (long)iVar4 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar12);
              pQVar12 = pQVar12 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar2);
        }
LAB_1006e08c1:
        uVar6 = CIfaceMenu::getAction();
        local_c0 = local_80;
        if (*local_80 != -1) {
          if (*local_80 == 0) {
            QListData::detach((int)&local_c0);
            iVar4 = local_c0[2];
            if (iVar4 != local_c0[3]) {
              piVar9 = local_80 + (long)local_80[2] * 2 + 4;
              piVar11 = local_c0 + (long)iVar4 * 2 + 4;
              lVar8 = (long)local_c0[3] * 8 + (long)iVar4 * -8;
              do {
                piVar1 = *(int **)piVar9;
                *(int **)piVar11 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_31 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar11 = piVar11 + 2;
                piVar9 = piVar9 + 2;
                lVar8 = lVar8 + -8;
              } while (lVar8 != 0);
            }
          }
          else {
            LOCK();
            *local_80 = *local_80 + 1;
            local_31 = *local_80 != 0;
            UNLOCK();
          }
        }
        CIfaceAction::setShortcuts(uVar6,&local_c0);
        FUN_100039a80(&local_c0);
        iVar4 = CIfaceMenu::getAction();
        QAction::isSeparator();
        CIfaceAction::setActionType(iVar4);
        FUN_100039a80(&local_80);
      }
      else {
        QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)CIfaceMenu::getAction();
        QAction::menu();
        QMenu::title();
        CIfaceAction::setName(QVar5);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006e05bb;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1006e05bb:
        iVar4 = CIfaceMenu::getAction();
        CIfaceAction::setActionType(iVar4);
        uVar6 = QAction::menu();
        FUN_1006e0420(uVar6,this);
      }
      FUN_1006e11e0(param_2 + 0xa0,&local_68);
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_1006e09d4:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

