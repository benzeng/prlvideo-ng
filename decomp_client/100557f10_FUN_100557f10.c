
void FUN_100557f10(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  bool bVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QFrame *pQVar6;
  QGridLayout *this;
  QLabel *pQVar7;
  QComboBox *this_00;
  undefined8 *puVar8;
  QTreeView *this_01;
  QWidget *pQVar9;
  QHBoxLayout *this_02;
  CImageButton *pCVar10;
  undefined *puVar11;
  QArrayData *local_150;
  undefined4 local_148;
  undefined4 local_144;
  uint local_140 [2];
  QArrayData *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  QArrayData *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  QArrayData *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  QArrayData *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  QArrayData *local_f0;
  QIcon local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  uint local_b0 [2];
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
      if (*(int *)local_38 != 0) goto LAB_100557f64;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100557f64:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e01170);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100557fbb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100557fbb:
  local_30 = true;
  uStack_2f = 0x16a000002;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558061;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100558061:
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
      if (local_30) goto LAB_1005580d2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005580d2:
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
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_98,0x1e0117f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005582a4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005582a4:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this);
  param_1[3] = this;
  QString::fromUtf8_helper((char *)&local_a0,0x1e01191);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10055831a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10055831a:
  QGridLayout::setHorizontalSpacing((int)param_1[3]);
  QGridLayout::setVerticalSpacing((int)param_1[3]);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0119e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005583af;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005583af:
  local_b0[0] = 0x500000;
  QSizePolicy::setControlType(local_b0,1);
  local_b0[0] = local_b0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QGridLayout::addWidget(param_1[3],param_1[4],1,1,1,1,0);
  this_00 = operator_new(0x30);
  QComboBox::QComboBox(this_00,(QWidget *)param_1[1]);
  param_1[5] = this_00;
  QString::fromUtf8_helper((char *)&local_b8,0x1e011ab);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005584a2;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005584a2:
  QGridLayout::addWidget(param_1[3],param_1[5],1,2,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000007;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[6] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,0,0,3,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000005;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[7] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,0,3,3,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x700000000;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,2,1,1,2,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x500000000;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[9] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,0,1,1,2,0);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[3]);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c0,0x1df6bac);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_30 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10055876e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10055876e:
  QFrame::setFrameShape(param_1[10],4);
  QFrame::setFrameShadow(param_1[10],0x30);
  QBoxLayout::addWidget(param_1[2],param_1[10],0);
  this_01 = operator_new(0x30);
  QTreeView::QTreeView(this_01,(QWidget *)param_1[1]);
  param_1[0xb] = this_01;
  QString::fromUtf8_helper((char *)&local_c8,0x1e011b8);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558815;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100558815:
  QFrame::setFrameShape(param_1[0xb],0);
  QTreeView::setRootIsDecorated(SUB81(param_1[0xb],0));
  QTreeView::setItemsExpandable(SUB81(param_1[0xb],0));
  QTreeView::setExpandsOnDoubleClick(SUB81(param_1[0xb],0));
  bVar3 = (bool)QTreeView::header();
  QHeaderView::setStretchLastSection(bVar3);
  QBoxLayout::addWidget(param_1[2],param_1[0xb],0);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[0xc] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d0,0x1dfb047);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_30 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005588f3;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005588f3:
  this_02 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_02,(QWidget *)param_1[0xc]);
  param_1[0xd] = this_02;
  QLayout::setContentsMargins((int)this_02,0,0,0);
  pQVar2 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_d8,0x1dfb057);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558982;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100558982:
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[0xc]);
  param_1[0xe] = pCVar10;
  QString::fromUtf8_helper((char *)&local_e0,0x1dfb05a);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005589fc;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005589fc:
  QWidget::setMinimumSize((int)param_1[0xe],0x19);
  QWidget::setMaximumSize((int)param_1[0xe],0x19);
  QIcon::QIcon(local_e8);
  QString::fromUtf8_helper((char *)&local_f0,0x1e011c3);
  local_f8 = 0xffffffffffffffff;
  QIcon::addFile(local_e8,&local_f0,&local_f8,0,1);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_30 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558aa9;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100558aa9:
  QAbstractButton::setIcon((QIcon *)param_1[0xe]);
  local_100 = 0x19;
  local_fc = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xe]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0xe],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[0xc]);
  param_1[0xf] = pCVar10;
  QString::fromUtf8_helper((char *)&local_108,0x1dfb08b);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558b68;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100558b68:
  QWidget::setMinimumSize((int)param_1[0xf],0x19);
  QWidget::setMaximumSize((int)param_1[0xf],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xf]);
  local_110 = 0x19;
  local_10c = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xf]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0xf],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[0xc]);
  param_1[0x10] = pCVar10;
  QString::fromUtf8_helper((char *)&local_118,0x1e0120d);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_30 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558c50;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100558c50:
  QWidget::setMinimumSize((int)param_1[0x10],0x19);
  QWidget::setMaximumSize((int)param_1[0x10],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0x10]);
  local_120 = 0x19;
  local_11c = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0x10]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0x10],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[0xc]);
  param_1[0x11] = pCVar10;
  QString::fromUtf8_helper((char *)&local_128,0x1dfb096);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_30 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558d47;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100558d47:
  QWidget::setMinimumSize((int)param_1[0x11],0x19);
  QWidget::setMaximumSize((int)param_1[0x11],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0x11]);
  local_130 = 0x19;
  local_12c = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0x11]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0x11],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[0xc]);
  param_1[0x12] = pCVar10;
  QString::fromUtf8_helper((char *)&local_138,0x1dfb0a0);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_30 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558e3e;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100558e3e:
  local_140[0] = 0x30000;
  QSizePolicy::setControlType(local_140,1);
  local_140[0] = local_140[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_140[0] = local_140[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QWidget::setMinimumSize((int)param_1[0x12],0x19);
  QWidget::setMaximumSize((int)param_1[0x12],0xffffff);
  QAbstractButton::setIcon((QIcon *)param_1[0x12]);
  local_148 = 0x19;
  local_144 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0x12]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0x12],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_1[0xc]);
  param_1[0x13] = pCVar10;
  QString::fromUtf8_helper((char *)&local_150,0x1dfb0aa);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_30 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_30) goto LAB_100558f8a;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100558f8a:
  QWidget::setMinimumSize((int)param_1[0x13],0x19);
  QWidget::setMaximumSize((int)param_1[0x13],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0x13]);
  QAbstractButton::setIconSize((QSize *)param_1[0x13]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0x13],0,0);
  QBoxLayout::addWidget(*param_1,param_1[0xc],0,0);
  FUN_100559740(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_e8);
  QBrush::~QBrush(local_80);
  QBrush::~QBrush(local_68);
  QPalette::~QPalette(local_60);
  return;
}

