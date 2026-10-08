
void FUN_100484fc0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *this;
  QGridLayout *this_00;
  CPrlFileDevSelectorWidget *this_01;
  QLabel *pQVar4;
  CMoreOptionsLabel *this_02;
  QHBoxLayout *this_03;
  undefined8 *puVar5;
  QComboBox *this_04;
  QWidget *pQVar6;
  undefined *puVar7;
  QVariant local_110;
  QArrayData *local_100;
  QVariant local_f8;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QVariant local_90;
  uint local_80 [2];
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
      if (*(int *)local_40 != 0) goto LAB_100485016;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100485016:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df6eac);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10048506d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10048506d:
  local_38 = true;
  uStack_37 = 0x140000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df6ec0);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004850f7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004850f7:
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
      if (local_38) goto LAB_100485165;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100485165:
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
      if (local_38) goto LAB_1004851d1;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004851d1:
  this_01 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_01,(QWidget *)param_2);
  param_1[2] = this_01;
  QString::fromUtf8_helper((char *)&local_78,0x1df5827);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100485240;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100485240:
  local_80[0] = 0x70000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_90,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_90);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"deviceSourceCombobox");
  QVariant::~QVariant(&local_a0);
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_b0);
  QGridLayout::addWidget(param_1[1],param_1[2],0,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_b8,0x1df5833);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004853c3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004853c3:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(param_1[1],param_1[3],0,0,1,1,0);
  this_02 = operator_new(0x50);
  CMoreOptionsLabel::CMoreOptionsLabel(this_02,(QWidget *)param_2);
  param_1[4] = this_02;
  QString::fromUtf8_helper((char *)&local_c0,0x1df53e4);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048546d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10048546d:
  QGridLayout::addWidget(param_1[1],param_1[4],2,1,1,1,0);
  this_03 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_03);
  param_1[5] = this_03;
  QString::fromUtf8_helper((char *)&local_c8,0x1df027f);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048550c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10048550c:
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000012;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[6] = puVar5;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar5);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[7] = pQVar4;
  QString::fromUtf8_helper((char *)&local_d0,0x1df6ecf);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004855f8;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004855f8:
  QLabel::setAlignment(param_1[7],0x82);
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  this_04 = operator_new(0x30);
  QComboBox::QComboBox(this_04,(QWidget *)param_2);
  param_1[8] = this_04;
  QString::fromUtf8_helper((char *)&local_d8,0x1df6edd);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10048568f;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10048568f:
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_e8,true);
  QObject::setProperty(pcVar2,(QVariant *)"Critical");
  QVariant::~QVariant(&local_e8);
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_f8,true);
  QObject::setProperty(pcVar2,(QVariant *)"notRestorable");
  QVariant::~QVariant(&local_f8);
  QBoxLayout::addWidget(param_1[5],param_1[8],0,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar5);
  QGridLayout::addLayout(param_1[1],param_1[5],3,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[10] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,0,2,4,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[0xb] = pQVar6;
  QString::fromUtf8_helper((char *)&local_100,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004858b1;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004858b1:
  pcVar2 = (char *)param_1[0xb];
  QVariant::QVariant(&local_110,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_110);
  QGridLayout::addWidget(param_1[1],param_1[0xb],1,0,1,2,0);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QGridLayout::setColumnStretch((int)param_1[1],2);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0xd7000000db;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar5;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar5);
  FUN_100485de0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

