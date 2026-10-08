
void FUN_100478930(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QVBoxLayout *this;
  QGridLayout *pQVar3;
  undefined8 *puVar4;
  QComboBox *pQVar5;
  QPushButton *pQVar6;
  QLabel *pQVar7;
  QHBoxLayout *this_00;
  QString *pQVar8;
  CMoreOptionsLabel *this_01;
  QCheckBox *this_02;
  QWidget *pQVar9;
  undefined *puVar10;
  QArrayData *local_248;
  QVariant local_240;
  QVariant local_230;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QFont local_1d8 [16];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QFont local_198 [16];
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QVariant local_140;
  QArrayData *local_130;
  QArrayData *local_128;
  QVariant local_120;
  QVariant local_110;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QVariant local_d0;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QVariant local_88;
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
      if (*(int *)local_40 != 0) goto LAB_100478986;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100478986:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df64e6);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004789dd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004789dd:
  local_38 = true;
  uStack_37 = 0x1f6000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df64f9);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478a67;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100478a67:
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1df4c89);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478ad5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100478ad5:
  QLayout::setContentsMargins((int)*param_1,-1,-1,-1);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478b5b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100478b5b:
  QGridLayout::setVerticalSpacing((int)param_1[1]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x900000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[2] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,3,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QComboBox::QComboBox(pQVar5,(QWidget *)param_2);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1df6507);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478c63;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100478c63:
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_88);
  QGridLayout::addWidget(param_1[1],param_1[3],4,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_2);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_90,0x1df6529);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478d35;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100478d35:
  QGridLayout::addWidget(param_1[1],param_1[4],8,1,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1df654b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478dd9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100478dd9:
  QGridLayout::addWidget(param_1[1],param_1[5],4,0,1,1,2);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3);
  param_1[6] = pQVar3;
  QString::fromUtf8_helper((char *)&local_a0,0x1df5e27);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478e75;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100478e75:
  QGridLayout::setVerticalSpacing((int)param_1[6]);
  QLayout::setContentsMargins((int)param_1[6],0,-1,-1);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[7] = puVar4;
  QGridLayout::addItem(param_1[6],puVar4,3,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QComboBox::QComboBox(pQVar5,(QWidget *)param_2);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a8,0x1df656a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100478f99;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100478f99:
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_b8);
  QGridLayout::addWidget(param_1[6],param_1[8],3,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QComboBox::QComboBox(pQVar5,(QWidget *)param_2);
  param_1[9] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c0,0x1df657c);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479071;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100479071:
  pcVar2 = (char *)param_1[9];
  QVariant::QVariant(&local_d0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_d0);
  pcVar2 = (char *)param_1[9];
  QVariant::QVariant(&local_e0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_e0);
  QGridLayout::addWidget(param_1[6],param_1[9],1,1,1,1,0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[10] = this_00;
  QString::fromUtf8_helper((char *)&local_e8,0x1df04e1);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047917c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10047917c:
  pQVar8 = operator_new(0x38);
  FUN_1001384b0(pQVar8,param_2);
  param_1[0xb] = pQVar8;
  QString::fromUtf8_helper((char *)&local_f0,0x1df6589);
  QObject::setObjectName(pQVar8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004791f4;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004791f4:
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_100,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_100);
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_110,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_110);
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_120,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_120);
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_2);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_128,0x1df6599);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047931f;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10047931f:
  pQVar8 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_130,0x1e41978);
  QWidget::setStyleSheet(pQVar8);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047937c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10047937c:
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_140,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_140);
  QBoxLayout::addWidget(param_1[10],param_1[0xc],0,0);
  QGridLayout::addLayout(param_1[6],param_1[10],0,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_148,0x1df65a6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479464;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100479464:
  QLabel::setAlignment(param_1[0xd],0x82);
  QGridLayout::addWidget(param_1[6],param_1[0xd],3,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_150,0x1df65b8);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479513;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100479513:
  QLabel::setAlignment(param_1[0xe],0x82);
  QGridLayout::addWidget(param_1[6],param_1[0xe],1,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_158,0x1df65c5);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004795cc;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004795cc:
  QLabel::setAlignment(param_1[0xf],0x82);
  QGridLayout::addWidget(param_1[6],param_1[0xf],0,0,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x900000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar4;
  QGridLayout::addItem(param_1[6],puVar4,2,1,1,1,0);
  QGridLayout::addLayout(param_1[1],param_1[6],0xc,1,1,2,0);
  this_01 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_01,(QWidget *)param_2);
  param_1[0x11] = this_01;
  QString::fromUtf8_helper((char *)&local_160,0x1df53e4);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047971f;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10047971f:
  QGridLayout::addWidget(param_1[1],param_1[0x11],10,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xb00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,5,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,0,2,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x700000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,0xb,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1a00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,9,1,1,1,0);
  this_02 = operator_new(0x30);
  QCheckBox::QCheckBox(this_02,(QWidget *)param_2);
  param_1[0x16] = this_02;
  QString::fromUtf8_helper((char *)&local_168,0x1df65d5);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004799d6;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004799d6:
  QGridLayout::addWidget(param_1[1],param_1[0x16],2,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[0x17] = pQVar9;
  QString::fromUtf8_helper((char *)&local_170,0x1df65ef);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479a80;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100479a80:
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_1[0x17]);
  param_1[0x18] = pQVar3;
  QString::fromUtf8_helper((char *)&local_178,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479aff;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100479aff:
  QGridLayout::setHorizontalSpacing((int)param_1[0x18]);
  QGridLayout::setVerticalSpacing((int)param_1[0x18]);
  QLayout::setContentsMargins((int)param_1[0x18],0,0,0);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3);
  param_1[0x19] = pQVar3;
  QString::fromUtf8_helper((char *)&local_180,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_38 = *(int *)local_180 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479bae;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_100479bae:
  QGridLayout::setHorizontalSpacing((int)param_1[0x19]);
  QGridLayout::setVerticalSpacing((int)param_1[0x19]);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x1a] = pQVar7;
  QString::fromUtf8_helper((char *)&local_188,0x1df660b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_38 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479c51;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100479c51:
  QFont::QFont(local_198);
  QFont::setPointSize((int)local_198);
  QWidget::setFont((QFont *)param_1[0x1a]);
  QGridLayout::addWidget(param_1[0x19],param_1[0x1a],0,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x1b] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1a0,0x1df6611);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479d2f;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100479d2f:
  QWidget::setFont((QFont *)param_1[0x1b]);
  QGridLayout::addWidget(param_1[0x19],param_1[0x1b],1,1,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x1c] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1a8,0x1df6623);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_38 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479df4;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100479df4:
  QWidget::setFont((QFont *)param_1[0x1c]);
  QGridLayout::addWidget(param_1[0x19],param_1[0x1c],0,1,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x1d] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1b0,0x1df6634);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_38 = *(int *)local_1b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479eb6;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100479eb6:
  QWidget::setFont((QFont *)param_1[0x1d]);
  QGridLayout::addWidget(param_1[0x19],param_1[0x1d],1,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x1e] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1b8,0x1df663b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100479f7b;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100479f7b:
  QWidget::setFont((QFont *)param_1[0x1e]);
  QGridLayout::addWidget(param_1[0x19],param_1[0x1e],2,1,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x1f] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1c0,0x1df6648);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_38 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a040;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10047a040:
  QWidget::setFont((QFont *)param_1[0x1f]);
  QGridLayout::addWidget(param_1[0x19],param_1[0x1f],2,2,1,1,0);
  QGridLayout::addLayout(param_1[0x18],param_1[0x19],1,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x20] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1c8,0x1df6650);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_38 = *(int *)local_1c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a132;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10047a132:
  QFont::QFont(local_1d8);
  QFont::setPointSize((int)local_1d8);
  QFont::setWeight((int)local_1d8);
  QFont::setWeight((int)local_1d8);
  QWidget::setFont((QFont *)param_1[0x20]);
  QGridLayout::addWidget(param_1[0x18],param_1[0x20],0,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x21] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1e0,0x1df665e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a233;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_10047a233:
  QWidget::setFont((QFont *)param_1[0x21]);
  QGridLayout::addWidget(param_1[0x18],param_1[0x21],0,0,1,1,0);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3);
  param_1[0x22] = pQVar3;
  QString::fromUtf8_helper((char *)&local_1e8,0x1df4296);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a2e9;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_10047a2e9:
  QGridLayout::setHorizontalSpacing((int)param_1[0x22]);
  QGridLayout::setVerticalSpacing((int)param_1[0x22]);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x23] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1f0,0x1df666b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_38 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a38d;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_10047a38d:
  QWidget::setFont((QFont *)param_1[0x23]);
  QGridLayout::addWidget(param_1[0x22],param_1[0x23],0,0,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x24] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1f8,0x1df6674);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_38 = *(int *)local_1f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a44c;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_10047a44c:
  QWidget::setFont((QFont *)param_1[0x24]);
  QGridLayout::addWidget(param_1[0x22],param_1[0x24],0,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x25] = pQVar7;
  QString::fromUtf8_helper((char *)&local_200,0x1df667a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_38 = *(int *)local_200 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a50e;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10047a50e:
  QWidget::setFont((QFont *)param_1[0x25]);
  QGridLayout::addWidget(param_1[0x22],param_1[0x25],1,0,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x26] = pQVar7;
  QString::fromUtf8_helper((char *)&local_208,0x1df6683);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a5d0;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10047a5d0:
  QWidget::setFont((QFont *)param_1[0x26]);
  QGridLayout::addWidget(param_1[0x22],param_1[0x26],1,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x27] = pQVar7;
  QString::fromUtf8_helper((char *)&local_210,0x1df668a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a695;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10047a695:
  QWidget::setFont((QFont *)param_1[0x27]);
  QGridLayout::addWidget(param_1[0x22],param_1[0x27],2,0,1,1,2);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x17],0);
  param_1[0x28] = pQVar7;
  QString::fromUtf8_helper((char *)&local_218,0x1df6693);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_38 = *(int *)local_218 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a757;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_10047a757:
  QWidget::setFont((QFont *)param_1[0x28]);
  QGridLayout::addWidget(param_1[0x22],param_1[0x28],2,1,1,1,0);
  QGridLayout::addLayout(param_1[0x18],param_1[0x22],1,1,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[0x18],0);
  QGridLayout::addWidget(param_1[1],param_1[0x17],6,0,1,3,4);
  pQVar8 = operator_new(0x58);
  FUN_10013cc30(pQVar8,param_2);
  param_1[0x29] = pQVar8;
  QString::fromUtf8_helper((char *)&local_220,0x1df669b);
  QObject::setObjectName(pQVar8);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_38 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047a883;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_10047a883:
  pcVar2 = (char *)param_1[0x29];
  QVariant::QVariant(&local_230,true);
  QObject::setProperty(pcVar2,(QVariant *)"deviceQComboBox");
  QVariant::~QVariant(&local_230);
  pcVar2 = (char *)param_1[0x29];
  QVariant::QVariant(&local_240,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_240);
  QGridLayout::addWidget(param_1[1],param_1[0x29],0,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xf00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x2a] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,1,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0x2b] = pQVar7;
  QString::fromUtf8_helper((char *)&local_248,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_38 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_38) goto LAB_10047aa28;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_10047aa28:
  QGridLayout::addWidget(param_1[1],param_1[0x2b],0,0,1,1,2);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xb00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x2c] = puVar4;
  QGridLayout::addItem(param_1[1],puVar4,7,1,1,1,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x2d] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  FUN_10047b920(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_1d8);
  QFont::~QFont(local_198);
  return;
}

