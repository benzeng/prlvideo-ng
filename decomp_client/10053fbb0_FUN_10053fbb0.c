
void FUN_10053fbb0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  uint uVar4;
  QVBoxLayout *this;
  QFormLayout *this_00;
  QLabel *pQVar5;
  QFrame *pQVar6;
  QHBoxLayout *this_01;
  QPushButton *pQVar7;
  undefined8 *puVar8;
  QWidget *pQVar9;
  QCheckBox *pQVar10;
  QArrayData *local_390;
  QVariant local_388;
  QString local_378;
  QVariant local_370;
  QString local_360;
  QVariant local_358;
  QString local_348;
  QVariant local_340;
  QVariant local_330;
  QArrayData *local_320;
  QArrayData *local_318;
  QVariant local_310;
  QString local_300;
  QVariant local_2f8;
  QString local_2e8;
  QVariant local_2e0;
  QString local_2d0;
  QVariant local_2c8;
  QVariant local_2b8;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QVariant local_298;
  QString local_288;
  QVariant local_280;
  QString local_270;
  QVariant local_268;
  QString local_258;
  QVariant local_250;
  QVariant local_240;
  QArrayData *local_230;
  QArrayData *local_228;
  QVariant local_220;
  QString local_210;
  QVariant local_208;
  QString local_1f8;
  QVariant local_1f0;
  QString local_1e0;
  QVariant local_1d8;
  QVariant local_1c8;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QString local_198;
  QVariant local_190;
  QString local_180;
  QVariant local_178;
  QString local_168;
  QVariant local_160;
  QVariant local_150;
  QArrayData *local_140;
  QArrayData *local_138;
  QVariant local_130;
  uint local_120 [2];
  QArrayData *local_118;
  QArrayData *local_110;
  uint local_108 [2];
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  QVariant local_60;
  undefined8 local_50;
  QArrayData *local_48;
  QIcon local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  bool local_28;
  undefined7 uStack_27;
  
  QObject::objectName();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      _local_28 = CONCAT71(uStack_27,*(int *)local_30 != 0);
      if (*(int *)local_30 != 0) goto LAB_10053fc02;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10053fc02:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_38,0x1dffaf1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        _local_28 = CONCAT71(uStack_27,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) goto LAB_10053fc59;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10053fc59:
  local_28 = true;
  uStack_27 = 0x150000002;
  QWidget::resize(param_2);
  QIcon::QIcon(local_40);
  QString::fromUtf8_helper((char *)&local_48,0x1df1eb5);
  local_50 = 0xffffffffffffffff;
  QIcon::addFile(local_40,&local_48,&local_50,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_28 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_28) goto LAB_10053fce2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10053fce2:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_60);
  QVariant::QVariant(&local_70,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_70);
  QVariant::QVariant(&local_80,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRemoteSettings");
  QVariant::~QVariant(&local_80);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_88,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_28 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_28) goto LAB_10053fdcb;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10053fdcb:
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_90,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_28 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_28) goto LAB_10053fe43;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10053fe43:
  QFormLayout::setFieldGrowthPolicy(param_1[1],0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1df72b6);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_28 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_28) goto LAB_10053fec9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10053fec9:
  QLabel::setAlignment(param_1[2],0x82);
  QFormLayout::setWidget(param_1[1],1,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_2,0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a0,0x1df71ff);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_28 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10053ff66;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10053ff66:
  QWidget::setMinimumSize((int)param_1[3],0);
  QFrame::setFrameShape(param_1[3],0);
  QFrame::setFrameShadow(param_1[3],0x10);
  QFrame::setLineWidth((int)param_1[3]);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01,(QWidget *)param_1[3]);
  param_1[4] = this_01;
  QString::fromUtf8_helper((char *)&local_a8,0x1df025a);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_28 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540011;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100540011:
  QLayout::setContentsMargins((int)param_1[4],0,0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[3]);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1dffb1f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_28 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054009d;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10054009d:
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_c0);
  QBoxLayout::addWidget(param_1[4],param_1[5],0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[3]);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1dffb34);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_28 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054015f;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10054015f:
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_d8);
  QBoxLayout::addWidget(param_1[4],param_1[6],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[7] = puVar8;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar8);
  QFormLayout::setWidget(param_1[1],1,1,param_1[3]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_e0,0x1dffb57);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_28 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005402b1;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005402b1:
  QLabel::setAlignment(param_1[8],0x84);
  QLabel::setIndent((int)param_1[8]);
  QLabel::setOpenExternalLinks(SUB81(param_1[8],0));
  QFormLayout::setWidget(param_1[1],7,2,param_1[8]);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_e8,0x1dfec7d);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_28 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054036a;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10054036a:
  QWidget::setMaximumSize((int)param_1[9],0xffffff);
  QFormLayout::setWidget(param_1[1],8,1,param_1[9]);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_2,0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_f0,0x1df72ca);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_28 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054040f;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10054040f:
  QWidget::setMinimumSize((int)param_1[10],0);
  QFrame::setFrameShadow(param_1[10],0x30);
  QFrame::setFrameShape(param_1[10],4);
  QFormLayout::setWidget(param_1[1],9,2,param_1[10]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_f8,0x1dffb6f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_28 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005404ca;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005404ca:
  QLabel::setAlignment(param_1[0xb],0x82);
  QFormLayout::setWidget(param_1[1],10,0,param_1[0xb]);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0xc] = pQVar10;
  QString::fromUtf8_helper((char *)&local_100,0x1dffb85);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_28 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540565;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100540565:
  local_108[0] = 0x30000;
  QSizePolicy::setControlType(local_108,1);
  local_108[0] = local_108[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  pQVar3 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_110,0x1dffba1);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_28 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540615;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100540615:
  QFormLayout::setWidget(param_1[1],10,1,param_1[0xc]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xd] = pQVar5;
  QString::fromUtf8_helper((char *)&local_118,0x1dffbe8);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_28 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005406a7;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005406a7:
  local_120[0] = 0x530000;
  QSizePolicy::setControlType(local_120,1);
  local_120[0] = local_120[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_120[0] = local_120[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QLabel::setAlignment(param_1[0xd],0x21);
  QLabel::setWordWrap(SUB81(param_1[0xd],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[0xd],0));
  pcVar2 = (char *)param_1[0xd];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_130);
  QFormLayout::setWidget(param_1[1],0xb,1,param_1[0xd]);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0xe] = pQVar10;
  QString::fromUtf8_helper((char *)&local_138,0x1dffc03);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_28 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005407e4;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005407e4:
  uVar4 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  pQVar3 = (QString *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_140,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_28 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054086c;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10054086c:
  pcVar2 = (char *)param_1[0xe];
  QVariant::QVariant(&local_150,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_150);
  pcVar2 = (char *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_168,0x1dffc15);
  QVariant::QVariant(&local_160,&local_168);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_28 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054092a;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_10054092a:
  pcVar2 = (char *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_180,0x1dffc2c);
  QVariant::QVariant(&local_178,&local_180);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_178);
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_28 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005409b1;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_1005409b1:
  pcVar2 = (char *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_198,0x1dffc43);
  QVariant::QVariant(&local_190,&local_198);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_28 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540a38;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_100540a38:
  pcVar2 = (char *)param_1[0xe];
  QVariant::QVariant(&local_1a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_1a8);
  QFormLayout::setWidget(param_1[1],2,1,param_1[0xe]);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0xf] = pQVar10;
  QString::fromUtf8_helper((char *)&local_1b0,0x1dffc49);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_28 = *(int *)local_1b0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540aff;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100540aff:
  uVar4 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  pQVar3 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_1b8,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_28 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540b87;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100540b87:
  pcVar2 = (char *)param_1[0xf];
  QVariant::QVariant(&local_1c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1c8);
  pcVar2 = (char *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_1e0,0x1dffc15);
  QVariant::QVariant(&local_1d8,&local_1e0);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_1d8);
  if (*(int *)local_1e0.field0_0x0 != -1) {
    if (*(int *)local_1e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
      local_28 = *(int *)local_1e0.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540c45;
    }
    QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
  }
LAB_100540c45:
  pcVar2 = (char *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_1f8,0x1dffc2c);
  QVariant::QVariant(&local_1f0,&local_1f8);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_1f0);
  if (*(int *)local_1f8.field0_0x0 != -1) {
    if (*(int *)local_1f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
      local_28 = *(int *)local_1f8.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540ccc;
    }
    QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
  }
LAB_100540ccc:
  pcVar2 = (char *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_210,0x1e2ee62);
  QVariant::QVariant(&local_208,&local_210);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_208);
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      local_28 = *(int *)local_210.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540d53;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_100540d53:
  pcVar2 = (char *)param_1[0xf];
  QVariant::QVariant(&local_220,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_220);
  QFormLayout::setWidget(param_1[1],3,1,param_1[0xf]);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0x10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_228,0x1dffc64);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_28 = *(int *)local_228 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540e1d;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_100540e1d:
  uVar4 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  pQVar3 = (QString *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_230,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_28 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540eae;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100540eae:
  pcVar2 = (char *)param_1[0x10];
  QVariant::QVariant(&local_240,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_240);
  pcVar2 = (char *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_258,0x1dffc15);
  QVariant::QVariant(&local_250,&local_258);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_250);
  if (*(int *)local_258.field0_0x0 != -1) {
    if (*(int *)local_258.field0_0x0 != 0) {
      LOCK();
      *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
      local_28 = *(int *)local_258.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540f72;
    }
    QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
  }
LAB_100540f72:
  pcVar2 = (char *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_270,0x1dffc2c);
  QVariant::QVariant(&local_268,&local_270);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_268);
  if (*(int *)local_270.field0_0x0 != -1) {
    if (*(int *)local_270.field0_0x0 != 0) {
      LOCK();
      *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
      local_28 = *(int *)local_270.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100540ffc;
    }
    QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
  }
LAB_100540ffc:
  pcVar2 = (char *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_288,0x1dffc43);
  QVariant::QVariant(&local_280,&local_288);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_280);
  if (*(int *)local_288.field0_0x0 != -1) {
    if (*(int *)local_288.field0_0x0 != 0) {
      LOCK();
      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
      local_28 = *(int *)local_288.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100541086;
    }
    QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
  }
LAB_100541086:
  pcVar2 = (char *)param_1[0x10];
  QVariant::QVariant(&local_298,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_298);
  QFormLayout::setWidget(param_1[1],4,1,param_1[0x10]);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0x11] = pQVar10;
  QString::fromUtf8_helper((char *)&local_2a0,0x1dffc7b);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_28 = *(int *)local_2a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100541156;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_100541156:
  uVar4 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x11]);
  pQVar3 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_2a8,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_28 = *(int *)local_2a8 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005411e7;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_1005411e7:
  pcVar2 = (char *)param_1[0x11];
  QVariant::QVariant(&local_2b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_2b8);
  pcVar2 = (char *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_2d0,0x1dffc15);
  QVariant::QVariant(&local_2c8,&local_2d0);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_2c8);
  if (*(int *)local_2d0.field0_0x0 != -1) {
    if (*(int *)local_2d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
      local_28 = *(int *)local_2d0.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005412ab;
    }
    QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
  }
LAB_1005412ab:
  pcVar2 = (char *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_2e8,0x1dffc2c);
  QVariant::QVariant(&local_2e0,&local_2e8);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_2e0);
  if (*(int *)local_2e8.field0_0x0 != -1) {
    if (*(int *)local_2e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + -1;
      local_28 = *(int *)local_2e8.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100541335;
    }
    QArrayData::deallocate((QArrayData *)local_2e8.field0_0x0,2,8);
  }
LAB_100541335:
  pcVar2 = (char *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_300,0x1dffc43);
  QVariant::QVariant(&local_2f8,&local_300);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_2f8);
  if (*(int *)local_300.field0_0x0 != -1) {
    if (*(int *)local_300.field0_0x0 != 0) {
      LOCK();
      *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
      local_28 = *(int *)local_300.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005413bf;
    }
    QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
  }
LAB_1005413bf:
  pcVar2 = (char *)param_1[0x11];
  QVariant::QVariant(&local_310,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_310);
  QFormLayout::setWidget(param_1[1],5,1,param_1[0x11]);
  pQVar10 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar10,(QWidget *)param_2);
  param_1[0x12] = pQVar10;
  QString::fromUtf8_helper((char *)&local_318,0x1dffc8f);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_28 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054148f;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_10054148f:
  QWidget::setEnabled(SUB81(param_1[0x12],0));
  pQVar3 = (QString *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_320,0x1e41978);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_28 = *(int *)local_320 != 0;
      UNLOCK();
      if (local_28) goto LAB_100541501;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_100541501:
  pcVar2 = (char *)param_1[0x12];
  QVariant::QVariant(&local_330,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_330);
  pcVar2 = (char *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_348,0x1dffc15);
  QVariant::QVariant(&local_340,&local_348);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_340);
  if (*(int *)local_348.field0_0x0 != -1) {
    if (*(int *)local_348.field0_0x0 != 0) {
      LOCK();
      *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
      local_28 = *(int *)local_348.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005415c5;
    }
    QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
  }
LAB_1005415c5:
  pcVar2 = (char *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_360,0x1dffc2c);
  QVariant::QVariant(&local_358,&local_360);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_358);
  if (*(int *)local_360.field0_0x0 != -1) {
    if (*(int *)local_360.field0_0x0 != 0) {
      LOCK();
      *(int *)local_360.field0_0x0 = *(int *)local_360.field0_0x0 + -1;
      local_28 = *(int *)local_360.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054164f;
    }
    QArrayData::deallocate((QArrayData *)local_360.field0_0x0,2,8);
  }
LAB_10054164f:
  pcVar2 = (char *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_378,0x1dffc43);
  QVariant::QVariant(&local_370,&local_378);
  QObject::setProperty(pcVar2,(QVariant *)"VisibleForProduct");
  QVariant::~QVariant(&local_370);
  if (*(int *)local_378.field0_0x0 != -1) {
    if (*(int *)local_378.field0_0x0 != 0) {
      LOCK();
      *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + -1;
      local_28 = *(int *)local_378.field0_0x0 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005416d9;
    }
    QArrayData::deallocate((QArrayData *)local_378.field0_0x0,2,8);
  }
LAB_1005416d9:
  pcVar2 = (char *)param_1[0x12];
  QVariant::QVariant(&local_388,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_388);
  QFormLayout::setWidget(param_1[1],6,1,param_1[0x12]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x13] = pQVar5;
  QString::fromUtf8_helper((char *)&local_390,0x1dffcae);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_28 = *(int *)local_390 != 0;
      UNLOCK();
      if (local_28) goto LAB_1005417ab;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_1005417ab:
  QFormLayout::setWidget(param_1[1],2,0,param_1[0x13]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_1005426a0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_40);
  return;
}

