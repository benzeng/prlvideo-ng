
void FUN_1004993e0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  uint uVar4;
  QFormLayout *pQVar5;
  QTabWidget *this;
  QWidget *pQVar6;
  QVBoxLayout *pQVar7;
  QGridLayout *this_00;
  CImageButtonComplex *pCVar8;
  QCheckBox *pQVar9;
  undefined8 *puVar10;
  QComboBox *this_01;
  QLabel *pQVar11;
  CMoreOptionsLabel *pCVar12;
  undefined *puVar13;
  QVariant local_260;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QString local_238;
  QVariant local_230;
  QArrayData *local_220;
  QVariant local_218;
  QArrayData *local_208;
  QVariant local_200;
  QArrayData *local_1f0;
  uint local_1e8 [2];
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  uint local_1d0 [2];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QVariant local_180;
  QArrayData *local_170;
  QString local_168;
  QVariant local_160;
  QArrayData *local_150;
  QArrayData *local_148;
  uint local_140 [2];
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  uint local_a0 [2];
  QArrayData *local_98;
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
      if (*(int *)local_40 != 0) goto LAB_100499436;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100499436:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df7c86);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10049948d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10049948d:
  local_38 = true;
  uStack_37 = 0x1c4000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df7c9f);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499517;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100499517:
  pQVar5 = operator_new(0x20);
  QFormLayout::QFormLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1df7cb4);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499585;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100499585:
  QFormLayout::setFieldGrowthPolicy(*param_1,2);
  this = operator_new(0x30);
  QTabWidget::QTabWidget(this,(QWidget *)param_2);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1df7cc1);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499601;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100499601:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1df7cd5);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499671;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100499671:
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,(QWidget *)param_1[2]);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1df7ce6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004996e1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004996e1:
  QLayout::setContentsMargins((int)param_1[3],0xc,-1,0xc);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[2],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499771;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100499771:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00,(QWidget *)param_1[4]);
  param_1[5] = this_00;
  QString::fromUtf8_helper((char *)&local_90,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004997ea;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004997ea:
  QLayout::setContentsMargins((int)param_1[5],0,0,0);
  pCVar8 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(pCVar8,(QWidget *)param_1[4]);
  param_1[6] = pCVar8;
  QString::fromUtf8_helper((char *)&local_98,0x1df7cf6);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499875;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100499875:
  local_a0[0] = 0x40000;
  QSizePolicy::setControlType(local_a0,1);
  local_a0[0] = local_a0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_a0[0] = local_a0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QGridLayout::addWidget(param_1[5],param_1[6],4,2,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[4]);
  param_1[7] = pQVar9;
  QString::fromUtf8_helper((char *)&local_a8,0x1df7d06);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499967;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100499967:
  QGridLayout::addWidget(param_1[5],param_1[7],3,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b0,0x1df7d1f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499a0c;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100499a0c:
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_c0,false);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_c0);
  QGridLayout::addWidget(param_1[5],param_1[8],7,2,1,1,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  puVar13 = PTR_vtable_1021e17a0 + 0x10;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000001;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[9] = puVar10;
  QGridLayout::addItem(param_1[5],puVar10,0,0,9,1,0);
  this_01 = operator_new(0x30);
  QComboBox::QComboBox(this_01,(QWidget *)param_1[4]);
  param_1[10] = this_01;
  QString::fromUtf8_helper((char *)&local_c8,0x1df7d29);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499b6a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100499b6a:
  uVar4 = QWidget::sizePolicy();
  local_a0[0] = local_a0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QComboBox::setSizeAdjustPolicy(param_1[10],0);
  pcVar2 = (char *)param_1[10];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_d8);
  QGridLayout::addWidget(param_1[5],param_1[10],0,2,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[4]);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_e0,0x1df7d39);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499c75;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100499c75:
  QGridLayout::addWidget(param_1[5],param_1[0xb],8,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1df7d4f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499d1a;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100499d1a:
  QWidget::setMaximumSize((int)param_1[0xc],0xffffff);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_f8,false);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_f8);
  QGridLayout::addWidget(param_1[5],param_1[0xc],2,2,1,1,0);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[4],0);
  param_1[0xd] = pQVar11;
  QString::fromUtf8_helper((char *)&local_100,0x1df7d59);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499e05;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100499e05:
  QLabel::setAlignment(param_1[0xd],0x82);
  QGridLayout::addWidget(param_1[5],param_1[0xd],0,1,1,1,0);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[4],0);
  param_1[0xe] = pQVar11;
  QString::fromUtf8_helper((char *)&local_108,0x1df7d69);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499eb5;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100499eb5:
  QLabel::setAlignment(param_1[0xe],0x22);
  QGridLayout::addWidget(param_1[5],param_1[0xe],6,1,1,1,0);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[4],0);
  param_1[0xf] = pQVar11;
  QString::fromUtf8_helper((char *)&local_110,0x1df7d7a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100499f68;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100499f68:
  QLabel::setAlignment(param_1[0xf],0x22);
  QGridLayout::addWidget(param_1[5],param_1[0xf],8,1,1,1,0);
  pCVar8 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(pCVar8,(QWidget *)param_1[4]);
  param_1[0x10] = pCVar8;
  QString::fromUtf8_helper((char *)&local_118,0x1df7d8a);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a01c;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10049a01c:
  uVar4 = QWidget::sizePolicy();
  local_a0[0] = local_a0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QGridLayout::addWidget(param_1[5],param_1[0x10],1,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[0x11] = pQVar6;
  QString::fromUtf8_helper((char *)&local_120,0x1df7d9a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a0f7;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10049a0f7:
  QWidget::setMaximumSize((int)param_1[0x11],0xffffff);
  pcVar2 = (char *)param_1[0x11];
  QVariant::QVariant(&local_130,false);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_130);
  QGridLayout::addWidget(param_1[5],param_1[0x11],5,2,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[4]);
  param_1[0x12] = pQVar9;
  QString::fromUtf8_helper((char *)&local_138,0x1df7da4);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a1ec;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10049a1ec:
  local_140[0] = 0x70000;
  QSizePolicy::setControlType(local_140,1);
  local_140[0] = local_140[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_140[0] = local_140[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QGridLayout::addWidget(param_1[5],param_1[0x12],6,2,1,1,0);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[4],0);
  param_1[0x13] = pQVar11;
  QString::fromUtf8_helper((char *)&local_148,0x1df7db5);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a2ec;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10049a2ec:
  QLabel::setAlignment(param_1[0x13],0x22);
  QGridLayout::addWidget(param_1[5],param_1[0x13],3,1,1,1,0);
  pCVar12 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(pCVar12,(QWidget *)param_1[4]);
  param_1[0x14] = pCVar12;
  QString::fromUtf8_helper((char *)&local_150,0x1df53e4);
  QObject::setObjectName((QString *)pCVar12);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a3a6;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10049a3a6:
  pcVar2 = (char *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_168,0x1df7c38);
  QVariant::QVariant(&local_160,&local_168);
  QObject::setProperty(pcVar2,(QVariant *)"AdvancedSettingsGroupName");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_38 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a439;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_10049a439:
  QGridLayout::addWidget(param_1[5],param_1[0x14],10,2,1,1,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar13;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000001;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar10;
  QGridLayout::addItem(param_1[5],puVar10,0,3,9,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[0x16] = pQVar6;
  QString::fromUtf8_helper((char *)&local_170,0x1df7dc8);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a55d;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10049a55d:
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_180,false);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_180);
  QGridLayout::addWidget(param_1[5],param_1[0x16],9,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[4],0);
  param_1[0x17] = pQVar6;
  QString::fromUtf8_helper((char *)&local_188,0x1df7dd4);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_38 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a63e;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10049a63e:
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,(QWidget *)param_1[0x17]);
  param_1[0x18] = pQVar7;
  QString::fromUtf8_helper((char *)&local_190,0x1dd6e19);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_38 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a6bd;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10049a6bd:
  QLayout::setContentsMargins((int)param_1[0x18],0x14,0,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x17]);
  param_1[0x19] = pQVar9;
  QString::fromUtf8_helper((char *)&local_198,0x1df7df2);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a754;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10049a754:
  QBoxLayout::addWidget(param_1[0x18],param_1[0x19],0,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x17]);
  param_1[0x1a] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1a0,0x1df7e13);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a7ea;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10049a7ea:
  QBoxLayout::addWidget(param_1[0x18],param_1[0x1a],0,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x17]);
  param_1[0x1b] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1a8,0x1df7e2c);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_38 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a880;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10049a880:
  QBoxLayout::addWidget(param_1[0x18],param_1[0x1b],0,0);
  QGridLayout::addWidget(param_1[5],param_1[0x17],0xc,2,1,1,0);
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  puVar13 = PTR_shared_null_1021e1288;
  local_1b0 = (QArrayData *)PTR_shared_null_1021e1288;
  QTabWidget::addTab((QWidget *)param_1[1],(QString *)param_1[2]);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_38 = *(int *)local_1b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a92d;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_10049a92d:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[0x1c] = pQVar6;
  QString::fromUtf8_helper((char *)&local_1b8,0x1df7e40);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049a9a9;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10049a9a9:
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7,(QWidget *)param_1[0x1c]);
  param_1[0x1d] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1c0,0x1dc1597);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_38 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049aa28;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10049aa28:
  QLayout::setContentsMargins((int)param_1[0x1d],0xc,-1,0xc);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[0x1c],0);
  param_1[0x1e] = pQVar6;
  QString::fromUtf8_helper((char *)&local_1c8,0x1df07cc);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_38 = *(int *)local_1c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049aaca;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10049aaca:
  local_1d0[0] = 0x570000;
  QSizePolicy::setControlType(local_1d0,1);
  local_1d0[0] = local_1d0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_1d0[0] = local_1d0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x1e]);
  pQVar5 = operator_new(0x20);
  QFormLayout::QFormLayout(pQVar5,(QWidget *)param_1[0x1e]);
  param_1[0x1f] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1d8,0x1df7e4f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_38 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049ab9e;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_10049ab9e:
  QFormLayout::setFieldGrowthPolicy(param_1[0x1f],2);
  QFormLayout::setLabelAlignment(param_1[0x1f],0x81);
  QFormLayout::setFormAlignment(param_1[0x1f]);
  QLayout::setContentsMargins((int)param_1[0x1f],0,0,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x1e]);
  param_1[0x20] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1e0,0x1df7e5c);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049ac65;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_10049ac65:
  local_1e8[0] = 0x50000;
  QSizePolicy::setControlType(local_1e8,1);
  local_1e8[0] = local_1e8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_1e8[0] = local_1e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x20]);
  QFormLayout::setWidget(param_1[0x1f],0,2,param_1[0x20]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x1e]);
  param_1[0x21] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1f0,0x1df7e74);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_38 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049ad53;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_10049ad53:
  uVar4 = QWidget::sizePolicy();
  local_1e8[0] = local_1e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x21]);
  pcVar2 = (char *)param_1[0x21];
  QVariant::QVariant(&local_200,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_200);
  QFormLayout::setWidget(param_1[0x1f],1,2,param_1[0x21]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[0x1e],0);
  param_1[0x22] = pQVar6;
  QString::fromUtf8_helper((char *)&local_208,0x1df7e88);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049ae5a;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10049ae5a:
  pcVar2 = (char *)param_1[0x22];
  QVariant::QVariant(&local_218,false);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_218);
  QFormLayout::setWidget(param_1[0x1f],3,0,param_1[0x22]);
  pCVar12 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(pCVar12,(QWidget *)param_1[0x1e]);
  param_1[0x23] = pCVar12;
  QString::fromUtf8_helper((char *)&local_220,0x1df7e94);
  QObject::setObjectName((QString *)pCVar12);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_38 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049af29;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_10049af29:
  pcVar2 = (char *)param_1[0x23];
  QString::fromUtf8_helper((char *)&local_238,0x1df7c5f);
  QVariant::QVariant(&local_230,&local_238);
  QObject::setProperty(pcVar2,(QVariant *)"AdvancedSettingsGroupName");
  QVariant::~QVariant(&local_230);
  if (*(int *)local_238.field0_0x0 != -1) {
    if (*(int *)local_238.field0_0x0 != 0) {
      LOCK();
      *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
      local_38 = *(int *)local_238.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049afb2;
    }
    QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
  }
LAB_10049afb2:
  QFormLayout::setWidget(param_1[0x1f],4,2,param_1[0x23]);
  pQVar7 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar7);
  param_1[0x24] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar3 = (QString *)param_1[0x24];
  QString::fromUtf8_helper((char *)&local_240,0x1dd6e2a);
  QObject::setObjectName(pQVar3);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_38 = *(int *)local_240 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049b05b;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_10049b05b:
  QLayout::setContentsMargins((int)param_1[0x24],0x14,0,-1);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x1e]);
  param_1[0x25] = pQVar9;
  QString::fromUtf8_helper((char *)&local_248,0x1df7ea9);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_38 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049b0f8;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_10049b0f8:
  QBoxLayout::addWidget(param_1[0x24],param_1[0x25],0,0);
  QFormLayout::setLayout(param_1[0x1f],7,2,param_1[0x24]);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[0x1e]);
  param_1[0x26] = pQVar9;
  QString::fromUtf8_helper((char *)&local_250,0x1df7ec1);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_38 = *(int *)local_250 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049b1ab;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_10049b1ab:
  uVar4 = QWidget::sizePolicy();
  local_1e8[0] = local_1e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x26]);
  pcVar2 = (char *)param_1[0x26];
  QVariant::QVariant(&local_260,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_260);
  QFormLayout::setWidget(param_1[0x1f],2,2,param_1[0x26]);
  QBoxLayout::addWidget(param_1[0x1d],param_1[0x1e],0,0);
  QTabWidget::addTab((QWidget *)param_1[1],(QString *)param_1[0x1c]);
  if (*(int *)puVar13 != -1) {
    if (*(int *)puVar13 != 0) {
      LOCK();
      *(int *)puVar13 = *(int *)puVar13 + -1;
      local_38 = *(int *)puVar13 != 0;
      UNLOCK();
      if (local_38) goto LAB_10049b29c;
    }
    QArrayData::deallocate((QArrayData *)puVar13,2,8);
  }
LAB_10049b29c:
  QFormLayout::setWidget(*param_1,0,2,param_1[1]);
  QWidget::setTabOrder((QWidget *)param_1[10],(QWidget *)param_1[0x10]);
  QWidget::setTabOrder((QWidget *)param_1[0x10],(QWidget *)param_1[7]);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[6]);
  QWidget::setTabOrder((QWidget *)param_1[6],(QWidget *)param_1[0xb]);
  FUN_10049c0e0(param_1,param_2);
  QTabWidget::setCurrentIndex((int)param_1[1]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

