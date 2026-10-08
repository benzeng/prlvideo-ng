
void FUN_1006ec5f0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QWidget *pQVar6;
  QLabel *pQVar7;
  QHBoxLayout *this;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  uint local_110 [2];
  QArrayData *local_108;
  uint local_100 [2];
  QArrayData *local_f8;
  QArrayData *local_f0;
  uint local_e8 [2];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QPixmap local_d0 [32];
  uint local_b0 [2];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QFont local_80 [16];
  uint local_70 [2];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  bool local_30;
  undefined7 uStack_2f;
  
  QObject::objectName();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      _local_30 = CONCAT71(uStack_2f,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_1006ec644;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006ec644:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e1198d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1006ec69b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1006ec69b:
  local_30 = true;
  uStack_2f = 0x1c5000002;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QLayout::setContentsMargins((int)pQVar5,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_48,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ec737;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006ec737:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_50,0x1e119ab);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ec7a8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006ec7a8:
  pQVar2 = (QString *)param_1[1];
  local_58 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QWidget { color: rgb(204, 204, 204); }\nQWidget#m_wgtContainer { background-image: url(:/pixmaps/PD10_Theme/pattern.png); }\nQMenu { background-color: palette(windowText); }\nQMenu::item:enabled { color: palette(text); }\nQMenu::item:enabled:selected { color: white; }\n\n"
                        ,0x10a);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ec7fd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006ec7fd:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6e19);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ec86d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006ec86d:
  QLayout::setContentsMargins((int)param_1[2],0x1c,-1,0x1c);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_68,0x1dd681a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ec8fd;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006ec8fd:
  local_70[0] = 0x450000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QFont::QFont(local_80);
  QFont::setPointSize((int)local_80);
  QWidget::setFont((QFont *)param_1[3]);
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[1],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1df496a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ec9e4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006ec9e4:
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_90,0x1e11ac5);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006eca45;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1006eca45:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[4]);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1597);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ecabf;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006ecabf:
  QLayout::setContentsMargins((int)param_1[5],0x2b,0x20,0x2b);
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this);
  param_1[6] = this;
  QBoxLayout::setSpacing((int)this);
  pQVar2 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_a0,0x1df027f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ecb61;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1006ecb61:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[4],0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ecbdd;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1006ecbdd:
  local_b0[0] = 0;
  QSizePolicy::setControlType(local_b0,1);
  local_b0[0] = local_b0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QWidget::setMinimumSize((int)param_1[7],0xcc);
  QWidget::setMaximumSize((int)param_1[7],0xcc);
  pQVar3 = (QPixmap *)param_1[7];
  QString::fromUtf8_helper((char *)&local_d8,0x1e11b24);
  QPixmap::QPixmap(local_d0,&local_d8,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006eccd6;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1006eccd6:
  QLabel::setScaledContents(SUB81(param_1[7],0));
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e0,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ecd71;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1006ecd71:
  local_e8[0] = 0x500000;
  QSizePolicy::setControlType(local_e8,1);
  local_e8[0] = local_e8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QWidget::setMinimumSize((int)param_1[8],0x2b);
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[4],0);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_f0,0x1e0bbb7);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_30 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ece5d;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1006ece5d:
  QLabel::setAlignment(param_1[9],0x81);
  QLabel::setTextInteractionFlags(param_1[9],3);
  QBoxLayout::addWidget(param_1[6],param_1[9],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[5],(int)param_1[6]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_f8,0x1df07cc);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_30 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ecf15;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1006ecf15:
  local_100[0] = 0x350000;
  QSizePolicy::setControlType(local_100,1);
  local_100[0] = local_100[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_100[0] = local_100[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QBoxLayout::addWidget(param_1[5],param_1[10],0,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[0xb] = pQVar6;
  QString::fromUtf8_helper((char *)&local_108,0x1df4909);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ecff1;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006ecff1:
  local_110[0] = 0x50000;
  QSizePolicy::setControlType(local_110,1);
  local_110[0] = local_110[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_110[0] = local_110[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QWidget::setMinimumSize((int)param_1[0xb],0);
  pQVar2 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_118,0x1e11b4d);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_30 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ed0b1;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1006ed0b1:
  QBoxLayout::addWidget(param_1[5],param_1[0xb],0,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_120,0x1e11b96);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_30 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ed13e;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1006ed13e:
  uVar4 = QWidget::sizePolicy();
  local_110[0] = local_110[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  QWidget::setMinimumSize((int)param_1[0xc],0);
  QBoxLayout::addWidget(param_1[5],param_1[0xc],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[4],0);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_128,0x1dd6d7d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_30 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006ed205;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1006ed205:
  uVar4 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QBoxLayout::addWidget(param_1[5],param_1[0xd],0,0);
  QBoxLayout::addWidget(param_1[2],param_1[4],0,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_1006ed810(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_80);
  return;
}

