
void FUN_100489d70(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  uint uVar4;
  QGridLayout *this;
  QFrame *pQVar5;
  QHBoxLayout *pQVar6;
  QPushButton *pQVar7;
  undefined8 *puVar8;
  QCheckBox *pQVar9;
  QLabel *pQVar10;
  QComboBox *this_00;
  undefined *puVar11;
  QVariant local_350;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QVariant local_310;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QVariant local_2f0;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QVariant local_2d0;
  QVariant local_2c0;
  QVariant local_2b0;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QVariant local_288;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QVariant local_258;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QVariant local_220;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QVariant local_1e8;
  QVariant local_1d8;
  QVariant local_1c8;
  QArrayData *local_1b8;
  QString local_1b0;
  QVariant local_1a8;
  QVariant local_198;
  QVariant local_188;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QVariant local_160;
  QArrayData *local_150;
  QVariant local_148;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QVariant local_118;
  QVariant local_108;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QVariant local_d0;
  QVariant local_c0;
  QVariant local_b0;
  QArrayData *local_a0;
  uint local_98 [2];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  uint local_78 [2];
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
      if (*(int *)local_40 != 0) goto LAB_100489dc6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100489dc6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df718d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100489e1d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100489e1d:
  local_38 = true;
  uStack_37 = 0x17a000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df71a9);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100489ea7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100489ea7:
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
      if (local_38) goto LAB_100489f15;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100489f15:
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1df71b8);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100489f86;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100489f86:
  local_78[0] = 0x550000;
  QSizePolicy::setControlType(local_78,1);
  local_78[0] = local_78[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_78[0] = local_78[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[1]);
  QWidget::setMinimumSize((int)param_1[1],0);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_80,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a027;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10048a027:
  QFrame::setFrameShape(param_1[1],0);
  QFrame::setFrameShadow(param_1[1],0x10);
  QFrame::setLineWidth((int)param_1[1]);
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[1]);
  param_1[2] = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_88,0x1df04e1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a0c9;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10048a0c9:
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[1]);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1df71ce);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a154;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10048a154:
  local_98[0] = 0x10000;
  QSizePolicy::setControlType(local_98,1);
  local_98[0] = local_98[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QWidget::setMinimumSize((int)param_1[3],0);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_a0,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a20d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10048a20d:
  pcVar3 = (char *)param_1[3];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_b0);
  pcVar3 = (char *)param_1[3];
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_c0);
  pcVar3 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_d8,0x1dc6cf8);
  QVariant::QVariant(&local_d0,&local_d8);
  QObject::setProperty(pcVar3,(QVariant *)"DoNotUpdateForVmStates");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_38 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a2ff;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_10048a2ff:
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000009;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[4] = puVar8;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar8);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[1]);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e0,0x1df71e2);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a3fb;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10048a3fb:
  uVar4 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QWidget::setMinimumSize((int)param_1[5],0);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_e8,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a48f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10048a48f:
  pcVar3 = (char *)param_1[5];
  QVariant::QVariant(&local_f8,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_f8);
  pcVar3 = (char *)param_1[5];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_108);
  pcVar3 = (char *)param_1[5];
  QString::fromUtf8_helper((char *)&local_120,0x1dc6cf8);
  QVariant::QVariant(&local_118,&local_120);
  QObject::setProperty(pcVar3,(QVariant *)"DoNotUpdateForVmStates");
  QVariant::~QVariant(&local_118);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_38 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a581;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_10048a581:
  QBoxLayout::addWidget(param_1[2],param_1[5],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[6] = puVar8;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar8);
  QGridLayout::addWidget(*param_1,param_1[1],4,1,1,2,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_128,0x1df71ff);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a69c;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10048a69c:
  QWidget::setMinimumSize((int)param_1[7],0);
  QFrame::setFrameShape(param_1[7],0);
  QFrame::setFrameShadow(param_1[7],0x10);
  QFrame::setLineWidth((int)param_1[7]);
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[7]);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_130,0x1df025a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a746;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10048a746:
  QLayout::setContentsMargins((int)param_1[8],0,0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[7]);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_138,0x1df7215);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a7d1;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10048a7d1:
  pcVar3 = (char *)param_1[9];
  QVariant::QVariant(&local_148,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_148);
  QBoxLayout::addWidget(param_1[8],param_1[9],0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[7]);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_150,0x1df7228);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a891;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10048a891:
  pcVar3 = (char *)param_1[10];
  QVariant::QVariant(&local_160,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_160);
  QBoxLayout::addWidget(param_1[8],param_1[10],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar8;
  (**(code **)(*(long *)param_1[8] + 0x70))((long *)param_1[8],puVar8);
  QGridLayout::addWidget(*param_1,param_1[7],0,1,1,2,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[0xc] = pQVar5;
  QString::fromUtf8_helper((char *)&local_168,0x1df7249);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048a9df;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10048a9df:
  QFrame::setFrameShape(param_1[0xc],0);
  QFrame::setLineWidth((int)param_1[0xc]);
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[0xc]);
  param_1[0xd] = pQVar6;
  QString::fromUtf8_helper((char *)&local_170,0x1df027f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048aa6e;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10048aa6e:
  QLayout::setContentsMargins((int)param_1[0xd],0,0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[0xc]);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_178,0x1df725b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048aaf9;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10048aaf9:
  pcVar3 = (char *)param_1[0xe];
  QVariant::QVariant(&local_188,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_188);
  pcVar3 = (char *)param_1[0xe];
  QVariant::QVariant(&local_198,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_198);
  pcVar3 = (char *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_1b0,0x1dc6cf8);
  QVariant::QVariant(&local_1a8,&local_1b0);
  QObject::setProperty(pcVar3,(QVariant *)"DoNotUpdateForVmStates");
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_38 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048abeb;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_10048abeb:
  QBoxLayout::addWidget(param_1[0xd],param_1[0xe],0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[0xc]);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1b8,0x1df7267);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048ac75;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10048ac75:
  pcVar3 = (char *)param_1[0xf];
  QVariant::QVariant(&local_1c8,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_1c8);
  pcVar3 = (char *)param_1[0xf];
  QVariant::QVariant(&local_1d8,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_1d8);
  pcVar3 = (char *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_1f0,0x1dc6cf8);
  QVariant::QVariant(&local_1e8,&local_1f0);
  QObject::setProperty(pcVar3,(QVariant *)"DoNotUpdateForVmStates");
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_38 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048ad67;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_10048ad67:
  QBoxLayout::addWidget(param_1[0xd],param_1[0xf],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar8;
  (**(code **)(*(long *)param_1[0xd] + 0x70))((long *)param_1[0xd],puVar8);
  QGridLayout::addWidget(*param_1,param_1[0xc],3,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x11] = pQVar9;
  QString::fromUtf8_helper((char *)&local_1f8,0x1df727a);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_38 = *(int *)local_1f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048ae86;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_10048ae86:
  pQVar2 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_200,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_38 = *(int *)local_200 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048aee6;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10048aee6:
  QGridLayout::addWidget(*param_1,param_1[0x11],9,1,1,2,0);
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6);
  param_1[0x12] = pQVar6;
  QString::fromUtf8_helper((char *)&local_208,0x1df040e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048af8a;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10048af8a:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar8;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar8);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[0x14] = pQVar7;
  QString::fromUtf8_helper((char *)&local_210,0x1df7292);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b072;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10048b072:
  pcVar3 = (char *)param_1[0x14];
  QVariant::QVariant(&local_220,true);
  QObject::setProperty(pcVar3,(QVariant *)"customUpdate");
  QVariant::~QVariant(&local_220);
  QBoxLayout::addWidget(param_1[0x12],param_1[0x14],0,0);
  QGridLayout::addLayout(*param_1,param_1[0x12],0x16,0,1,3,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x15] = pQVar10;
  QString::fromUtf8_helper((char *)&local_228,0x1df72a6);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_38 = *(int *)local_228 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b168;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_10048b168:
  QLabel::setAlignment(param_1[0x15],0x82);
  QGridLayout::addWidget(*param_1,param_1[0x15],4,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x16] = pQVar10;
  QString::fromUtf8_helper((char *)&local_230,0x1df72b6);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_38 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b21f;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_10048b21f:
  QLabel::setAlignment(param_1[0x16],0x82);
  QGridLayout::addWidget(*param_1,param_1[0x16],0,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[0x17] = pQVar5;
  QString::fromUtf8_helper((char *)&local_238,0x1df72ca);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b2d3;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_10048b2d3:
  QWidget::setMinimumSize((int)param_1[0x17],0);
  QFrame::setFrameShadow(param_1[0x17],0x30);
  QFrame::setFrameShape(param_1[0x17],4);
  QGridLayout::addWidget(*param_1,param_1[0x17],6,0,1,3,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x18] = pQVar10;
  QString::fromUtf8_helper((char *)&local_240,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_38 = *(int *)local_240 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b3ab;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_10048b3ab:
  QLabel::setAlignment(param_1[0x18],0x82);
  QGridLayout::addWidget(*param_1,param_1[0x18],3,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x19] = pQVar10;
  QString::fromUtf8_helper((char *)&local_248,0x1df72d1);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_38 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b462;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_10048b462:
  QWidget::setMinimumSize((int)param_1[0x19],0x10e);
  QLabel::setWordWrap(SUB81(param_1[0x19],0));
  pcVar3 = (char *)param_1[0x19];
  QVariant::QVariant(&local_258,true);
  QObject::setProperty(pcVar3,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_258);
  QGridLayout::addWidget(*param_1,param_1[0x19],5,1,1,2,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[0x1a] = pQVar5;
  QString::fromUtf8_helper((char *)&local_260,0x1df5e34);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_38 = *(int *)local_260 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b568;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_10048b568:
  QFrame::setFrameShadow(param_1[0x1a],0x30);
  QFrame::setFrameShape(param_1[0x1a],4);
  QGridLayout::addWidget(*param_1,param_1[0x1a],1,0,2,3,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x1b] = pQVar10;
  QString::fromUtf8_helper((char *)&local_268,0x1df72f0);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_38 = *(int *)local_268 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b630;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_10048b630:
  QLabel::setAlignment(param_1[0x1b],0x84);
  QGridLayout::addWidget(*param_1,param_1[0x1b],0xd,0,1,3,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x1c] = pQVar9;
  QString::fromUtf8_helper((char *)&local_270,0x1df72ff);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_38 = *(int *)local_270 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b6e5;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_10048b6e5:
  pQVar2 = (QString *)param_1[0x1c];
  QString::fromUtf8_helper((char *)&local_278,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_38 = *(int *)local_278 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b745;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_10048b745:
  pcVar3 = (char *)param_1[0x1c];
  QVariant::QVariant(&local_288,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_288);
  QGridLayout::addWidget(*param_1,param_1[0x1c],0xe,1,1,2,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[0x1d] = pQVar5;
  QString::fromUtf8_helper((char *)&local_290,0x1df7312);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_38 = *(int *)local_290 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b827;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_10048b827:
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[0x1d]);
  param_1[0x1e] = pQVar6;
  QString::fromUtf8_helper((char *)&local_298,0x1df04fd);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_38 = *(int *)local_298 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b8a6;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_10048b8a6:
  QLayout::setContentsMargins((int)param_1[0x1e],0,0,0);
  this_00 = operator_new(0x30);
  QComboBox::QComboBox(this_00,(QWidget *)param_1[0x1d]);
  param_1[0x1f] = this_00;
  QString::fromUtf8_helper((char *)&local_2a0,0x1df7322);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_38 = *(int *)local_2a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048b93a;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_10048b93a:
  pcVar3 = (char *)param_1[0x1f];
  QVariant::QVariant(&local_2b0,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_2b0);
  pcVar3 = (char *)param_1[0x1f];
  QVariant::QVariant(&local_2c0,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_2c0);
  pcVar3 = (char *)param_1[0x1f];
  QVariant::QVariant(&local_2d0,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_2d0);
  QBoxLayout::addWidget(param_1[0x1e],param_1[0x1f],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x20] = puVar8;
  (**(code **)(*(long *)param_1[0x1e] + 0x70))((long *)param_1[0x1e],puVar8);
  QGridLayout::addWidget(*param_1,param_1[0x1d],0xb,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x21] = pQVar9;
  QString::fromUtf8_helper((char *)&local_2d8,0x1df7331);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_38 = *(int *)local_2d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bb10;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_10048bb10:
  pQVar2 = (QString *)param_1[0x21];
  QString::fromUtf8_helper((char *)&local_2e0,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_38 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bb70;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_10048bb70:
  pcVar3 = (char *)param_1[0x21];
  QVariant::QVariant(&local_2f0,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_2f0);
  QGridLayout::addWidget(*param_1,param_1[0x21],0xf,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x22] = pQVar9;
  QString::fromUtf8_helper((char *)&local_2f8,0x1df7344);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_38 = *(int *)local_2f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bc50;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_10048bc50:
  pQVar2 = (QString *)param_1[0x22];
  QString::fromUtf8_helper((char *)&local_300,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_38 = *(int *)local_300 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bcb0;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_10048bcb0:
  pcVar3 = (char *)param_1[0x22];
  QVariant::QVariant(&local_310,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_310);
  QGridLayout::addWidget(*param_1,param_1[0x22],0x10,1,1,2,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_2,0);
  param_1[0x23] = pQVar10;
  QString::fromUtf8_helper((char *)&local_318,0x1df7357);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_38 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bd92;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_10048bd92:
  QLabel::setAlignment(param_1[0x23],0x82);
  QGridLayout::addWidget(*param_1,param_1[0x23],0xb,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[0x24] = pQVar5;
  QString::fromUtf8_helper((char *)&local_320,0x1df6bac);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_38 = *(int *)local_320 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048be49;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_10048be49:
  QWidget::setMinimumSize((int)param_1[0x24],0);
  QFrame::setFrameShadow(param_1[0x24],0x30);
  QFrame::setFrameShape(param_1[0x24],4);
  QGridLayout::addWidget(*param_1,param_1[0x24],0xc,0,1,3,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x25] = pQVar9;
  QString::fromUtf8_helper((char *)&local_328,0x1df736c);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_38 = *(int *)local_328 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bf1f;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_10048bf1f:
  pQVar2 = (QString *)param_1[0x25];
  QString::fromUtf8_helper((char *)&local_330,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_38 = *(int *)local_330 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048bf7f;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_10048bf7f:
  QGridLayout::addWidget(*param_1,param_1[0x25],10,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_2);
  param_1[0x26] = pQVar9;
  QString::fromUtf8_helper((char *)&local_338,0x1df7379);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_38 = *(int *)local_338 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048c026;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_10048c026:
  pQVar2 = (QString *)param_1[0x26];
  QString::fromUtf8_helper((char *)&local_340,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_38 = *(int *)local_340 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048c086;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_10048c086:
  pcVar3 = (char *)param_1[0x26];
  QVariant::QVariant(&local_350,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_350);
  QGridLayout::addWidget(*param_1,param_1[0x26],8,1,1,1,0);
  FUN_10048d180(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

