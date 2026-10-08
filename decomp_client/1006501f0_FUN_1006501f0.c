
void FUN_1006501f0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  uint uVar4;
  QGridLayout *pQVar5;
  QWidget *pQVar6;
  undefined8 *puVar7;
  QLabel *pQVar8;
  CImageButtonComplex *this;
  QLineEdit *pQVar9;
  undefined *puVar10;
  QArrayData *local_178;
  QVariant local_170;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  uint local_b0 [2];
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
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
      if (*(int *)local_40 != 0) goto LAB_100650246;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100650246:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0b2b1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10065029d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10065029d:
  local_38 = true;
  uStack_37 = 0x1a0000003;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1e0ad20);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650327;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100650327:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650395;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100650395:
  QLayout::setContentsMargins((int)*param_1,-1,0x20,-1);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_70,0x1e0b2c4);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650423;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100650423:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QGridLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_78,0x1dd6d5e);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006504a4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006504a4:
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar10;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x14000000be;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[3] = puVar7;
  QGridLayout::addItem(param_1[2],puVar7,2,4,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[4] = pQVar8;
  QString::fromUtf8_helper((char *)&local_80,0x1e0b2db);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006505a4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006505a4:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[2],param_1[4],1,0,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar10;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x400000000;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[5] = puVar7;
  QGridLayout::addItem(param_1[2],puVar7,4,0,1,4,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[6] = pQVar8;
  QString::fromUtf8_helper((char *)&local_88,0x1e0b2e9);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006506cb;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006506cb:
  QWidget::setMinimumSize((int)param_1[6],0x16);
  QWidget::setMaximumSize((int)param_1[6],0x16);
  pQVar2 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_90,0x1e0b1d4);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650751;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100650751:
  pcVar3 = (char *)param_1[6];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar3,(QVariant *)"warning");
  QVariant::~QVariant(&local_a0);
  QGridLayout::addWidget(param_1[2],param_1[6],0,3,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[1],0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0b305);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650829;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100650829:
  local_b0[0] = 0x570000;
  QSizePolicy::setControlType(local_b0,1);
  local_b0[0] = local_b0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QGridLayout::addWidget(param_1[2],param_1[7],5,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[1],0);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b8,0x1e0b318);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065091a;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10065091a:
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QGridLayout::addWidget(param_1[2],param_1[8],5,3,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[9] = pQVar8;
  QString::fromUtf8_helper((char *)&local_c0,0x1e0b32c);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006509e9;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006509e9:
  QLabel::setAlignment(param_1[9],0x82);
  QGridLayout::addWidget(param_1[2],param_1[9],3,0,1,1,0);
  this = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(this,(QWidget *)param_1[1]);
  param_1[10] = this;
  QString::fromUtf8_helper((char *)&local_c8,0x1e0b343);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650a97;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100650a97:
  pQVar2 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_d0,0x1e0ad9f);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650af7;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100650af7:
  QGridLayout::addWidget(param_1[2],param_1[10],5,2,1,1,0);
  pQVar9 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar9,(QWidget *)param_1[1]);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0b351);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650b9a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100650b9a:
  QWidget::setMinimumSize((int)param_1[0xb],0x15d);
  QWidget::setMaximumSize((int)param_1[0xb],0x15d);
  QLineEdit::setMaxLength((int)param_1[0xb]);
  QGridLayout::addWidget(param_1[2],param_1[0xb],0,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar9,(QWidget *)param_1[1]);
  param_1[0xc] = pQVar9;
  QString::fromUtf8_helper((char *)&local_e0,0x1e0b35e);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650c6b;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100650c6b:
  QWidget::setMinimumSize((int)param_1[0xc],0x15d);
  QWidget::setMaximumSize((int)param_1[0xc],0x15d);
  QLineEdit::setMaxLength((int)param_1[0xc]);
  QLineEdit::setEchoMode(param_1[0xc],2);
  QGridLayout::addWidget(param_1[2],param_1[0xc],2,1,1,2,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[0xd] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e8,0x1e0b36b);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650d4f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100650d4f:
  QWidget::setMinimumSize((int)param_1[0xd],0x16);
  QWidget::setMaximumSize((int)param_1[0xd],0x16);
  pQVar2 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_f0,0x1e0b1d4);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650dd5;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100650dd5:
  pcVar3 = (char *)param_1[0xd];
  QVariant::QVariant(&local_100,true);
  QObject::setProperty(pcVar3,(QVariant *)"warning");
  QVariant::~QVariant(&local_100);
  QGridLayout::addWidget(param_1[2],param_1[0xd],2,3,1,1,0);
  pQVar9 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar9,(QWidget *)param_1[1]);
  param_1[0xe] = pQVar9;
  QString::fromUtf8_helper((char *)&local_108,0x1e0b37f);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650eae;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100650eae:
  QWidget::setMinimumSize((int)param_1[0xe],0x15d);
  QWidget::setMaximumSize((int)param_1[0xe],0x15d);
  QLineEdit::setMaxLength((int)param_1[0xe]);
  QGridLayout::addWidget(param_1[2],param_1[0xe],1,1,1,2,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[0xf] = pQVar8;
  QString::fromUtf8_helper((char *)&local_110,0x1e0b38d);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100650f84;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100650f84:
  QLabel::setAlignment(param_1[0xf],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0xf],2,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[0x10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_118,0x1e0b39a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_100651037;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100651037:
  QLabel::setAlignment(param_1[0x10],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0x10],0,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[0x11] = pQVar8;
  QString::fromUtf8_helper((char *)&local_120,0x1e0b3a7);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006510ed;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1006510ed:
  QWidget::setMinimumSize((int)param_1[0x11],0x16);
  QWidget::setMaximumSize((int)param_1[0x11],0x16);
  pQVar2 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_128,0x1e0b1d4);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065117c;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10065117c:
  pcVar3 = (char *)param_1[0x11];
  QVariant::QVariant(&local_138,true);
  QObject::setProperty(pcVar3,(QVariant *)"warning");
  QVariant::~QVariant(&local_138);
  QGridLayout::addWidget(param_1[2],param_1[0x11],1,3,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[0x12] = pQVar8;
  QString::fromUtf8_helper((char *)&local_140,0x1e0b3bc);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_100651260;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100651260:
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  pQVar2 = (QString *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_148,0x1e0b3d8);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006512f3;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1006512f3:
  QLabel::setAlignment(param_1[0x12],0x81);
  QGridLayout::addWidget(param_1[2],param_1[0x12],5,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar9,(QWidget *)param_1[1]);
  param_1[0x13] = pQVar9;
  QString::fromUtf8_helper((char *)&local_150,0x1e0b414);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006513ad;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1006513ad:
  QWidget::setMinimumSize((int)param_1[0x13],0x15d);
  QWidget::setMaximumSize((int)param_1[0x13],0x15d);
  QLineEdit::setMaxLength((int)param_1[0x13]);
  QLineEdit::setEchoMode(param_1[0x13],2);
  QGridLayout::addWidget(param_1[2],param_1[0x13],3,1,1,2,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[0x14] = pQVar8;
  QString::fromUtf8_helper((char *)&local_158,0x1e0b428);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006514a3;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1006514a3:
  QWidget::setMinimumSize((int)param_1[0x14],0x16);
  QWidget::setMaximumSize((int)param_1[0x14],0x16);
  pQVar2 = (QString *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_160,0x1e0b1d4);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_100651532;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100651532:
  pcVar3 = (char *)param_1[0x14];
  QVariant::QVariant(&local_170,true);
  QObject::setProperty(pcVar3,(QVariant *)"warning");
  QVariant::~QVariant(&local_170);
  QGridLayout::addWidget(param_1[2],param_1[0x14],3,3,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[2],0);
  QGridLayout::addWidget(*param_1,param_1[1],3,0,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar10;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x7d0000034d;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar7;
  QGridLayout::addItem(*param_1,puVar7,4,0,1,2,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0x16] = pQVar8;
  QString::fromUtf8_helper((char *)&local_178,0x1dc128f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006516cd;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1006516cd:
  QLabel::setAlignment(param_1[0x16],0x84);
  QGridLayout::addWidget(*param_1,param_1[0x16],1,0,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar10;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x140000034d;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar7;
  QGridLayout::addItem(*param_1,puVar7,2,0,1,1,0);
  QLabel::setBuddy((QWidget *)param_1[6]);
  QLabel::setBuddy((QWidget *)param_1[0xd]);
  QLabel::setBuddy((QWidget *)param_1[0x11]);
  QLabel::setBuddy((QWidget *)param_1[0x14]);
  QWidget::setTabOrder((QWidget *)param_1[0xb],(QWidget *)param_1[0xe]);
  QWidget::setTabOrder((QWidget *)param_1[0xe],(QWidget *)param_1[0xc]);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[0x13]);
  QWidget::setTabOrder((QWidget *)param_1[0x13],(QWidget *)param_1[10]);
  FUN_100652100(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

