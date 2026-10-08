
void FUN_1005276b0(long param_1)

{
  QString *pQVar1;
  QObject *pQVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  int *local_1b0;
  QVariant local_1a8;
  Data_conflict local_198;
  QVariant local_190;
  Data_conflict local_180;
  QVariant local_178;
  Data_conflict local_168;
  QVariant local_160;
  Data_conflict local_150;
  QVariant local_148;
  Data_conflict local_138;
  QVariant local_130;
  Data_conflict local_120;
  QVariant local_118;
  Data_conflict local_108;
  int *local_100;
  QObject *local_f8;
  int *local_f0;
  QObject *local_e8;
  int *local_e0;
  QObject *local_d8;
  int *local_d0;
  QObject *local_c8;
  int *local_c0;
  QObject *local_b8;
  int *local_b0;
  QObject *local_a8;
  int *local_a0;
  QObject *local_98;
  int *local_90;
  QObject *local_88;
  int *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_100529080(*(undefined8 *)(param_1 + 0x48),param_1);
  CPrlFileDevSelectorWidget::setCustomWidgetType
            (*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),1);
  CPrlFileDevSelectorWidget::setDisplayShortNames
            (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),0));
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 0x30);
  QMetaObject::tr((char *)&local_78,(char *)&PTR_PTR_10221a330,
                  (int)PTR_s_Select_a_default_folder_for_virt_1022706a0);
  CPrlFileDevSelectorWidget::setFileDialogAccessoryViewText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052775c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10052775c:
  local_80 = (int *)PTR_shared_null_1021e15e8;
  cVar4 = FUN_100d80630(1);
  if (cVar4 == '\0') {
    QComboBox::clear();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80);
    QMetaObject::tr(&local_108.field0,(char *)&PTR_PTR_10221a330,0x1dc88e6);
    QVariant::QVariant(&local_118,0);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_70);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_70,(QVariant *)&local_108);
    QIcon::~QIcon((QIcon *)&local_70);
    QVariant::~QVariant(&local_118);
    if (*(int *)local_108.field15 != -1) {
      if (*(int *)local_108.field15 != 0) {
        LOCK();
        *(int *)local_108.field15 = *(int *)local_108.field15 + -1;
        local_31 = *(int *)local_108.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527b12;
      }
      QArrayData::deallocate((QArrayData *)local_108.field15,2,8);
    }
LAB_100527b12:
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80);
    QMetaObject::tr(&local_120.field0,(char *)&PTR_PTR_10221a330,0x1dfea91);
    QVariant::QVariant(&local_130,1);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_68);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_68,(QVariant *)&local_120);
    QIcon::~QIcon((QIcon *)&local_68);
    QVariant::~QVariant(&local_130);
    if (*(int *)local_120.field15 != -1) {
      if (*(int *)local_120.field15 != 0) {
        LOCK();
        *(int *)local_120.field15 = *(int *)local_120.field15 + -1;
        local_31 = *(int *)local_120.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527bca;
      }
      QArrayData::deallocate((QArrayData *)local_120.field15,2,8);
    }
LAB_100527bca:
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80);
    QMetaObject::tr(&local_138.field0,(char *)&PTR_PTR_10221a330,0x1dfea9c);
    QVariant::QVariant(&local_148,2);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_60);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_60,(QVariant *)&local_138);
    QIcon::~QIcon((QIcon *)&local_60);
    QVariant::~QVariant(&local_148);
    if (*(int *)local_138.field15 != -1) {
      if (*(int *)local_138.field15 != 0) {
        LOCK();
        *(int *)local_138.field15 = *(int *)local_138.field15 + -1;
        local_31 = *(int *)local_138.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527c82;
      }
      QArrayData::deallocate((QArrayData *)local_138.field15,2,8);
    }
LAB_100527c82:
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80);
    QMetaObject::tr(&local_150.field0,(char *)&PTR_PTR_10221a330,0x1dfeaa8);
    QVariant::QVariant(&local_160,3);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_58);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_58,(QVariant *)&local_150);
    QIcon::~QIcon((QIcon *)&local_58);
    QVariant::~QVariant(&local_160);
    if (*(int *)local_150.field15 != -1) {
      if (*(int *)local_150.field15 != 0) {
        LOCK();
        *(int *)local_150.field15 = *(int *)local_150.field15 + -1;
        local_31 = *(int *)local_150.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527d3a;
      }
      QArrayData::deallocate((QArrayData *)local_150.field15,2,8);
    }
LAB_100527d3a:
    QComboBox::clear();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x68);
    QMetaObject::tr(&local_168.field0,(char *)&PTR_PTR_10221a330,0x1dfeab5);
    QVariant::QVariant(&local_178,0);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_50);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_50,(QVariant *)&local_168);
    QIcon::~QIcon((QIcon *)&local_50);
    QVariant::~QVariant(&local_178);
    if (*(int *)local_168.field15 != -1) {
      if (*(int *)local_168.field15 != 0) {
        LOCK();
        *(int *)local_168.field15 = *(int *)local_168.field15 + -1;
        local_31 = *(int *)local_168.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527df9;
      }
      QArrayData::deallocate((QArrayData *)local_168.field15,2,8);
    }
LAB_100527df9:
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x68);
    QMetaObject::tr(&local_180.field0,(char *)&PTR_PTR_10221a330,0x1dfeabd);
    QVariant::QVariant(&local_190,1);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_48);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_48,(QVariant *)&local_180);
    QIcon::~QIcon((QIcon *)&local_48);
    QVariant::~QVariant(&local_190);
    if (*(int *)local_180.field15 != -1) {
      if (*(int *)local_180.field15 != 0) {
        LOCK();
        *(int *)local_180.field15 = *(int *)local_180.field15 + -1;
        local_31 = *(int *)local_180.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527eae;
      }
      QArrayData::deallocate((QArrayData *)local_180.field15,2,8);
    }
LAB_100527eae:
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x68);
    QMetaObject::tr(&local_198.field0,(char *)&PTR_PTR_10221a330,0x1dc6af0);
    QVariant::QVariant(&local_1a8,2);
    uVar5 = QComboBox::count();
    QIcon::QIcon((QIcon *)&local_40);
    QComboBox::insertItem((int)uVar3,(QIcon *)(ulong)uVar5,&local_40,(QVariant *)&local_198);
    QIcon::~QIcon((QIcon *)&local_40);
    QVariant::~QVariant(&local_1a8);
    if (*(int *)local_198.field15 != -1) {
      if (*(int *)local_198.field15 != 0) {
        LOCK();
        *(int *)local_198.field15 = *(int *)local_198.field15 + -1;
        local_31 = *(int *)local_198.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100527f63;
      }
      QArrayData::deallocate((QArrayData *)local_198.field15,2,8);
    }
  }
  else {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x78);
    piVar6 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_90 = piVar6;
    local_88 = pQVar2;
    FUN_10007b8d0(&local_80,&local_90);
    local_98 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x80);
    piVar7 = (int *)0x0;
    if (local_98 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_98);
    }
    local_a0 = piVar7;
    FUN_10007b8d0(&local_80,&local_a0);
    local_a8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x88);
    piVar8 = (int *)0x0;
    if (local_a8 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_a8);
    }
    local_b0 = piVar8;
    FUN_10007b8d0(&local_80,&local_b0);
    local_b8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x90);
    piVar9 = (int *)0x0;
    if (local_b8 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_b8);
    }
    local_c0 = piVar9;
    FUN_10007b8d0(&local_80,&local_c0);
    local_c8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x70);
    piVar10 = (int *)0x0;
    if (local_c8 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_c8);
    }
    local_d0 = piVar10;
    FUN_10007b8d0(&local_80,&local_d0);
    local_d8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x60);
    piVar11 = (int *)0x0;
    if (local_d8 != (QObject *)0x0) {
      piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_d8);
    }
    local_e0 = piVar11;
    FUN_10007b8d0(&local_80,&local_e0);
    local_e8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x68);
    piVar12 = (int *)0x0;
    if (local_e8 != (QObject *)0x0) {
      piVar12 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_e8);
    }
    local_f0 = piVar12;
    FUN_10007b8d0(&local_80,&local_f0);
    local_f8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x58);
    piVar13 = (int *)0x0;
    if (local_f8 != (QObject *)0x0) {
      piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_f8);
    }
    local_100 = piVar13;
    FUN_10007b8d0(&local_80,&local_100);
    if (piVar13 != (int *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + -1;
      local_31 = *piVar13 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar13);
      }
    }
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      local_31 = *piVar12 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar12);
      }
    }
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar11);
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar6);
      }
    }
  }
LAB_100527f63:
  FUN_10006b440(&local_1b0,&local_80);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_1b0);
  if (*local_1b0 != -1) {
    if (*local_1b0 != 0) {
      LOCK();
      *local_1b0 = *local_1b0 + -1;
      local_31 = *local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100527fb5;
    }
    FUN_10006b5d0(&local_1b0,local_1b0);
  }
LAB_100527fb5:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 200);
  QAbstractButton::text();
  local_1c0 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
  FUN_1001c72b0(&local_1c8);
  QString::replace(&local_1b8,&local_1c0,&local_1c8,1);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100528053;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100528053:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100528089;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100528089:
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005280bf;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1005280bf:
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      UNLOCK();
      if (*local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10006b5d0(&local_80,local_80);
  }
  return;
}

