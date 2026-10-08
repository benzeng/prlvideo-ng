
void FUN_1005df030(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  QVBoxLayout *pQVar4;
  QGridLayout *this;
  CPrlFileDevSelectorWidget *this_00;
  QCheckBox *pQVar5;
  QLabel *pQVar6;
  undefined8 *puVar7;
  QLineEdit *this_01;
  QHBoxLayout *pQVar8;
  QPushButton *this_02;
  undefined *puVar9;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QPixmap local_d8 [32];
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
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
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
      if (*(int *)local_40 != 0) goto LAB_1005df086;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005df086:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e04187);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1005df0dd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005df0dd:
  local_38 = true;
  uStack_37 = 0x1cb000002;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df165;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005df165:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_58,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df1d1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005df1d1:
  QGridLayout::setVerticalSpacing((int)param_1[1]);
  this_00 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_60,0x1df3b04);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df24e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005df24e:
  QGridLayout::addWidget(param_1[1],param_1[2],4,2,1,2,0);
  pQVar5 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar5,(QWidget *)param_2);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1e0515f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df2e7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005df2e7:
  QGridLayout::addWidget(param_1[1],param_1[3],3,2,1,2,0);
  pQVar5 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar5,(QWidget *)param_2);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1e0517c);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df380;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005df380:
  QGridLayout::addWidget(param_1[1],param_1[4],9,2,1,2,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1e05190);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df41b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005df41b:
  pQVar2 = (QString *)param_1[5];
  local_80 = (QArrayData *)QString::fromLatin1_helper("QLabel {\n\tcolor: white;\n}\n",0x1a);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df470;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005df470:
  QGridLayout::addWidget(param_1[1],param_1[5],6,2,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[6] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,0,2,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xd00000176;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[7] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,5,2,1,2,0);
  pQVar5 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar5,(QWidget *)param_2);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1e051ba);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df617;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005df617:
  QAbstractButton::setChecked(SUB81(param_1[8],0));
  QGridLayout::addWidget(param_1[1],param_1[8],10,2,1,2,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_90,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df6c6;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005df6c6:
  QLabel::setAlignment(param_1[9],0x82);
  QGridLayout::addWidget(param_1[1],param_1[9],1,1,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xd00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[10] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,2,2,1,2,0);
  this_01 = operator_new(0x30);
  QLineEdit::QLineEdit(this_01,(QWidget *)param_2);
  param_1[0xb] = this_01;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1c16);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df800;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005df800:
  QWidget::setMinimumSize((int)param_1[0xb],0x1a4);
  QLineEdit::setMaxLength((int)param_1[0xb]);
  QGridLayout::addWidget(param_1[1],param_1[0xb],1,2,1,2,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,0,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0xd] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a0,0x1dc1bd0);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005df94d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005df94d:
  QLabel::setAlignment(param_1[0xd],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0xd],4,1,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,0,4,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar7;
  QGridLayout::addItem(param_1[1],puVar7,8,2,1,2,0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[0x10] = pQVar4;
  QString::fromUtf8_helper((char *)&local_a8,0x1df027f);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfaf3;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005dfaf3:
  QLayout::setContentsMargins((int)param_1[0x10],0,-1,-1);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[0x11] = pQVar8;
  QString::fromUtf8_helper((char *)&local_b0,0x1df025a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfb89;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005dfb89:
  QLayout::setContentsMargins((int)param_1[0x11],-1,0,-1);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x12] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b8,0x1df3f56);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfc24;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005dfc24:
  pQVar3 = (QPixmap *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_e0,0x1e051d1);
  QPixmap::QPixmap(local_d8,&local_e0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfcaa;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005dfcaa:
  QBoxLayout::addWidget(param_1[0x11],param_1[0x12],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x13] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1e05201);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfd3e;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005dfd3e:
  QLabel::setWordWrap(SUB81(param_1[0x13],0));
  QBoxLayout::addWidget(param_1[0x11],param_1[0x13],0,0);
  QBoxLayout::setStretch((int)param_1[0x11],1);
  QBoxLayout::addLayout((QLayout *)param_1[0x10],(int)param_1[0x11]);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x14] = pQVar6;
  QString::fromUtf8_helper((char *)&local_f0,0x1e05216);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfe0e;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005dfe0e:
  QBoxLayout::addWidget(param_1[0x10],param_1[0x14],0,0);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8);
  param_1[0x15] = pQVar8;
  QString::fromUtf8_helper((char *)&local_f8,0x1df0473);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dfe9d;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005dfe9d:
  this_02 = operator_new(0x30);
  QPushButton::QPushButton(this_02,(QWidget *)param_2);
  param_1[0x16] = this_02;
  QString::fromUtf8_helper((char *)&local_100,0x1e05221);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005dff18;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1005dff18:
  QBoxLayout::addWidget(param_1[0x15],param_1[0x16],0,1);
  QBoxLayout::addLayout((QLayout *)param_1[0x10],(int)param_1[0x15]);
  QGridLayout::addLayout(param_1[1],param_1[0x10],7,2,1,2,0);
  QGridLayout::setRowStretch((int)param_1[1],0);
  QGridLayout::setRowStretch((int)param_1[1],8);
  QGridLayout::setColumnStretch((int)param_1[1],0);
  QGridLayout::setColumnStretch((int)param_1[1],4);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_1005e0830(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

