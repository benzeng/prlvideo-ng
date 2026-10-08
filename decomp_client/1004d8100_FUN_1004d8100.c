
void FUN_1004d8100(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  undefined8 *puVar4;
  QGridLayout *this_00;
  QHBoxLayout *this_01;
  QCheckBox *this_02;
  QComboBox *this_03;
  QTimeEdit *this_04;
  undefined *puVar5;
  QArrayData *local_d0;
  QFont local_c8 [16];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
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
      if (*(int *)local_40 != 0) goto LAB_1004d8156;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d8156:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfa891);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004d81ad;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004d81ad:
  local_38 = true;
  uStack_37 = 0x20e000003;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1dfa8a2);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d8237;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004d8237:
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
      if (local_38) goto LAB_1004d82a5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004d82a5:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d8316;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004d8316:
  QLabel::setWordWrap(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar5 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar5;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[2] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[3] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1dfa8b4);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d8411;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004d8411:
  QGridLayout::setHorizontalSpacing((int)param_1[3]);
  QGridLayout::setVerticalSpacing((int)param_1[3]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar5;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[4] = puVar4;
  QGridLayout::addItem(param_1[3],puVar4,0,0,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar5;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[5] = puVar4;
  QGridLayout::addItem(param_1[3],puVar4,0,2,1,1,0);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01);
  param_1[6] = this_01;
  QString::fromUtf8_helper((char *)&local_80,0x1df9cbd);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d8589;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004d8589:
  this_02 = operator_new(0x30);
  QCheckBox::QCheckBox(this_02,(QWidget *)param_2);
  param_1[7] = this_02;
  QString::fromUtf8_helper((char *)&local_88,0x1dfa8c1);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d85f8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004d85f8:
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  this_03 = operator_new(0x30);
  QComboBox::QComboBox(this_03,(QWidget *)param_2);
  param_1[8] = this_03;
  QString::fromUtf8_helper((char *)&local_90,0x1dfa8ca);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d8681;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004d8681:
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_a0);
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[9] = pQVar3;
  QString::fromUtf8_helper((char *)&local_a8,0x1dfa8de);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d8742;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004d8742:
  QBoxLayout::addWidget(param_1[6],param_1[9],0,0);
  this_04 = operator_new(0x30);
  QTimeEdit::QTimeEdit(this_04,(QWidget *)param_2);
  param_1[10] = this_04;
  QString::fromUtf8_helper((char *)&local_b0,0x1dfa8f5);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d87cb;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004d87cb:
  QBoxLayout::addWidget(param_1[6],param_1[10],0,0);
  QGridLayout::addLayout(param_1[3],param_1[6],0,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[0xb] = pQVar3;
  QString::fromUtf8_helper((char *)&local_b8,0x1dfa909);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d887d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004d887d:
  QFont::QFont(local_c8);
  QFont::setPointSize((int)local_c8);
  QWidget::setFont((QFont *)param_1[0xb]);
  QLabel::setWordWrap(SUB81(param_1[0xb],0));
  QLabel::setIndent((int)param_1[0xb]);
  QGridLayout::addWidget(param_1[3],param_1[0xb],1,1,1,2,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[0xc] = pQVar3;
  QString::fromUtf8_helper((char *)&local_d0,0x1dfa920);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d896a;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004d896a:
  QWidget::setFont((QFont *)param_1[0xc]);
  QLabel::setWordWrap(SUB81(param_1[0xc],0));
  QLabel::setIndent((int)param_1[0xc]);
  QGridLayout::addWidget(param_1[3],param_1[0xc],2,1,1,2,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[3]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar5;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  FUN_1004d8e80(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_c8);
  return;
}

