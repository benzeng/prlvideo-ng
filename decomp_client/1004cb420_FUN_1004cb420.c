
void FUN_1004cb420(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  uint uVar4;
  QGridLayout *pQVar5;
  QFormLayout *this;
  QFrame *pQVar6;
  QLabel *pQVar7;
  undefined8 *puVar8;
  QCheckBox *pQVar9;
  QPushButton *pQVar10;
  QWidget *pQVar11;
  QHBoxLayout *this_00;
  CProgressIndicator *pCVar12;
  undefined *puVar13;
  QVariant local_168;
  QArrayData *local_158;
  QVariant local_150;
  uint local_140 [2];
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
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
      if (*(int *)local_40 != 0) goto LAB_1004cb476;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004cb476:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df9f0a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004cb4cd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004cb4cd:
  local_38 = true;
  uStack_37 = 0x160000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df9f24);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb557;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004cb557:
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
      if (local_38) goto LAB_1004cb5c5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004cb5c5:
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,9,-1,9);
  this = operator_new(0x20);
  QFormLayout::QFormLayout(this,(QWidget *)0x0);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1df9e27);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb657;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004cb657:
  QFormLayout::setFieldGrowthPolicy(param_1[1],0);
  QFormLayout::setLabelAlignment(param_1[1],0x82);
  QFormLayout::setFormAlignment(param_1[1],0x24);
  QFormLayout::setVerticalSpacing((int)param_1[1]);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_2,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1df9f31);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb6fd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004cb6fd:
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_80,0x1df9f43);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb754;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004cb754:
  QFrame::setFrameShape(param_1[2],0);
  QFrame::setFrameShadow(param_1[2],0x20);
  QFrame::setLineWidth((int)param_1[2]);
  QFrame::setMidLineWidth((int)param_1[2]);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[2]);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb7f3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004cb7f3:
  QGridLayout::setVerticalSpacing((int)param_1[3]);
  QLayout::setContentsMargins((int)param_1[3],0,0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[2],0);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1df48ee);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb88e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004cb88e:
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_98,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cb8eb;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004cb8eb:
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QLabel::setIndent((int)param_1[4]);
  pcVar3 = (char *)param_1[4];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar3,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_a8);
  QGridLayout::addWidget(param_1[3],param_1[4],1,0,1,4,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar13 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar13;
  *(undefined8 *)((long)puVar8 + 0xc) = 0;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[5] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,0,3,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[2]);
  param_1[6] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b0,0x1df9f74);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cba62;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004cba62:
  pcVar3 = (char *)param_1[6];
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_c0);
  QGridLayout::addWidget(param_1[3],param_1[6],0,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_1[2]);
  param_1[7] = pQVar10;
  QString::fromUtf8_helper((char *)&local_c8,0x1df9f84);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbb35;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004cbb35:
  pcVar3 = (char *)param_1[7];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_d8);
  QGridLayout::addWidget(param_1[3],param_1[7],0,2,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar13;
  *(undefined8 *)((long)puVar8 + 0xc) = 6;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,0,1,1,1,0);
  QFormLayout::setWidget(param_1[1],1,1);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,param_2,0);
  param_1[9] = pQVar11;
  QString::fromUtf8_helper((char *)&local_e0,0x1df9f9a);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbc9d;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004cbc9d:
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00,(QWidget *)param_1[9]);
  param_1[10] = this_00;
  QString::fromUtf8_helper((char *)&local_e8,0x1df0473);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbd16;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004cbd16:
  QLayout::setContentsMargins((int)param_1[10],0,0,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[9]);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_f0,0x1df9faa);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbda1;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004cbda1:
  pQVar2 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_f8,0x1df9fba);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbe01;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004cbe01:
  pcVar3 = (char *)param_1[0xb];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar3,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_108);
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0,0);
  pCVar12 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar12,param_1[9],1);
  param_1[0xc] = pCVar12;
  QString::fromUtf8_helper((char *)&local_110,0x1df9fd8);
  QObject::setObjectName((QString *)pCVar12);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbec6;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004cbec6:
  QBoxLayout::addWidget(param_1[10],param_1[0xc],0,0);
  QFormLayout::setWidget(param_1[1],2,1,param_1[9]);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_2);
  param_1[0xd] = pQVar10;
  QString::fromUtf8_helper((char *)&local_118,0x1df9fed);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbf66;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004cbf66:
  QFormLayout::setWidget(param_1[1],4,1,param_1[0xd]);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_120,0x1dfa000);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cbff7;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004cbff7:
  QLabel::setWordWrap(SUB81(param_1[0xe],0));
  pcVar3 = (char *)param_1[0xe];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar3,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_130);
  QFormLayout::setWidget(param_1[1],5,1,param_1[0xe]);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,param_2,0);
  param_1[0xf] = pQVar11;
  QString::fromUtf8_helper((char *)&local_138,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cc0cc;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004cc0cc:
  local_140[0] = 0x50000;
  QSizePolicy::setControlType(local_140,1);
  local_140[0] = local_140[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_140[0] = local_140[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  QWidget::setMinimumSize((int)param_1[0xf],200);
  pcVar3 = (char *)param_1[0xf];
  QVariant::QVariant(&local_150,false);
  QObject::setProperty(pcVar3,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_150);
  QFormLayout::setWidget(param_1[1],3,1,param_1[0xf]);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,2,0);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_2);
  param_1[0x10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_158,0x1df7292);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004cc216;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1004cc216:
  pcVar3 = (char *)param_1[0x10];
  QVariant::QVariant(&local_168,true);
  QObject::setProperty(pcVar3,(QVariant *)"customUpdate");
  QVariant::~QVariant(&local_168);
  QGridLayout::addWidget(*param_1,param_1[0x10],1,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar13;
  *(undefined8 *)((long)puVar8 + 0xc) = 0;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar8;
  QGridLayout::addItem(*param_1,puVar8,1,0,1,1,0);
  FUN_1004cc9c0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

