
void FUN_1004566b0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QLabel *pQVar4;
  CPrlFileDevSelectorWidget *this_01;
  undefined8 *puVar5;
  QWidget *pQVar6;
  CMoreOptionsLabel *this_02;
  QHBoxLayout *this_03;
  QString *pQVar7;
  undefined *puVar8;
  QVariant local_178;
  QString local_168;
  QVariant local_160;
  QVariant local_150;
  QVariant local_140;
  QVariant local_130;
  QVariant local_120;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
  QVariant local_c8;
  QVariant local_b8;
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
      if (*(int *)local_40 != 0) goto LAB_100456706;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100456706:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df56a3);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10045675d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10045675d:
  local_38 = true;
  uStack_37 = 0x164000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df56b4);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004567e7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004567e7:
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100456855;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100456855:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bb6);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004568c1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004568c1:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1df47d2);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100456932;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100456932:
  QLabel::setAlignment(param_1[2],0x82);
  QGridLayout::addWidget(param_1[1],param_1[2],0,0,1,1,0);
  this_01 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_01,(QWidget *)param_2);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_80,0x1df47c0);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004569d3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004569d3:
  local_88[0] = 0x70000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = CONCAT22(local_88[0]._2_2_,1);
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_98,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_98);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"remoteDeviceSelector");
  QVariant::~QVariant(&local_a8);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"HasCommonFixedWidth");
  QVariant::~QVariant(&local_b8);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_c8);
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"deviceSourceCombobox");
  QVariant::~QVariant(&local_d8);
  QGridLayout::addWidget(param_1[1],param_1[3],0,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[4] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,3,2,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[5] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,4,2,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[6] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,0,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e0,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100456d48;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100456d48:
  QWidget::setMinimumSize((int)param_1[7],0);
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_f0,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_f0);
  QGridLayout::addWidget(param_1[1],param_1[7],1,0,1,3,0);
  this_02 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_02,(QWidget *)param_2);
  param_1[8] = this_02;
  QString::fromUtf8_helper((char *)&local_f8,0x1df53e4);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100456e2a;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100456e2a:
  QGridLayout::addWidget(param_1[1],param_1[8],2,1,1,2,0);
  this_03 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_03);
  param_1[9] = this_03;
  QString::fromUtf8_helper((char *)&local_100,0x1df027f);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_100456ec9;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100456ec9:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000012;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[10] = puVar5;
  (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],puVar5);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[0xb] = pQVar4;
  QString::fromUtf8_helper((char *)&local_108,0x1dc1bd0);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_100456faa;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100456faa:
  QLabel::setAlignment(param_1[0xb],0x82);
  QBoxLayout::addWidget(param_1[9],param_1[0xb],0,0);
  pQVar7 = operator_new(0x48);
  FUN_100133430(pQVar7,param_2);
  param_1[0xc] = pQVar7;
  QString::fromUtf8_helper((char *)&local_110,0x1df56c0);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100457041;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100457041:
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_120,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_120);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar2,(QVariant *)"slotComboBox");
  QVariant::~QVariant(&local_130);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_140,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_140);
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_150,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_150);
  pcVar2 = (char *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_168,0x1df56cf);
  QVariant::QVariant(&local_160,&local_168);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_38 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10045719f;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_10045719f:
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_178,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_178);
  QBoxLayout::addWidget(param_1[9],param_1[0xc],0,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar5;
  (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],puVar5);
  QBoxLayout::setStretch((int)param_1[9],2);
  QGridLayout::addLayout(param_1[1],param_1[9],3,1,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QGridLayout::setColumnStretch((int)param_1[1],2);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x12c00000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar5;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar5);
  FUN_1004578f0(param_1,param_2);
  FUN_1001326a0(param_1[0xc],0xffffffff);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

