
void FUN_1005d3ce0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QGridLayout *pQVar5;
  undefined8 *puVar6;
  QString *pQVar7;
  QLabel *pQVar8;
  QCheckBox *pQVar9;
  QWidget *pQVar10;
  QStackedWidget *this;
  QLineEdit *this_00;
  Connection local_170 [8];
  Connection local_168 [8];
  QArrayData *local_160;
  QArrayData *local_158;
  QPixmap local_150 [32];
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QPixmap local_108 [32];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  uint local_b0 [2];
  QArrayData *local_a8;
  QArrayData *local_a0;
  uint local_98 [2];
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
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
      if (*(int *)local_40 != 0) goto LAB_1005d3d36;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d3d36:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e049d5);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1005d3d8d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005d3d8d:
  local_38 = true;
  uStack_37 = 0x227000003;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1bb6);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d3e15;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d3e15:
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,-1,0x50,-1);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[1] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,9,1,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_2);
  param_1[2] = pQVar7;
  QString::fromUtf8_helper((char *)&local_58,0x1e049f6);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d3f3b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005d3f3b:
  QGridLayout::addWidget(*param_1,param_1[2],0xb,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[3] = pQVar8;
  QString::fromUtf8_helper((char *)&local_60,0x1e04a04);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d3fd5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005d3fd5:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(*param_1,param_1[3],10,0,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_2);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_68,0x1e04a12);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4078;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d4078:
  pQVar7 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_70,0x1e41978);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d40cc;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005d40cc:
  QGridLayout::addWidget(*param_1,param_1[4],10,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_78,0x1e04a23);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4166;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005d4166:
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_88);
  QGridLayout::addWidget(*param_1,param_1[5],2,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[6] = pQVar9;
  QString::fromUtf8_helper((char *)&local_90,0x1e04a39);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4237;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005d4237:
  local_98[0] = 0x30000;
  QSizePolicy::setControlType(local_98,1);
  local_98[0] = local_98[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QAbstractButton::setChecked(SUB81(param_1[6],0));
  QGridLayout::addWidget(*param_1,param_1[6],1,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[7] = pQVar9;
  QString::fromUtf8_helper((char *)&local_a0,0x1e04a45);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4335;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005d4335:
  uVar4 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QAbstractButton::setChecked(SUB81(param_1[7],0));
  QGridLayout::addWidget(*param_1,param_1[7],0,1,1,1,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[8] = pQVar10;
  QString::fromUtf8_helper((char *)&local_a8,0x1e04a55);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d440d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005d440d:
  local_b0[0] = 0x550000;
  QSizePolicy::setControlType(local_b0,1);
  local_b0[0] = local_b0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QGridLayout::addWidget(*param_1,param_1[8],0,2,6,1,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_2,0);
  param_1[9] = pQVar10;
  QString::fromUtf8_helper((char *)&local_b8,0x1e04a66);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d44fc;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005d44fc:
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QGridLayout::addWidget(*param_1,param_1[9],0,0,6,1,0);
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_2);
  param_1[10] = this;
  QString::fromUtf8_helper((char *)&local_c0,0x1e04a76);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d45c1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005d45c1:
  QWidget::setMinimumSize((int)param_1[10],0);
  pQVar7 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_c8,0x1e41978);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d462b;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005d462b:
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,0,0);
  param_1[0xb] = pQVar10;
  QString::fromUtf8_helper((char *)&local_d0,0x1e04a87);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d46a4;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005d46a4:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[0xb]);
  param_1[0xc] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d8,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d471d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1005d471d:
  QLayout::setContentsMargins((int)param_1[0xc],0x14,0,-1);
  this_00 = operator_new(0x30);
  QLineEdit::QLineEdit(this_00,(QWidget *)param_1[0xb]);
  param_1[0xd] = this_00;
  QString::fromUtf8_helper((char *)&local_e0,0x1e04a9d);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d47ae;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005d47ae:
  QLineEdit::setAlignment(param_1[0xd],0x84);
  QGridLayout::addWidget(param_1[0xc],param_1[0xd],1,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[0xb],0);
  param_1[0xe] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e8,0x1e04aa6);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d485e;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005d485e:
  pQVar3 = (QPixmap *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_110,0x1e04ab3);
  QPixmap::QPixmap(local_108,&local_110,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_108);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d48e1;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1005d48e1:
  QGridLayout::addWidget(param_1[0xc],param_1[0xe],1,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[0xb],0);
  param_1[0xf] = pQVar8;
  QString::fromUtf8_helper((char *)&local_118,0x1e04acb);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4986;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005d4986:
  QLabel::setOpenExternalLinks(SUB81(param_1[0xf],0));
  QGridLayout::addWidget(param_1[0xc],param_1[0xf],3,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[0xb],0);
  param_1[0x10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_120,0x1e04ad8);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4a39;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005d4a39:
  QLabel::setWordWrap(SUB81(param_1[0x10],0));
  QGridLayout::addWidget(param_1[0xc],param_1[0x10],2,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[0xb],0);
  param_1[0x11] = pQVar8;
  QString::fromUtf8_helper((char *)&local_128,0x1e04aec);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4af2;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1005d4af2:
  QLabel::setOpenExternalLinks(SUB81(param_1[0x11],0));
  QGridLayout::addWidget(param_1[0xc],param_1[0x11],4,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[0xb],0);
  param_1[0x12] = pQVar8;
  QString::fromUtf8_helper((char *)&local_130,0x1e04af8);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4bab;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1005d4bab:
  QWidget::setMinimumSize((int)param_1[0x12],0x192);
  QWidget::setMaximumSize((int)param_1[0x12],0x192);
  pQVar3 = (QPixmap *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_158,0x1e04b04);
  QPixmap::QPixmap(local_150,&local_158,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_150);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4c5d;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1005d4c5d:
  QGridLayout::addWidget(param_1[0xc],param_1[0x12],0,0,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[10]);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,0,0);
  param_1[0x13] = pQVar10;
  QString::fromUtf8_helper((char *)&local_160,0x1dfb0c8);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005d4d0d;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1005d4d0d:
  QStackedWidget::addWidget((QWidget *)param_1[10]);
  QGridLayout::addWidget(*param_1,param_1[10],3,1,3,1,0);
  QGridLayout::setColumnStretch((int)*param_1,0);
  QGridLayout::setColumnStretch((int)*param_1,1);
  QGridLayout::setColumnStretch((int)*param_1,2);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[6]);
  QWidget::setTabOrder((QWidget *)param_1[6],(QWidget *)param_1[4]);
  FUN_1005d5630(param_1,param_2);
  QObject::connect(local_168,param_1[7],"2toggled(bool)",param_1[6],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_168);
  QObject::connect(local_170,param_1[7],"2toggled(bool)",param_1[10],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_170);
  QStackedWidget::setCurrentIndex((int)param_1[10]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

