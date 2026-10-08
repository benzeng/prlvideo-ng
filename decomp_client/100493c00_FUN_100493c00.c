
void FUN_100493c00(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  uint uVar4;
  QGridLayout *this;
  undefined8 *puVar5;
  QFormLayout *this_00;
  QLabel *pQVar6;
  QComboBox *this_01;
  QCheckBox *pQVar7;
  QWidget *pQVar8;
  CMultilineCheckBox *this_02;
  QVBoxLayout *this_03;
  QHBoxLayout *this_04;
  QPushButton *this_05;
  undefined *puVar9;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  uint local_120 [2];
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
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
      if (*(int *)local_40 != 0) goto LAB_100493c56;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100493c56:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df7878);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100493cad;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100493cad:
  local_38 = true;
  uStack_37 = 0x193000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df788c);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100493d37;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100493d37:
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
      if (local_38) goto LAB_100493da5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100493da5:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[1] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,0,0,1,1,0);
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100493e9a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100493e9a:
  QFormLayout::setFieldGrowthPolicy(param_1[2],1);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1df789b);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100493f19;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100493f19:
  QFormLayout::setWidget(param_1[2],0,0,param_1[3]);
  this_01 = operator_new(0x30);
  QComboBox::QComboBox(this_01,(QWidget *)param_2);
  param_1[4] = this_01;
  QString::fromUtf8_helper((char *)&local_80,0x1df78a9);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100493f99;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100493f99:
  local_88[0] = 0x50000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QWidget::setMaximumSize((int)param_1[4],300);
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_98,false);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_98);
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_a8);
  QFormLayout::setWidget(param_1[2],0,1,param_1[4]);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df78b7);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004940e1;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004940e1:
  QFormLayout::setWidget(param_1[2],1,1,param_1[5]);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b8,0x1df78c6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100494170;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100494170:
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_c8);
  QFormLayout::setWidget(param_1[2],2,1,param_1[6]);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d0,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100494237;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100494237:
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_e0,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_e0);
  QFormLayout::setWidget(param_1[2],3,1,param_1[7]);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[8] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e8,0x1df78e2);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004942fc;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004942fc:
  QFormLayout::setWidget(param_1[2],4,1,param_1[8]);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_f0,0x1df78f6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049438b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10049438b:
  pQVar3 = (QString *)param_1[9];
  QString::fromUtf8_helper((char *)&local_f8,0x1df7908);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004943eb;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004943eb:
  QFormLayout::setWidget(param_1[2],5,1,param_1[9]);
  this_02 = operator_new(0x38);
  CMultilineCheckBox::CMultilineCheckBox(this_02,(QWidget *)param_2);
  param_1[10] = this_02;
  QString::fromUtf8_helper((char *)&local_100,0x1df7925);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049447a;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10049447a:
  pQVar3 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_108,0x1df793b);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004944da;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004944da:
  QFormLayout::setWidget(param_1[2],6,1,param_1[10]);
  this_03 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_03);
  param_1[0xb] = this_03;
  QBoxLayout::setSpacing((int)this_03);
  pQVar3 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_110,0x1dc1597);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100494574;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100494574:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_118,0x1df797b);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004945ee;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004945ee:
  local_120[0] = 0x750000;
  QSizePolicy::setControlType(local_120,1);
  local_120[0] = local_120[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_120[0] = local_120[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  QWidget::setAutoFillBackground(SUB81(param_1[0xc],0));
  pQVar3 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_128,0x1df7999);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004946a8;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004946a8:
  QLabel::setAlignment(param_1[0xc],0x24);
  QLabel::setWordWrap(SUB81(param_1[0xc],0));
  QLabel::setIndent((int)param_1[0xc]);
  QBoxLayout::addWidget(param_1[0xb],param_1[0xc],0,0);
  this_04 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_04);
  param_1[0xd] = this_04;
  QString::fromUtf8_helper((char *)&local_130,0x1df027f);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049475c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10049475c:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar5;
  (**(code **)(*(long *)param_1[0xd] + 0x70))((long *)param_1[0xd],puVar5);
  this_05 = operator_new(0x30);
  QPushButton::QPushButton(this_05,(QWidget *)param_2);
  param_1[0xf] = this_05;
  QString::fromUtf8_helper((char *)&local_138,0x1df79b4);
  QObject::setObjectName((QString *)this_05);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049483f;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10049483f:
  QBoxLayout::addWidget(param_1[0xd],param_1[0xf],0,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar5;
  (**(code **)(*(long *)param_1[0xd] + 0x70))((long *)param_1[0xd],puVar5);
  QBoxLayout::addLayout((QLayout *)param_1[0xb],(int)param_1[0xd]);
  QFormLayout::setLayout(param_1[2],7,1,param_1[0xb]);
  QGridLayout::addLayout(*param_1,param_1[2],0,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,0,2,1,1,0);
  QGridLayout::setColumnStretch((int)*param_1,1);
  FUN_100494ff0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

