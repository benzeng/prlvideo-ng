
void FUN_1004dedc0(long param_1)

{
  QPixmap *pQVar1;
  QString *pQVar2;
  int iVar3;
  long lVar4;
  QArrayData *local_3d0;
  QArrayData *local_3c8;
  QPixmap local_3c0 [32];
  QPixmap local_3a0 [32];
  QArrayData *local_380;
  QPixmap local_378 [32];
  QArrayData *local_358;
  QPixmap local_350 [32];
  QArrayData *local_330;
  QPixmap local_328 [32];
  QPixmap local_308 [32];
  QPixmap local_2e8 [32];
  QArrayData *local_2c8;
  QPixmap local_2c0 [32];
  QArrayData *local_2a0;
  QPixmap local_298 [32];
  QArrayData *local_278;
  QPixmap local_270 [32];
  QPixmap local_250 [32];
  QPixmap local_230 [32];
  QArrayData *local_210;
  QPixmap local_208 [32];
  QArrayData *local_1e8;
  QPixmap local_1e0 [32];
  QArrayData *local_1c0;
  QPixmap local_1b8 [32];
  QPixmap local_198 [32];
  QPixmap local_178 [32];
  QArrayData *local_158;
  QPixmap local_150 [32];
  QArrayData *local_130;
  QPixmap local_128 [32];
  QArrayData *local_108;
  QPixmap local_100 [32];
  QPixmap local_e0 [32];
  QPixmap local_c0 [32];
  QArrayData *local_a0;
  QPixmap local_98 [32];
  QArrayData *local_78;
  QPixmap local_70 [32];
  QArrayData *local_50;
  QPixmap local_48 [39];
  undefined1 local_21;
  
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x38);
  local_50 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_26x22.png",0x2b);
  QPixmap::QPixmap(local_48,&local_50,0,0);
  local_78 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_pressed_26x22.png",0x33);
  QPixmap::QPixmap(local_70,&local_78,0,0);
  local_a0 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_plus_disabled_26x22.png",0x34);
  QPixmap::QPixmap(local_98,&local_a0,0,0);
  QPixmap::QPixmap(local_c0);
  QPixmap::QPixmap(local_e0);
  CImageButton::setPixmaps(pQVar1,local_48,local_70,local_98,local_c0);
  QPixmap::~QPixmap(local_e0);
  QPixmap::~QPixmap(local_c0);
  QPixmap::~QPixmap(local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004deeed;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004deeed:
  QPixmap::~QPixmap(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004def26;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004def26:
  QPixmap::~QPixmap(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004def5f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004def5f:
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x40);
  local_108 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_25x22.png",0x2c);
  QPixmap::QPixmap(local_100,&local_108,0,0);
  local_130 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_minus_pressed_25x22.png",0x34)
  ;
  QPixmap::QPixmap(local_128,&local_130,0,0);
  local_158 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_btn_minus_disabled_25x22.png",0x35);
  QPixmap::QPixmap(local_150,&local_158,0,0);
  QPixmap::QPixmap(local_178);
  QPixmap::QPixmap(local_198);
  CImageButton::setPixmaps(pQVar1,local_100,local_128,local_150,local_178);
  QPixmap::~QPixmap(local_198);
  QPixmap::~QPixmap(local_178);
  QPixmap::~QPixmap(local_150);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df091;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004df091:
  QPixmap::~QPixmap(local_128);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df0d3;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004df0d3:
  QPixmap::~QPixmap(local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df115;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004df115:
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x48);
  local_1c0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_1b8,&local_1c0,0,0);
  local_1e8 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_1e0,&local_1e8,0,0);
  local_210 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_208,&local_210,0,0);
  QPixmap::QPixmap(local_230);
  QPixmap::QPixmap(local_250);
  CImageButton::setPixmaps(pQVar1,local_1b8,local_1e0,local_208,local_230);
  QPixmap::~QPixmap(local_250);
  QPixmap::~QPixmap(local_230);
  QPixmap::~QPixmap(local_208);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_21 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df247;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1004df247:
  QPixmap::~QPixmap(local_1e0);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_21 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df289;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_1004df289:
  QPixmap::~QPixmap(local_1b8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_21 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df2cb;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1004df2cb:
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x50);
  local_278 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_270,&local_278,0,0);
  local_2a0 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_298,&local_2a0,0,0);
  local_2c8 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png",0x39);
  QPixmap::QPixmap(local_2c0,&local_2c8,0,0);
  QPixmap::QPixmap(local_2e8);
  QPixmap::QPixmap(local_308);
  CImageButton::setPixmaps(pQVar1,local_270,local_298,local_2c0,local_2e8);
  QPixmap::~QPixmap(local_308);
  QPixmap::~QPixmap(local_2e8);
  QPixmap::~QPixmap(local_2c0);
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_21 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df3fd;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1004df3fd:
  QPixmap::~QPixmap(local_298);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_21 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df43f;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_1004df43f:
  QPixmap::~QPixmap(local_270);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_21 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df481;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1004df481:
  CImageButton::setHorExpanding(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x50),0));
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x48) + 0x58);
  local_330 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_328,&local_330,0,0);
  local_358 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_350,&local_358,0,0);
  local_380 = (QArrayData *)
              QString::fromAscii_helper
                        (":/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png",0x38);
  QPixmap::QPixmap(local_378,&local_380,0,0);
  QPixmap::QPixmap(local_3a0);
  QPixmap::QPixmap(local_3c0);
  CImageButton::setPixmaps(pQVar1,local_328,local_350,local_378,local_3a0);
  QPixmap::~QPixmap(local_3c0);
  QPixmap::~QPixmap(local_3a0);
  QPixmap::~QPixmap(local_378);
  if (*(int *)local_380 != -1) {
    if (*(int *)local_380 != 0) {
      LOCK();
      *(int *)local_380 = *(int *)local_380 + -1;
      local_21 = *(int *)local_380 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df5c5;
    }
    QArrayData::deallocate(local_380,2,8);
  }
LAB_1004df5c5:
  QPixmap::~QPixmap(local_350);
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_21 = *(int *)local_358 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df607;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_1004df607:
  QPixmap::~QPixmap(local_328);
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_21 = *(int *)local_330 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df649;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_1004df649:
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),0);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),0));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x50),0);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x50),0));
  QWidget::setFocusPolicy(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58),0);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58),0));
  lVar4 = QWidget::layout();
  if (lVar4 != 0) {
    iVar3 = QWidget::layout();
    QLayout::setSpacing(iVar3);
  }
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x48) + 0x38);
  QMetaObject::tr((char *)&local_3c8,PTR_staticMetaObject_1021e1520,0x1dcb07a);
  QWidget::setToolTip(pQVar2);
  if (*(int *)local_3c8 != -1) {
    if (*(int *)local_3c8 != 0) {
      LOCK();
      *(int *)local_3c8 = *(int *)local_3c8 + -1;
      local_21 = *(int *)local_3c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004df743;
    }
    QArrayData::deallocate(local_3c8,2,8);
  }
LAB_1004df743:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x48) + 0x40);
  QMetaObject::tr((char *)&local_3d0,PTR_staticMetaObject_1021e1520,0x1dfafb8);
  QWidget::setToolTip(pQVar2);
  if (*(int *)local_3d0 != -1) {
    if (*(int *)local_3d0 != 0) {
      LOCK();
      *(int *)local_3d0 = *(int *)local_3d0 + -1;
      UNLOCK();
      if (*(int *)local_3d0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_3d0,2,8);
  }
  return;
}

