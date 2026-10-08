
void FUN_100535dd0(long param_1)

{
  QPixmap *pQVar1;
  QString *pQVar2;
  long *plVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  QItemDelegate *this;
  QArrayData *pQVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  Data *local_288;
  Data *local_280;
  Data *local_278;
  undefined4 local_270;
  QArrayData *local_268;
  Data *local_260;
  QPixmap local_258 [32];
  QPixmap local_238 [32];
  QArrayData *local_218;
  QPixmap local_210 [32];
  QArrayData *local_1f0;
  QPixmap local_1e8 [32];
  QArrayData *local_1c8;
  QPixmap local_1c0 [32];
  QPixmap local_1a0 [32];
  QPixmap local_180 [32];
  QArrayData *local_160;
  QPixmap local_158 [32];
  QArrayData *local_138;
  QPixmap local_130 [32];
  QArrayData *local_110;
  QPixmap local_108 [32];
  QPixmap local_e8 [32];
  QPixmap local_c8 [32];
  QArrayData *local_a8;
  QPixmap local_a0 [32];
  QArrayData *local_80;
  QPixmap local_78 [32];
  QArrayData *local_58;
  QPixmap local_50 [39];
  undefined1 local_29;
  
  FUN_100538ac0(*(undefined8 *)(param_1 + 0x48),param_1);
  pvVar5 = operator_new(0x10);
  FUN_100139d70(pvVar5,param_1);
  FUN_100139df0(pvVar5,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28));
  FUN_100139df0(pvVar5,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30));
  FUN_100139df0(pvVar5,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38));
  QButtonGroup::setExclusive(SUB81(pvVar5,0));
  uVar6 = QTreeView::header();
  QHeaderView::setStretchLastSection(SUB81(uVar6,0));
  QHeaderView::setSectionsMovable(SUB81(uVar6,0));
  QHeaderView::setSectionResizeMode(uVar6,0,1);
  QHeaderView::setSectionResizeMode(uVar6,1,1);
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x48) + 0x78),false);
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x90);
  local_58 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus.png",0x25);
  QPixmap::QPixmap(local_50,&local_58,0,0);
  local_80 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_pressed.png",0x2d);
  QPixmap::QPixmap(local_78,&local_80,0,0);
  local_a8 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_disabled.png",0x2e);
  QPixmap::QPixmap(local_a0,&local_a8,0,0);
  QPixmap::QPixmap(local_c8);
  QPixmap::QPixmap(local_e8);
  CImageButton::setPixmaps(pQVar1,local_50,local_78,local_a0,local_c8);
  QPixmap::~QPixmap(local_e8);
  QPixmap::~QPixmap(local_c8);
  QPixmap::~QPixmap(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100535fb7;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100535fb7:
  QPixmap::~QPixmap(local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100535ff0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100535ff0:
  QPixmap::~QPixmap(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100536029;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100536029:
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x98);
  local_110 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus.png",0x26)
  ;
  QPixmap::QPixmap(local_108,&local_110,0,0);
  local_138 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_pressed.png",0x2e);
  QPixmap::QPixmap(local_130,&local_138,0,0);
  local_160 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_disabled.png",0x2f);
  QPixmap::QPixmap(local_158,&local_160,0,0);
  QPixmap::QPixmap(local_180);
  QPixmap::QPixmap(local_1a0);
  CImageButton::setPixmaps(pQVar1,local_108,local_130,local_158,local_180);
  QPixmap::~QPixmap(local_1a0);
  QPixmap::~QPixmap(local_180);
  QPixmap::~QPixmap(local_158);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_29 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053615e;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10053615e:
  QPixmap::~QPixmap(local_130);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005361a0;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005361a0:
  QPixmap::~QPixmap(local_108);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005361e2;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1005361e2:
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0xa8);
  local_1c8 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit.png",0x25);
  QPixmap::QPixmap(local_1c0,&local_1c8,0,0);
  local_1f0 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit_pressed.png",0x2d);
  QPixmap::QPixmap(local_1e8,&local_1f0,0,0);
  local_218 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit_disabled.png",0x2e);
  QPixmap::QPixmap(local_210,&local_218,0,0);
  QPixmap::QPixmap(local_238);
  QPixmap::QPixmap(local_258);
  CImageButton::setPixmaps(pQVar1,local_1c0,local_1e8,local_210,local_238);
  QPixmap::~QPixmap(local_258);
  QPixmap::~QPixmap(local_238);
  QPixmap::~QPixmap(local_210);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_29 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100536317;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_100536317:
  QPixmap::~QPixmap(local_1e8);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_29 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100536359;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_100536359:
  QPixmap::~QPixmap(local_1c0);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_29 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053639b;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10053639b:
  QWidget::setFixedHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80));
  QBoxLayout::setSpacing((int)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88));
  QTreeWidget::clear();
  this = operator_new(0x20);
  QItemDelegate::QItemDelegate(this,*(QObject **)(*(long *)(param_1 + 0x48) + 0x78));
  *(undefined ***)this = &PTR_FUN_10221a8c0;
  auVar10._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar10._0_8_ = PTR_shared_null_1021e15d0;
  auVar10._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(this + 0x10) = auVar10;
  *(QItemDelegate **)(param_1 + 0x50) = this;
  QAbstractItemView::setItemDelegate(*(QAbstractItemDelegate **)(*(long *)(param_1 + 0x48) + 0x78));
  local_268 = (QArrayData *)PTR_shared_null_1021e1288;
  local_260 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_1,&local_268,PTR_staticMetaObject_1021e12f8,&local_260,1);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_29 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053649c;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_10053649c:
  local_288 = local_260;
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 == 0) {
      QListData::detach((int)&local_288);
      lVar8 = (long)*(int *)(local_288 + 8);
      if ((local_260 + (long)*(int *)(local_260 + 8) * 8 != local_288 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_288 + 0xc) - lVar8,
         lVar9 != 0 && lVar8 <= *(int *)(local_288 + 0xc))) {
        _memcpy(local_288 + lVar8 * 8 + 0x10,local_260 + (long)*(int *)(local_260 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + 1;
      local_29 = *(int *)local_260 != 0;
      UNLOCK();
    }
  }
  local_280 = local_288 + (long)*(int *)(local_288 + 8) * 8 + 0x10;
  local_278 = local_288 + (long)*(int *)(local_288 + 0xc) * 8 + 0x10;
  if (*(int *)(local_288 + 8) != *(int *)(local_288 + 0xc)) {
    do {
      local_270 = 1;
      pQVar2 = *(QString **)local_280;
      pQVar7 = (QArrayData *)
               QString::fromAscii_helper("QRadioButton { margin-left: 12; margin-bottom: 6 }",0x32);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005365b8;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
LAB_1005365b8:
      local_280 = local_280 + 8;
    } while (local_280 != local_278);
  }
  local_270 = 1;
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_29 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100536609;
    }
    QListData::dispose(local_288);
  }
LAB_100536609:
  cVar4 = FUN_100d80630(1);
  if (cVar4 != '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 0x48);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
  }
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      UNLOCK();
      if (*(int *)local_260 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_260);
  }
  return;
}

