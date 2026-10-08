
void FUN_1005841b0(long param_1)

{
  QString *pQVar1;
  QObject *pQVar2;
  QIcon *pQVar3;
  long *plVar4;
  QSize *pQVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  QWidget *pQVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long lVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined8 local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  int local_b8;
  undefined8 local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  int local_88;
  Data *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  Data *local_60;
  QString local_58;
  QIcon local_50 [8];
  QArrayData *local_48;
  QKeySequence local_40 [15];
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_100714b50(local_40,param_1 + 0x28);
    cVar7 = QKeySequence::isEmpty();
    QKeySequence::~QKeySequence(local_40);
    if (cVar7 != '\0') {
      pQVar1 = *(QString **)(param_1 + 0x10);
      QMetaObject::tr((char *)&local_48,"",0x1dcdbd7);
      QWidget::setWindowTitle(pQVar1);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058425a;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
  }
LAB_10058425a:
  pQVar2 = *(QObject **)(*(long *)(param_1 + 0x18) + 0x50);
  *(undefined4 *)(pQVar2 + 0x30) = 2;
  pQVar2[0x35] = (QObject)0x1;
  QObject::installEventFilter(pQVar2);
  uVar9 = *(uint *)(param_1 + 0x20);
  uVar12 = extraout_RDX;
  if ((uVar9 | 2) == 2) {
    pvVar10 = operator_new(0x38);
    FUN_100139940(pvVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
    *(undefined4 *)((long)pvVar10 + 0x30) = 2;
    lVar11 = *(long *)(param_1 + 0x40);
    iVar8 = QString::compare_helper
                      (*(long *)(lVar11 + 0x10) + lVar11,*(undefined4 *)(lVar11 + 4),
                       PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
    *(bool *)((long)pvVar10 + 0x35) = iVar8 == 0;
    QObject::installEventFilter(*(QObject **)(*(long *)(param_1 + 0x18) + 0x98));
    QComboBox::setLineEdit(*(QLineEdit **)(*(long *)(param_1 + 0x18) + 0x98));
    lVar11 = QComboBox::view();
    if (lVar11 != 0) {
      uVar12 = QComboBox::view();
      QAbstractItemView::setTextElideMode(uVar12,3);
    }
    QWidget::setContextMenuPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),0);
    lVar11 = *(long *)(param_1 + 0x40);
    lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
    iVar8 = QString::compare_helper
                      (*(long *)(lVar11 + 0x10) + lVar11,*(undefined4 *)(lVar11 + 4),
                       PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
    if (lVar14 != 0) {
      cVar7 = (iVar8 != 0) * '\x02';
      iVar8 = *(int *)(param_1 + 0x20);
      QComboBox::clear();
      FUN_1005875e0(lVar14,0x1000006,cVar7);
      FUN_1005875e0(lVar14,0x1000007,cVar7);
      FUN_1005875e0(lVar14,0x1000008,cVar7);
      FUN_1005875e0(lVar14,0x1000009,cVar7);
      FUN_1005875e0(lVar14,0x1000010,cVar7);
      FUN_1005875e0(lVar14,0x1000011,cVar7);
      FUN_1005875e0(lVar14,0x1000016,cVar7);
      FUN_1005875e0(lVar14,0x1000017,cVar7);
      FUN_1005875e0(lVar14,0x1001103,cVar7);
      if (iVar8 == 2) {
        FUN_1005875e0(lVar14,DAT_100e15328,cVar7);
      }
      FUN_1005875e0(lVar14,0x1000001,cVar7);
      FUN_1005875e0(lVar14,0x1000003,cVar7);
      FUN_1005875e0(lVar14,0x1000024,cVar7);
      FUN_1005875e0(lVar14,0x1000025,cVar7);
      FUN_1005875e0(lVar14,0x1000026,cVar7);
      FUN_1005875e0(lVar14,0x1000055,cVar7);
      FUN_1005875e0(lVar14,0x1000030,cVar7);
      FUN_1005875e0(lVar14,0x1000031,cVar7);
      FUN_1005875e0(lVar14,0x1000032,cVar7);
      FUN_1005875e0(lVar14,0x1000033,cVar7);
      FUN_1005875e0(lVar14,0x1000034,cVar7);
      FUN_1005875e0(lVar14,0x1000035,cVar7);
      FUN_1005875e0(lVar14,0x1000036,cVar7);
      FUN_1005875e0(lVar14,0x1000037,cVar7);
      FUN_1005875e0(lVar14,0x1000038,cVar7);
      FUN_1005875e0(lVar14,0x1000039,cVar7);
      FUN_1005875e0(lVar14,0x100003a,cVar7);
      FUN_1005875e0(lVar14,0x100003b,cVar7);
      FUN_1005875e0(lVar14,0x100003c,cVar7);
      FUN_1005875e0(lVar14,0x100003d,cVar7);
      FUN_1005875e0(lVar14,0x100003e,cVar7);
      FUN_1005875e0(lVar14,0x100003f,cVar7);
      FUN_1005875e0(lVar14,0x1000040,cVar7);
      FUN_1005875e0(lVar14,0x1000041,cVar7);
      FUN_1005875e0(lVar14,0x1000042,cVar7);
      FUN_1005875e0(lVar14,0x1001122,cVar7);
      FUN_1005875e0(lVar14,0x1001123,cVar7);
      FUN_1005875e0(lVar14,0x1001125,cVar7);
      FUN_1005875e0(lVar14,0x1001127,cVar7);
      FUN_1005875e0(lVar14,0x100112a,cVar7);
    }
    lVar11 = *(long *)(param_1 + 0x40);
    iVar8 = QString::compare_helper
                      (*(long *)(lVar11 + 0x10) + lVar11,*(undefined4 *)(lVar11 + 4),
                       PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
    if (iVar8 == 0) {
      QWidget::layout();
      auVar16 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12b0);
      uVar12 = auVar16._8_8_;
      pQVar13 = auVar16._0_8_;
      if (pQVar13 != (QWidget *)0x0) {
        QLayout::removeWidget(pQVar13);
        QLayout::removeWidget(pQVar13);
        QGridLayout::addWidget(pQVar13,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),1,2,0);
        QGridLayout::addWidget(pQVar13,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x88),1,3,0);
        uVar12 = extraout_RDX_02;
      }
    }
    else {
      pQVar3 = *(QIcon **)(*(long *)(param_1 + 0x18) + 0x88);
      local_58.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper(":/pixmaps/PreferencesDlgIcons/win_key_14x14.png",0x2f);
      QIcon::QIcon(local_50,&local_58);
      QAbstractButton::setIcon(pQVar3);
      QIcon::~QIcon(local_50);
      uVar12 = extraout_RDX_00;
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100584720;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        uVar12 = extraout_RDX_01;
      }
    }
LAB_100584720:
    uVar9 = *(uint *)(param_1 + 0x20);
  }
  if (uVar9 == 1) {
    QWidget::hide();
    QWidget::layout();
    auVar16 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12b0);
    uVar12 = auVar16._8_8_;
    if (auVar16._0_8_ != 0) {
      QGridLayout::setVerticalSpacing(auVar16._0_4_);
      uVar12 = extraout_RDX_03;
    }
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  bVar15 = *(int *)(param_1 + 0x20) != 2;
  (**(code **)(*plVar4 + 0x68))(plVar4,bVar15,uVar12,bVar15);
  puVar6 = PTR_shared_null_1021e15e8;
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0);
  FUN_100359270(&local_60,&local_68);
  local_70 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 200);
  FUN_100359270(&local_60,&local_70);
  local_78 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0);
  FUN_100359270(&local_60,&local_78);
  WidgetUtils::Adjuster::adjustWidgetsByMaxWidth((QList *)&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058480b;
    }
    QListData::dispose(local_60);
  }
LAB_10058480b:
  local_80 = (Data *)puVar6;
  FUN_1005896e0(&local_a8,param_1 + 0x70);
  local_a0 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 == 0) {
      QListData::detach((int)&local_a0);
      lVar11 = (long)*(int *)(local_a0 + 8);
      if ((local_a8 + (long)*(int *)(local_a8 + 8) * 8 != local_a0 + lVar11 * 8) &&
         (lVar14 = *(int *)(local_a0 + 0xc) - lVar11,
         lVar14 != 0 && lVar11 <= *(int *)(local_a0 + 0xc))) {
        _memcpy(local_a0 + lVar11 * 8 + 0x10,local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10,
                lVar14 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  local_88 = 1;
  if (*(int *)local_a8 == -1) {
LAB_1005848f0:
    if (local_98 != local_90) {
      do {
        local_b0 = *(undefined8 *)local_98;
        FUN_100359270(&local_80,&local_b0);
        local_98 = local_98 + 8;
        local_88 = 1;
      } while (local_98 != local_90);
    }
  }
  else {
    if (*(int *)local_a8 == 0) {
LAB_1005848e5:
      QListData::dispose(local_a8);
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005848e5;
    }
    if (local_88 != 0) goto LAB_1005848f0;
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100584973;
    }
    QListData::dispose(local_a0);
  }
LAB_100584973:
  FUN_1005896e0(&local_d8,param_1 + 0x78);
  local_d0 = local_d8;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 == 0) {
      QListData::detach((int)&local_d0);
      lVar11 = (long)*(int *)(local_d0 + 8);
      if ((local_d8 + (long)*(int *)(local_d8 + 8) * 8 != local_d0 + lVar11 * 8) &&
         (lVar14 = *(int *)(local_d0 + 0xc) - lVar11,
         lVar14 != 0 && lVar11 <= *(int *)(local_d0 + 0xc))) {
        _memcpy(local_d0 + lVar11 * 8 + 0x10,local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10,
                lVar14 * 8);
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
  if (*(int *)local_d8 == -1) {
LAB_100584a5a:
    if (local_c8 != local_c0) {
      do {
        local_e0 = *(undefined8 *)local_c8;
        FUN_100359270(&local_80,&local_e0);
        local_c8 = local_c8 + 8;
        local_b8 = 1;
      } while (local_c8 != local_c0);
    }
  }
  else {
    if (*(int *)local_d8 == 0) {
LAB_100584a4c:
      QListData::dispose(local_d8);
    }
    else {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100584a4c;
    }
    if (local_b8 != 0) goto LAB_100584a5a;
  }
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100584ae6;
    }
    QListData::dispose(local_d0);
  }
LAB_100584ae6:
  WidgetUtils::Adjuster::adjustWidgetsByMaxWidth((QList *)&local_80);
  pQVar5 = *(QSize **)(param_1 + 0x10);
  (**(code **)((long)*pQVar5 + 0x78))(pQVar5);
  QWidget::setFixedSize(pQVar5);
  FUN_100586430(param_1);
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
    QListData::dispose(local_80);
  }
  return;
}

