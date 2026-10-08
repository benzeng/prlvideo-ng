
void FUN_10058b530(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QGridLayout *this;
  QDialogButtonBox *this_00;
  QHBoxLayout *pQVar2;
  QComboBox *pQVar3;
  undefined8 *puVar4;
  QLabel *pQVar5;
  QRadioButton *pQVar6;
  QLineEdit *pQVar7;
  undefined *puVar8;
  Connection local_e8 [8];
  Connection local_e0 [8];
  Connection local_d8 [8];
  Connection local_d0 [8];
  QArrayData *local_c8;
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
      if (*(int *)local_40 != 0) goto LAB_10058b586;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10058b586:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e02a21);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10058b5dd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10058b5dd:
  QWidget::setWindowModality(param_2,1);
  local_38 = true;
  uStack_37 = 0xe6000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058b672;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10058b672:
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e41);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058b6e1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10058b6e1:
  QDialogButtonBox::setOrientation(param_1[1],1);
  QDialogButtonBox::setStandardButtons(param_1[1],0x400400);
  QGridLayout::addWidget(*param_1,param_1[1],7,0,1,3,0);
  pQVar2 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar2);
  param_1[2] = pQVar2;
  QString::fromUtf8_helper((char *)&local_60,0x1dc12b3);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058b78f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10058b78f:
  pQVar3 = operator_new(0x30);
  QComboBox::QComboBox(pQVar3,(QWidget *)param_2);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1df3afa);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058b7fe;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10058b7fe:
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[4] = puVar4;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar4);
  QGridLayout::addLayout(*param_1,param_1[2],0,1,1,2,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1dd6d7d);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058b918;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10058b918:
  QWidget::setMinimumSize((int)param_1[5],100);
  QLabel::setAlignment(param_1[5],0x82);
  QGridLayout::addWidget(*param_1,param_1[5],2,0,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x28000000a1;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[6] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,6,0,1,3,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1dd681a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058ba4c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10058ba4c:
  QWidget::setMinimumSize((int)param_1[7],100);
  QLabel::setAlignment(param_1[7],0x82);
  QGridLayout::addWidget(*param_1,param_1[7],1,0,1,1,0);
  pQVar3 = operator_new(0x30);
  QComboBox::QComboBox(pQVar3,(QWidget *)param_2);
  param_1[8] = pQVar3;
  QString::fromUtf8_helper((char *)&local_80,0x1e02a34);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058baff;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10058baff:
  QWidget::setEnabled(SUB81(param_1[8],0));
  QGridLayout::addWidget(*param_1,param_1[8],2,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar6,(QWidget *)param_2);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1e02a3b);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058bba2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10058bba2:
  QAbstractButton::setChecked(SUB81(param_1[9],0));
  QGridLayout::addWidget(*param_1,param_1[9],3,1,1,1,0);
  pQVar2 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar2);
  param_1[10] = pQVar2;
  QString::fromUtf8_helper((char *)&local_90,0x1e02a4b);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058bc4e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10058bc4e:
  pQVar7 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar7,(QWidget *)param_2);
  param_1[0xb] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1e02a57);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058bcc6;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10058bcc6:
  QWidget::setMaximumSize((int)param_1[0xb],0x32);
  QLineEdit::setMaxLength((int)param_1[0xb]);
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar4;
  (**(code **)(*(long *)param_1[10] + 0x70))((long *)param_1[10],puVar4);
  QGridLayout::addLayout(*param_1,param_1[10],5,1,1,2,0);
  pQVar7 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar7,(QWidget *)param_2);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1e02a6c);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058be00;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10058be00:
  QWidget::setMinimumSize((int)param_1[0xd],100);
  QGridLayout::addWidget(*param_1,param_1[0xd],3,2,1,1,0);
  pQVar2 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar2);
  param_1[0xe] = pQVar2;
  QString::fromUtf8_helper((char *)&local_a8,0x1e02a7b);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058beae;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10058beae:
  pQVar7 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar7,(QWidget *)param_2);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1e02a87);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058bf26;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10058bf26:
  QWidget::setMaximumSize((int)param_1[0xf],0x32);
  QLineEdit::setMaxLength((int)param_1[0xf]);
  QBoxLayout::addWidget(param_1[0xe],param_1[0xf],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar4;
  (**(code **)(*(long *)param_1[0xe] + 0x70))((long *)param_1[0xe],puVar4);
  QGridLayout::addLayout(*param_1,param_1[0xe],1,1,1,2,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x11] = pQVar5;
  QString::fromUtf8_helper((char *)&local_b8,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058c068;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10058c068:
  QWidget::setMinimumSize((int)param_1[0x11],100);
  QLabel::setAlignment(param_1[0x11],0x82);
  QGridLayout::addWidget(*param_1,param_1[0x11],0,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x12] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c0,0x1dd686e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058c12f;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10058c12f:
  QLabel::setAlignment(param_1[0x12],0x82);
  QGridLayout::addWidget(*param_1,param_1[0x12],5,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar6,(QWidget *)param_2);
  param_1[0x13] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c8,0x1e02a99);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058c1e4;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10058c1e4:
  QAbstractButton::setChecked(SUB81(param_1[0x13],0));
  QGridLayout::addWidget(*param_1,param_1[0x13],2,1,1,1,0);
  FUN_10058c860(param_1,param_2);
  QObject::connect(local_d0,param_1[1],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_d0);
  QObject::connect(local_d8,param_1[1],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_d8);
  QObject::connect(local_e0,param_1[9],"2toggled(bool)",param_1[0xd],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_e0);
  QObject::connect(local_e8,param_1[0x13],"2toggled(bool)",param_1[8],"1setEnabled(bool)",0);
  QMetaObject::Connection::~Connection(local_e8);
  QComboBox::setCurrentIndex((int)param_1[8]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

