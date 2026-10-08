
void FUN_10057af40(QObject *param_1)

{
  int iVar1;
  QPixmap *pQVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  QStyledItemDelegate *this;
  QPixmap local_470 [32];
  QPixmap local_450 [32];
  QArrayData *local_430;
  QPixmap local_428 [32];
  QArrayData *local_408;
  QPixmap local_400 [32];
  QArrayData *local_3e0;
  QPixmap local_3d8 [32];
  QPixmap local_3b8 [32];
  QPixmap local_398 [32];
  QArrayData *local_378;
  QPixmap local_370 [32];
  QArrayData *local_350;
  QPixmap local_348 [32];
  QArrayData *local_328;
  QPixmap local_320 [32];
  QPixmap local_300 [32];
  QPixmap local_2e0 [32];
  QArrayData *local_2c0;
  QPixmap local_2b8 [32];
  QArrayData *local_298;
  QPixmap local_290 [32];
  QArrayData *local_270;
  QPixmap local_268 [32];
  QPixmap local_248 [32];
  QPixmap local_228 [32];
  QArrayData *local_208;
  QPixmap local_200 [32];
  QArrayData *local_1e0;
  QPixmap local_1d8 [32];
  QArrayData *local_1b8;
  QPixmap local_1b0 [32];
  QPixmap local_190 [32];
  QPixmap local_170 [32];
  QArrayData *local_150;
  QPixmap local_148 [32];
  QArrayData *local_128;
  QPixmap local_120 [32];
  QArrayData *local_100;
  QPixmap local_f8 [32];
  QPixmap local_d8 [32];
  QPixmap local_b8 [32];
  QArrayData *local_98;
  QPixmap local_90 [32];
  QArrayData *local_70;
  QPixmap local_68 [32];
  QArrayData *local_48;
  QPixmap local_40 [39];
  undefined1 local_19;
  
  FUN_10057f360(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x48);
  local_48 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_26x22.png",0x2b);
  QPixmap::QPixmap(local_40,&local_48,0,0);
  local_70 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_pressed_26x22.png",0x33);
  QPixmap::QPixmap(local_68,&local_70,0,0);
  local_98 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_disabled_26x22.png",0x34);
  QPixmap::QPixmap(local_90,&local_98,0,0);
  QPixmap::QPixmap(local_b8);
  QPixmap::QPixmap(local_d8);
  CImageButton::setPixmaps(pQVar2,local_40,local_68,local_90,local_b8);
  QPixmap::~QPixmap(local_d8);
  QPixmap::~QPixmap(local_b8);
  QPixmap::~QPixmap(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b078;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10057b078:
  QPixmap::~QPixmap(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b0b1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10057b0b1:
  QPixmap::~QPixmap(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b0ea;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10057b0ea:
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x50);
  local_100 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_25x22.png",0x2c);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  local_128 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_pressed_25x22.png",0x34)
  ;
  QPixmap::QPixmap(local_120,&local_128,0,0);
  local_150 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_minus_disabled_25x22.png",0x35);
  QPixmap::QPixmap(local_148,&local_150,0,0);
  QPixmap::QPixmap(local_170);
  QPixmap::QPixmap(local_190);
  CImageButton::setPixmaps(pQVar2,local_f8,local_120,local_148,local_170);
  QPixmap::~QPixmap(local_190);
  QPixmap::~QPixmap(local_170);
  QPixmap::~QPixmap(local_148);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_19 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b21c;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10057b21c:
  QPixmap::~QPixmap(local_120);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_19 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b25e;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10057b25e:
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_19 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b2a0;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10057b2a0:
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x58);
  local_1b8 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit1_27x22.png",0x2c);
  QPixmap::QPixmap(local_1b0,&local_1b8,0,0);
  local_1e0 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_edit_pressed1_27x22.png",0x34)
  ;
  QPixmap::QPixmap(local_1d8,&local_1e0,0,0);
  local_208 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_edit_disabled1_27x22.png",0x35);
  QPixmap::QPixmap(local_200,&local_208,0,0);
  QPixmap::QPixmap(local_228);
  QPixmap::QPixmap(local_248);
  CImageButton::setPixmaps(pQVar2,local_1b0,local_1d8,local_200,local_228);
  QPixmap::~QPixmap(local_248);
  QPixmap::~QPixmap(local_228);
  QPixmap::~QPixmap(local_200);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_19 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b3d2;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10057b3d2:
  QPixmap::~QPixmap(local_1d8);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_19 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b414;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_10057b414:
  QPixmap::~QPixmap(local_1b0);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_19 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b456;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10057b456:
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x60);
  local_270 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_268,&local_270,0,0);
  local_298 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_290,&local_298,0,0);
  local_2c0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_2b8,&local_2c0,0,0);
  QPixmap::QPixmap(local_2e0);
  QPixmap::QPixmap(local_300);
  CImageButton::setPixmaps(pQVar2,local_268,local_290,local_2b8,local_2e0);
  QPixmap::~QPixmap(local_300);
  QPixmap::~QPixmap(local_2e0);
  QPixmap::~QPixmap(local_2b8);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_19 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b588;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_10057b588:
  QPixmap::~QPixmap(local_290);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_19 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b5ca;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_10057b5ca:
  QPixmap::~QPixmap(local_268);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_19 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b60c;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_10057b60c:
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x68);
  local_328 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_320,&local_328,0,0);
  local_350 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_348,&local_350,0,0);
  local_378 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_370,&local_378,0,0);
  QPixmap::QPixmap(local_398);
  QPixmap::QPixmap(local_3b8);
  CImageButton::setPixmaps(pQVar2,local_320,local_348,local_370,local_398);
  QPixmap::~QPixmap(local_3b8);
  QPixmap::~QPixmap(local_398);
  QPixmap::~QPixmap(local_370);
  if (*(int *)local_378 != -1) {
    if (*(int *)local_378 != 0) {
      LOCK();
      *(int *)local_378 = *(int *)local_378 + -1;
      local_19 = *(int *)local_378 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b73e;
    }
    QArrayData::deallocate(local_378,2,8);
  }
LAB_10057b73e:
  QPixmap::~QPixmap(local_348);
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_19 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b780;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_10057b780:
  QPixmap::~QPixmap(local_320);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_19 = *(int *)local_328 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b7c2;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_10057b7c2:
  CImageButton::setHorExpanding(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),0));
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x18) + 0x70);
  local_3e0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_3d8,&local_3e0,0,0);
  local_408 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_400,&local_408,0,0);
  local_430 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_428,&local_430,0,0);
  QPixmap::QPixmap(local_450);
  QPixmap::QPixmap(local_470);
  CImageButton::setPixmaps(pQVar2,local_3d8,local_400,local_428,local_450);
  QPixmap::~QPixmap(local_470);
  QPixmap::~QPixmap(local_450);
  QPixmap::~QPixmap(local_428);
  if (*(int *)local_430 != -1) {
    if (*(int *)local_430 != 0) {
      LOCK();
      *(int *)local_430 = *(int *)local_430 + -1;
      local_19 = *(int *)local_430 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b906;
    }
    QArrayData::deallocate(local_430,2,8);
  }
LAB_10057b906:
  QPixmap::~QPixmap(local_400);
  if (*(int *)local_408 != -1) {
    if (*(int *)local_408 != 0) {
      LOCK();
      *(int *)local_408 = *(int *)local_408 + -1;
      local_19 = *(int *)local_408 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b948;
    }
    QArrayData::deallocate(local_408,2,8);
  }
LAB_10057b948:
  QPixmap::~QPixmap(local_3d8);
  if (*(int *)local_3e0 != -1) {
    if (*(int *)local_3e0 != 0) {
      LOCK();
      *(int *)local_3e0 = *(int *)local_3e0 + -1;
      local_19 = *(int *)local_3e0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10057b98a;
    }
    QArrayData::deallocate(local_3e0,2,8);
  }
LAB_10057b98a:
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),0);
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),0);
  lVar5 = QWidget::layout();
  if (lVar5 != 0) {
    iVar4 = QWidget::layout();
    QLayout::setSpacing(iVar4);
  }
  uVar6 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),0x400);
  QWidget::setFocus(uVar6,7);
  QTreeView::setRootIsDecorated(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
  this = operator_new(0x10);
  QStyledItemDelegate::QStyledItemDelegate(this,param_1);
  *(undefined **)this = &DAT_1022742a0;
  QAbstractItemView::setItemDelegate(*(QAbstractItemDelegate **)(*(long *)(param_1 + 0x18) + 0x30));
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x30),false);
  plVar3 = *(long **)(param_1 + 0x10);
  iVar4 = *(int *)(plVar3[5] + 0x1c);
  iVar1 = *(int *)(plVar3[5] + 0x14);
  (**(code **)(*plVar3 + 0x78))(plVar3);
  QWidget::setFixedSize((int)plVar3,(iVar4 + 1) - iVar1);
  return;
}

