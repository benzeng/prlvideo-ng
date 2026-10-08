
void FUN_10046bad0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QGridLayout *pQVar4;
  QHBoxLayout *pQVar5;
  undefined8 *puVar6;
  QLabel *pQVar7;
  QString *pQVar8;
  QWidget *pQVar9;
  QFormLayout *this;
  CImageButtonComplex *pCVar10;
  CProgressIndicator *pCVar11;
  CPrlFileDevSelectorWidget *this_00;
  CMoreOptionsLabel *this_01;
  QCheckBox *this_02;
  undefined *puVar12;
  QVariant local_250;
  QString local_240;
  QVariant local_238;
  QVariant local_228;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QVariant local_1f8;
  QVariant local_1e8;
  QVariant local_1d8;
  QVariant local_1c8;
  QVariant local_1b8;
  QArrayData *local_1a8;
  uint local_1a0 [2];
  QArrayData *local_198;
  QVariant local_190;
  QVariant local_180;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QVariant local_118;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QVariant local_d0;
  QVariant local_c0;
  QVariant local_b0;
  QVariant local_a0;
  uint local_90 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10046bb26;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10046bb26:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df6118);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10046bb7d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10046bb7d:
  local_38 = true;
  uStack_37 = 0x180000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df612c);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046bc07;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10046bc07:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046bc75;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10046bc75:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046bce1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10046bce1:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1df025a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046bd4d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10046bd4d:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000012;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[3] = puVar6;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar6);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1dc1bd0);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046be30;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10046be30:
  QLabel::setAlignment(param_1[4],0x82);
  QBoxLayout::addWidget(param_1[2],param_1[4],0,0);
  pQVar8 = operator_new(0x48);
  FUN_100133430(pQVar8,param_2);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_88,0x1df56c0);
  QObject::setObjectName(pQVar8);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046bebe;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10046bebe:
  local_90[0] = 0x70000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = CONCAT22(local_90[0]._2_2_,1);
  uVar3 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_a0);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_b0);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar2,(QVariant *)"slotComboBox");
  QVariant::~QVariant(&local_c0);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_d0,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_d0);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_e0,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_e0);
  QBoxLayout::addWidget(param_1[2],param_1[5],0,0);
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
  param_1[6] = puVar6;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar6);
  QGridLayout::addLayout(param_1[1],param_1[2],6,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[7] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,8,0,1,3,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000044;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[8] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,6,2,1,1,0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_e8,0x1df613c);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c239;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10046c239:
  this = operator_new(0x20);
  QFormLayout::QFormLayout(this,(QWidget *)param_1[9]);
  param_1[10] = this;
  QLayout::setContentsMargins((int)this,0,0,0);
  pQVar8 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_f0,0x1df4574);
  QObject::setObjectName(pQVar8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c2c7;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10046c2c7:
  QFormLayout::setFieldGrowthPolicy(param_1[10],0);
  QFormLayout::setFormAlignment(param_1[10],0x21);
  pCVar10 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(pCVar10,(QWidget *)param_1[9]);
  param_1[0xb] = pCVar10;
  QString::fromUtf8_helper((char *)&local_f8,0x1df6146);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c359;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10046c359:
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_108);
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_118,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_118);
  QFormLayout::setWidget(param_1[10],0,0,param_1[0xb]);
  pCVar10 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(pCVar10,(QWidget *)param_1[9]);
  param_1[0xc] = pCVar10;
  QString::fromUtf8_helper((char *)&local_120,0x1df6151);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c44f;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10046c44f:
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_130);
  QFormLayout::setWidget(param_1[10],0,1,param_1[0xc]);
  pCVar11 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar11,param_1[9],1);
  param_1[0xd] = pCVar11;
  QString::fromUtf8_helper((char *)&local_138,0x1df615e);
  QObject::setObjectName((QString *)pCVar11);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c517;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10046c517:
  QWidget::setMinimumSize((int)param_1[0xd],0);
  pcVar2 = (char *)param_1[0xd];
  QVariant::QVariant(&local_148,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_148);
  QFormLayout::setWidget(param_1[10],1,2,param_1[0xd]);
  QGridLayout::addWidget(param_1[1],param_1[9],2,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_150,0x1df5833);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c618;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10046c618:
  QLabel::setAlignment(param_1[0xe],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0xe],0,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_158,0x1df3af0);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c6c4;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10046c6c4:
  QLabel::setAlignment(param_1[0xf],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0xf],1,0,1,1,0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[0x10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_160,0x1df6170);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c776;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10046c776:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5,(QWidget *)param_1[0x10]);
  param_1[0x11] = pQVar5;
  QString::fromUtf8_helper((char *)&local_168,0x1df027f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c7f5;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10046c7f5:
  QLayout::setContentsMargins((int)param_1[0x11],0,0x15,0);
  pCVar10 = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(pCVar10,(QWidget *)param_1[0x10]);
  param_1[0x12] = pCVar10;
  QString::fromUtf8_helper((char *)&local_170,0x1df617e);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046c88c;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10046c88c:
  pcVar2 = (char *)param_1[0x12];
  QVariant::QVariant(&local_180,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_180);
  pcVar2 = (char *)param_1[0x12];
  QVariant::QVariant(&local_190,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_190);
  QBoxLayout::addWidget(param_1[0x11],param_1[0x12],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000023;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar6;
  (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],puVar6);
  QGridLayout::addWidget(param_1[1],param_1[0x10],7,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,0,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0x15] = pQVar7;
  QString::fromUtf8_helper((char *)&local_198,0x1df618d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046caaf;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10046caaf:
  local_1a0[0] = 0x550000;
  QSizePolicy::setControlType(local_1a0,1);
  local_1a0[0] = local_1a0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_1a0[0] = local_1a0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x15]);
  QLabel::setWordWrap(SUB81(param_1[0x15],0));
  QGridLayout::addWidget(param_1[1],param_1[0x15],1,1,1,1,0);
  this_00 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_00,(QWidget *)param_2);
  param_1[0x16] = this_00;
  QString::fromUtf8_helper((char *)&local_1a8,0x1df5827);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_38 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046cbbd;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10046cbbd:
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_1b8);
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1c8);
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"deviceSourceCombobox");
  QVariant::~QVariant(&local_1d8);
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1e8,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_1e8);
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1f8,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_1f8);
  QGridLayout::addWidget(param_1[1],param_1[0x16],0,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[0x17] = pQVar9;
  QString::fromUtf8_helper((char *)&local_200,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_38 = *(int *)local_200 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046cd81;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10046cd81:
  QWidget::setMinimumSize((int)param_1[0x17],0);
  QWidget::setMaximumSize((int)param_1[0x17],0xffffff);
  QGridLayout::addWidget(param_1[1],param_1[0x17],4,0,1,3,0);
  this_01 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_01,(QWidget *)param_2);
  param_1[0x18] = this_01;
  QString::fromUtf8_helper((char *)&local_208,0x1df53e4);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046ce4f;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10046ce4f:
  QGridLayout::addWidget(param_1[1],param_1[0x18],5,1,1,2,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0x19] = pQVar7;
  QString::fromUtf8_helper((char *)&local_210,0x1df619d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046cef9;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10046cef9:
  QLabel::setAlignment(param_1[0x19],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0x19],3,0,1,1,0);
  this_02 = operator_new(0x30);
  QCheckBox::QCheckBox(this_02,(QWidget *)param_2);
  param_1[0x1a] = this_02;
  QString::fromUtf8_helper((char *)&local_218,0x1df61af);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_38 = *(int *)local_218 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046cfaf;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_10046cfaf:
  pcVar2 = (char *)param_1[0x1a];
  QVariant::QVariant(&local_228,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_228);
  pcVar2 = (char *)param_1[0x1a];
  QString::fromUtf8_helper((char *)&local_240,0x1df61c1);
  QVariant::QVariant(&local_238,&local_240);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_238);
  if (*(int *)local_240.field0_0x0 != -1) {
    if (*(int *)local_240.field0_0x0 != 0) {
      LOCK();
      *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
      local_38 = *(int *)local_240.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046d071;
    }
    QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
  }
LAB_10046d071:
  pcVar2 = (char *)param_1[0x1a];
  QVariant::QVariant(&local_250,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_250);
  QGridLayout::addWidget(param_1[1],param_1[0x1a],3,1,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,1,0);
  FUN_10046da60(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

