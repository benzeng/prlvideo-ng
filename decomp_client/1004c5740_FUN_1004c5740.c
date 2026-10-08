
void FUN_1004c5740(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  uint uVar4;
  QGridLayout *pQVar5;
  undefined8 *puVar6;
  QHBoxLayout *pQVar7;
  QSpinBox *this;
  CRecommendedMemoryFrame *this_00;
  QWidget *pQVar8;
  QLabel *pQVar9;
  CMoreOptionsLabel *this_01;
  QCheckBox *pQVar10;
  QComboBox *pQVar11;
  CMemorySlider *this_02;
  undefined *puVar12;
  QVariant local_198;
  QString local_188;
  QVariant local_180;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QVariant local_150;
  uint local_140 [2];
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QVariant local_110;
  QVariant local_100;
  QArrayData *local_f0;
  QVariant local_e8;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  uint local_a8 [2];
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90;
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
      if (*(int *)local_40 != 0) goto LAB_1004c5796;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c5796:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df9c90);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004c57ed;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004c57ed:
  local_38 = true;
  uStack_37 = 0x162000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df9ca8);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5877;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004c5877:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c58e5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c58e5:
  QLayout::setContentsMargins((int)*param_1,-1,-1,6);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xc00000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[1] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,1,0,1,2,0);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c59f5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004c59f5:
  QLayout::setContentsMargins((int)param_1[2],-1,-1,6);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[3] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_78,0x1df9cbd);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5a8d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004c5a8d:
  QLayout::setContentsMargins((int)param_1[3],-1,-1,-1);
  this = operator_new(0x30);
  QSpinBox::QSpinBox(this,(QWidget *)param_2);
  param_1[4] = this;
  QString::fromUtf8_helper((char *)&local_80,0x1df9cd0);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5b17;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004c5b17:
  QSpinBox::setMinimum((int)param_1[4]);
  QSpinBox::setMaximum((int)param_1[4]);
  QSpinBox::setSingleStep((int)param_1[4]);
  QSpinBox::setValue((int)param_1[4]);
  pcVar3 = (char *)param_1[4];
  QVariant::QVariant(&local_90,false);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_90);
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[5] = puVar6;
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],puVar6);
  QGridLayout::addLayout(param_1[2],param_1[3],2,1,1,1,0);
  this_00 = operator_new(0x50);
  CRecommendedMemoryFrame::CRecommendedMemoryFrame(this_00,(QWidget *)param_2);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_98,0x1df9cde);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5c96;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004c5c96:
  QFrame::setFrameShape(param_1[6],6);
  QFrame::setFrameShadow(param_1[6],0x20);
  QGridLayout::addWidget(param_1[2],param_1[6],4,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a0,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5d56;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004c5d56:
  local_a8[0] = 0x50000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = local_a8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QWidget::setMinimumSize((int)param_1[7],0);
  QWidget::setMaximumSize((int)param_1[7],0xffffff);
  QGridLayout::addWidget(param_1[2],param_1[7],5,0,1,2,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_2,0);
  param_1[8] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b0,0x1df9cec);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5e69;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004c5e69:
  QLabel::setAlignment(param_1[8],0x82);
  QGridLayout::addWidget(param_1[2],param_1[8],0,0,1,1,0);
  this_01 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_01,(QWidget *)param_2);
  param_1[9] = this_01;
  QString::fromUtf8_helper((char *)&local_b8,0x1df53e4);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5f13;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004c5f13:
  QGridLayout::addWidget(param_1[2],param_1[9],6,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_2,0);
  param_1[10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_c0,0x1df9cf9);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c5fb7;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004c5fb7:
  QLabel::setAlignment(param_1[10],0x82);
  QGridLayout::addWidget(param_1[2],param_1[10],2,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0xb] = pQVar10;
  QString::fromUtf8_helper((char *)&local_c8,0x1df9d09);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c6064;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004c6064:
  pcVar3 = (char *)param_1[0xb];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_d8);
  pcVar3 = (char *)param_1[0xb];
  QVariant::QVariant(&local_e8,false);
  QObject::setProperty(pcVar3,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_e8);
  QGridLayout::addWidget(param_1[2],param_1[0xb],8,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xd000000aa;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar6;
  QGridLayout::addItem(param_1[2],puVar6,1,1,1,1,0);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0xd] = pQVar10;
  QString::fromUtf8_helper((char *)&local_f0,0x1df9d1b);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c61f2;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004c61f2:
  pcVar3 = (char *)param_1[0xd];
  QVariant::QVariant(&local_100,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_100);
  pcVar3 = (char *)param_1[0xd];
  QVariant::QVariant(&local_110,false);
  QObject::setProperty(pcVar3,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_110);
  QGridLayout::addWidget(param_1[2],param_1[0xd],9,1,1,1,0);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_118,0x1df027f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c62fa;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004c62fa:
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_2);
  param_1[0xf] = pQVar11;
  QString::fromUtf8_helper((char *)&local_120,0x1df9d2a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c6372;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004c6372:
  pcVar3 = (char *)param_1[0xf];
  QVariant::QVariant(&local_130,false);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_130);
  QBoxLayout::addWidget(param_1[0xe],param_1[0xf],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar6;
  (**(code **)(*(long *)param_1[0xe] + 0x70))((long *)param_1[0xe],puVar6);
  QGridLayout::addLayout(param_1[2],param_1[0xe],0,1,1,1,0);
  this_02 = operator_new(0x38);
  CMemorySlider::CMemorySlider(this_02,(QWidget *)param_2);
  param_1[0x11] = this_02;
  QString::fromUtf8_helper((char *)&local_138,0x1df9d37);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c64bc;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004c64bc:
  local_140[0] = 0x770000;
  QSizePolicy::setControlType(local_140,1);
  local_140[0] = local_140[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_140[0] = local_140[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x11]);
  QAbstractSlider::setMinimum((int)param_1[0x11]);
  QAbstractSlider::setMaximum((int)param_1[0x11]);
  QAbstractSlider::setSingleStep((int)param_1[0x11]);
  QAbstractSlider::setPageStep((int)param_1[0x11]);
  QAbstractSlider::setValue((int)param_1[0x11]);
  QAbstractSlider::setOrientation(param_1[0x11],1);
  QSlider::setTickPosition(param_1[0x11],2);
  QSlider::setTickInterval((int)param_1[0x11]);
  pcVar3 = (char *)param_1[0x11];
  QVariant::QVariant(&local_150,false);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_150);
  QGridLayout::addWidget(param_1[2],param_1[0x11],3,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0x12] = pQVar8;
  QString::fromUtf8_helper((char *)&local_158,0x1df9d47);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c6679;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004c6679:
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[0x12]);
  param_1[0x13] = pQVar7;
  QString::fromUtf8_helper((char *)&local_160,0x1df025a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c66f8;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004c66f8:
  QLayout::setContentsMargins((int)param_1[0x13],0,0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000012;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar6;
  (**(code **)(*(long *)param_1[0x13] + 0x70))((long *)param_1[0x13],puVar6);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[0x12],0);
  param_1[0x15] = pQVar9;
  QString::fromUtf8_helper((char *)&local_168,0x1df9d5b);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c67fb;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004c67fb:
  QBoxLayout::addWidget(param_1[0x13],param_1[0x15],0,0);
  pQVar11 = operator_new(0x30);
  QComboBox::QComboBox(pQVar11,(QWidget *)param_1[0x12]);
  param_1[0x16] = pQVar11;
  QString::fromUtf8_helper((char *)&local_170,0x1df9d6f);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c6891;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1004c6891:
  pcVar3 = (char *)param_1[0x16];
  QString::fromUtf8_helper((char *)&local_188,0x1df9d83);
  QVariant::QVariant(&local_180,&local_188);
  QObject::setProperty(pcVar3,(QVariant *)"initer");
  QVariant::~QVariant(&local_180);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_38 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c691a;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_1004c691a:
  pcVar3 = (char *)param_1[0x16];
  QVariant::QVariant(&local_198,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_198);
  QBoxLayout::addWidget(param_1[0x13],param_1[0x16],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar6;
  (**(code **)(*(long *)param_1[0x13] + 0x70))((long *)param_1[0x13],puVar6);
  QGridLayout::addWidget(param_1[2],param_1[0x12],7,1,1,1,0);
  QGridLayout::addLayout(*param_1,param_1[2],0,0,1,2,0);
  FUN_1004c71c0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

