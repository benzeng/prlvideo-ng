
void FUN_10043dd20(QString *param_1)

{
  QFont *pQVar1;
  QString *pQVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int local_cc;
  QArrayData *local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  int local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  Data *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QFont local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10043fc40(param_1[0xc].field0_0x0,param_1);
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043dd8a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10043dd8a:
  pQVar1 = *(QFont **)(param_1[0xc].field0_0x0 + 0x40);
  FontUtils::getSmallFont(SUB81(local_50,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_50);
  iVar5 = (**(code **)(**(long **)(param_1[0xc].field0_0x0 + 0x28) + 0x70))();
  pQVar2 = *(QString **)(param_1[0xc].field0_0x0 + 0x28);
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)PTR_s_Auto_10226ec58);
  QAbstractSpinBox::setSpecialValueText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043de30;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10043de30:
  iVar6 = (**(code **)(**(long **)(param_1[0xc].field0_0x0 + 0x28) + 0x70))();
  if (iVar6 < iVar5) {
    pQVar2 = *(QString **)(param_1[0xc].field0_0x0 + 0x28);
    local_60 = (QArrayData *)QString::fromAscii_helper("",0);
    QAbstractSpinBox::setSpecialValueText(pQVar2);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10043de9e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_10043de9e:
  puVar4 = PTR_shared_null_1021e15e8;
  local_68 = (Data *)PTR_shared_null_1021e15e8;
  local_70 = *(undefined8 *)(param_1[0xc].field0_0x0 + 0x28);
  FUN_100359270(&local_68,&local_70);
  local_78 = *(undefined8 *)(param_1[0xc].field0_0x0 + 0x38);
  FUN_100359270(&local_68,&local_78);
  WidgetUtils::Adjuster::adjustWidgetsByMaxWidth((QList *)&local_68);
  local_98 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_98);
      lVar10 = (long)*(int *)(local_98 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_98 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_98 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_98 + 0xc))) {
        _memcpy(local_98 + lVar10 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
    do {
      local_80 = 1;
      QWidget::setFixedWidth((int)*(undefined8 *)local_90);
      local_90 = local_90 + 8;
    } while (local_90 != local_88);
  }
  local_80 = 1;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043dfe0;
    }
    QListData::dispose(local_98);
  }
LAB_10043dfe0:
  QWidget::setMinimumWidth((int)*(undefined8 *)(param_1[0xc].field0_0x0 + 0x40));
  FUN_10043e9e0(param_1,param_1 + 0xe);
  QWidget::ensurePolished();
  QWidget::layout();
  QLayout::activate();
  local_c8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_c0 = (Data *)puVar4;
  qt_qFindChildren_helper(param_1,&local_c8,PTR_staticMetaObject_1021e1540,&local_c0,1);
  local_b8 = local_c0;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 == 0) {
      QListData::detach((int)&local_b8);
      lVar10 = (long)*(int *)(local_b8 + 8);
      if ((local_c0 + (long)*(int *)(local_c0 + 8) * 8 != local_b8 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_b8 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_b8 + 0xc))) {
        _memcpy(local_b8 + lVar10 * 8 + 0x10,local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + 1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
  local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
  local_a0 = 1;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043e11e;
    }
    QListData::dispose(local_c0);
  }
LAB_10043e11e:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043e154;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10043e154:
  if (local_a0 != 0) {
    iVar5 = 0xffffff;
    local_cc = 0;
    if (local_b0 != local_a8) {
      do {
        plVar3 = *(long **)local_b0;
        iVar6 = local_cc;
        if (plVar3 != *(long **)(param_1[0xc].field0_0x0 + 0x80)) {
          iVar7 = QWidget::x();
          if (iVar5 <= iVar7) {
            iVar7 = iVar5;
          }
          iVar8 = QWidget::x();
          iVar9 = (**(code **)(*plVar3 + 0x70))(plVar3);
          iVar5 = QWidget::minimumSize();
          if (iVar9 < iVar5) {
            iVar9 = iVar5;
          }
          iVar6 = iVar9 + iVar8;
          iVar5 = iVar7;
          if (iVar9 + iVar8 <= local_cc) {
            iVar6 = local_cc;
          }
        }
        local_cc = iVar6;
        local_b0 = local_b0 + 8;
        local_a0 = 1;
      } while (local_b0 != local_a8);
    }
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043e26e;
    }
    QListData::dispose(local_b8);
  }
LAB_10043e26e:
  QWidget::layout();
  QLayout::contentsMargins();
  QWidget::setFixedWidth((int)param_1);
  (**(code **)(param_1->field0_0x0 + 0x80))
            (param_1,(*(int *)(param_1[5].field0_0x0 + 0x1c) + 1) -
                     *(int *)(param_1[5].field0_0x0 + 0x14));
  QWidget::setFixedHeight((int)param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_68);
  }
  return;
}

