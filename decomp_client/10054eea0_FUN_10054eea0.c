
void FUN_10054eea0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QLabel *pQVar6;
  QGroupBox *pQVar7;
  QHBoxLayout *pQVar8;
  CAppStoreButton *pCVar9;
  undefined8 *puVar10;
  QStackedWidget *this;
  QWidget *pQVar11;
  QPushButton *pQVar12;
  QGridLayout *this_00;
  QProgressBar *this_01;
  undefined *puVar13;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QPixmap local_190 [32];
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QFont local_148 [16];
  uint local_138 [2];
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  undefined8 local_60;
  QArrayData *local_58;
  QIcon local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_38;
  undefined7 uStack_37;
  
  QObject::objectName();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      _local_38 = CONCAT71(uStack_37,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10054eef6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10054eef6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e00c02);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10054ef4d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10054ef4d:
  local_38 = true;
  uStack_37 = 0x1f1000002;
  QWidget::resize(param_2);
  QIcon::QIcon(local_50);
  QString::fromUtf8_helper((char *)&local_58,0x1e00c20);
  local_60 = 0xffffffffffffffff;
  QIcon::addFile(local_50,&local_58,&local_60,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054efd6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10054efd6:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_70);
  QVariant::QVariant(&local_80,false);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_80);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_88,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f0a2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10054f0a2:
  QLayout::setContentsMargins((int)*param_1,-1,0xf,-1);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_90,0x1e00c3a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f137;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10054f137:
  QLabel::setIndent((int)param_1[1]);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  pQVar7 = operator_new(0x30);
  QGroupBox::QGroupBox(pQVar7,(QWidget *)param_2);
  param_1[2] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1e00c48);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f1ce;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10054f1ce:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[2]);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a0,0x1e00c59);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f248;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10054f248:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[2],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a8,0x1e00c5d);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f2c4;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10054f2c4:
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[4],0));
  QBoxLayout::addWidget(param_1[3],param_1[4],0);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[5] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_b0,0x1df04fd);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f375;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10054f375:
  QLayout::setContentsMargins((int)param_1[5],0,0,0);
  pCVar9 = operator_new(0x40);
  CAppStoreButton::CAppStoreButton(pCVar9,(QWidget *)param_1[2]);
  param_1[6] = pCVar9;
  QString::fromUtf8_helper((char *)&local_b8,0x1e00c73);
  QObject::setObjectName((QString *)pCVar9);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f401;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10054f401:
  QWidget::setMinimumSize((int)param_1[6],0xbd);
  QWidget::setMaximumSize((int)param_1[6],0xbd);
  QBoxLayout::addWidget(param_1[5],param_1[6],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  puVar13 = PTR_vtable_1021e17a0 + 0x10;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[7] = puVar10;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar10);
  pCVar9 = operator_new(0x40);
  CAppStoreButton::CAppStoreButton(pCVar9,(QWidget *)param_1[2]);
  param_1[8] = pCVar9;
  QString::fromUtf8_helper((char *)&local_c0,0x1e00c88);
  QObject::setObjectName((QString *)pCVar9);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f52a;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10054f52a:
  QWidget::setMinimumSize((int)param_1[8],0xa1);
  QWidget::setMaximumSize((int)param_1[8],0xa1);
  QBoxLayout::addWidget(param_1[5],param_1[8],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[9] = puVar10;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar10);
  pCVar9 = operator_new(0x40);
  CAppStoreButton::CAppStoreButton(pCVar9,(QWidget *)param_1[2]);
  param_1[10] = pCVar9;
  QString::fromUtf8_helper((char *)&local_c8,0x1e00c9f);
  QObject::setObjectName((QString *)pCVar9);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f63e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10054f63e:
  QWidget::setMinimumSize((int)param_1[10],0xa4);
  QWidget::setMaximumSize((int)param_1[10],0xa4);
  QBoxLayout::addWidget(param_1[5],param_1[10],0,0);
  QBoxLayout::setStretch((int)param_1[5],0);
  QBoxLayout::setStretch((int)param_1[5],2);
  QBoxLayout::setStretch((int)param_1[5],4);
  QBoxLayout::addLayout((QLayout *)param_1[3],(int)param_1[5]);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0xc00000014;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar10;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar10);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d0,0x1e00cb2);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f7b1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10054f7b1:
  QLabel::setIndent((int)param_1[0xc]);
  QBoxLayout::addWidget(*param_1,param_1[0xc],0,0);
  pQVar7 = operator_new(0x30);
  QGroupBox::QGroupBox(pQVar7,(QWidget *)param_2);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1e00cbf);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f848;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10054f848:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0xd]);
  param_1[0xe] = pQVar5;
  QString::fromUtf8_helper((char *)&local_e0,0x1dfb057);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f8c2;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10054f8c2:
  QLayout::setContentsMargins((int)param_1[0xe],-1,-1,9);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0xd],0);
  param_1[0xf] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1e00ccf);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f959;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10054f959:
  QLabel::setWordWrap(SUB81(param_1[0xf],0));
  QBoxLayout::addWidget(param_1[0xe],param_1[0xf],0);
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_1[0xd]);
  param_1[0x10] = this;
  QString::fromUtf8_helper((char *)&local_f0,0x1e00ce9);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054f9f5;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10054f9f5:
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,0,0);
  param_1[0x11] = pQVar11;
  QString::fromUtf8_helper((char *)&local_f8,0x1e00cfd);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054fa72;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10054fa72:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0x11]);
  param_1[0x12] = pQVar8;
  QString::fromUtf8_helper((char *)&local_100,0x1df027f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054faf2;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10054faf2:
  QLayout::setSizeConstraint(param_1[0x12]);
  QLayout::setContentsMargins((int)param_1[0x12],0,10,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar10;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar10);
  pQVar12 = operator_new(0x30);
  QPushButton::QPushButton(pQVar12,(QWidget *)param_1[0x11]);
  param_1[0x14] = pQVar12;
  QString::fromUtf8_helper((char *)&local_108,0x1e00d0e);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054fc05;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10054fc05:
  QBoxLayout::addWidget(param_1[0x12],param_1[0x14],0);
  QStackedWidget::addWidget((QWidget *)param_1[0x10]);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,0,0);
  param_1[0x15] = pQVar11;
  QString::fromUtf8_helper((char *)&local_110,0x1e00d1a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054fcac;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10054fcac:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00,(QWidget *)param_1[0x15]);
  param_1[0x16] = this_00;
  QString::fromUtf8_helper((char *)&local_118,0x1e00d29);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054fd2c;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10054fd2c:
  QGridLayout::setVerticalSpacing((int)param_1[0x16]);
  QLayout::setContentsMargins((int)param_1[0x16],0,10,0);
  this_01 = operator_new(0x30);
  QProgressBar::QProgressBar(this_01,(QWidget *)param_1[0x15]);
  param_1[0x17] = this_01;
  QString::fromUtf8_helper((char *)&local_120,0x1e00d3e);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054fdd5;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10054fdd5:
  QGridLayout::addWidget(param_1[0x16],param_1[0x17],1,0,1,1,0);
  pQVar12 = operator_new(0x30);
  QPushButton::QPushButton(pQVar12,(QWidget *)param_1[0x15]);
  param_1[0x18] = pQVar12;
  QString::fromUtf8_helper((char *)&local_128,0x1dc12ca);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054fe82;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10054fe82:
  QGridLayout::addWidget(param_1[0x16],param_1[0x18],1,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x15],0);
  param_1[0x19] = pQVar6;
  QString::fromUtf8_helper((char *)&local_130,0x1e00d53);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10054ff34;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10054ff34:
  local_138[0] = 0x50000;
  QSizePolicy::setControlType(local_138,1);
  local_138[0] = local_138[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_138[0] = local_138[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x19]);
  QFont::QFont(local_148);
  QFont::setPointSize((int)local_148);
  QWidget::setFont((QFont *)param_1[0x19]);
  QGridLayout::addWidget(param_1[0x16],param_1[0x19],0,0,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[0x10]);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,0,0);
  param_1[0x1a] = pQVar11;
  QString::fromUtf8_helper((char *)&local_150,0x1e00d68);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_100550073;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100550073:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0x1a]);
  param_1[0x1b] = pQVar8;
  QString::fromUtf8_helper((char *)&local_158,0x1df0473);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005500f3;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1005500f3:
  QLayout::setContentsMargins((int)param_1[0x1b],0,10,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0x1c] = puVar10;
  (**(code **)(*(long *)param_1[0x1b] + 0x70))((long *)param_1[0x1b],puVar10);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[0x1d] = pQVar8;
  QString::fromUtf8_helper((char *)&local_160,0x1df025a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005501ed;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1005501ed:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x1a],0);
  param_1[0x1e] = pQVar6;
  QString::fromUtf8_helper((char *)&local_168,0x1dd681a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055026f;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10055026f:
  QBoxLayout::addWidget(param_1[0x1d],param_1[0x1e],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x1a],0);
  param_1[0x1f] = pQVar6;
  QString::fromUtf8_helper((char *)&local_170,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_100550308;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100550308:
  pQVar3 = (QPixmap *)param_1[0x1f];
  QString::fromUtf8_helper((char *)&local_198,0x1e00d76);
  QPixmap::QPixmap(local_190,&local_198,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_190);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055038f;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10055038f:
  QBoxLayout::addWidget(param_1[0x1d],param_1[0x1f],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x1b],(int)param_1[0x1d]);
  pQVar12 = operator_new(0x30);
  QPushButton::QPushButton(pQVar12,(QWidget *)param_1[0x1a]);
  param_1[0x20] = pQVar12;
  QString::fromUtf8_helper((char *)&local_1a0,0x1e00d91);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055043b;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10055043b:
  QBoxLayout::addWidget(param_1[0x1b],param_1[0x20],0,0);
  QStackedWidget::addWidget((QWidget *)param_1[0x10]);
  QBoxLayout::addWidget(param_1[0xe],param_1[0x10],0,0);
  QBoxLayout::addWidget(*param_1,param_1[0xd],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0x21] = puVar10;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar10);
  FUN_100550f70(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[0x10]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_148);
  QIcon::~QIcon(local_50);
  return;
}

