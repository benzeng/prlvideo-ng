
void FUN_1004b82d0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  uint uVar4;
  QGridLayout *pQVar5;
  undefined8 *puVar6;
  QFormLayout *this;
  QLabel *pQVar7;
  QSpinBox *this_00;
  CMemorySlider *this_01;
  CMoreOptionsLabel *this_02;
  QHBoxLayout *this_03;
  QComboBox *this_04;
  QCheckBox *this_05;
  QWidget *pQVar8;
  QFrame *pQVar9;
  QVBoxLayout *pQVar10;
  QRadioButton *pQVar11;
  undefined *puVar12;
  QArrayData *local_270;
  QArrayData *local_268;
  QString local_260;
  QVariant local_258;
  QVariant local_248;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QString local_218;
  QVariant local_210;
  QVariant local_200;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QString local_1d0;
  QVariant local_1c8;
  QVariant local_1b8;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QFont local_190 [16];
  QArrayData *local_180;
  QString local_178;
  QVariant local_170;
  QVariant local_160;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QVariant local_118;
  QVariant local_108;
  uint local_f8 [2];
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  uint local_a8 [2];
  QArrayData *local_a0;
  QVariant local_98;
  uint local_88 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1004b8326;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004b8326:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df9382);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004b837d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004b837d:
  local_38 = true;
  uStack_37 = 0x1e9000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df9393);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8407;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004b8407:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8475;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004b8475:
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,-1,-1,-1);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[1] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,1,0,1,1,0);
  this = operator_new(0x20);
  QFormLayout::QFormLayout(this,(QWidget *)0x0);
  param_1[2] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b858b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004b858b:
  QFormLayout::setFieldGrowthPolicy(param_1[2],2);
  QFormLayout::setFormAlignment(param_1[2],0x21);
  QLayout::setContentsMargins((int)param_1[2],-1,-1,-1);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1df939f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8633;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004b8633:
  QLabel::setAlignment(param_1[3],0x82);
  QFormLayout::setWidget(param_1[2],0,0,param_1[3]);
  this_00 = operator_new(0x30);
  QSpinBox::QSpinBox(this_00,(QWidget *)param_2);
  param_1[4] = this_00;
  QString::fromUtf8_helper((char *)&local_80,0x1df93b0);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b86c1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004b86c1:
  local_88[0] = 0x540000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QWidget::setMinimumSize((int)param_1[4],0x51);
  QSpinBox::setMinimum((int)param_1[4]);
  QSpinBox::setMaximum((int)param_1[4]);
  QSpinBox::setSingleStep((int)param_1[4]);
  QSpinBox::setValue((int)param_1[4]);
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_98,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_98);
  QFormLayout::setWidget(param_1[2],0,1,param_1[4]);
  this_01 = operator_new(0x38);
  CMemorySlider::CMemorySlider(this_01,(QWidget *)param_2);
  param_1[5] = this_01;
  QString::fromUtf8_helper((char *)&local_a0,0x1df93c3);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b880b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004b880b:
  local_a8[0] = 0x70000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = CONCAT22(local_a8[0]._2_2_,1);
  uVar4 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QAbstractSlider::setMinimum((int)param_1[5]);
  QAbstractSlider::setMaximum((int)param_1[5]);
  QAbstractSlider::setSingleStep((int)param_1[5]);
  QAbstractSlider::setPageStep((int)param_1[5]);
  QAbstractSlider::setValue((int)param_1[5]);
  QAbstractSlider::setOrientation(param_1[5],1);
  QSlider::setTickPosition(param_1[5],2);
  QSlider::setTickInterval((int)param_1[5]);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_b8);
  QFormLayout::setWidget(param_1[2],1,1,param_1[5]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xa00000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[6] = puVar6;
  QFormLayout::setItem(param_1[2],2,1,puVar6);
  this_02 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_02,(QWidget *)param_2);
  param_1[7] = this_02;
  QString::fromUtf8_helper((char *)&local_c0,0x1df53e4);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b89fe;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004b89fe:
  QFormLayout::setWidget(param_1[2],4,1,param_1[7]);
  this_03 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_03);
  param_1[8] = this_03;
  QBoxLayout::setSpacing((int)this_03);
  pQVar3 = (QString *)param_1[8];
  QString::fromUtf8_helper((char *)&local_c8,0x1df027f);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8a9b;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004b8a9b:
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
  param_1[9] = puVar6;
  (**(code **)(*(long *)param_1[8] + 0x70))((long *)param_1[8],puVar6);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d0,0x1df93d8);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8b7c;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004b8b7c:
  QLabel::setAlignment(param_1[10],0x82);
  QBoxLayout::addWidget(param_1[8],param_1[10],0,0);
  this_04 = operator_new(0x30);
  QComboBox::QComboBox(this_04,(QWidget *)param_2);
  param_1[0xb] = this_04;
  QString::fromUtf8_helper((char *)&local_d8,0x1df93ec);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8c13;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004b8c13:
  QComboBox::setSizeAdjustPolicy(param_1[0xb],0);
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_e8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_e8);
  QBoxLayout::addWidget(param_1[8],param_1[0xb],0,0);
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
  param_1[0xc] = puVar6;
  (**(code **)(*(long *)param_1[8] + 0x70))((long *)param_1[8],puVar6);
  QFormLayout::setLayout(param_1[2],5,1,param_1[8]);
  this_05 = operator_new(0x30);
  QCheckBox::QCheckBox(this_05,(QWidget *)param_2);
  param_1[0xd] = this_05;
  QString::fromUtf8_helper((char *)&local_f0,0x1df93fe);
  QObject::setObjectName((QString *)this_05);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8d55;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004b8d55:
  local_f8[0] = 0x50000;
  QSizePolicy::setControlType(local_f8,1);
  local_f8[0] = CONCAT22(local_f8[0]._2_2_,1);
  uVar4 = QWidget::sizePolicy();
  local_f8[0] = local_f8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  pcVar2 = (char *)param_1[0xd];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_108);
  pcVar2 = (char *)param_1[0xd];
  QVariant::QVariant(&local_118,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_118);
  QFormLayout::setWidget(param_1[2],6,1);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0xe] = pQVar8;
  QString::fromUtf8_helper((char *)&local_120,0x1df940f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8ea0;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004b8ea0:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[0xe]);
  param_1[0xf] = pQVar5;
  QString::fromUtf8_helper((char *)&local_128,0x1df5de0);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8f19;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004b8f19:
  QGridLayout::setHorizontalSpacing((int)param_1[0xf]);
  QGridLayout::setVerticalSpacing((int)param_1[0xf]);
  QLayout::setContentsMargins((int)param_1[0xf],0,0,0);
  pQVar9 = operator_new(0x30);
  QFrame::QFrame(pQVar9,param_1[0xe],0);
  param_1[0x10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_130,0x1df9423);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b8fc5;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004b8fc5:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10,(QWidget *)param_1[0x10]);
  param_1[0x11] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar3 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_138,0x1dc1597);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9058;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004b9058:
  QLayout::setSizeConstraint(param_1[0x11],2);
  QLayout::setContentsMargins((int)param_1[0x11],6,4,6);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[0x10],0);
  param_1[0x12] = pQVar8;
  QString::fromUtf8_helper((char *)&local_140,0x1df943a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b910b;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004b910b:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10,(QWidget *)param_1[0x12]);
  param_1[0x13] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar3 = (QString *)param_1[0x13];
  QString::fromUtf8_helper((char *)&local_148,0x1dd6e2a);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b919e;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004b919e:
  QLayout::setContentsMargins((int)param_1[0x13],0,0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_1[0x12]);
  param_1[0x14] = pQVar11;
  QString::fromUtf8_helper((char *)&local_150,0x1df944f);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9232;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004b9232:
  QAbstractButton::setAutoExclusive(SUB81(param_1[0x14],0));
  pcVar2 = (char *)param_1[0x14];
  QVariant::QVariant(&local_160,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_160);
  pcVar2 = (char *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_178,0x1df244a);
  QVariant::QVariant(&local_170,&local_178);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_170);
  if (*(int *)local_178.field0_0x0 != -1) {
    if (*(int *)local_178.field0_0x0 != 0) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
      local_38 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9302;
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
LAB_1004b9302:
  QBoxLayout::addWidget(param_1[0x13],param_1[0x14],0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x12],0);
  param_1[0x15] = pQVar7;
  QString::fromUtf8_helper((char *)&local_180,0x1df9463);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_38 = *(int *)local_180 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b939a;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1004b939a:
  QFont::QFont(local_190);
  QFont::setPointSize((int)local_190);
  QWidget::setFont((QFont *)param_1[0x15]);
  QLabel::setWordWrap(SUB81(param_1[0x15],0));
  QLabel::setIndent((int)param_1[0x15]);
  QBoxLayout::addWidget(param_1[0x13],param_1[0x15],0);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x12],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[0x10],0);
  param_1[0x16] = pQVar8;
  QString::fromUtf8_helper((char *)&local_198,0x1df9478);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b949b;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004b949b:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10,(QWidget *)param_1[0x16]);
  param_1[0x17] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar3 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_1a0,0x1df0c61);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b952f;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1004b952f:
  QLayout::setContentsMargins((int)param_1[0x17],0,0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_1[0x16]);
  param_1[0x18] = pQVar11;
  QString::fromUtf8_helper((char *)&local_1a8,0x1df9488);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_38 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b95c4;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1004b95c4:
  QAbstractButton::setAutoExclusive(SUB81(param_1[0x18],0));
  pcVar2 = (char *)param_1[0x18];
  QVariant::QVariant(&local_1b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1b8);
  pcVar2 = (char *)param_1[0x18];
  QString::fromUtf8_helper((char *)&local_1d0,0x1df243f);
  QVariant::QVariant(&local_1c8,&local_1d0);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_1c8);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_38 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9696;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_1004b9696:
  QBoxLayout::addWidget(param_1[0x17],param_1[0x18],0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x16],0);
  param_1[0x19] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1d8,0x1df9497);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_38 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b972f;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_1004b972f:
  QWidget::setFont((QFont *)param_1[0x19]);
  QLabel::setWordWrap(SUB81(param_1[0x19],0));
  QLabel::setIndent((int)param_1[0x19]);
  QBoxLayout::addWidget(param_1[0x17],param_1[0x19],0);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x16],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[0x10],0);
  param_1[0x1a] = pQVar8;
  QString::fromUtf8_helper((char *)&local_1e0,0x1df94a7);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9814;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1004b9814:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10,(QWidget *)param_1[0x1a]);
  param_1[0x1b] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar3 = (QString *)param_1[0x1b];
  QString::fromUtf8_helper((char *)&local_1e8,0x1df07b1);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b98a8;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_1004b98a8:
  QLayout::setContentsMargins((int)param_1[0x1b],0,0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_1[0x1a]);
  param_1[0x1c] = pQVar11;
  QString::fromUtf8_helper((char *)&local_1f0,0x1df94b9);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_38 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b993d;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1004b993d:
  QAbstractButton::setAutoExclusive(SUB81(param_1[0x1c],0));
  pcVar2 = (char *)param_1[0x1c];
  QVariant::QVariant(&local_200,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_200);
  pcVar2 = (char *)param_1[0x1c];
  QString::fromUtf8_helper((char *)&local_218,0x1df2438);
  QVariant::QVariant(&local_210,&local_218);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_210);
  if (*(int *)local_218.field0_0x0 != -1) {
    if (*(int *)local_218.field0_0x0 != 0) {
      LOCK();
      *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
      local_38 = *(int *)local_218.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9a0f;
    }
    QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
  }
LAB_1004b9a0f:
  QBoxLayout::addWidget(param_1[0x1b],param_1[0x1c],0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x1a],0);
  param_1[0x1d] = pQVar7;
  QString::fromUtf8_helper((char *)&local_220,0x1df94ca);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_38 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9aa8;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_1004b9aa8:
  QWidget::setFont((QFont *)param_1[0x1d]);
  QLabel::setWordWrap(SUB81(param_1[0x1d],0));
  QLabel::setIndent((int)param_1[0x1d]);
  QBoxLayout::addWidget(param_1[0x1b],param_1[0x1d],0);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x1a],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[0x10],0);
  param_1[0x1e] = pQVar8;
  QString::fromUtf8_helper((char *)&local_228,0x1df94dc);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_38 = *(int *)local_228 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9b8d;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_1004b9b8d:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10,(QWidget *)param_1[0x1e]);
  param_1[0x1f] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar3 = (QString *)param_1[0x1f];
  QString::fromUtf8_helper((char *)&local_230,0x1dd6e19);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_38 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9c21;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1004b9c21:
  QLayout::setContentsMargins((int)param_1[0x1f],0,0,0);
  pQVar11 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar11,(QWidget *)param_1[0x1e]);
  param_1[0x20] = pQVar11;
  QString::fromUtf8_helper((char *)&local_238,0x1df94ee);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9cb6;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1004b9cb6:
  QAbstractButton::setAutoExclusive(SUB81(param_1[0x20],0));
  pcVar2 = (char *)param_1[0x20];
  QVariant::QVariant(&local_248,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_248);
  pcVar2 = (char *)param_1[0x20];
  QString::fromUtf8_helper((char *)&local_260,0x1df2454);
  QVariant::QVariant(&local_258,&local_260);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_258);
  if (*(int *)local_260.field0_0x0 != -1) {
    if (*(int *)local_260.field0_0x0 != 0) {
      LOCK();
      *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
      local_38 = *(int *)local_260.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9d88;
    }
    QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
  }
LAB_1004b9d88:
  QBoxLayout::addWidget(param_1[0x1f],param_1[0x20],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x1e],0);
  param_1[0x21] = pQVar7;
  QString::fromUtf8_helper((char *)&local_268,0x1df94ff);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_38 = *(int *)local_268 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9e21;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1004b9e21:
  QWidget::setFont((QFont *)param_1[0x21]);
  QLabel::setWordWrap(SUB81(param_1[0x21],0));
  QLabel::setIndent((int)param_1[0x21]);
  QBoxLayout::addWidget(param_1[0x1f],param_1[0x21],0,0);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x1e],0,0);
  QGridLayout::addWidget(param_1[0xf],param_1[0x10],1,0,1,1,0);
  QFormLayout::setWidget(param_1[2],3,1,param_1[0xe]);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0x22] = pQVar7;
  QString::fromUtf8_helper((char *)&local_270,0x1df9511);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_38 = *(int *)local_270 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b9f43;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_1004b9f43:
  QLabel::setAlignment(param_1[0x22],0x82);
  QFormLayout::setWidget(param_1[2],3,0,param_1[0x22]);
  QGridLayout::addLayout(*param_1,param_1[2],0,0,1,1,0);
  FUN_1004bac30(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_190);
  return;
}

