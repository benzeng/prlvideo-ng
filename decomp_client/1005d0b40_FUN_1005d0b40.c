
void FUN_1005d0b40(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QVariant *pQVar8;
  ulong uVar9;
  long lVar10;
  Data_conflict *pDVar11;
  bool bVar12;
  int local_134;
  QVariant local_118;
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  uint local_e8;
  QVariant local_e0;
  QVariant local_d0;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
  QVariant local_98;
  Data_conflict local_88;
  undefined4 local_80;
  Data_conflict local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  long local_58;
  long local_50;
  long local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  FUN_1005b9950(&local_48,uVar6);
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  FUN_1005b9920(&local_50,uVar6);
  if (*(int *)(local_48 + 0xc) - *(int *)(local_48 + 8) !=
      *(int *)(local_50 + 0xc) - *(int *)(local_50 + 8)) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "osEditionsToShow.size() == osEditionsSysName.size()",
                  "Wizards/NewVmWizard/Pages/CNewVmWizExpressWinOptionsPage.cpp",0xd6,
                  "updateOsEditions");
  }
  lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  if (*(int *)(lVar7 + 0x60) == 0) {
    bVar12 = false;
  }
  else {
    lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar7 + 0x60) == 4) {
      bVar12 = false;
    }
    else {
      uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      FUN_1005b9920(&local_58,uVar6);
      if (*(int *)(local_58 + 0xc) == *(int *)(local_58 + 8)) {
        bVar12 = false;
      }
      else if (*(int *)(local_48 + 0xc) - *(int *)(local_48 + 8) ==
               *(int *)(local_50 + 0xc) - *(int *)(local_50 + 8)) {
        lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
        bVar12 = true;
        if ((*(int *)(lVar7 + 0x38) != 0x80a) &&
           (lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48), *(int *)(lVar7 + 0x38) != 0x80d
           )) {
          lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
          bVar12 = *(int *)(lVar7 + 0x38) == 0x810;
        }
      }
      else {
        bVar12 = false;
      }
      FUN_100039a80(&local_58);
    }
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar12);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar12);
  if (bVar12 == false) goto LAB_1005d1354;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = QComboBox::count();
  local_134 = -1;
  if (iVar3 != 0) {
    QComboBox::currentText();
    QString::operator=(&local_60,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005d0da7;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1005d0da7:
    local_134 = QComboBox::currentIndex();
  }
  QComboBox::clear();
  QMenu::clear();
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Select_your_Windows_edition_102274810);
  FUN_1005d5580(&local_48,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d0e48;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d0e48:
  uVar9 = (ulong)*(uint *)(local_48 + 8);
  if ((int)*(uint *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    lVar7 = 0;
    do {
      local_78 = (Data_conflict)
                 ((Data_conflict *)(local_48 + 0x10 + ((int)uVar9 + lVar7) * 8))->field15;
      if (1 < *(int *)local_78.field15 + 1U) {
        LOCK();
        *(int *)local_78.field15 = *(int *)local_78.field15 + 1;
        local_31 = *(int *)local_78.field15 != 0;
        UNLOCK();
      }
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      local_80 = 0x80000000;
      local_88.field7 = 0;
      uVar4 = QComboBox::count();
      QIcon::QIcon(local_40);
      QComboBox::insertItem
                ((int)uVar6,(QIcon *)(ulong)uVar4,(QString *)local_40,(QVariant *)&local_78);
      QIcon::~QIcon(local_40);
      QVariant::~QVariant((QVariant *)&local_88);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      iVar3 = QComboBox::count();
      pDVar11 = &local_78;
      if ((int)lVar7 != 0) {
        pDVar11 = (Data_conflict *)(local_50 + 8 + (*(int *)(local_50 + 8) + lVar7) * 8);
      }
      QVariant::QVariant(&local_98,(QString *)pDVar11);
      QComboBox::setItemData((int)uVar6,(QVariant *)(ulong)(iVar3 - 1),(int)&local_98);
      QVariant::~QVariant(&local_98);
      pQVar8 = (QVariant *)QMenu::addAction((QString *)(param_1 + 0x20));
      iVar3 = QComboBox::count();
      QVariant::QVariant(&local_a8,iVar3 + -1);
      QAction::setData(pQVar8);
      QVariant::~QVariant(&local_a8);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      QComboBox::count();
      QComboBox::itemData((int)&local_c0,(int)uVar6);
      QVariant::toString();
      QVariant::~QVariant(&local_c0);
      QAction::setToolTip((QString *)pQVar8);
      QAction::setCheckable(SUB81(pQVar8,0));
      QActionGroup::addAction((QAction *)(param_1 + 0x50));
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d104d;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1005d104d:
      if (*(int *)local_78.field15 != -1) {
        if (*(int *)local_78.field15 != 0) {
          LOCK();
          *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
          local_31 = *(int *)local_78.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d107d;
        }
        QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
      }
LAB_1005d107d:
      lVar7 = lVar7 + 1;
      uVar9 = (ulong)*(int *)(local_48 + 8);
    } while (lVar7 < (long)((long)*(int *)(local_48 + 0xc) - uVar9));
  }
  cVar2 = '\0';
  if (local_134 != -1) {
    QVariant::QVariant(&local_d0,&local_60);
    QComboBox::itemData((int)&local_e0,(int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
    cVar2 = QVariant::cmp(&local_d0);
    QVariant::~QVariant(&local_e0);
    QVariant::~QVariant(&local_d0);
  }
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar3 = local_134;
  }
  FUN_1001326a0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),iVar3);
  QWidget::actions();
  local_100 = local_108;
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 == 0) {
      QListData::detach((int)&local_100);
      lVar7 = (long)*(int *)(local_100 + 8);
      if ((local_108 + (long)*(int *)(local_108 + 8) * 8 != local_100 + lVar7 * 8) &&
         (lVar10 = *(int *)(local_100 + 0xc) - lVar7,
         lVar10 != 0 && lVar7 <= *(int *)(local_100 + 0xc))) {
        _memcpy(local_100 + lVar7 * 8 + 0x10,local_108 + (long)*(int *)(local_108 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + 1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
    }
  }
  local_f8 = local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10;
  local_f0 = local_100 + (long)*(int *)(local_100 + 0xc) * 8 + 0x10;
  local_e8 = 1;
  if (*(int *)local_108 == -1) {
LAB_1005d1222:
    if (local_f8 != local_f0) {
      do {
        if (local_e8 == 0) {
LAB_1005d12ca:
          local_f8 = local_f8 + 8;
          local_e8 = 1;
        }
        else {
          uVar6 = *(undefined8 *)local_f8;
          QAction::data();
          iVar5 = QVariant::toInt((bool *)&local_118);
          QVariant::~QVariant(&local_118);
          if (iVar5 != iVar3) goto LAB_1005d12ca;
          QAction::setChecked(SUB81(uVar6,0));
          QMenu::setActiveAction((QAction *)(param_1 + 0x20));
          local_f8 = local_f8 + 8;
          uVar4 = local_e8 ^ 1;
          bVar12 = local_e8 == 1;
          local_e8 = uVar4;
          if (bVar12) break;
        }
      } while (local_f8 != local_f0);
    }
  }
  else {
    if (*(int *)local_108 == 0) {
LAB_1005d120f:
      QListData::dispose(local_108);
    }
    else {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005d120f;
    }
    if (local_e8 != 0) goto LAB_1005d1222;
  }
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d1324;
    }
    QListData::dispose(local_100);
  }
LAB_1005d1324:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005d1354;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1005d1354:
  FUN_100039a80(&local_50);
  FUN_100039a80(&local_48);
  return;
}

