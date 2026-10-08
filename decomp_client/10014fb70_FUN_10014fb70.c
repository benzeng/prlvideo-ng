
void FUN_10014fb70(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QCheckBox *pQVar3;
  QLabel *pQVar4;
  QWidget *pQVar5;
  QHBoxLayout *this_01;
  QRadioButton *pQVar6;
  undefined8 *puVar7;
  QLineEdit *this_02;
  QTextEdit *this_03;
  CPrlFileDevSelectorWidget *this_04;
  QDialogButtonBox *this_05;
  undefined *puVar8;
  QArrayData *local_d0;
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
      if (*(int *)local_40 != 0) goto LAB_10014fbc6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10014fbc6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dc1ba1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10014fc1d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10014fc1d:
  local_38 = true;
  uStack_37 = 0x147000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QLayout::setContentsMargins((int)this,0x12,0x12,0x12);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1284);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10014fcc5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10014fcc5:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dc1bb6);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10014fd31;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10014fd31:
  pQVar3 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar3,(QWidget *)param_2);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1bc3);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10014fda0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10014fda0:
  QGridLayout::addWidget(param_1[1],param_1[2],0,1,1,2,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1bd0);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10014fe38;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10014fe38:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(param_1[1],param_1[3],1,0,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[4] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bde);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10014fede;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10014fede:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[1],param_1[4],2,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1dc1be8);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10014ff84;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10014ff84:
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01,(QWidget *)param_1[5]);
  param_1[6] = this_01;
  QLayout::setContentsMargins((int)this_01,0,0,0);
  pQVar2 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_80,0x1dc12b3);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100150009;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100150009:
  pQVar6 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar6,(QWidget *)param_1[5]);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1dc1bf6);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100150079;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100150079:
  QAbstractButton::setChecked(SUB81(param_1[7],0));
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar8;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[8] = puVar7;
  (**(code **)(*(long *)param_1[6] + 0x70))((long *)param_1[6],puVar7);
  pQVar6 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar6,(QWidget *)param_1[5]);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_90,0x1dc1c01);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100150183;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100150183:
  QBoxLayout::addWidget(param_1[6],param_1[9],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar8;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[10] = puVar7;
  (**(code **)(*(long *)param_1[6] + 0x70))((long *)param_1[6],puVar7);
  QGridLayout::addWidget(param_1[1],param_1[5],1,1,1,2,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[0xb] = pQVar4;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1c0c);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10015029f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10015029f:
  QLabel::setAlignment(param_1[0xb],0x82);
  QGridLayout::addWidget(param_1[1],param_1[0xb],3,0,1,1,0);
  this_02 = operator_new(0x30);
  QLineEdit::QLineEdit(this_02,(QWidget *)param_2);
  param_1[0xc] = this_02;
  QString::fromUtf8_helper((char *)&local_a0,0x1dc1c16);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10015034c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10015034c:
  QGridLayout::addWidget(param_1[1],param_1[0xc],3,1,1,2,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[0xd] = pQVar4;
  QString::fromUtf8_helper((char *)&local_a8,0x1dc1c20);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001503f0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1001503f0:
  QLabel::setAlignment(param_1[0xd],0x22);
  QGridLayout::addWidget(param_1[1],param_1[0xd],4,0,1,1,0);
  this_03 = operator_new(0x30);
  QTextEdit::QTextEdit(this_03,(QWidget *)param_2);
  param_1[0xe] = this_03;
  QString::fromUtf8_helper((char *)&local_b0,0x1dc1c2b);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10015049d;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10015049d:
  QWidget::setMaximumSize((int)param_1[0xe],0xffffff);
  QGridLayout::addWidget(param_1[1],param_1[0xe],4,1,1,2,0);
  pQVar3 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar3,(QWidget *)param_2);
  param_1[0xf] = pQVar3;
  QString::fromUtf8_helper((char *)&local_b8,0x1dc1c3c);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100150552;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100150552:
  QGridLayout::addWidget(param_1[1],param_1[0xf],5,1,1,2,0);
  pQVar3 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar3,(QWidget *)param_2);
  param_1[0x10] = pQVar3;
  QString::fromUtf8_helper((char *)&local_c0,0x1dc1c4c);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001505f7;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1001505f7:
  QGridLayout::addWidget(param_1[1],param_1[0x10],6,1,1,2,0);
  this_04 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_04,(QWidget *)param_2);
  param_1[0x11] = this_04;
  QString::fromUtf8_helper((char *)&local_c8,0x1dc1c5a);
  QObject::setObjectName((QString *)this_04);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10015069f;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10015069f:
  QGridLayout::addWidget(param_1[1],param_1[0x11],2,1,1,2,0);
  QGridLayout::setColumnStretch((int)param_1[1],1);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar8;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar7;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar7);
  this_05 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_05,(QWidget *)param_2);
  param_1[0x13] = this_05;
  QString::fromUtf8_helper((char *)&local_d0,0x1dc1c64);
  QObject::setObjectName((QString *)this_05);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001507d1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1001507d1:
  QDialogButtonBox::setStandardButtons(param_1[0x13],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0x13],0,0);
  QWidget::setTabOrder((QWidget *)param_1[2],(QWidget *)param_1[7]);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[9]);
  QWidget::setTabOrder((QWidget *)param_1[9],(QWidget *)param_1[0x11]);
  QWidget::setTabOrder((QWidget *)param_1[0x11],(QWidget *)param_1[0xc]);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[0xe]);
  QWidget::setTabOrder((QWidget *)param_1[0xe],(QWidget *)param_1[0xf]);
  QWidget::setTabOrder((QWidget *)param_1[0xf],(QWidget *)param_1[0x10]);
  QWidget::setTabOrder((QWidget *)param_1[0x10],(QWidget *)param_1[0x13]);
  FUN_100150e20(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

