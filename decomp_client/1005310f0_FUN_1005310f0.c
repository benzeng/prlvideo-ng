
void FUN_1005310f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  Data *pDVar14;
  long *plVar15;
  long local_b8;
  Data_conflict local_b0;
  undefined4 local_a8;
  QArrayData *local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QVariant local_88;
  Data_conflict local_78;
  QString local_70 [2];
  Data_conflict local_60;
  undefined4 local_58;
  QString local_50;
  int *local_48;
  Data *local_40;
  undefined1 local_31;
  
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100531159;
    }
    FUN_100533ef0(&local_48,local_48);
  }
LAB_100531159:
  uVar6 = *(uint *)(local_40 + 8);
  if (*(uint *)(local_40 + 0xc) == uVar6) goto LAB_10053174e;
  if (1 < *(uint *)local_40) {
    FUN_100534020(&local_40,*(uint *)(local_40 + 4));
    uVar6 = *(uint *)(local_40 + 8);
  }
  plVar8 = *(long **)(*(long *)(local_40 + (long)(int)uVar6 * 8 + 0x10) + 0x10);
  if (plVar8 == (long *)0x0) {
    local_58 = 0x80000000;
    local_60.field7 = 0;
  }
  else {
    (**(code **)(*plVar8 + 0x90))
              (&local_60,plVar8,*(long *)(local_40 + (long)(int)uVar6 * 8 + 0x10),0x101);
  }
  QVariant::toString();
  QVariant::~QVariant((QVariant *)&local_60);
  uVar7 = FUN_1001d50a0();
  cVar4 = FUN_1001d5140(uVar7);
  if (cVar4 == '\0') {
    QSettings::QSettings((QSettings *)local_70,(QObject *)0x0);
    local_78.field7 =
         QString::fromAscii_helper("Application preferences/ShortcutPageLastSelectedItem",0x34);
    if (1 < *(uint *)local_40) {
      FUN_100534020(&local_40,*(uint *)(local_40 + 4));
    }
    QVariant::QVariant(&local_88,
                       **(int **)(local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10));
    QSettings::setValue(local_70,(QVariant *)&local_78);
    QVariant::~QVariant(&local_88);
    if (*(int *)local_78.field15 != -1) {
      if (*(int *)local_78.field15 != 0) {
        LOCK();
        *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
        local_31 = *(int *)local_78.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053127c;
      }
      QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
    }
LAB_10053127c:
    QSettings::~QSettings((QSettings *)local_70);
  }
  puVar11 = (undefined8 *)(param_1 + 0x20);
  plVar8 = *(long **)(param_1 + 0x20);
  uVar6 = *(uint *)(plVar8 + 4);
  if (uVar6 == 0) {
LAB_1005313c5:
    if (1 < *(uint *)local_40) {
      FUN_100534020(&local_40,*(uint *)(local_40 + 4));
    }
    plVar8 = *(long **)(*(long *)(local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10) + 0x10);
    if (plVar8 == (long *)0x0) {
      local_90 = 0x80000000;
      local_98.field7 = 0;
    }
    else {
      (**(code **)(*plVar8 + 0x90))
                (&local_98,plVar8,
                 *(long *)(local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10),0x100);
    }
    uVar6 = QVariant::toInt((bool *)&local_98.field0);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
    if (1 < *(uint *)local_40) {
      FUN_100534020(&local_40,*(uint *)(local_40 + 4));
    }
    plVar8 = *(long **)(*(long *)(local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10) + 0x10);
    if (plVar8 == (long *)0x0) {
      local_a8 = 0x80000000;
      local_b0.field7 = 0;
    }
    else {
      (**(code **)(*plVar8 + 0x90))
                (&local_b0,plVar8,
                 *(long *)(local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10),0x101);
    }
    QVariant::toString();
    pvVar10 = (void *)0x0;
    if (uVar6 < 5) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28);
      switch(uVar6) {
      case 0:
        pvVar10 = operator_new(0x38);
        FUN_100565980(pvVar10,uVar7,uVar2);
        break;
      case 1:
        pvVar10 = operator_new(0x38);
        FUN_10055f260(pvVar10,uVar7,uVar2);
        break;
      case 2:
        pvVar10 = operator_new(0x38);
        FUN_10055b910(pvVar10,uVar7,uVar2);
        break;
      case 3:
        pvVar10 = operator_new(0x38);
        FUN_10056c820(pvVar10,uVar7,uVar2);
        break;
      case 4:
        pvVar10 = operator_new(0x38);
        FUN_1005577d0(pvVar10,uVar7,&local_a0,uVar2);
      }
    }
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100531642;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100531642:
    QVariant::~QVariant((QVariant *)&local_b0);
    QVariant::~QVariant((QVariant *)&local_98);
    if (pvVar10 != (void *)0x0) {
      QStackedWidget::addWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
      QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
      if ((*(long *)(*(long *)((long)pvVar10 + 8) + 0x10) != 0) &&
         (lVar9 = QWidget::layout(), lVar9 != 0)) {
        QWidget::layout();
        QLayout::activate();
      }
      puVar11 = (undefined8 *)FUN_100533480(puVar11,&local_50);
      *puVar11 = pvVar10;
      CWidgetMapper::addMapping(*(QWidget **)(*(long *)(param_1 + 0x10) + 0x38));
      QObject::connect(&local_b8,pvVar10,"2dataChanged()",
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),
                       "1onPreprocessedValueChanged()",0);
      if (local_b8 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b8);
    }
  }
  else {
    uVar5 = qHash(&local_50,*(uint *)((long)plVar8 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar6;
    plVar13 = *(long **)(plVar8[1] + uVar3 * 8);
    if (plVar13 == plVar8) goto LAB_1005313c5;
    plVar12 = (long *)(plVar8[1] + uVar3 * 8);
    do {
      plVar15 = plVar8;
      if (*(uint *)(plVar13 + 1) == uVar5) {
        cVar4 = operator==(&local_50,(QString *)(plVar13 + 2));
        plVar8 = (long *)*plVar12;
        plVar13 = plVar8;
        plVar15 = (long *)*puVar11;
        if (cVar4 != '\0') break;
      }
      plVar8 = plVar15;
      plVar12 = plVar13;
      plVar13 = (long *)*plVar12;
      plVar15 = plVar8;
    } while (plVar13 != plVar8);
    if (plVar8 == plVar15) goto LAB_1005313c5;
    if ((*(int *)((long)plVar15 + 0x14) != 0) && (uVar6 = *(uint *)(plVar15 + 4), uVar6 != 0)) {
      uVar5 = qHash(&local_50,*(uint *)((long)plVar15 + 0x24));
      uVar3 = (ulong)uVar5 % (ulong)uVar6;
      plVar8 = *(long **)(plVar15[1] + uVar3 * 8);
      if (plVar8 != plVar15) {
        plVar13 = (long *)(plVar15[1] + uVar3 * 8);
        do {
          if (*(uint *)(plVar8 + 1) == uVar5) {
            cVar4 = operator==(&local_50,(QString *)(plVar8 + 2));
            plVar15 = (long *)*puVar11;
            plVar8 = (long *)*plVar13;
            if (cVar4 != '\0') break;
          }
          plVar13 = plVar8;
          plVar8 = (long *)*plVar13;
        } while (plVar8 != plVar15);
      }
    }
    QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
    lVar9 = QWidget::layout();
    if (lVar9 != 0) {
      QWidget::layout();
      QLayout::activate();
    }
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053174e;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10053174e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar9 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar14 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar14 != (void *)0x0) {
          operator_delete(*(void **)pDVar14);
        }
        pDVar14 = pDVar14 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

