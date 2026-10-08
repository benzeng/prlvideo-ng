
void FUN_10056ceb0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QFrame *pQVar6;
  QHBoxLayout *pQVar7;
  QLabel *pQVar8;
  QTableView *this;
  QWidget *pQVar9;
  CImageButton *pCVar10;
  QArrayData *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168 [2];
  QArrayData *local_160;
  undefined4 local_158;
  undefined4 local_154;
  QArrayData *local_150;
  undefined4 local_148;
  undefined4 local_144;
  QArrayData *local_140;
  undefined4 local_138;
  undefined4 local_134;
  QArrayData *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  QArrayData *local_118;
  QIcon local_110 [8];
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QPixmap local_c8 [32];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined1 local_90 [16];
  QBrush local_80 [8];
  undefined1 local_78 [16];
  QBrush local_68 [8];
  QPalette local_60 [16];
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
      if (*(int *)local_38 != 0) goto LAB_10056cf04;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10056cf04:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e01ac6);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10056cf5b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10056cf5b:
  local_30 = true;
  uStack_2f = 0x16a000002;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056cff0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10056cff0:
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_50,0x1df0c7c);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d072;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10056d072:
  QPalette::QPalette(local_60);
  QColor::setRgb((int)local_78,0xff,0xff,0xff);
  QBrush::QBrush(local_68,local_78,1);
  QBrush::setStyle(local_68,1);
  QPalette::setBrush(local_60,0,9,local_68);
  QColor::setRgb((int)local_90,0xcc,0xcc,0xcc);
  QBrush::QBrush(local_80,local_90,1);
  QBrush::setStyle(local_80,1);
  QPalette::setBrush(local_60,0,10,local_80);
  QPalette::setBrush(local_60,2,9,local_68);
  QPalette::setBrush(local_60,2,10,local_80);
  QPalette::setBrush(local_60,1,9,local_80);
  QPalette::setBrush(local_60,1,10);
  QWidget::setPalette((QPalette *)param_1[1]);
  QWidget::setAutoFillBackground(SUB81(param_1[1],0));
  QFrame::setFrameShape(param_1[1],6);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_98,0x1e0117f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d232;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10056d232:
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[3] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_a0,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d2cb;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10056d2cb:
  QLayout::setContentsMargins((int)param_1[3],6,6,-1);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[4] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a8,0x1e01ad9);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d365;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10056d365:
  pQVar3 = (QPixmap *)param_1[4];
  QString::fromUtf8_helper((char *)&local_d0,0x1e01ae6);
  QPixmap::QPixmap(local_c8,&local_d0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_30 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d3e9;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10056d3e9:
  QBoxLayout::addWidget(param_1[3],param_1[4],0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d8,0x1e01b05);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d476;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10056d476:
  local_e0[0] = 0x570000;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = local_e0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QLabel::setWordWrap(SUB81(param_1[5],0));
  QBoxLayout::addWidget(param_1[3],param_1[5],0);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[3]);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1df6bac);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d56f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10056d56f:
  QFrame::setFrameShadow(param_1[6],0x30);
  QFrame::setFrameShape(param_1[6],4);
  QBoxLayout::addWidget(param_1[2],param_1[6],0);
  this = operator_new(0x30);
  QTableView::QTableView(this,(QWidget *)param_1[1]);
  param_1[7] = this;
  QString::fromUtf8_helper((char *)&local_f0,0x1e01b10);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_30 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d616;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10056d616:
  QBoxLayout::addWidget(param_1[2],param_1[7],0);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[8] = pQVar9;
  QString::fromUtf8_helper((char *)&local_f8,0x1dfb047);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_30 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d6b2;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10056d6b2:
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[8]);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_100,0x1dfb057);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_30 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d72c;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10056d72c:
  QLayout::setContentsMargins((int)param_1[9],0,0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[8]);
  param_1[10] = pCVar10;
  QString::fromUtf8_helper((char *)&local_108,0x1dfb05a);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d7b8;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10056d7b8:
  QWidget::setMinimumSize((int)param_1[10],0x19);
  QWidget::setMaximumSize((int)param_1[10],0x19);
  QIcon::QIcon(local_110);
  QString::fromUtf8_helper((char *)&local_118,0x1e011c3);
  local_120 = 0xffffffffffffffff;
  QIcon::addFile(local_110,&local_118,&local_120,0,1);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_30 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d865;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10056d865:
  QAbstractButton::setIcon((QIcon *)param_1[10]);
  local_128 = 0x19;
  local_124 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[10]);
  QBoxLayout::addWidget(param_1[9],param_1[10],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[8]);
  param_1[0xb] = pCVar10;
  QString::fromUtf8_helper((char *)&local_130,0x1dfb08b);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_30 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056d924;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10056d924:
  QWidget::setMinimumSize((int)param_1[0xb],0x19);
  QWidget::setMaximumSize((int)param_1[0xb],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xb]);
  local_138 = 0x19;
  local_134 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xb]);
  QBoxLayout::addWidget(param_1[9],param_1[0xb],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[8]);
  param_1[0xc] = pCVar10;
  QString::fromUtf8_helper((char *)&local_140,0x1e0120d);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_30 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056da09;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10056da09:
  QWidget::setMinimumSize((int)param_1[0xc],0x19);
  QWidget::setMaximumSize((int)param_1[0xc],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xc]);
  local_148 = 0x19;
  local_144 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xc]);
  QBoxLayout::addWidget(param_1[9],param_1[0xc],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[8]);
  param_1[0xd] = pCVar10;
  QString::fromUtf8_helper((char *)&local_150,0x1dfb096);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_30 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056daee;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10056daee:
  QWidget::setMinimumSize((int)param_1[0xd],0x19);
  QWidget::setMaximumSize((int)param_1[0xd],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xd]);
  local_158 = 0x19;
  local_154 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xd]);
  QBoxLayout::addWidget(param_1[9],param_1[0xd],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[8]);
  param_1[0xe] = pCVar10;
  QString::fromUtf8_helper((char *)&local_160,0x1dfb0a0);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_30 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056dbd3;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10056dbd3:
  local_168[0] = 0x30000;
  QSizePolicy::setControlType(local_168,1);
  local_168[0] = local_168[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_168[0] = local_168[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  QWidget::setMinimumSize((int)param_1[0xe],0x19);
  QWidget::setMaximumSize((int)param_1[0xe],0xffffff);
  QAbstractButton::setIcon((QIcon *)param_1[0xe]);
  local_170 = 0x19;
  local_16c = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xe]);
  QBoxLayout::addWidget(param_1[9],param_1[0xe],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[8]);
  param_1[0xf] = pCVar10;
  QString::fromUtf8_helper((char *)&local_178,0x1dfb0aa);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_30 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056dd07;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10056dd07:
  QWidget::setMinimumSize((int)param_1[0xf],0x19);
  QWidget::setMaximumSize((int)param_1[0xf],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xf]);
  QAbstractButton::setIconSize((QSize *)param_1[0xf]);
  QBoxLayout::addWidget(param_1[9],param_1[0xf],0,0);
  QBoxLayout::addWidget(*param_1,param_1[8],0,0);
  FUN_10056e610(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_110);
  QBrush::~QBrush(local_80);
  QBrush::~QBrush(local_68);
  QPalette::~QPalette(local_60);
  return;
}

