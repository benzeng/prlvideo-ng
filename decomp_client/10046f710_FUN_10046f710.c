
void FUN_10046f710(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  QVBoxLayout *pQVar4;
  QHBoxLayout *pQVar5;
  undefined8 *puVar6;
  QFormLayout *this;
  QLabel *pQVar7;
  QSlider *this_00;
  QCheckBox *pQVar8;
  QWidget *pQVar9;
  undefined *puVar10;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QFont local_d8 [16];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
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
      if (*(int *)local_40 != 0) goto LAB_10046f766;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10046f766:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df6274);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10046f7bd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10046f7bd:
  local_38 = true;
  uStack_37 = 0x140000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df6288);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046f847;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10046f847:
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
      if (local_38) goto LAB_10046f8b5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10046f8b5:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1df027f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046f921;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10046f921:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x140000003c;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[2] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))();
  this = operator_new(0x20);
  QFormLayout::QFormLayout(this,(QWidget *)0x0);
  param_1[3] = this;
  QString::fromUtf8_helper((char *)&local_78,0x1df4574);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fa01;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10046fa01:
  QFormLayout::setFieldGrowthPolicy(param_1[3],0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fa7d;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10046fa7d:
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_88,0x1df6297);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fad4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10046fad4:
  QLabel::setAlignment(param_1[4],0x82);
  QFormLayout::setWidget(param_1[3],0,0,param_1[4]);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[5] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_90,0x1dc1284);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fb76;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10046fb76:
  this_00 = operator_new(0x30);
  QSlider::QSlider(this_00,(QWidget *)param_2);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_98,0x1df62b1);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fbee;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10046fbee:
  QAbstractSlider::setMinimum((int)param_1[6]);
  QAbstractSlider::setMaximum((int)param_1[6]);
  QAbstractSlider::setOrientation(param_1[6],1);
  pcVar3 = (char *)param_1[6];
  QVariant::QVariant(&local_a8,100);
  QObject::setProperty(pcVar3,(QVariant *)"multiplier");
  QVariant::~QVariant(&local_a8);
  pcVar3 = (char *)param_1[6];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar3,(QVariant *)"typeDouble");
  QVariant::~QVariant(&local_b8);
  QBoxLayout::addWidget(param_1[5],param_1[6],0,0);
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[7] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[7];
  QString::fromUtf8_helper((char *)&local_c0,0x1dc12b3);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fd18;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10046fd18:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[8] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1df62d8);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046fd92;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10046fd92:
  QFont::QFont(local_d8);
  QFont::setPointSize((int)local_d8);
  QWidget::setFont((QFont *)param_1[8]);
  QBoxLayout::addWidget(param_1[7],param_1[8],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14000000ff;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[9] = puVar6;
  (**(code **)(*(long *)param_1[7] + 0x70))((long *)param_1[7],puVar6);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e0,0x1df62e9);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046feb7;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10046feb7:
  QWidget::setFont((QFont *)param_1[10]);
  QBoxLayout::addWidget(param_1[7],param_1[10],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[5],(int)param_1[7]);
  QFormLayout::setLayout(param_1[3],0,1,param_1[5]);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[0xb] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e8,0x1df62f5);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10046ff74;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10046ff74:
  QFormLayout::setWidget(param_1[3],2,1,param_1[0xb]);
  pQVar8 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar8,(QWidget *)param_2);
  param_1[0xc] = pQVar8;
  QString::fromUtf8_helper((char *)&local_f0,0x1df6304);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100470004;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100470004:
  QFormLayout::setWidget(param_1[3],3,1,param_1[0xc]);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_2,0);
  param_1[0xd] = pQVar9;
  QString::fromUtf8_helper((char *)&local_f8,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100470096;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100470096:
  pcVar3 = (char *)param_1[0xd];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar3,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_108);
  QFormLayout::setWidget(param_1[3],1,1,param_1[0xd]);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[3]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x140000003c;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar6);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_1004706b0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_d8);
  return;
}

