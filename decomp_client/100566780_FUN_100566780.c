
void FUN_100566780(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QFrame *pQVar5;
  QTreeView *this;
  QWidget *pQVar6;
  QHBoxLayout *this_00;
  CImageButton *pCVar7;
  QArrayData *local_130;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120 [2];
  QArrayData *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  QArrayData *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  QArrayData *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  QArrayData *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  QArrayData *local_d0;
  QIcon local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
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
      if (*(int *)local_38 != 0) goto LAB_1005667d4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005667d4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e01a21);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10056682b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10056682b:
  local_30 = true;
  uStack_2f = 0x1f8000001;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005668c0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005668c0:
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_50,0x1df0c7c);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566942;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100566942:
  QWidget::setMinimumSize((int)param_1[1],0);
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
  QFrame::setLineWidth((int)param_1[1]);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[1]);
  param_1[2] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_98,0x1e0117f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566b1d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100566b1d:
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  this = operator_new(0x30);
  QTreeView::QTreeView(this,(QWidget *)param_1[1]);
  param_1[3] = this;
  QString::fromUtf8_helper((char *)&local_a0,0x1e011b8);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566ba9;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100566ba9:
  QWidget::setAutoFillBackground(SUB81(param_1[3],0));
  QFrame::setFrameShape(param_1[3],0);
  QTreeView::setRootIsDecorated(SUB81(param_1[3],0));
  QTreeView::setExpandsOnDoubleClick(SUB81(param_1[3],0));
  QBoxLayout::addWidget(param_1[2],param_1[3],0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_1[1],0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a8,0x1df6bac);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566c65;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100566c65:
  QFrame::setFrameShadow(param_1[4],0x20);
  QFrame::setFrameShape(param_1[4],4);
  QBoxLayout::addWidget(param_1[2],param_1[4],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[1],0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b0,0x1dfb047);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_30 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566d0e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100566d0e:
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00,(QWidget *)param_1[5]);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_b8,0x1dfb057);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566d88;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100566d88:
  QLayout::setContentsMargins((int)param_1[6],0,0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[5]);
  param_1[7] = pCVar7;
  QString::fromUtf8_helper((char *)&local_c0,0x1dfb05a);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_30 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566e14;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100566e14:
  QWidget::setMinimumSize((int)param_1[7],0x19);
  QWidget::setMaximumSize((int)param_1[7],0x19);
  QIcon::QIcon(local_c8);
  QString::fromUtf8_helper((char *)&local_d0,0x1e011c3);
  local_d8 = 0xffffffffffffffff;
  QIcon::addFile(local_c8,&local_d0,&local_d8,0,1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_30 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566ec1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100566ec1:
  QAbstractButton::setIcon((QIcon *)param_1[7]);
  local_e0 = 0x19;
  local_dc = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[7]);
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[5]);
  param_1[8] = pCVar7;
  QString::fromUtf8_helper((char *)&local_e8,0x1dfb08b);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100566f80;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100566f80:
  QWidget::setMinimumSize((int)param_1[8],0x19);
  QWidget::setMaximumSize((int)param_1[8],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[8]);
  local_f0 = 0x19;
  local_ec = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[8]);
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[5]);
  param_1[9] = pCVar7;
  QString::fromUtf8_helper((char *)&local_f8,0x1e0120d);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_30 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100567065;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100567065:
  QWidget::setMinimumSize((int)param_1[9],0x19);
  QWidget::setMaximumSize((int)param_1[9],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[9]);
  local_100 = 0x19;
  local_fc = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[9]);
  QBoxLayout::addWidget(param_1[6],param_1[9],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[5]);
  param_1[10] = pCVar7;
  QString::fromUtf8_helper((char *)&local_108,0x1dfb096);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056714a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10056714a:
  QWidget::setMinimumSize((int)param_1[10],0x19);
  QWidget::setMaximumSize((int)param_1[10],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[10]);
  local_110 = 0x19;
  local_10c = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[10]);
  QBoxLayout::addWidget(param_1[6],param_1[10],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[5]);
  param_1[0xb] = pCVar7;
  QString::fromUtf8_helper((char *)&local_118,0x1dfb0a0);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_30 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_30) goto LAB_10056722f;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10056722f:
  local_120[0] = 0x30000;
  QSizePolicy::setControlType(local_120,1);
  local_120[0] = local_120[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_120[0] = local_120[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QWidget::setMinimumSize((int)param_1[0xb],0x19);
  QWidget::setMaximumSize((int)param_1[0xb],0xffffff);
  QAbstractButton::setIcon((QIcon *)param_1[0xb]);
  local_128 = 0x19;
  local_124 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xb]);
  QBoxLayout::addWidget(param_1[6],param_1[0xb],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[5]);
  param_1[0xc] = pCVar7;
  QString::fromUtf8_helper((char *)&local_130,0x1dfb0aa);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_30 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_30) goto LAB_100567363;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100567363:
  QWidget::setMinimumSize((int)param_1[0xc],0x19);
  QWidget::setMaximumSize((int)param_1[0xc],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xc]);
  QAbstractButton::setIconSize((QSize *)param_1[0xc]);
  QBoxLayout::addWidget(param_1[6],param_1[0xc],0,0);
  QBoxLayout::addWidget(param_1[2],param_1[5],0,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_100567bc0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_c8);
  QBrush::~QBrush(local_80);
  QBrush::~QBrush(local_68);
  QPalette::~QPalette(local_60);
  return;
}

