
void FUN_10058fba0(long param_1)

{
  QWindow *pQVar1;
  undefined8 uVar2;
  QMacToolBarItem *pQVar3;
  long *plVar4;
  QWidget *pQVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  QWidget *pQVar12;
  long lVar13;
  int extraout_EDX;
  long lVar14;
  int iVar15;
  int local_e4;
  QArrayData *local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  int local_b8;
  QVariant local_b0;
  char local_99;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  int local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QWidget::window();
  QWidget::winId();
  pQVar1 = *(QWindow **)(param_1 + 0xd0);
  QWidget::window();
  QWidget::windowHandle();
  QMacToolBar::attachToWindow(pQVar1);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30);
  FUN_1005a5f40(param_1 + 0x18);
  QWidget::setDisabled(SUB81(uVar2,0));
  if (*(int *)(param_1 + 0xbc) == 9) {
    QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
    local_60 = (QArrayData *)
               QString::fromAscii_helper("Application preferences/Last selected page",0x2a);
    QVariant::QVariant(&local_70,0);
    QSettings::value((QString *)&local_48,&local_58);
    local_e4 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058fcae;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10058fcae:
    QSettings::~QSettings((QSettings *)&local_58);
  }
  else {
    lVar13 = FUN_1005905b0(param_1);
    if (lVar13 == 0) {
      local_e4 = 0;
      FUN_100df99c0("","prl_client_app",0,"Invalid current page %d",*(undefined4 *)(param_1 + 0xbc))
      ;
    }
    else {
      local_e4 = QStackedWidget::indexOf(*(QWidget **)(param_1 + 0xb0));
    }
  }
  QMacToolBar::items();
  local_90 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_90);
      lVar13 = (long)*(int *)(local_90 + 8);
      if ((local_98 + (long)*(int *)(local_98 + 8) * 8 != local_90 + lVar13 * 8) &&
         (lVar14 = *(int *)(local_90 + 0xc) - lVar13,
         lVar14 != 0 && lVar13 <= *(int *)(local_90 + 0xc))) {
        _memcpy(local_90 + lVar13 * 8 + 0x10,local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10,
                lVar14 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  local_78 = 1;
  if (*(int *)local_98 == -1) {
LAB_10058fdf9:
    if (local_88 != local_80) {
      do {
        pQVar3 = *(QMacToolBarItem **)local_88;
        local_99 = '\x01';
        QObject::property((char *)&local_b0);
        iVar6 = QVariant::toInt((bool *)&local_b0);
        QVariant::~QVariant(&local_b0);
        if ((iVar6 == local_e4) && (local_99 != '\0')) {
          MacUtils::selectToolbarItem(*(QMacToolBar **)(param_1 + 0xd0),pQVar3);
        }
        local_88 = local_88 + 8;
        local_78 = 1;
      } while (local_88 != local_80);
    }
  }
  else {
    if (*(int *)local_98 == 0) {
LAB_10058fdea:
      QListData::dispose(local_98);
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10058fdea;
    }
    if (local_78 != 0) goto LAB_10058fdf9;
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058fec1;
    }
    QListData::dispose(local_90);
  }
LAB_10058fec1:
  iVar6 = QStackedWidget::count();
  if (0 < iVar6) {
    iVar6 = 0;
    iVar15 = 0;
    do {
      QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
      plVar11 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
      iVar10 = iVar15;
      if (plVar11 != (long *)0x0) {
        lVar13 = QMetaObject::cast((QObject *)&PTR_PTR_10221ac00);
        if (lVar13 == 0) {
          iVar8 = (**(code **)(*plVar11 + 0x70))(plVar11);
          if (iVar15 < iVar8) {
            iVar10 = iVar8;
          }
        }
        else {
          QWidget::ensurePolished();
          QWidget::layout();
          QLayout::activate();
          local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
          local_d8 = (Data *)PTR_shared_null_1021e15e8;
          qt_qFindChildren_helper(plVar11,&local_e0,PTR_staticMetaObject_1021e1540,&local_d8,1);
          local_d0 = local_d8;
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 == 0) {
              QListData::detach((int)&local_d0);
              lVar13 = (long)*(int *)(local_d0 + 8);
              if ((local_d8 + (long)*(int *)(local_d8 + 8) * 8 != local_d0 + lVar13 * 8) &&
                 (lVar14 = *(int *)(local_d0 + 0xc) - lVar13,
                 lVar14 != 0 && lVar13 <= *(int *)(local_d0 + 0xc))) {
                _memcpy(local_d0 + lVar13 * 8 + 0x10,
                        local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10,lVar14 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + 1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
            }
          }
          local_c8 = local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10;
          local_c0 = local_d0 + (long)*(int *)(local_d0 + 0xc) * 8 + 0x10;
          local_b8 = 1;
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100590074;
            }
            QListData::dispose(local_d8);
          }
LAB_100590074:
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005900b1;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
LAB_1005900b1:
          iVar8 = 0;
          if (local_b8 != 0) {
            iVar10 = 0;
            iVar8 = 0;
            if (local_c8 != local_c0) {
              do {
                plVar11 = *(long **)local_c8;
                iVar7 = QWidget::x();
                iVar8 = (**(code **)(*plVar11 + 0x70))(plVar11);
                iVar9 = QWidget::minimumSize();
                if (iVar8 < iVar9) {
                  iVar8 = iVar9;
                }
                iVar9 = iVar8 + iVar7;
                if (iVar8 + iVar7 <= iVar10) {
                  iVar9 = iVar10;
                }
                iVar10 = iVar9;
                local_c8 = local_c8 + 8;
                local_b8 = 1;
                iVar8 = iVar10;
              } while (local_c8 != local_c0);
            }
          }
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10059017b;
            }
            QListData::dispose(local_d0);
          }
LAB_10059017b:
          QWidget::layout();
          QLayout::contentsMargins();
          iVar10 = extraout_EDX + iVar8;
          if (extraout_EDX + iVar8 <= iVar15) {
            iVar10 = iVar15;
          }
        }
      }
      iVar15 = iVar10;
      iVar6 = iVar6 + 1;
      iVar10 = QStackedWidget::count();
    } while (iVar6 < iVar10);
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x70))();
  QWidget::layout();
  QLayout::spacing();
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x48) + 0x70))();
  QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
  plVar11 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
  if (plVar11 == (long *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"Invalid current page %d",local_e4);
    QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
    plVar11 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
    local_e4 = 0;
  }
  QWidget::setFixedWidth((int)*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  (**(code **)(*plVar11 + 0x70))(plVar11);
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x48) + 0x70))();
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x40);
  if ((*(byte *)(plVar4[5] + 9) & 0x80) != 0) {
    (**(code **)(*plVar4 + 0x70))();
  }
  iVar6 = CMappingModel::getSubmitPolicy();
  if (iVar6 == 1) {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x18) + 0x70))();
  }
  QWidget::setFixedHeight((int)uVar2);
  pQVar5 = *(QWidget **)(param_1 + 0xb0);
  pQVar12 = operator_new(0x30);
  QWidget::QWidget(pQVar12,pQVar5,0);
  QStackedWidget::addWidget(pQVar5);
  QStackedWidget::setCurrentIndex((int)pQVar5);
  QWidget::adjustSize();
  QWidget::setFixedWidth((int)*(undefined8 *)(param_1 + 0xb0));
  FUN_100590670(param_1,local_e4);
  if (*(int *)(param_1 + 0xc0) != 5) {
    (**(code **)(*plVar11 + 0x1a0))(plVar11,*(int *)(param_1 + 0xc0),param_1 + 200);
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}

