
void FUN_1004c0d60(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  uint uVar4;
  QGridLayout *this;
  QFormLayout *this_00;
  QLabel *pQVar5;
  QComboBox *pQVar6;
  QWidget *pQVar7;
  QCheckBox *pQVar8;
  QVBoxLayout *this_01;
  QHBoxLayout *this_02;
  undefined8 *puVar9;
  QPushButton *this_03;
  undefined *puVar10;
  QVariant local_170;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  uint local_e8 [2];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  uint local_c0 [2];
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
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
      if (*(int *)local_40 != 0) goto LAB_1004c0db6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c0db6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df993b);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004c0e0d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004c0e0d:
  local_38 = true;
  uStack_37 = 0x193000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df9957);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c0e97;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004c0e97:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c0f05;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c0f05:
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c0f73;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004c0f73:
  QFormLayout::setFieldGrowthPolicy(param_1[1],1);
  QFormLayout::setLabelAlignment(param_1[1],0x82);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1000;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004c1000:
  QFormLayout::setWidget(param_1[1],0,0,param_1[2]);
  pQVar6 = operator_new(0x30);
  QComboBox::QComboBox(pQVar6,(QWidget *)param_2);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1df9970);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1080;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004c1080:
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_90,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForNoVtdDriverRunning");
  QVariant::~QVariant(&local_90);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_a0);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_b0,false);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_b0);
  QFormLayout::setWidget(param_1[1],0,1,param_1[3]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_b8,0x1df997f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c11ad;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004c11ad:
  local_c0[0] = 0x570000;
  QSizePolicy::setControlType(local_c0,1);
  local_c0[0] = local_c0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_c0[0] = local_c0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QFormLayout::setWidget(param_1[1],1,1,param_1[4]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1df7d9a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c129b;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004c129b:
  QWidget::setMinimumSize((int)param_1[5],0);
  QWidget::setMaximumSize((int)param_1[5],1);
  QFormLayout::setWidget(param_1[1],2,1,param_1[5]);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[6] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d0,0x1df998d);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c134a;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004c134a:
  QFormLayout::setWidget(param_1[1],3,1,param_1[6]);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d8,0x1df999e);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c13d9;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004c13d9:
  QFormLayout::setWidget(param_1[1],4,1,param_1[7]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[8] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e0,0x1df99b3);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c146a;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004c146a:
  local_e8[0] = 0x550000;
  QSizePolicy::setControlType(local_e8,1);
  local_e8[0] = local_e8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_f8,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_f8);
  QFormLayout::setWidget(param_1[1],5,1,param_1[8]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[9] = pQVar5;
  QString::fromUtf8_helper((char *)&local_100,0x1dd681a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1580;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004c1580:
  QFormLayout::setWidget(param_1[1],6,0,param_1[9]);
  pQVar6 = operator_new(0x30);
  QComboBox::QComboBox(pQVar6,(QWidget *)param_2);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_108,0x1df99bc);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c160c;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004c160c:
  QFormLayout::setWidget(param_1[1],6,1,param_1[10]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_110,0x1df99d3);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c169d;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004c169d:
  QLabel::setWordWrap(SUB81(param_1[0xb],0));
  QFormLayout::setWidget(param_1[1],7,1,param_1[0xb]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[0xc] = pQVar7;
  QString::fromUtf8_helper((char *)&local_118,0x1df7d1f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c173c;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004c173c:
  QWidget::setMinimumSize((int)param_1[0xc],0);
  QWidget::setMaximumSize((int)param_1[0xc],1);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_128,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_128);
  QFormLayout::setWidget(param_1[1],10,1,param_1[0xc]);
  this_01 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_01);
  param_1[0xd] = this_01;
  QBoxLayout::setSpacing((int)this_01);
  pQVar3 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_130,0x1dc1597);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c182c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004c182c:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xe] = pQVar5;
  QString::fromUtf8_helper((char *)&local_138,0x1df99e4);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c18a6;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004c18a6:
  uVar4 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  pQVar3 = (QString *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_140,0x1df9a04);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1930;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004c1930:
  QLabel::setAlignment(param_1[0xe],0x84);
  QLabel::setWordWrap(SUB81(param_1[0xe],0));
  QBoxLayout::addWidget(param_1[0xd],param_1[0xe],0,0);
  this_02 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_02);
  param_1[0xf] = this_02;
  QBoxLayout::setSpacing((int)this_02);
  pQVar3 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_148,0x1df025a);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c19e7;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1004c19e7:
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar9;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar9);
  this_03 = operator_new(0x30);
  QPushButton::QPushButton(this_03,(QWidget *)param_2);
  param_1[0x11] = this_03;
  QString::fromUtf8_helper((char *)&local_150,0x1df9a1e);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1adb;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1004c1adb:
  pQVar3 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_158,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1b3b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004c1b3b:
  QBoxLayout::addWidget(param_1[0xf],param_1[0x11],0,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = puVar10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar9;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar9);
  QBoxLayout::addLayout((QLayout *)param_1[0xd],(int)param_1[0xf]);
  QFormLayout::setLayout(param_1[1],9,2,param_1[0xd]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[0x13] = pQVar7;
  QString::fromUtf8_helper((char *)&local_160,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004c1c59;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1004c1c59:
  pcVar2 = (char *)param_1[0x13];
  QVariant::QVariant(&local_170,false);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_170);
  QFormLayout::setWidget(param_1[1],8,1,param_1[0x13]);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,1,0);
  FUN_1004c2420(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

