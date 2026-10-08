
void FUN_1007599a0(QMenu *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QAction *pQVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QIcon *pQVar12;
  uint uVar13;
  Data *pDVar14;
  long lVar15;
  Data *pDVar16;
  Data *pDVar17;
  bool bVar18;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  uint local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  Data *local_80;
  QIcon local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_TRAY_ICON]","prl_client_app",3,"On about to show tray icon menu");
  }
  QMenu::clear();
  cVar2 = FUN_10075a710(param_1);
  if (cVar2 != '\0') {
    QMenu::addSeparator();
  }
  lVar4 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
  if (lVar4 != 0) {
    uVar5 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
    uVar5 = FUN_10018c280(uVar5);
    iVar3 = FUN_100319ae0(uVar5);
    if (iVar3 != 0) {
      uVar5 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
      uVar5 = FUN_10018c280(uVar5);
      iVar3 = FUN_100319ae0(uVar5);
      if (iVar3 == 3) {
        uVar5 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
        iVar3 = FUN_10018f860(uVar5);
        if (iVar3 == 8) {
          uVar5 = FUN_1006915d0();
          uVar6 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
          FUN_100691620(uVar5,0x44,uVar6);
          QWidget::addAction((QAction *)param_1);
          QMenu::addSeparator();
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
      }
      else {
        bVar18 = false;
      }
      uVar5 = FUN_1006e1350();
      uVar6 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
      pQVar7 = (QAction *)FUN_1006e13b0(uVar5,5,param_1,uVar6,4);
      if (pQVar7 != (QAction *)0x0) {
        if (bVar18) {
          QWidget::actions();
          iVar3 = *(int *)(local_40 + 0xc);
          iVar1 = *(int *)(local_40 + 8);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100759b26;
            }
            QListData::dispose(local_40);
          }
LAB_100759b26:
          if (0 < iVar3 - iVar1) {
            lVar4 = (long)(iVar3 - iVar1);
            do {
              QWidget::actions();
              lVar15 = *(long *)(local_48 + ((long)*(int *)(local_48 + 8) + -1 + lVar4) * 8 + 0x10);
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100759b80;
                }
                QListData::dispose(local_48);
              }
LAB_100759b80:
              QWidget::actions();
              iVar3 = *(int *)(local_50 + 8);
              pDVar14 = local_50 + (long)iVar3 * 8 + 0x10;
              iVar1 = *(int *)(local_50 + 0xc);
              pDVar16 = local_50 + (long)iVar1 * 8 + 0x10;
              pDVar17 = pDVar14;
              if (iVar3 != iVar1) {
                lVar8 = (long)iVar1 * 8 + (long)iVar3 * -8;
                do {
                  pDVar17 = pDVar14;
                  if (*(long *)pDVar14 == lVar15) break;
                  pDVar14 = pDVar14 + 8;
                  lVar8 = lVar8 + -8;
                  pDVar17 = pDVar16;
                } while (lVar8 != 0);
              }
              if (*(int *)local_50 != -1) {
                if (*(int *)local_50 != 0) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + -1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100759c05;
                }
                QListData::dispose(local_50);
              }
LAB_100759c05:
              if (pDVar17 != pDVar16) {
                QWidget::removeAction(pQVar7);
              }
              bVar18 = 1 < lVar4;
              lVar4 = lVar4 + -1;
            } while (bVar18);
          }
        }
        QMenu::addMenu(param_1);
      }
      uVar5 = FUN_1006e1350();
      uVar6 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
      pQVar7 = (QAction *)FUN_1006e6640(uVar5,uVar6,param_1);
      if (pQVar7 != (QAction *)0x0) {
        uVar5 = FUN_1006915d0();
        uVar6 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
        FUN_100691620(uVar5,0x3e,uVar6);
        QWidget::removeAction(pQVar7);
        QMenu::addMenu(param_1);
      }
      uVar5 = FUN_1006e1350();
      uVar6 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
      lVar4 = FUN_1006e13b0(uVar5,10,param_1,uVar6,4);
      if (lVar4 != 0) {
        QMenu::menuAction();
        cVar2 = QAction::isVisible();
        if (cVar2 != '\0') {
          QMenu::addMenu(param_1);
        }
      }
      uVar5 = FUN_1006e1350();
      uVar6 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
      lVar4 = FUN_1006e13b0(uVar5,0xc,param_1,uVar6,4);
      if (lVar4 != 0) {
        QMenu::menuAction();
        cVar2 = QAction::isVisible();
        if (cVar2 != '\0') {
          QMenu::addMenu(param_1);
        }
      }
      uVar5 = FUN_10075afb0(*(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6));
      local_58 = (Data *)PTR_shared_null_1021e15e8;
      pQVar9 = (QArrayData *)QString::fromAscii_helper("visible",7);
      local_60 = pQVar9;
      FUN_1000341d0(&local_58,&local_60);
      pQVar10 = (QArrayData *)QString::fromAscii_helper("enabled",7);
      local_68 = pQVar10;
      FUN_1000341d0(&local_58,&local_68);
      pQVar11 = (QArrayData *)QString::fromAscii_helper("shortcut",8);
      local_70 = pQVar11;
      FUN_1000341d0(&local_58,&local_70);
      pQVar12 = (QIcon *)FUN_10068ed50(0x3e,uVar5,param_1,1,&local_58);
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759e13;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_100759e13:
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759e42;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_100759e42:
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759e6f;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_100759e6f:
      pDVar14 = local_58;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759f01;
        }
        iVar3 = *(int *)(local_58 + 0xc);
        if (iVar3 != *(int *)(local_58 + 8)) {
          lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
          pDVar16 = local_58 + (long)iVar3 * 8 + 8;
          do {
            pQVar9 = *(QArrayData **)pDVar16;
            if (*(int *)pQVar9 == 0) {
LAB_100759ee0:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar16;
                goto LAB_100759ee0;
              }
            }
            pDVar16 = pDVar16 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose(pDVar14);
      }
LAB_100759f01:
      QIcon::QIcon(local_78);
      QAction::setIcon(pQVar12);
      QIcon::~QIcon(local_78);
      QWidget::addAction((QAction *)param_1);
      QMenu::addSeparator();
    }
  }
  local_80 = (Data *)PTR_shared_null_1021e15e8;
  local_84 = 0x42;
  FUN_100071ff0(&local_80,&local_84);
  local_88 = 0x10;
  FUN_100071ff0(&local_80,&local_88);
  local_8c = 0x15;
  FUN_100071ff0(&local_80,&local_8c);
  local_90 = 0x16;
  FUN_100071ff0(&local_80,&local_90);
  local_94 = 0x13;
  FUN_100071ff0(&local_80,&local_94);
  local_98 = 0x10;
  FUN_100071ff0(&local_80,&local_98);
  local_9c = 0x60;
  FUN_100071ff0(&local_80,&local_9c);
  local_a0 = 0x8e;
  FUN_100071ff0(&local_80,&local_a0);
  local_a4 = 0x10;
  FUN_100071ff0(&local_80,&local_a4);
  uVar5 = FUN_1006e1350();
  uVar6 = FUN_100060bb0();
  uVar6 = FUN_1000609c0(uVar6);
  FUN_1006e54d0(uVar5,param_1,&local_80,uVar6,0,1);
  FUN_10075ac00(&local_80);
  uVar5 = FUN_1006e1350();
  uVar6 = FUN_100060bb0();
  uVar6 = FUN_1000609c0(uVar6);
  pQVar7 = (QAction *)FUN_1006e13b0(uVar5,0xf,param_1,uVar6,4);
  QWidget::actions();
  local_c8 = local_d0;
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 == 0) {
      QListData::detach((int)&local_c8);
      lVar4 = (long)*(int *)(local_c8 + 8);
      if ((local_d0 + (long)*(int *)(local_d0 + 8) * 8 != local_c8 + lVar4 * 8) &&
         (lVar15 = *(int *)(local_c8 + 0xc) - lVar4,
         lVar15 != 0 && lVar4 <= *(int *)(local_c8 + 0xc))) {
        _memcpy(local_c8 + lVar4 * 8 + 0x10,local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10,
                lVar15 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
    }
  }
  local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
  local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
  local_b0 = 1;
  if (*(int *)local_d0 == -1) {
LAB_10075a1b1:
    do {
      while( true ) {
        if (local_c0 == local_b8) goto LAB_10075a21f;
        if ((local_b0 != 0) && (cVar2 = QAction::isSeparator(), cVar2 != '\0')) break;
        local_c0 = local_c0 + 8;
        local_b0 = 1;
      }
      QWidget::removeAction(pQVar7);
      local_c0 = local_c0 + 8;
      uVar13 = local_b0 ^ 1;
      bVar18 = local_b0 != 1;
      local_b0 = uVar13;
    } while (bVar18);
  }
  else {
    if (*(int *)local_d0 == 0) {
LAB_10075a16b:
      QListData::dispose(local_d0);
    }
    else {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10075a16b;
    }
    if (local_b0 != 0) goto LAB_10075a1b1;
  }
LAB_10075a21f:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075a24b;
    }
    QListData::dispose(local_c8);
  }
LAB_10075a24b:
  QWidget::actions();
  iVar3 = *(int *)(local_d8 + 0xc);
  iVar1 = *(int *)(local_d8 + 8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075a28d;
    }
    QListData::dispose(local_d8);
  }
LAB_10075a28d:
  if (0 < iVar3 - iVar1) {
    lVar4 = (long)(iVar3 - iVar1) + 1;
    do {
      QWidget::actions();
      uVar5 = *(undefined8 *)(local_e0 + (*(int *)(local_e0 + 8) + lVar4) * 8);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10075a2f2;
        }
        QListData::dispose(local_e0);
      }
LAB_10075a2f2:
      iVar3 = QAction::menuRole();
      if (((iVar3 != 0) && (iVar3 = QAction::menuRole(), iVar3 != 1)) ||
         (iVar3 = FUN_1006947d0(uVar5), iVar3 == 0x54)) {
        QWidget::removeAction(pQVar7);
      }
      lVar4 = lVar4 + -1;
    } while (1 < lVar4);
  }
  QMenu::addMenu(param_1);
  uVar5 = FUN_1006915d0();
  lVar4 = FUN_100691620(uVar5,0x86,*(undefined8 *)PTR_self_1021e1388);
  if ((lVar4 == 0) || (cVar2 = QAction::isVisible(), cVar2 == '\0')) {
    local_e8 = 0x52;
    FUN_100071ff0(&local_80,&local_e8);
  }
  else {
    local_e4 = 0x86;
    FUN_100071ff0(&local_80,&local_e4);
  }
  local_ec = 0x54;
  FUN_100071ff0(&local_80,&local_ec);
  local_f0 = 0x12;
  FUN_100071ff0(&local_80,&local_f0);
  local_f4 = 0x10;
  FUN_100071ff0(&local_80,&local_f4);
  local_f8 = 0x14;
  FUN_100071ff0(&local_80,&local_f8);
  uVar5 = FUN_1006e1350();
  uVar6 = FUN_100060bb0();
  uVar6 = FUN_1000609c0(uVar6);
  FUN_1006e54d0(uVar5,param_1,&local_80,uVar6,0,1);
  pDVar14 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar3 = *(int *)(local_80 + 0xc);
    if (iVar3 != *(int *)(local_80 + 8)) {
      lVar4 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar3 * -8;
      pDVar16 = local_80 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar16 != (void *)0x0) {
          operator_delete(*(void **)pDVar16);
        }
        pDVar16 = pDVar16 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar14);
  }
  return;
}

