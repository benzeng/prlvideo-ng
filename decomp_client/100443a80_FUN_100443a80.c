
void FUN_100443a80(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *this;
  QWidget *pQVar4;
  QGridLayout *pQVar5;
  QLineEdit *this_00;
  QLabel *pQVar6;
  QSpinBox *pQVar7;
  QComboBox *this_01;
  undefined8 *puVar8;
  QTextEdit *this_02;
  QHBoxLayout *this_03;
  QCheckBox *this_04;
  QDateTimeEdit *this_05;
  QDialogButtonBox *this_06;
  undefined *puVar9;
  QArrayData *local_100;
  uint local_f8 [2];
  QArrayData *local_f0;
  uint local_e8 [2];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  uint local_c8 [2];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  uint local_68 [2];
  QArrayData *local_60;
  QArrayData *local_58;
  uint local_50 [2];
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
      if (*(int *)local_40 != 0) goto LAB_100443ad6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100443ad6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df4a36);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100443b2d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100443b2d:
  local_38 = true;
  uStack_37 = 0x110000002;
  QWidget::resize(param_2);
  local_50[0] = 0;
  QSizePolicy::setControlType(local_50,1);
  local_50[0] = local_50[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_58,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443bf3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100443bf3:
  QLayout::setContentsMargins((int)*param_1,-1,0xc,-1);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443c81;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100443c81:
  local_68[0] = 0x550000;
  QSizePolicy::setControlType(local_68,1);
  local_68[0] = local_68[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_68[0] = local_68[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[1]);
  QWidget::setMaximumSize((int)param_1[1],0xffffff);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QLayout::setContentsMargins((int)pQVar5,0,0,0);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_70,0x1dd67e5);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443d59;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100443d59:
  this_00 = operator_new(0x30);
  QLineEdit::QLineEdit(this_00,(QWidget *)param_1[1]);
  param_1[3] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1df4a4c);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443dc9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100443dc9:
  QGridLayout::addWidget(param_1[2],param_1[3],2,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1df4a57);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443e65;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100443e65:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[2],param_1[4],2,1,1,1,0);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443f09;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100443f09:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_90,0x1df4a63);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100443f84;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100443f84:
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[5],param_1[6],0,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_98,0x1df4a79);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100444034;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100444034:
  QGridLayout::addWidget(param_1[5],param_1[7],1,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar7,(QWidget *)param_1[1]);
  param_1[8] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1df4a89);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004440d7;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004440d7:
  QSpinBox::setMinimum((int)param_1[8]);
  QGridLayout::addWidget(param_1[5],param_1[8],0,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar7,(QWidget *)param_1[1]);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1df4a9e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100444185;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100444185:
  QSpinBox::setMinimum((int)param_1[9]);
  QGridLayout::addWidget(param_1[5],param_1[9],1,2,1,1,0);
  this_01 = operator_new(0x30);
  QComboBox::QComboBox(this_01,(QWidget *)param_1[1]);
  param_1[10] = this_01;
  QString::fromUtf8_helper((char *)&local_b0,0x1df4aae);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100444236;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100444236:
  QGridLayout::addWidget(param_1[5],param_1[10],0,3,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[0xb] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b8,0x1df4ac4);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004442d8;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004442d8:
  QGridLayout::addWidget(param_1[5],param_1[0xb],1,3,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,0,0,2,1,0);
  QGridLayout::addLayout(param_1[2],param_1[5],3,2,1,1,0);
  this_02 = operator_new(0x30);
  QTextEdit::QTextEdit(this_02,(QWidget *)param_1[1]);
  param_1[0xd] = this_02;
  QString::fromUtf8_helper((char *)&local_c0,0x1df4ace);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10044442d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10044442d:
  local_c8[0] = 0x70000;
  QSizePolicy::setControlType(local_c8,1);
  local_c8[0] = local_c8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_c8[0] = local_c8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QWidget::setMaximumSize((int)param_1[0xd],0xffffff);
  QGridLayout::addWidget(param_1[2],param_1[0xd],1,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[0xe] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d0,0x1df4ad7);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100444534;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100444534:
  QFrame::setFrameShadow(param_1[0xe],0x10);
  QLabel::setAlignment(param_1[0xe],0x22);
  QGridLayout::addWidget(param_1[2],param_1[0xe],1,1,1,1,0);
  this_03 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_03);
  param_1[0xf] = this_03;
  QString::fromUtf8_helper((char *)&local_d8,0x1df040e);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004445ef;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004445ef:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar8;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar8);
  this_04 = operator_new(0x30);
  QCheckBox::QCheckBox(this_04,(QWidget *)param_1[1]);
  param_1[0x11] = this_04;
  QString::fromUtf8_helper((char *)&local_e0,0x1df4ae1);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004446d5;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004446d5:
  local_e8[0] = 0x50000;
  QSizePolicy::setControlType(local_e8,1);
  local_e8[0] = local_e8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x11]);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x11],0,0);
  this_05 = operator_new(0x30);
  QDateTimeEdit::QDateTimeEdit(this_05,(QWidget *)param_1[1]);
  param_1[0x12] = this_05;
  QString::fromUtf8_helper((char *)&local_f0,0x1df4af0);
  QObject::setObjectName((QString *)this_05);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004447ba;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004447ba:
  local_f8[0] = 0x510000;
  QSizePolicy::setControlType(local_f8,1);
  local_f8[0] = local_f8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_f8[0] = local_f8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x12],0,0);
  QGridLayout::addLayout(param_1[2],param_1[0xf],0,0,1,3,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_06 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_06,(QWidget *)param_2);
  param_1[0x13] = this_06;
  QString::fromUtf8_helper((char *)&local_100,0x1dd6e41);
  QObject::setObjectName((QString *)this_06);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004448d2;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004448d2:
  QDialogButtonBox::setStandardButtons(param_1[0x13],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0x13],0,0);
  FUN_100444fb0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

