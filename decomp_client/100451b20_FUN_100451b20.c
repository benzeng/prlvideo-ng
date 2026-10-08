
void FUN_100451b20(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QGridLayout *this;
  QComboBox *this_00;
  QCheckBox *pQVar5;
  CMoreOptionsLabel *this_01;
  undefined8 *puVar6;
  QString *pQVar7;
  QLabel *pQVar8;
  QHBoxLayout *pQVar9;
  CImageButton *pCVar10;
  QWidget *pQVar11;
  QTextEdit *this_02;
  undefined *puVar12;
  QVariant local_1f0;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QVariant local_1d0;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  QVariant local_180;
  undefined8 local_170;
  QArrayData *local_168;
  QIcon local_160 [8];
  QArrayData *local_158;
  QVariant local_150;
  undefined8 local_140;
  QArrayData *local_138;
  QIcon local_130 [8];
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QVariant local_108;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QVariant local_c8;
  uint local_b8 [2];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
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
      if (*(int *)local_40 != 0) goto LAB_100451b76;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100451b76:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df5384);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100451bcd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100451bcd:
  local_38 = true;
  uStack_37 = 0x165000001;
  QWidget::resize(param_2);
  QWidget::setFocusPolicy(param_2,0xb);
  QString::fromUtf8_helper((char *)&local_60,0x1df539e);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100451c64;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100451c64:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1597);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100451cd2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100451cd2:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100451d3e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100451d3e:
  QLayout::setSizeConstraint(param_1[1],0);
  this_00 = operator_new(0x30);
  QComboBox::QComboBox(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1df53ac);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100451db8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100451db8:
  QWidget::setMinimumSize((int)param_1[2],0);
  QWidget::setMaximumSize((int)param_1[2],0xffffff);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_88);
  QGridLayout::addWidget(param_1[1],param_1[2],1,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar5,(QWidget *)param_2);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_90,0x1df53cc);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100451ead;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100451ead:
  QWidget::setMinimumSize((int)param_1[3],0);
  QWidget::setMaximumSize((int)param_1[3],0xffffff);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_a0);
  QGridLayout::addWidget(param_1[1],param_1[3],3,1,1,1,0);
  this_01 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_01,(QWidget *)param_2);
  param_1[4] = this_01;
  QString::fromUtf8_helper((char *)&local_a8,0x1df53e4);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100451fa8;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100451fa8:
  QGridLayout::addWidget(param_1[1],param_1[4],6,1,1,2,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x600000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[5] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,2,0,1,3,0);
  pQVar7 = operator_new(0x38);
  FUN_100138970(pQVar7,param_2);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df53f7);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004520d5;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004520d5:
  local_b8[0] = 0x550000;
  QSizePolicy::setControlType(local_b8,1);
  local_b8[0] = local_b8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_c8);
  pcVar2 = (char *)param_1[6];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_d8);
  QGridLayout::addWidget(param_1[1],param_1[6],0,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1f4000000c8;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[7] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,9,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e0,0x1df5408);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004522b4;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004522b4:
  QGridLayout::addWidget(param_1[1],param_1[8],1,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar5,(QWidget *)param_2);
  param_1[9] = pQVar5;
  QString::fromUtf8_helper((char *)&local_e8,0x1df5418);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452353;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100452353:
  QWidget::setMinimumSize((int)param_1[9],0);
  QWidget::setMaximumSize((int)param_1[9],0xffffff);
  pcVar2 = (char *)param_1[9];
  QVariant::QVariant(&local_f8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_f8);
  pcVar2 = (char *)param_1[9];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_108);
  QGridLayout::addWidget(param_1[1],param_1[9],7,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_110,0x1df5428);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452486;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100452486:
  QLabel::setAlignment(param_1[10],0x22);
  QGridLayout::addWidget(param_1[1],param_1[10],0,0,1,1,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_118,0x1df027f);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045252d;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10045252d:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[0xc] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar7 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_120,0x1df401b);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004525b3;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004525b3:
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
  param_1[0xd] = puVar6;
  (**(code **)(*(long *)param_1[0xc] + 0x70))((long *)param_1[0xc],puVar6);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_2);
  param_1[0xe] = pCVar10;
  QString::fromUtf8_helper((char *)&local_128,0x1df543c);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452692;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100452692:
  QWidget::setMinimumSize((int)param_1[0xe],0x19);
  QWidget::setMaximumSize((int)param_1[0xe],0x19);
  QIcon::QIcon(local_130);
  QString::fromUtf8_helper((char *)&local_138,0x1df5447);
  local_140 = 0xffffffffffffffff;
  QIcon::addFile(local_130,&local_138,&local_140,0,1);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045273f;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10045273f:
  QAbstractButton::setIcon((QIcon *)param_1[0xe]);
  pcVar2 = (char *)param_1[0xe];
  QVariant::QVariant(&local_150,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_150);
  QBoxLayout::addWidget(param_1[0xc],param_1[0xe],0,0);
  pCVar10 = operator_new(0x60);
  CImageButton::CImageButton(pCVar10,(QWidget *)param_2);
  param_1[0xf] = pCVar10;
  QString::fromUtf8_helper((char *)&local_158,0x1df545f);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452810;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100452810:
  QWidget::setMinimumSize((int)param_1[0xf],0x19);
  QWidget::setMaximumSize((int)param_1[0xf],0x19);
  QIcon::QIcon(local_160);
  QString::fromUtf8_helper((char *)&local_168,0x1df546c);
  local_170 = 0xffffffffffffffff;
  QIcon::addFile(local_160,&local_168,&local_170,0,1);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004528bd;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1004528bd:
  QAbstractButton::setIcon((QIcon *)param_1[0xf]);
  pcVar2 = (char *)param_1[0xf];
  QVariant::QVariant(&local_180,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_180);
  QBoxLayout::addWidget(param_1[0xc],param_1[0xf],0,0);
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
  param_1[0x10] = puVar6;
  (**(code **)(*(long *)param_1[0xc] + 0x70))();
  QBoxLayout::setStretch((int)param_1[0xc],0);
  QBoxLayout::setStretch((int)param_1[0xc],3);
  QBoxLayout::addLayout((QLayout *)param_1[0xb],(int)param_1[0xc]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000000d;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar6;
  (**(code **)(*(long *)param_1[0xb] + 0x70))((long *)param_1[0xb],puVar6);
  QGridLayout::addLayout(param_1[1],param_1[0xb],0,2,1,1,0);
  pQVar11 = operator_new(0x30);
  QWidget::QWidget(pQVar11,param_2,0);
  param_1[0x12] = pQVar11;
  QString::fromUtf8_helper((char *)&local_188,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_38 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452acc;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100452acc:
  QWidget::setMinimumSize((int)param_1[0x12],0);
  pcVar2 = (char *)param_1[0x12];
  QVariant::QVariant(&local_198,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidget");
  QVariant::~QVariant(&local_198);
  QGridLayout::addWidget(param_1[1],param_1[0x12],5,0,1,3,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0x13] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar7 = (QString *)param_1[0x13];
  QString::fromUtf8_helper((char *)&local_1a0,0x1df0473);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452bca;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100452bca:
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
  param_1[0x14] = puVar6;
  (**(code **)(*(long *)param_1[0x13] + 0x70))((long *)param_1[0x13],puVar6);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[0x15] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar7 = (QString *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_1a8,0x1dd6e19);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_38 = *(int *)local_1a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452cc7;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100452cc7:
  pQVar5 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar5,(QWidget *)param_2);
  param_1[0x16] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1b0,0x1df5486);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_38 = *(int *)local_1b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452d43;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100452d43:
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1c0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_1c0);
  pcVar2 = (char *)param_1[0x16];
  QVariant::QVariant(&local_1d0,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_1d0);
  QBoxLayout::addWidget(param_1[0x15],param_1[0x16],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar12;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x900000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar6;
  (**(code **)(*(long *)param_1[0x15] + 0x70))((long *)param_1[0x15],puVar6);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0x18] = pQVar8;
  QString::fromUtf8_helper((char *)&local_1d8,0x1df5499);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_38 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452ebf;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100452ebf:
  QLabel::setAlignment(param_1[0x18],0x41);
  QBoxLayout::addWidget(param_1[0x15],param_1[0x18],0,0);
  this_02 = operator_new(0x30);
  QTextEdit::QTextEdit(this_02,(QWidget *)param_2);
  param_1[0x19] = this_02;
  QString::fromUtf8_helper((char *)&local_1e0,0x1df54aa);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100452f63;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100452f63:
  uVar3 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x19]);
  QWidget::setMinimumSize((int)param_1[0x19],0);
  QWidget::setMaximumSize((int)param_1[0x19],0xffffff);
  QTextEdit::setLineWrapMode(param_1[0x19],0);
  pcVar2 = (char *)param_1[0x19];
  QVariant::QVariant(&local_1f0,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_1f0);
  QBoxLayout::addWidget(param_1[0x15],param_1[0x19],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x13],(int)param_1[0x15]);
  QGridLayout::addLayout(param_1[1],param_1[0x13],8,1,1,1,0);
  QGridLayout::setRowStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_100453970(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_160);
  QIcon::~QIcon(local_130);
  return;
}

