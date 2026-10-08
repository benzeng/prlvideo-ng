
void FUN_10013cc40(QWidget *param_1)

{
  undefined *puVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  QMenu *this;
  size_t sVar8;
  QActionGroup *this_00;
  QIcon *pQVar9;
  int *piVar10;
  ulong uVar11;
  QMapNodeBase *pQVar12;
  int iVar13;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar14;
  ulong uVar15;
  QMapNodeBase *pQVar16;
  bool bVar17;
  QIcon *local_158;
  undefined8 local_148;
  undefined8 local_140;
  QIcon local_138 [8];
  QString local_130;
  QString local_128;
  int local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QIcon *local_d8;
  QArrayData *local_d0;
  long local_c8;
  int local_bc;
  long local_b8;
  QString local_b0 [3];
  QVariant local_98;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  uint local_70;
  QMapNodeBase *local_68;
  QArrayData *local_60;
  QString local_58;
  QFont local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,param_1);
  FontUtils::setMacContextMenuFont((QWidget *)this,false);
  QFont::QFont(local_50,(QFont *)(*(long *)((long)&this->field5_0x22 + 6) + 0x38));
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_58,local_50);
  puVar1 = PTR_s__1___2__10226dad8;
  iVar13 = (*(int *)(*(long *)(param_1 + 0x28) + 0x1c) + -9) -
           *(int *)(*(long *)(param_1 + 0x28) + 0x14);
  iVar7 = *(int *)(param_1 + 0x4c);
  iVar4 = -1;
  if (PTR_s__1___2__10226dad8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s__1___2__10226dad8);
    iVar4 = (int)sVar8;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  iVar4 = QFontMetrics::boundingRect(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013cd23;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10013cd23:
  this_00 = operator_new(0x10);
  QActionGroup::QActionGroup(this_00,(QObject *)param_1);
  QActionGroup::setExclusive(SUB81(this_00,0));
  local_68 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  FUN_10013ea50(&local_88,param_1 + 0x30);
  local_80 = (undefined8 *)(local_88 + 0x10 + (long)*(int *)(local_88 + 8) * 8);
  local_78 = (undefined8 *)(local_88 + 0x10 + (long)*(int *)(local_88 + 0xc) * 8);
  local_70 = 1;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    local_158 = (QIcon *)0x0;
    do {
      FUN_10013e6e0(&local_d0,*local_80);
      if (local_70 != 0) {
        if (local_bc == -1) {
          QMenu::addSeparator();
        }
        else {
          iVar5 = QComboBox::findData(param_1,&local_98,0x100,0x10);
          puVar1 = PTR_s__1___2__10226dad8;
          if (iVar5 != -1) {
            local_d8 = (QIcon *)0x0;
            if ((iVar7 + 0x17 + extraout_EDX) - iVar4 < iVar13) {
              iVar6 = -1;
              if (PTR_s__1___2__10226dad8 != (undefined *)0x0) {
                sVar8 = _strlen(PTR_s__1___2__10226dad8);
                iVar6 = (int)sVar8;
              }
              local_e8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
              QString::arg(&local_e0,&local_e8,&local_d0,0,0x20);
              iVar6 = QFontMetrics::boundingRect(&local_58);
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10013cede;
                }
                QArrayData::deallocate(local_e0,2,8);
              }
LAB_10013cede:
              if (*(int *)local_e8 != -1) {
                if (*(int *)local_e8 != 0) {
                  LOCK();
                  *(int *)local_e8 = *(int *)local_e8 + -1;
                  local_31 = *(int *)local_e8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10013cf14;
                }
                QArrayData::deallocate(local_e8,2,8);
              }
LAB_10013cf14:
              iVar6 = ((iVar13 + -0xc) - extraout_EDX_00) + iVar6;
              if ((iVar6 < 0x15) || (*(int *)(local_b8 + 4) == 0)) {
                pQVar9 = (QIcon *)QMenu::addAction((QString *)this);
                local_d8 = pQVar9;
              }
              else {
                QFontMetrics::elidedText(&local_f0,&local_58,&local_b8,2,iVar6,0);
                puVar1 = PTR_s__1___2__10226dad8;
                iVar6 = -1;
                if (PTR_s__1___2__10226dad8 != (undefined *)0x0) {
                  sVar8 = _strlen(PTR_s__1___2__10226dad8);
                  iVar6 = (int)sVar8;
                }
                local_108 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
                QString::arg(&local_100,&local_108,&local_d0,0,0x20);
                QString::arg(&local_f8,&local_100,&local_f0,0,0x20);
                pQVar9 = (QIcon *)QMenu::addAction((QString *)this);
                local_d8 = pQVar9;
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10013d019;
                  }
                  QArrayData::deallocate(local_f8,2,8);
                }
LAB_10013d019:
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_31 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10013d04f;
                  }
                  QArrayData::deallocate(local_100,2,8);
                }
LAB_10013d04f:
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_31 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10013d085;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_10013d085:
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10013d101;
                  }
                  QArrayData::deallocate(local_f0,2,8);
                }
              }
            }
            else {
              pQVar9 = (QIcon *)QMenu::addAction((QString *)this);
              local_d8 = pQVar9;
            }
LAB_10013d101:
            piVar10 = (int *)FUN_10013e480(&local_68,&local_d8);
            local_120 = iVar5;
            QVariant::QVariant(&local_118,&local_98);
            *piVar10 = local_120;
            QVariant::operator=((QVariant *)(piVar10 + 2),&local_118);
            QVariant::~QVariant(&local_118);
            local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
            if (1 < *(int *)local_d0 + 1U) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + 1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_40,0x1dc0f00);
            QString::append(&local_130);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10013d1ca;
              }
              QArrayData::deallocate(local_40,2,8);
            }
LAB_10013d1ca:
            local_128.field0_0x0 = local_130.field0_0x0;
            if (1 < *(int *)local_130.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
              local_31 = *(int *)local_130.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_128);
            QAction::setToolTip((QString *)pQVar9);
            if (*(int *)local_128.field0_0x0 != -1) {
              if (*(int *)local_128.field0_0x0 != 0) {
                LOCK();
                *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                local_31 = *(int *)local_128.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10013d240;
              }
              QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
            }
LAB_10013d240:
            if (*(int *)local_130.field0_0x0 != -1) {
              if (*(int *)local_130.field0_0x0 != 0) {
                LOCK();
                *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                local_31 = *(int *)local_130.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10013d276;
              }
              QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
            }
LAB_10013d276:
            bVar17 = SUB81(pQVar9,0);
            QAction::setCheckable(bVar17);
            QAction::setEnabled(bVar17);
            if (*(int *)(local_b0[0].field0_0x0 + 4) != 0) {
              QIcon::QIcon(local_138,local_b0);
              QAction::setIcon(pQVar9);
              QIcon::~QIcon(local_138);
            }
            cVar3 = QVariant::cmp((QVariant *)(param_1 + 0x38));
            if (cVar3 != '\0') {
              if (local_158 == (QIcon *)0x0) {
                local_158 = pQVar9;
              }
              QAction::setEnabled(bVar17);
              QAction::setCheckable(bVar17);
              if (*(int *)(local_c8 + 4) == 0) {
                QAction::setText((QString *)pQVar9);
              }
              else {
                QAction::setText((QString *)pQVar9);
              }
              QAction::setChecked(bVar17);
            }
            QActionGroup::addAction((QAction *)this_00);
          }
        }
        local_70 = 0;
      }
      FUN_10013e850(&local_d0);
      local_80 = local_80 + 1;
      uVar14 = local_70 ^ 1;
      bVar17 = local_70 != 1;
      local_70 = uVar14;
    } while ((bVar17) && (local_80 != local_78));
  }
  FUN_10013e3d0(&local_88);
  iVar7 = WidgetUtils::getComboBoxPopupWidth((QComboBox *)param_1);
  WidgetUtils::alignMenuWidth(this,iVar7);
  local_140 = WidgetUtils::getComboBoxPopupPos((QComboBox *)param_1);
  QMenu::setActiveAction((QAction *)this);
  local_148 = QWidget::mapToGlobal((QPoint *)param_1);
  uVar11 = QMenu::exec((QPoint *)this,(QAction *)&local_148);
  if (1 < *(uint *)local_68) {
    FUN_10013ec80(&local_68);
  }
  pQVar2 = *(QMapNodeBase **)(local_68 + 0x10);
  pQVar12 = (QMapNodeBase *)0x0;
  if (*(QMapNodeBase **)(local_68 + 0x10) == (QMapNodeBase *)0x0) {
LAB_10013d46f:
    pQVar16 = local_68 + 8;
  }
  else {
    do {
      while (pQVar16 = pQVar2, uVar15 = *(ulong *)(pQVar16 + 0x18), uVar11 <= uVar15) {
        pQVar2 = *(QMapNodeBase **)(pQVar16 + 8);
        pQVar12 = pQVar16;
        if (*(QMapNodeBase **)(pQVar16 + 8) == (QMapNodeBase *)0x0) goto LAB_10013d46a;
      }
      pQVar2 = *(QMapNodeBase **)(pQVar16 + 0x10);
    } while (*(QMapNodeBase **)(pQVar16 + 0x10) != (QMapNodeBase *)0x0);
    if (pQVar12 == (QMapNodeBase *)0x0) goto LAB_10013d46f;
    uVar15 = *(ulong *)(pQVar12 + 0x18);
    pQVar16 = pQVar12;
LAB_10013d46a:
    if (uVar11 < uVar15) goto LAB_10013d46f;
  }
  if (1 < *(uint *)local_68) {
    FUN_10013ec80(&local_68);
  }
  pQVar2 = local_68;
  if ((pQVar16 != local_68 + 8) && (*(uint *)(pQVar16 + 0x20) != 0xffffffff)) {
    QVariant::operator=((QVariant *)(param_1 + 0x38),(QVariant *)(pQVar16 + 0x28));
    QComboBox::setCurrentIndex((int)param_1);
    QComboBox::activated((int)param_1);
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013d507;
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_10013ea10();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_10013d507:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_58);
  QFont::~QFont(local_50);
  return;
}

