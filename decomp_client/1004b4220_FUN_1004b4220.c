
void FUN_1004b4220(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  uint uVar4;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QWidget *pQVar5;
  QHBoxLayout *this_01;
  undefined8 *puVar6;
  QPushButton *this_02;
  QCheckBox *pQVar7;
  CMoreOptionsLabel *this_03;
  QListWidget *this_04;
  QLabel *pQVar8;
  undefined *puVar9;
  QArrayData *local_138;
  QFont local_130 [16];
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QVariant local_108;
  QString local_f8;
  QVariant local_f0;
  QVariant local_e0;
  uint local_d0 [2];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QVariant local_a8;
  QArrayData *local_98;
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
      if (*(int *)local_40 != 0) goto LAB_1004b4276;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004b4276:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df8fea);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004b42cd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004b42cd:
  local_38 = true;
  uStack_37 = 0x16a000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df8ff9);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4357;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004b4357:
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
      if (local_38) goto LAB_1004b43c5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004b43c5:
  QLayout::setContentsMargins((int)*param_1,-1,-1,9);
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b444b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004b444b:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1df07cc);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b44bc;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004b44bc:
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01,(QWidget *)param_1[2]);
  param_1[3] = this_01;
  QBoxLayout::setSpacing((int)this_01);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_80,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b453a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004b453a:
  QLayout::setContentsMargins((int)param_1[3],0,0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[4] = puVar6;
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],puVar6);
  this_02 = operator_new(0x30);
  QPushButton::QPushButton(this_02,(QWidget *)param_1[2]);
  param_1[5] = this_02;
  QString::fromUtf8_helper((char *)&local_88,0x1df9003);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b462e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004b462e:
  local_90[0] = 0x50000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QBoxLayout::addWidget(param_1[3],param_1[5],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1200000040;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[6] = puVar6;
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],puVar6);
  QGridLayout::addWidget(param_1[1],param_1[2],4,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1df901c);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4797;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004b4797:
  pcVar3 = (char *)param_1[7];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar3,(QVariant *)"Critical");
  QVariant::~QVariant(&local_a8);
  pcVar3 = (char *)param_1[7];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar3,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_b8);
  QGridLayout::addWidget(param_1[1],param_1[7],6,1,1,1,0);
  this_03 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_03,(QWidget *)param_2);
  param_1[8] = this_03;
  QString::fromUtf8_helper((char *)&local_c0,0x1df53e4);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b48a5;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004b48a5:
  QGridLayout::addWidget(param_1[1],param_1[8],5,1,1,1,0);
  this_04 = operator_new(0x30);
  QListWidget::QListWidget(this_04,(QWidget *)param_2);
  param_1[9] = this_04;
  QString::fromUtf8_helper((char *)&local_c8,0x1df902c);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4947;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004b4947:
  local_d0[0] = 0x70000;
  QSizePolicy::setControlType(local_d0,1);
  local_d0[0] = local_d0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_d0[0] = local_d0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QWidget::setMinimumSize((int)param_1[9],0);
  QWidget::setMaximumSize((int)param_1[9],0xffffff);
  pcVar3 = (char *)param_1[9];
  QVariant::QVariant(&local_e0,true);
  QObject::setProperty(pcVar3,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_e0);
  pcVar3 = (char *)param_1[9];
  QString::fromUtf8_helper((char *)&local_f8,0x1df903f);
  QVariant::QVariant(&local_f0,&local_f8);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_38 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4a75;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1004b4a75:
  pcVar3 = (char *)param_1[9];
  QString::fromUtf8_helper((char *)&local_110,0x1df9055);
  QVariant::QVariant(&local_108,&local_110);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_108);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_38 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4afb;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_1004b4afb:
  QGridLayout::addWidget(param_1[1],param_1[9],3,0,1,3,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_118,0x1df906b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4b9a;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004b4b9a:
  QGridLayout::addWidget(param_1[1],param_1[10],0,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_2,0);
  param_1[0xb] = pQVar8;
  QString::fromUtf8_helper((char *)&local_120,0x1df907c);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4c3b;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004b4c3b:
  QFont::QFont(local_130);
  QFont::setWeight((int)local_130);
  QFont::setWeight((int)local_130);
  QWidget::setFont((QFont *)param_1[0xb]);
  QGridLayout::addWidget(param_1[1],param_1[0xb],2,0,1,2,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,0,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_138,0x1df9096);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004b4d98;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004b4d98:
  QGridLayout::addWidget(param_1[1],param_1[0xd],1,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,0,2,1,1,0);
  QGridLayout::setRowMinimumHeight((int)param_1[1],6);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar6;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar6);
  FUN_1004b5450(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_130);
  return;
}

