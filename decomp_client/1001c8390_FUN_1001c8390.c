
void FUN_1001c8390(QMenu *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  Data *pDVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  QActionGroup *this;
  uint uVar7;
  long lVar8;
  long lVar9;
  Data *pDVar10;
  QAction *pQVar11;
  bool bVar12;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  uint local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  int local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  int local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Connection local_68 [8];
  QString local_60;
  QVariant local_58;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_1 == (QMenu *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  WidgetUtils::clearMenuRecursively(param_1,true);
  uVar6 = FUN_100152280();
  FUN_100154b10(&local_a0,uVar6);
  local_98 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_98);
      lVar8 = (long)*(int *)(local_98 + 8);
      if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_98 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_98 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar8 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)local_a0 == -1) {
LAB_1001c84bd:
    uVar2 = DAT_100e152b8;
    if (local_90 != local_88) {
      do {
        lVar8 = *(long *)local_90;
        pQVar11 = (QAction *)0x0;
        if (lVar8 != 0) {
          uVar6 = FUN_10018c280(lVar8);
          lVar9 = FUN_100319960(uVar6);
          pQVar11 = (QAction *)0x0;
          if (lVar9 != 0) {
            iVar5 = FUN_100325aa0(lVar9);
            if (iVar5 == 3) {
              pQVar11 = operator_new(0x10);
              FUN_10018d830(&local_40,lVar8);
              QAction::QAction(pQVar11,&local_40,(QObject *)param_1);
              if (*(int *)local_40.field0_0x0 != -1) {
                if (*(int *)local_40.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                  local_31 = *(int *)local_40.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001c8590;
                }
                QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
              }
LAB_1001c8590:
              QObject::property((char *)&local_58);
              QVariant::toString();
              FUN_100188480(&local_60,lVar8);
              cVar4 = operator==(&local_48,&local_60);
              if (*(int *)local_60.field0_0x0 != -1) {
                if (*(int *)local_60.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                  local_31 = *(int *)local_60.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001c8600;
                }
                QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
              }
LAB_1001c8600:
              if (*(int *)local_48.field0_0x0 != -1) {
                if (*(int *)local_48.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
                  local_31 = *(int *)local_48.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001c8630;
                }
                QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
              }
LAB_1001c8630:
              QVariant::~QVariant(&local_58);
              if (cVar4 != '\0') {
                QAction::setCheckable(SUB81(pQVar11,0));
                QAction::setChecked(SUB81(pQVar11,0));
              }
              uVar6 = FUN_10018c280(lVar8);
              QObject::connect(local_68,pQVar11,"2triggered()",uVar6,"1bringToFront()",0);
              QMetaObject::Connection::~Connection(local_68);
            }
            else {
              uVar6 = FUN_100370280();
              FUN_100188480(&local_70,lVar8);
              lVar8 = FUN_1003704b0(uVar6,&local_70,uVar2);
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001c86e7;
                }
                QArrayData::deallocate(local_70,2,8);
              }
LAB_1001c86e7:
              pQVar11 = (QAction *)0x0;
              if (lVar8 != 0) {
                pQVar11 = operator_new(0x18);
                uVar6 = QApplication::activeWindow();
                FUN_10036bf70(&local_78,lVar8);
                FUN_1006b35b0(pQVar11,param_1,uVar6,&local_78);
                if (*(int *)local_78 != -1) {
                  if (*(int *)local_78 != 0) {
                    LOCK();
                    *(int *)local_78 = *(int *)local_78 + -1;
                    local_31 = *(int *)local_78 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001c8760;
                  }
                  QArrayData::deallocate(local_78,2,8);
                }
              }
            }
          }
        }
LAB_1001c8760:
        if (pQVar11 != (QAction *)0x0) {
          QWidget::addAction((QAction *)param_1);
        }
        local_90 = local_90 + 8;
        local_80 = 1;
      } while (local_90 != local_88);
    }
  }
  else {
    if (*(int *)local_a0 == 0) {
LAB_1001c84ae:
      QListData::dispose(local_a0);
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001c84ae;
    }
    if (local_80 != 0) goto LAB_1001c84bd;
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c87d1;
    }
    QListData::dispose(local_98);
  }
LAB_1001c87d1:
  QWidget::actions();
  iVar5 = *(int *)(local_a8 + 0xc);
  iVar1 = *(int *)(local_a8 + 8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c8813;
    }
    QListData::dispose(local_a8);
  }
LAB_1001c8813:
  if (iVar1 < iVar5) {
    this = operator_new(0x10);
    QActionGroup::QActionGroup(this,(QObject *)param_1);
    QActionGroup::setExclusive(SUB81(this,0));
    QWidget::actions();
    local_c8 = local_d0;
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 == 0) {
        QListData::detach((int)&local_c8);
        lVar8 = (long)*(int *)(local_c8 + 8);
        if ((local_d0 + (long)*(int *)(local_d0 + 8) * 8 != local_c8 + lVar8 * 8) &&
           (lVar9 = *(int *)(local_c8 + 0xc) - lVar8,
           lVar9 != 0 && lVar8 <= *(int *)(local_c8 + 0xc))) {
          _memcpy(local_c8 + lVar8 * 8 + 0x10,local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10,
                  lVar9 * 8);
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
LAB_1001c894c:
      for (; local_c0 != local_b8; local_c0 = local_c0 + 8) {
        QActionGroup::addAction((QAction *)this);
        local_b0 = 1;
      }
    }
    else {
      if (*(int *)local_d0 == 0) {
LAB_1001c8919:
        QListData::dispose(local_d0);
      }
      else {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1001c8919;
      }
      if (local_b0 != 0) goto LAB_1001c894c;
    }
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001c89ca;
      }
      QListData::dispose(local_c8);
    }
LAB_1001c89ca:
    QMenu::addSeparator();
  }
  uVar6 = FUN_1006915d0();
  FUN_100691620(uVar6,0x42,param_2);
  QWidget::addAction((QAction *)param_1);
  QMenu::addSeparator();
  local_d8 = (Data *)PTR_shared_null_1021e15e8;
  local_dc = 0x15;
  FUN_100071ff0(&local_d8,&local_dc);
  local_e0 = 0x16;
  FUN_100071ff0(&local_d8,&local_e0);
  local_e4 = 0x13;
  FUN_100071ff0(&local_d8,&local_e4);
  uVar6 = FUN_1006e1350();
  FUN_1006e54d0(uVar6,param_1,&local_d8,param_2,0,1);
  QMenu::addSeparator();
  uVar6 = FUN_1006915d0();
  FUN_100691620(uVar6,0x60,param_2);
  QWidget::addAction((QAction *)param_1);
  QMenu::addSeparator();
  uVar6 = FUN_1006e1350();
  pQVar11 = (QAction *)FUN_1006e13b0(uVar6,0xf,param_1,param_2,4);
  QWidget::actions();
  local_108 = local_110;
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 == 0) {
      QListData::detach((int)&local_108);
      lVar8 = (long)*(int *)(local_108 + 8);
      if ((local_110 + (long)*(int *)(local_110 + 8) * 8 != local_108 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_108 + 0xc) - lVar8,
         lVar9 != 0 && lVar8 <= *(int *)(local_108 + 0xc))) {
        _memcpy(local_108 + lVar8 * 8 + 0x10,local_110 + (long)*(int *)(local_110 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + 1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
    }
  }
  local_100 = local_108 + (long)*(int *)(local_108 + 8) * 8 + 0x10;
  local_f8 = local_108 + (long)*(int *)(local_108 + 0xc) * 8 + 0x10;
  local_f0 = 1;
  if (*(int *)local_110 == -1) {
LAB_1001c8bf1:
    do {
      while( true ) {
        if (local_100 == local_f8) goto LAB_1001c8c5f;
        if ((local_f0 != 0) && (cVar4 = QAction::isSeparator(), cVar4 != '\0')) break;
        local_100 = local_100 + 8;
        local_f0 = 1;
      }
      QWidget::removeAction(pQVar11);
      local_100 = local_100 + 8;
      uVar7 = local_f0 ^ 1;
      bVar12 = local_f0 != 1;
      local_f0 = uVar7;
    } while (bVar12);
  }
  else {
    if (*(int *)local_110 == 0) {
LAB_1001c8bb0:
      QListData::dispose(local_110);
    }
    else {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001c8bb0;
    }
    if (local_f0 != 0) goto LAB_1001c8bf1;
  }
LAB_1001c8c5f:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c8c8b;
    }
    QListData::dispose(local_108);
  }
LAB_1001c8c8b:
  QWidget::actions();
  iVar5 = *(int *)(local_118 + 0xc);
  iVar1 = *(int *)(local_118 + 8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c8ccd;
    }
    QListData::dispose(local_118);
  }
LAB_1001c8ccd:
  if (0 < iVar5 - iVar1) {
    lVar8 = (long)(iVar5 - iVar1) + 1;
    do {
      QWidget::actions();
      uVar6 = *(undefined8 *)(local_120 + (*(int *)(local_120 + 8) + lVar8) * 8);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001c8d32;
        }
        QListData::dispose(local_120);
      }
LAB_1001c8d32:
      iVar5 = QAction::menuRole();
      if (((iVar5 != 0) && (iVar5 = QAction::menuRole(), iVar5 != 1)) ||
         (iVar5 = FUN_1006947d0(uVar6), iVar5 == 0x54)) {
        QWidget::removeAction(pQVar11);
      }
      lVar8 = lVar8 + -1;
    } while (1 < lVar8);
  }
  FUN_1001c9150(pQVar11);
  QMenu::addMenu(param_1);
  uVar6 = FUN_1006915d0();
  FUN_100691620(uVar6,0x54,param_2);
  QWidget::addAction((QAction *)param_1);
  QMenu::addSeparator();
  FUN_1001c9150(param_1);
  pDVar3 = local_d8;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      if (*(int *)local_d8 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar5 = *(int *)(local_d8 + 0xc);
    if (iVar5 != *(int *)(local_d8 + 8)) {
      lVar8 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar5 * -8;
      pDVar10 = local_d8 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

