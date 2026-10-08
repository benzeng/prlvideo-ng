
void FUN_100450710(long param_1)

{
  QPixmap *pQVar1;
  long *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 local_1a8 [16];
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
  
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x38) + 0x70);
  local_50 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_arrow_up.png",0x29);
  QPixmap::QPixmap(local_48,&local_50,0,0);
  local_78 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_arrow_up_pressed.png",0x31);
  QPixmap::QPixmap(local_70,&local_78,0,0);
  local_a0 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_arrow_up_disabled.png",0x32);
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
      if ((bool)local_21) goto LAB_10045083d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10045083d:
  QPixmap::~QPixmap(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100450876;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100450876:
  QPixmap::~QPixmap(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004508af;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004508af:
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x38) + 0x78);
  local_108 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_arrow_down.png",0x2b);
  QPixmap::QPixmap(local_100,&local_108,0,0);
  local_130 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_arrow_down_pressed.png",0x33);
  QPixmap::QPixmap(local_128,&local_130,0,0);
  local_158 = (QArrayData *)
              QString::fromAscii_helper(":/pixmaps/MacButtons/mac_btn_arrow_down_disabled.png",0x34)
  ;
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
      if ((bool)local_21) goto LAB_1004509e1;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004509e1:
  QPixmap::~QPixmap(local_128);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100450a23;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100450a23:
  QPixmap::~QPixmap(local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100450a65;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100450a65:
  FontUtils::setViewFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 200),false);
  FontUtils::setViewFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x30),false);
  QWidget::setAttribute(*(undefined8 *)(*(long *)(param_1 + 0x38) + 200),0x58,1);
  QWidget::setFixedHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30));
  QWidget::setMaximumHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 200));
  QBoxLayout::setSpacing((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60));
  auVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x38) + 0xa0) + 0x38))();
  local_1a8 = auVar4;
  iVar3 = WidgetUtils::getCheckBoxTextStartPos();
  local_1a8._8_4_ = iVar3 + -1 + auVar4._0_4_;
  plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0xa0);
  (**(code **)(*plVar2 + 0x30))(plVar2,local_1a8);
  return;
}

