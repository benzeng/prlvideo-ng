
void FUN_1004473b0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QVBoxLayout *this;
  QGroupBox *pQVar2;
  QGridLayout *pQVar3;
  QLabel *pQVar4;
  QComboBox *pQVar5;
  QDoubleSpinBox *pQVar6;
  QSpinBox *pQVar7;
  QDialogButtonBox *this_00;
  QArrayData *local_e0;
  QArrayData *local_d8;
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
  QArrayData *local_38;
  bool local_30;
  undefined7 uStack_2f;
  
  QObject::objectName();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      _local_30 = CONCAT71(uStack_2f,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_100447404;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100447404:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df4c6d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10044745b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10044745b:
  local_30 = true;
  uStack_2f = 0x147000001;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_48,0x1df4c89);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004474e3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004474e3:
  pQVar2 = operator_new(0x30);
  QGroupBox::QGroupBox(pQVar2,(QWidget *)param_2);
  param_1[1] = pQVar2;
  QString::fromUtf8_helper((char *)&local_50,0x1df4c98);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447552;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100447552:
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_1[1]);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004475c2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004475c2:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_1[1],0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1dd681a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447634;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100447634:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(param_1[2],param_1[3],1,0,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_1[1],0);
  param_1[4] = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004476db;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004476db:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[2],param_1[4],0,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QComboBox::QComboBox(pQVar5,(QWidget *)param_1[1]);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1df4ca3);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044777d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10044777d:
  QGridLayout::addWidget(param_1[2],param_1[5],0,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QDoubleSpinBox::QDoubleSpinBox(pQVar6,(QWidget *)param_1[1]);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1df4cb6);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447814;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100447814:
  QDoubleSpinBox::setDecimals((int)param_1[6]);
  QDoubleSpinBox::setMaximum(DAT_100e16cb0);
  QGridLayout::addWidget(param_1[2],param_1[6],1,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar7,(QWidget *)param_1[1]);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1df4cc0);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004478cd;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004478cd:
  QSpinBox::setMaximum((int)param_1[7]);
  QGridLayout::addWidget(param_1[2],param_1[7],0,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_1[1],0);
  param_1[8] = pQVar4;
  QString::fromUtf8_helper((char *)&local_88,0x1df4ccc);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447974;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100447974:
  QLabel::setAlignment(param_1[8],0x82);
  QGridLayout::addWidget(param_1[2],param_1[8],2,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar7,(QWidget *)param_1[1]);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1df4cd4);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447a22;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100447a22:
  QSpinBox::setMaximum((int)param_1[9]);
  QGridLayout::addWidget(param_1[2],param_1[9],2,1,1,1,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  pQVar2 = operator_new(0x30);
  QGroupBox::QGroupBox(pQVar2,(QWidget *)param_2);
  param_1[10] = pQVar2;
  QString::fromUtf8_helper((char *)&local_98,0x1df4cdc);
  QObject::setObjectName((QString *)pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447ae2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100447ae2:
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_1[10]);
  param_1[0xb] = pQVar3;
  QString::fromUtf8_helper((char *)&local_a0,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447b5b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100447b5b:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_1[10],0);
  param_1[0xc] = pQVar4;
  QString::fromUtf8_helper((char *)&local_a8,0x1dd6d7d);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447bd6;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100447bd6:
  QLabel::setAlignment(param_1[0xc],0x82);
  QGridLayout::addWidget(param_1[0xb],param_1[0xc],1,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar7,(QWidget *)param_1[10]);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df4ce7);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_30 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447c84;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100447c84:
  QSpinBox::setMaximum((int)param_1[0xd]);
  QGridLayout::addWidget(param_1[0xb],param_1[0xd],0,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_1[10],0);
  param_1[0xe] = pQVar4;
  QString::fromUtf8_helper((char *)&local_b8,0x1dd686e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447d34;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100447d34:
  QLabel::setAlignment(param_1[0xe],0x82);
  QGridLayout::addWidget(param_1[0xb],param_1[0xe],0,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QComboBox::QComboBox(pQVar5,(QWidget *)param_1[10]);
  param_1[0xf] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c0,0x1df4cf3);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_30 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447ddf;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100447ddf:
  QGridLayout::addWidget(param_1[0xb],param_1[0xf],0,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QDoubleSpinBox::QDoubleSpinBox(pQVar6,(QWidget *)param_1[10]);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c8,0x1df4d06);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447e82;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100447e82:
  QDoubleSpinBox::setDecimals((int)param_1[0x10]);
  QDoubleSpinBox::setMaximum(DAT_100e16cb0);
  QGridLayout::addWidget(param_1[0xb],param_1[0x10],1,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_1[10],0);
  param_1[0x11] = pQVar4;
  QString::fromUtf8_helper((char *)&local_d0,0x1df4d10);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_30 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100447f52;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100447f52:
  QLabel::setAlignment(param_1[0x11],0x82);
  QGridLayout::addWidget(param_1[0xb],param_1[0x11],2,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar7,(QWidget *)param_1[10]);
  param_1[0x12] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1df4d18);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100448009;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100448009:
  QSpinBox::setMaximum((int)param_1[0x12]);
  QGridLayout::addWidget(param_1[0xb],param_1[0x12],2,1,1,1,0);
  QBoxLayout::addWidget(*param_1,param_1[10],0,0);
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[0x13] = this_00;
  QString::fromUtf8_helper((char *)&local_e0,0x1dd6e41);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004480d2;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004480d2:
  QDialogButtonBox::setStandardButtons(param_1[0x13],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0x13],0,0);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[5]);
  QWidget::setTabOrder((QWidget *)param_1[5],(QWidget *)param_1[6]);
  QWidget::setTabOrder((QWidget *)param_1[6],(QWidget *)param_1[9]);
  QWidget::setTabOrder((QWidget *)param_1[9],(QWidget *)param_1[0xd]);
  QWidget::setTabOrder((QWidget *)param_1[0xd],(QWidget *)param_1[0xf]);
  QWidget::setTabOrder((QWidget *)param_1[0xf],(QWidget *)param_1[0x10]);
  QWidget::setTabOrder((QWidget *)param_1[0x10],(QWidget *)param_1[0x12]);
  FUN_100448770(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

