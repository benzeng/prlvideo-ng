
void FUN_100461560(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QGridLayout *pQVar4;
  CGradientLine *pCVar5;
  QStackedWidget *pQVar6;
  QWidget *pQVar7;
  QHBoxLayout *pQVar8;
  QVBoxLayout *pQVar9;
  QFrame *pQVar10;
  undefined8 *puVar11;
  QLabel *pQVar12;
  QString *pQVar13;
  QLineEdit *this;
  QTextEdit *this_00;
  CStackedBar *this_01;
  QProgressBar *this_02;
  QPushButton *pQVar14;
  undefined *puVar15;
  QVariant local_360;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  uint local_2f0 [2];
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QVariant local_2d8;
  uint local_2c8 [2];
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QVariant local_2b0;
  QVariant local_2a0;
  QArrayData *local_290;
  QArrayData *local_288;
  QVariant local_280;
  QVariant local_270;
  QVariant local_260;
  uint local_250 [2];
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QString local_230;
  QVariant local_228;
  uint local_218 [2];
  QArrayData *local_210;
  QString local_208;
  QVariant local_200;
  QFont local_1f0 [16];
  QArrayData *local_1e0;
  QString local_1d8;
  QVariant local_1d0;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QVariant local_1b0;
  QVariant local_1a0;
  QString local_190;
  QVariant local_188;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  uint local_d0 [2];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QFont local_98 [16];
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
      if (*(int *)local_40 != 0) goto LAB_1004615b6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004615b6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df5c6b);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10046160d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10046160d:
  local_38 = true;
  uStack_37 = 0x162000002;
  QWidget::resize(param_2);
  QWidget::setFocusPolicy(param_2,0xb);
  QString::fromUtf8_helper((char *)&local_60,0x1df5c7e);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004616a4;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004616a4:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461712;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100461712:
  QLayout::setContentsMargins((int)*param_1,-1,0,6);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461795;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100461795:
  QLayout::setContentsMargins((int)param_1[1],-1,-1,6);
  pCVar5 = operator_new(0x30);
  CGradientLine::CGradientLine(pCVar5,(QWidget *)param_2);
  param_1[2] = pCVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1df5c8c);
  QObject::setObjectName((QString *)pCVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461822;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100461822:
  QGridLayout::addWidget(param_1[1],param_1[2],5,0,1,3,0);
  pQVar6 = operator_new(0x30);
  QStackedWidget::QStackedWidget(pQVar6,(QWidget *)param_2);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1df5c9a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004618b8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004618b8:
  local_88[0] = 0x350000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QWidget::setMinimumSize((int)param_1[3],0);
  QFont::QFont(local_98);
  QFont::setPointSize((int)local_98);
  QWidget::setFont((QFont *)param_1[3]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1df5cb9);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004619ae;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004619ae:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[4]);
  param_1[5] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  QLayout::setContentsMargins((int)param_1[5],0,0,0);
  pQVar13 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_a8,0x1df040e);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461a48;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100461a48:
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_1[4],0);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df5ccc);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461ac4;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100461ac4:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[6]);
  param_1[7] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  QLayout::setContentsMargins((int)param_1[7],0,0,0);
  pQVar13 = (QString *)param_1[7];
  QString::fromUtf8_helper((char *)&local_b8,0x1df027f);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461b61;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100461b61:
  pQVar9 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar9);
  param_1[8] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar13 = (QString *)param_1[8];
  QString::fromUtf8_helper((char *)&local_c0,0x1df0811);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461be5;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100461be5:
  pQVar10 = operator_new(0x30);
  QFrame::QFrame(pQVar10,param_1[6],0);
  param_1[9] = pQVar10;
  QString::fromUtf8_helper((char *)&local_c8,0x1df5cda);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461c61;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100461c61:
  local_d0[0] = 0;
  QSizePolicy::setControlType(local_d0,1);
  local_d0[0] = local_d0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_d0[0] = local_d0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QWidget::setMinimumSize((int)param_1[9],0xb);
  QWidget::setAutoFillBackground(SUB81(param_1[9],0));
  QFrame::setFrameShape(param_1[9],6);
  QFrame::setFrameShadow(param_1[9],0x20);
  QBoxLayout::addWidget(param_1[8],param_1[9],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  puVar15 = PTR_vtable_1021e17a0 + 0x10;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0xd0000000d;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[10] = puVar11;
  (**(code **)(*(long *)param_1[8] + 0x70))((long *)param_1[8],puVar11);
  QBoxLayout::addLayout((QLayout *)param_1[7],(int)param_1[8]);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[6],0);
  param_1[0xb] = pQVar12;
  QString::fromUtf8_helper((char *)&local_d8,0x1df5ce6);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461e01;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100461e01:
  local_e0[0] = 0x530000;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = local_e0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QWidget::setMinimumSize((int)param_1[0xb],0);
  QWidget::setFont((QFont *)param_1[0xb]);
  QLabel::setAlignment(param_1[0xb],0x21);
  QLabel::setWordWrap(SUB81(param_1[0xb],0));
  QBoxLayout::addWidget(param_1[7],param_1[0xb],0);
  QBoxLayout::setStretch((int)param_1[7],1);
  QBoxLayout::addWidget(param_1[5],param_1[6],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 8;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar11;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar11);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_1[4],0);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e8,0x1df5cf3);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100461fa1;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100461fa1:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0xd]);
  param_1[0xe] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  QLayout::setContentsMargins((int)param_1[0xe],0,0,0);
  pQVar13 = (QString *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_f0,0x1df025a);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046203e;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10046203e:
  pQVar9 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar9);
  param_1[0xf] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar13 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_f8,0x1dd6e2a);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004620c2;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004620c2:
  pQVar10 = operator_new(0x30);
  QFrame::QFrame(pQVar10,param_1[0xd],0);
  param_1[0x10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_100,0x1df5d05);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462141;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100462141:
  uVar3 = QWidget::sizePolicy();
  local_d0[0] = local_d0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QWidget::setMinimumSize((int)param_1[0x10],0xb);
  QWidget::setAutoFillBackground(SUB81(param_1[0x10],0));
  QFrame::setFrameShape(param_1[0x10],6);
  QFrame::setFrameShadow(param_1[0x10],0x20);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x10],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0xd0000000d;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar11;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar11);
  QBoxLayout::addLayout((QLayout *)param_1[0xe],(int)param_1[0xf]);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0xd],0);
  param_1[0x12] = pQVar12;
  QString::fromUtf8_helper((char *)&local_108,0x1df5d15);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004622c2;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004622c2:
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QWidget::setFont((QFont *)param_1[0x12]);
  QLabel::setAlignment(param_1[0x12],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x12],0));
  QBoxLayout::addWidget(param_1[0xe],param_1[0x12],0);
  QBoxLayout::setStretch((int)param_1[0xe],1);
  QBoxLayout::addWidget(param_1[5],param_1[0xd],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 8;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar11;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar11);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_1[4],0);
  param_1[0x14] = pQVar7;
  QString::fromUtf8_helper((char *)&local_110,0x1df5d26);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462445;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100462445:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0x14]);
  param_1[0x15] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  QLayout::setContentsMargins((int)param_1[0x15],0,0,0);
  pQVar13 = (QString *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_118,0x1df0473);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004624ee;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004624ee:
  pQVar9 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar9);
  param_1[0x16] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar13 = (QString *)param_1[0x16];
  QString::fromUtf8_helper((char *)&local_120,0x1df0c61);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462578;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100462578:
  pQVar10 = operator_new(0x30);
  QFrame::QFrame(pQVar10,param_1[0x14],0);
  param_1[0x17] = pQVar10;
  QString::fromUtf8_helper((char *)&local_128,0x1df5d33);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004625fa;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004625fa:
  uVar3 = QWidget::sizePolicy();
  local_d0[0] = local_d0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x17]);
  QWidget::setMinimumSize((int)param_1[0x17],0xb);
  QWidget::setAutoFillBackground(SUB81(param_1[0x17],0));
  QFrame::setFrameShape(param_1[0x17],6);
  QFrame::setFrameShadow(param_1[0x17],0x20);
  QBoxLayout::addWidget(param_1[0x16],param_1[0x17],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0xd0000000d;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar11;
  (**(code **)(*(long *)param_1[0x16] + 0x70))((long *)param_1[0x16],puVar11);
  QBoxLayout::addLayout((QLayout *)param_1[0x15],(int)param_1[0x16]);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0x14],0);
  param_1[0x19] = pQVar12;
  QString::fromUtf8_helper((char *)&local_130,0x1df5d3e);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046278a;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10046278a:
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x19]);
  QWidget::setFont((QFont *)param_1[0x19]);
  QLabel::setAlignment(param_1[0x19],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x19],0));
  QBoxLayout::addWidget(param_1[0x15],param_1[0x19],0);
  QBoxLayout::setStretch((int)param_1[0x15],1);
  QBoxLayout::addWidget(param_1[5],param_1[0x14],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 8;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x1a] = puVar11;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar11);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_1[4],0);
  param_1[0x1b] = pQVar7;
  QString::fromUtf8_helper((char *)&local_138,0x1df5d4a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462916;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100462916:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0x1b]);
  param_1[0x1c] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  QLayout::setContentsMargins((int)param_1[0x1c],0,0,0);
  pQVar13 = (QString *)param_1[0x1c];
  QString::fromUtf8_helper((char *)&local_140,0x1df04e1);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004629bf;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1004629bf:
  pQVar9 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar9);
  param_1[0x1d] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar13 = (QString *)param_1[0x1d];
  QString::fromUtf8_helper((char *)&local_148,0x1df07b1);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462a49;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100462a49:
  pQVar10 = operator_new(0x30);
  QFrame::QFrame(pQVar10,param_1[0x1b],0);
  param_1[0x1e] = pQVar10;
  QString::fromUtf8_helper((char *)&local_150,0x1df5d5e);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462acb;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100462acb:
  uVar3 = QWidget::sizePolicy();
  local_d0[0] = local_d0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x1e]);
  QWidget::setMinimumSize((int)param_1[0x1e],0xb);
  QWidget::setAutoFillBackground(SUB81(param_1[0x1e],0));
  QFrame::setFrameShape(param_1[0x1e],6);
  QFrame::setFrameShadow(param_1[0x1e],0x20);
  QBoxLayout::addWidget(param_1[0x1d],param_1[0x1e],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0xd0000000d;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x1f] = puVar11;
  (**(code **)(*(long *)param_1[0x1d] + 0x70))((long *)param_1[0x1d],puVar11);
  QBoxLayout::addLayout((QLayout *)param_1[0x1c],(int)param_1[0x1d]);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0x1b],0);
  param_1[0x20] = pQVar12;
  QString::fromUtf8_helper((char *)&local_158,0x1df5d70);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462c5b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100462c5b:
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x20]);
  QWidget::setFont((QFont *)param_1[0x20]);
  QLabel::setAlignment(param_1[0x20],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x20],0));
  QBoxLayout::addWidget(param_1[0x1c],param_1[0x20],0);
  QBoxLayout::setStretch((int)param_1[0x1c],1);
  QBoxLayout::addWidget(param_1[5],param_1[0x1b],0);
  QStackedWidget::addWidget((QWidget *)param_1[3]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[0x21] = pQVar7;
  QString::fromUtf8_helper((char *)&local_160,0x1df5d83);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462d88;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100462d88:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[0x21]);
  param_1[0x22] = pQVar4;
  QGridLayout::setSpacing((int)pQVar4);
  QLayout::setContentsMargins((int)param_1[0x22],0,0,0);
  pQVar13 = (QString *)param_1[0x22];
  QString::fromUtf8_helper((char *)&local_168,0x1df5d96);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462e31;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100462e31:
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0x21],0);
  param_1[0x23] = pQVar12;
  QString::fromUtf8_helper((char *)&local_170,0x1df5da9);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_100462eb3;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100462eb3:
  QWidget::setFont((QFont *)param_1[0x23]);
  QLabel::setAlignment(param_1[0x23],0x24);
  QGridLayout::addWidget(param_1[0x22],param_1[0x23],0,0,1,1,0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x24] = puVar11;
  QGridLayout::addItem(param_1[0x22],puVar11,0,1,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[3]);
  QGridLayout::addWidget(param_1[1],param_1[3],7,1,1,2,0);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[0x25] = pQVar7;
  QString::fromUtf8_helper((char *)&local_178,0x1df5db9);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046303c;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10046303c:
  pcVar2 = (char *)param_1[0x25];
  QString::fromUtf8_helper((char *)&local_190,0x1df5dca);
  QVariant::QVariant(&local_188,&local_190);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_188);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_38 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004630c6;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_1004630c6:
  pcVar2 = (char *)param_1[0x25];
  QVariant::QVariant(&local_1a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1a0);
  pcVar2 = (char *)param_1[0x25];
  QVariant::QVariant(&local_1b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_1b0);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[0x25]);
  param_1[0x26] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar13 = (QString *)param_1[0x26];
  QString::fromUtf8_helper((char *)&local_1b8,0x1df5de0);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004631d2;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1004631d2:
  QGridLayout::setVerticalSpacing((int)param_1[0x26]);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0x25],0);
  param_1[0x27] = pQVar12;
  QString::fromUtf8_helper((char *)&local_1c0,0x1df5ded);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_38 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463265;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100463265:
  QWidget::setMinimumSize((int)param_1[0x27],0x30);
  QWidget::setMaximumSize((int)param_1[0x27],0x30);
  pcVar2 = (char *)param_1[0x27];
  QString::fromUtf8_helper((char *)&local_1d8,0x1df26ed);
  QVariant::QVariant(&local_1d0,&local_1d8);
  QObject::setProperty(pcVar2,(QVariant *)"role");
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_38 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046331b;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_10046331b:
  QGridLayout::addWidget(param_1[0x26],param_1[0x27],0,0,2,1,0);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0x25],0);
  param_1[0x28] = pQVar12;
  QString::fromUtf8_helper((char *)&local_1e0,0x1df5dfe);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004633c7;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_1004633c7:
  QFont::QFont(local_1f0);
  QFont::setPointSize((int)local_1f0);
  QFont::setWeight((int)local_1f0);
  QFont::setWeight((int)local_1f0);
  QWidget::setFont((QFont *)param_1[0x28]);
  QLabel::setMargin((int)param_1[0x28]);
  pcVar2 = (char *)param_1[0x28];
  QString::fromUtf8_helper((char *)&local_208,0x1e2e422);
  QVariant::QVariant(&local_200,&local_208);
  QObject::setProperty(pcVar2,(QVariant *)"role");
  QVariant::~QVariant(&local_200);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_38 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004634b4;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_1004634b4:
  QGridLayout::addWidget(param_1[0x26],param_1[0x28],0,1,1,2,0);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_1[0x25],0);
  param_1[0x29] = pQVar12;
  QString::fromUtf8_helper((char *)&local_210,0x1df5e0f);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463563;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100463563:
  local_218[0] = 0x750000;
  QSizePolicy::setControlType(local_218,1);
  local_218[0] = local_218[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_218[0] = local_218[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x29]);
  QWidget::setFont((QFont *)param_1[0x29]);
  QLabel::setAlignment(param_1[0x29],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x29],0));
  QLabel::setMargin((int)param_1[0x29]);
  pcVar2 = (char *)param_1[0x29];
  QString::fromUtf8_helper((char *)&local_230,0x1de1c51);
  QVariant::QVariant(&local_228,&local_230);
  QObject::setProperty(pcVar2,(QVariant *)"role");
  QVariant::~QVariant(&local_228);
  if (*(int *)local_230.field0_0x0 != -1) {
    if (*(int *)local_230.field0_0x0 != 0) {
      LOCK();
      *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
      local_38 = *(int *)local_230.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463688;
    }
    QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
  }
LAB_100463688:
  QGridLayout::addWidget(param_1[0x26],param_1[0x29],1,1,1,2,0);
  QGridLayout::addWidget(param_1[1],param_1[0x25],4,1,1,1,0);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4);
  param_1[0x2a] = pQVar4;
  QString::fromUtf8_helper((char *)&local_238,0x1df5e27);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046375e;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_10046375e:
  QLayout::setContentsMargins((int)param_1[0x2a],-1,6,-1);
  pCVar5 = operator_new(0x30);
  CGradientLine::CGradientLine(pCVar5,(QWidget *)param_2);
  param_1[0x2b] = pCVar5;
  QString::fromUtf8_helper((char *)&local_240,0x1df5e34);
  QObject::setObjectName((QString *)pCVar5);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_38 = *(int *)local_240 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004637fb;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_1004637fb:
  QGridLayout::addWidget(param_1[0x2a],param_1[0x2b],0,0,1,1,0);
  QGridLayout::addLayout(param_1[1],param_1[0x2a],3,0,1,3,0);
  pQVar13 = operator_new(0x40);
  FUN_1001362a0(pQVar13,param_2);
  param_1[0x2c] = pQVar13;
  QString::fromUtf8_helper((char *)&local_248,0x1df5e3b);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_38 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004638cb;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_1004638cb:
  local_250[0] = 0x50000;
  QSizePolicy::setControlType(local_250,1);
  local_250[0] = local_250[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_250[0] = local_250[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x2c]);
  pcVar2 = (char *)param_1[0x2c];
  QVariant::QVariant(&local_260,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_260);
  pcVar2 = (char *)param_1[0x2c];
  QVariant::QVariant(&local_270,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_270);
  pcVar2 = (char *)param_1[0x2c];
  QVariant::QVariant(&local_280,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_280);
  QGridLayout::addWidget(param_1[1],param_1[0x2c],0,1,1,2,0);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_2,0);
  param_1[0x2d] = pQVar12;
  QString::fromUtf8_helper((char *)&local_288,0x1df5e4a);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_38 = *(int *)local_288 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463a76;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_100463a76:
  QLabel::setAlignment(param_1[0x2d],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0x2d],1,0,1,1,0);
  this = operator_new(0x30);
  QLineEdit::QLineEdit(this,(QWidget *)param_2);
  param_1[0x2e] = this;
  QString::fromUtf8_helper((char *)&local_290,0x1df5e56);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_38 = *(int *)local_290 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463b2d;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_100463b2d:
  pcVar2 = (char *)param_1[0x2e];
  QVariant::QVariant(&local_2a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_2a0);
  pcVar2 = (char *)param_1[0x2e];
  QVariant::QVariant(&local_2b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_2b0);
  QGridLayout::addWidget(param_1[1],param_1[0x2e],1,1,1,2,0);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_2,0);
  param_1[0x2f] = pQVar12;
  QString::fromUtf8_helper((char *)&local_2b8,0x1df5e62);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_38 = *(int *)local_2b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463c4c;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_100463c4c:
  QLabel::setAlignment(param_1[0x2f],0x22);
  QGridLayout::addWidget(param_1[1],param_1[0x2f],2,0,1,1,0);
  this_00 = operator_new(0x30);
  QTextEdit::QTextEdit(this_00,(QWidget *)param_2);
  param_1[0x30] = this_00;
  QString::fromUtf8_helper((char *)&local_2c0,0x1df5e75);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_38 = *(int *)local_2c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463d03;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_100463d03:
  local_2c8[0] = 0x70000;
  QSizePolicy::setControlType(local_2c8,1);
  local_2c8[0] = local_2c8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_2c8[0] = local_2c8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x30]);
  QWidget::setMinimumSize((int)param_1[0x30],0);
  QWidget::setMaximumSize((int)param_1[0x30],0xffffff);
  pcVar2 = (char *)param_1[0x30];
  QVariant::QVariant(&local_2d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_2d8);
  QGridLayout::addWidget(param_1[1],param_1[0x30],2,1,1,2,0);
  pQVar9 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar9);
  param_1[0x31] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar13 = (QString *)param_1[0x31];
  QString::fromUtf8_helper((char *)&local_2e0,0x1dc1597);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_38 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463e75;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_100463e75:
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_2,0);
  param_1[0x32] = pQVar12;
  QString::fromUtf8_helper((char *)&local_2e8,0x1df3cc1);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_38 = *(int *)local_2e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463ef3;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_100463ef3:
  local_2f0[0] = 0x450000;
  QSizePolicy::setControlType(local_2f0,1);
  local_2f0[0] = local_2f0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_2f0[0] = local_2f0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x32]);
  QLabel::setAlignment(param_1[0x32],0x22);
  QBoxLayout::addWidget(param_1[0x31],param_1[0x32],0,0);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_2,0);
  param_1[0x33] = pQVar12;
  QString::fromUtf8_helper((char *)&local_2f8,0x1df5e7e);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_38 = *(int *)local_2f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100463fee;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_100463fee:
  uVar3 = QWidget::sizePolicy();
  local_2f0[0] = local_2f0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x33]);
  QLabel::setAlignment(param_1[0x33],0x22);
  QBoxLayout::addWidget(param_1[0x31],param_1[0x33],0,0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x34] = puVar11;
  (**(code **)(*(long *)param_1[0x31] + 0x70))((long *)param_1[0x31],puVar11);
  QGridLayout::addLayout(param_1[1],param_1[0x31],6,0,2,1,0);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[0x35] = pQVar8;
  QString::fromUtf8_helper((char *)&local_300,0x1df04fd);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_38 = *(int *)local_300 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464156;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_100464156:
  QLayout::setContentsMargins((int)param_1[0x35],-1,-1,6);
  pQVar6 = operator_new(0x30);
  QStackedWidget::QStackedWidget(pQVar6,(QWidget *)param_2);
  param_1[0x36] = pQVar6;
  QString::fromUtf8_helper((char *)&local_308,0x1df5e8d);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_38 = *(int *)local_308 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004641f3;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_1004641f3:
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[0x37] = pQVar7;
  QString::fromUtf8_helper((char *)&local_310,0x1df5ea9);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_38 = *(int *)local_310 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464270;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_100464270:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0x37]);
  param_1[0x38] = pQVar8;
  QBoxLayout::setSpacing((int)pQVar8);
  QLayout::setContentsMargins((int)param_1[0x38],0,0,0);
  pQVar13 = (QString *)param_1[0x38];
  QString::fromUtf8_helper((char *)&local_318,0x1df5eaf);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_38 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464316;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_100464316:
  this_01 = operator_new(0x38);
  CStackedBar::CStackedBar(this_01,(QWidget *)param_1[0x37]);
  param_1[0x39] = this_01;
  QString::fromUtf8_helper((char *)&local_320,0x1df5ec2);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_38 = *(int *)local_320 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464396;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_100464396:
  uVar3 = QWidget::sizePolicy();
  local_250[0] = local_250[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x39]);
  QWidget::setMinimumSize((int)param_1[0x39],0);
  QBoxLayout::addWidget(param_1[0x38],param_1[0x39],0);
  QStackedWidget::addWidget((QWidget *)param_1[0x36]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[0x3a] = pQVar7;
  QString::fromUtf8_helper((char *)&local_328,0x1df5ecd);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_38 = *(int *)local_328 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464480;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_100464480:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[0x3a]);
  param_1[0x3b] = pQVar4;
  QGridLayout::setSpacing((int)pQVar4);
  pQVar13 = (QString *)param_1[0x3b];
  QString::fromUtf8_helper((char *)&local_330,0x1df4296);
  QObject::setObjectName(pQVar13);
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_38 = *(int *)local_330 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464511;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_100464511:
  QLayout::setContentsMargins((int)param_1[0x3b],0,4,0);
  this_02 = operator_new(0x30);
  QProgressBar::QProgressBar(this_02,(QWidget *)param_1[0x3a]);
  param_1[0x3c] = this_02;
  QString::fromUtf8_helper((char *)&local_338,0x1df5ed3);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_38 = *(int *)local_338 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004645a9;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_1004645a9:
  QProgressBar::setMinimum((int)param_1[0x3c]);
  QProgressBar::setMaximum((int)param_1[0x3c]);
  QProgressBar::setValue((int)param_1[0x3c]);
  QGridLayout::addWidget(param_1[0x3b],param_1[0x3c],0,0,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[0x36]);
  QBoxLayout::addWidget(param_1[0x35],param_1[0x36],0,0);
  QGridLayout::addLayout(param_1[1],param_1[0x35],6,1,1,1,0);
  pQVar14 = operator_new(0x30);
  QPushButton::QPushButton(pQVar14,(QWidget *)param_2);
  param_1[0x3d] = pQVar14;
  QString::fromUtf8_helper((char *)&local_340,0x1df5ee8);
  QObject::setObjectName((QString *)pQVar14);
  if (*(int *)local_340 != -1) {
    if (*(int *)local_340 != 0) {
      LOCK();
      *(int *)local_340 = *(int *)local_340 + -1;
      local_38 = *(int *)local_340 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004646d0;
    }
    QArrayData::deallocate(local_340,2,8);
  }
LAB_1004646d0:
  QGridLayout::addWidget(param_1[1],param_1[0x3d],6,2,1,1,0);
  pQVar12 = operator_new(0x30);
  QLabel::QLabel(pQVar12,param_2,0);
  param_1[0x3e] = pQVar12;
  QString::fromUtf8_helper((char *)&local_348,0x1df5ef4);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_348 != -1) {
    if (*(int *)local_348 != 0) {
      LOCK();
      *(int *)local_348 = *(int *)local_348 + -1;
      local_38 = *(int *)local_348 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046477b;
    }
    QArrayData::deallocate(local_348,2,8);
  }
LAB_10046477b:
  QLabel::setAlignment(param_1[0x3e],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0x3e],4,0,1,1,0);
  pQVar14 = operator_new(0x30);
  QPushButton::QPushButton(pQVar14,(QWidget *)param_2);
  param_1[0x3f] = pQVar14;
  QString::fromUtf8_helper((char *)&local_350,0x1df5f06);
  QObject::setObjectName((QString *)pQVar14);
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_38 = *(int *)local_350 != 0;
      UNLOCK();
      if (local_38) goto LAB_100464832;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_100464832:
  pcVar2 = (char *)param_1[0x3f];
  QVariant::QVariant(&local_360,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_360);
  QGridLayout::addWidget(param_1[1],param_1[0x3f],4,2,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,2,0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x40] = puVar11;
  QGridLayout::addItem(*param_1,puVar11,1,0,1,2,0);
  FUN_100465ef0(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[3]);
  QStackedWidget::setCurrentIndex((int)param_1[0x36]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_1f0);
  QFont::~QFont(local_98);
  return;
}

