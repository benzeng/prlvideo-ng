
void FUN_10043fc40(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QVBoxLayout *this;
  QFormLayout *this_00;
  QCheckBox *pQVar3;
  QWidget *pQVar4;
  QLabel *pQVar5;
  QSpinBox *pQVar6;
  QDialogButtonBox *this_01;
  Connection local_140 [8];
  Connection local_138 [8];
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QVariant local_a8;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
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
      if (*(int *)local_38 != 0) goto LAB_10043fc94;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10043fc94:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df4849);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10043fceb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10043fceb:
  local_30 = true;
  uStack_2f = 0x13b000001;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_58,0x1df4869);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_30 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043fd75;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10043fd75:
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043fde3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10043fde3:
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_68,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043fe51;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10043fe51:
  QFormLayout::setFieldGrowthPolicy(param_1[1],0);
  QFormLayout::setLabelAlignment(param_1[1],0x82);
  pQVar3 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar3,(QWidget *)param_2);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1df487b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043fed9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10043fed9:
  QFormLayout::setWidget(param_1[1],0,1,param_1[2]);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043ff5e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10043ff5e:
  QFormLayout::setWidget(param_1[1],1,1,param_1[3]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_80,0x1df4897);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043ffe6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10043ffe6:
  QLabel::setAlignment(param_1[4],0x82);
  QFormLayout::setWidget(param_1[1],2,0,param_1[4]);
  pQVar6 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar6,(QWidget *)param_2);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1df48ab);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100440077;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100440077:
  QSpinBox::setMinimum((int)param_1[5]);
  QSpinBox::setMaximum((int)param_1[5]);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_98,true);
  QObject::setProperty(pcVar2,(QVariant *)"typeUInt");
  QVariant::~QVariant(&local_98);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_a8,0xe10);
  QObject::setProperty(pcVar2,(QVariant *)"divisor");
  QVariant::~QVariant(&local_a8);
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_b8,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_b8);
  QFormLayout::setWidget(param_1[1],2,1,param_1[5]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[6] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c0,0x1df48c7);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_30 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004401c3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004401c3:
  QLabel::setAlignment(param_1[6],0x82);
  QFormLayout::setWidget(param_1[1],3,0,param_1[6]);
  pQVar6 = operator_new(0x30);
  QSpinBox::QSpinBox(pQVar6,(QWidget *)param_2);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c8,0x1df48db);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044025d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10044025d:
  QSpinBox::setMinimum((int)param_1[7]);
  QSpinBox::setMaximum((int)param_1[7]);
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_d8);
  QFormLayout::setWidget(param_1[1],3,1,param_1[7]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_e0,0x1df48ee);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044033d;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10044033d:
  QLabel::setWordWrap(SUB81(param_1[8],0));
  QFormLayout::setWidget(param_1[1],4,1,param_1[8]);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[9] = pQVar4;
  QString::fromUtf8_helper((char *)&local_e8,0x1df4909);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004403dc;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004403dc:
  QFormLayout::setWidget(param_1[1],5,1,param_1[9]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_f0,0x1df4912);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_30 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044046d;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10044046d:
  QLabel::setAlignment(param_1[10],0x82);
  QFormLayout::setWidget(param_1[1],7,0,param_1[10]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_f8,0x1df492b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_30 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100440509;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100440509:
  QFormLayout::setWidget(param_1[1],7,1,param_1[0xb]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xc] = pQVar5;
  QString::fromUtf8_helper((char *)&local_100,0x1df4940);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_30 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044059a;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10044059a:
  QFormLayout::setWidget(param_1[1],8,1,param_1[0xc]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xd] = pQVar5;
  QString::fromUtf8_helper((char *)&local_108,0x1df4955);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044062b;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10044062b:
  QFormLayout::setWidget(param_1[1],9,1,param_1[0xd]);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[0xe] = pQVar4;
  QString::fromUtf8_helper((char *)&local_110,0x1df496a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_30 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004406bc;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004406bc:
  QFormLayout::setWidget(param_1[1],10,1,param_1[0xe]);
  pQVar3 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar3,(QWidget *)param_2);
  param_1[0xf] = pQVar3;
  QString::fromUtf8_helper((char *)&local_118,0x1df4973);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_30 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_30) goto LAB_10044074b;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10044074b:
  pcVar2 = (char *)param_1[0xf];
  QVariant::QVariant(&local_128,true);
  QObject::setProperty(pcVar2,(QVariant *)"CriticalForExternalVMwareVM");
  QVariant::~QVariant(&local_128);
  QFormLayout::setWidget(param_1[1],0xb,1,param_1[0xf]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[0x10] = this_01;
  QString::fromUtf8_helper((char *)&local_130,0x1dc1c64);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_30 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_30) goto LAB_100440821;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100440821:
  QDialogButtonBox::setStandardButtons(param_1[0x10],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0x10],0,0);
  FUN_100440ea0(param_1,param_2);
  QObject::connect(local_138,param_1[0x10],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_138);
  QObject::connect(local_140,param_1[0x10],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_140);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

