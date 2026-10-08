
void FUN_1004d1840(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QRadioButton *pQVar3;
  QWidget *pQVar4;
  undefined8 *puVar5;
  QComboBox *this_01;
  QLabel *pQVar6;
  undefined *puVar7;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QString local_270;
  QVariant local_268;
  QArrayData *local_258;
  QString local_250;
  QVariant local_248;
  QVariant local_238;
  QString local_228;
  QVariant local_220;
  QString local_210;
  QVariant local_208;
  QArrayData *local_1f8;
  QString local_1f0;
  QVariant local_1e8;
  QVariant local_1d8;
  QString local_1c8;
  QVariant local_1c0;
  QString local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QString local_190;
  QVariant local_188;
  QVariant local_178;
  QString local_168;
  QVariant local_160;
  QString local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QString local_118;
  QVariant local_110;
  QVariant local_100;
  QString local_f0;
  QVariant local_e8;
  QString local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QString local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QString local_90;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
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
      if (*(int *)local_40 != 0) goto LAB_1004d1896;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004d1896:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfa47a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004d18ed;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004d18ed:
  local_38 = true;
  uStack_37 = 0x106000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1975;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004d1975:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d19e1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004d19e1:
  pQVar3 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar3,(QWidget *)param_2);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_60,0x1dfa492);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1a50;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004d1a50:
  QAbstractButton::setAutoExclusive(SUB81(param_1[2],0));
  pcVar2 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_78,0x1dfa49c);
  QVariant::QVariant(&local_70,&local_78);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_38 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1acf;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1004d1acf:
  pcVar2 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_90,0x1dfa4b1);
  QVariant::QVariant(&local_88,&local_90);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_38 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1b4c;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1004d1b4c:
  pcVar2 = (char *)param_1[2];
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_a0);
  pcVar2 = (char *)param_1[2];
  QString::fromUtf8_helper((char *)&local_b8,0x1dc88e6);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_38 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1c08;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1004d1c08:
  QGridLayout::addWidget(param_1[1],param_1[2],5,2,1,3,0);
  pQVar3 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar3,(QWidget *)param_2);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_c0,0x1dfa4c6);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1caa;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004d1caa:
  QAbstractButton::setAutoExclusive(SUB81(param_1[3],0));
  pcVar2 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_d8,0x1dfa49c);
  QVariant::QVariant(&local_d0,&local_d8);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_38 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1d3b;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1004d1d3b:
  pcVar2 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_f0,0x1dfa4b1);
  QVariant::QVariant(&local_e8,&local_f0);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_38 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1dc1;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_1004d1dc1:
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_100,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_100);
  pcVar2 = (char *)param_1[3];
  QString::fromUtf8_helper((char *)&local_118,0x1df275b);
  QVariant::QVariant(&local_110,&local_118);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_110);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_38 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1e7d;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1004d1e7d:
  QGridLayout::addWidget(param_1[1],param_1[3],3,2,1,3,0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[4] = pQVar4;
  QString::fromUtf8_helper((char *)&local_120,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d1f21;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004d1f21:
  QWidget::setMinimumSize((int)param_1[4],0);
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_130,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_130);
  QGridLayout::addWidget(param_1[1],param_1[4],1,0,1,6,0);
  pQVar3 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar3,(QWidget *)param_2);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_138,0x1dfa4de);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2003;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1004d2003:
  QAbstractButton::setAutoExclusive(SUB81(param_1[5],0));
  pcVar2 = (char *)param_1[5];
  QString::fromUtf8_helper((char *)&local_150,0x1dfa4fb);
  QVariant::QVariant(&local_148,&local_150);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_38 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2094;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_1004d2094:
  pcVar2 = (char *)param_1[5];
  QString::fromUtf8_helper((char *)&local_168,0x1dfa50f);
  QVariant::QVariant(&local_160,&local_168);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_38 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d211a;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_1004d211a:
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_178,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_178);
  pcVar2 = (char *)param_1[5];
  QString::fromUtf8_helper((char *)&local_190,0x1df2746);
  QVariant::QVariant(&local_188,&local_190);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_188);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_38 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d21d6;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_1004d21d6:
  QGridLayout::addWidget(param_1[1],param_1[5],8,2,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[6] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,3,0,7,1,0);
  pQVar3 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar3,(QWidget *)param_2);
  param_1[7] = pQVar3;
  QString::fromUtf8_helper((char *)&local_198,0x1dfa523);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2303;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1004d2303:
  QAbstractButton::setAutoExclusive(SUB81(param_1[7],0));
  pcVar2 = (char *)param_1[7];
  QString::fromUtf8_helper((char *)&local_1b0,0x1dfa49c);
  QVariant::QVariant(&local_1a8,&local_1b0);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_38 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2394;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_1004d2394:
  pcVar2 = (char *)param_1[7];
  QString::fromUtf8_helper((char *)&local_1c8,0x1dfa4b1);
  QVariant::QVariant(&local_1c0,&local_1c8);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_1c0);
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_38 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d241a;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_1004d241a:
  pcVar2 = (char *)param_1[7];
  QVariant::QVariant(&local_1d8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_1d8);
  pcVar2 = (char *)param_1[7];
  QString::fromUtf8_helper((char *)&local_1f0,0x1df276f);
  QVariant::QVariant(&local_1e8,&local_1f0);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_38 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d24d6;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_1004d24d6:
  QGridLayout::addWidget(param_1[1],param_1[7],4,2,1,2,0);
  pQVar3 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar3,(QWidget *)param_2);
  param_1[8] = pQVar3;
  QString::fromUtf8_helper((char *)&local_1f8,0x1dfa52f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_38 = *(int *)local_1f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2578;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_1004d2578:
  QAbstractButton::setAutoExclusive(SUB81(param_1[8],0));
  pcVar2 = (char *)param_1[8];
  QString::fromUtf8_helper((char *)&local_210,0x1dfa4fb);
  QVariant::QVariant(&local_208,&local_210);
  QObject::setProperty(pcVar2,(QVariant *)"getter");
  QVariant::~QVariant(&local_208);
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      local_38 = *(int *)local_210.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2609;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_1004d2609:
  pcVar2 = (char *)param_1[8];
  QString::fromUtf8_helper((char *)&local_228,0x1dfa50f);
  QVariant::QVariant(&local_220,&local_228);
  QObject::setProperty(pcVar2,(QVariant *)"setter");
  QVariant::~QVariant(&local_220);
  if (*(int *)local_228.field0_0x0 != -1) {
    if (*(int *)local_228.field0_0x0 != 0) {
      LOCK();
      *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
      local_38 = *(int *)local_228.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d268f;
    }
    QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
  }
LAB_1004d268f:
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_238,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_238);
  pcVar2 = (char *)param_1[8];
  QString::fromUtf8_helper((char *)&local_250,0x1dc88e6);
  QVariant::QVariant(&local_248,&local_250);
  QObject::setProperty(pcVar2,(QVariant *)"mode");
  QVariant::~QVariant(&local_248);
  if (*(int *)local_250.field0_0x0 != -1) {
    if (*(int *)local_250.field0_0x0 != 0) {
      LOCK();
      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
      local_38 = *(int *)local_250.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2755;
    }
    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
  }
LAB_1004d2755:
  QGridLayout::addWidget(param_1[1],param_1[8],9,2,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1300000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,10,0,1,6,0);
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
  QGridLayout::addItem(param_1[1],puVar5,3,5,7,1,0);
  this_01 = operator_new(0x30);
  QComboBox::QComboBox(this_01,(QWidget *)param_2);
  param_1[0xb] = this_01;
  QString::fromUtf8_helper((char *)&local_258,0x1dfa53d);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_38 = *(int *)local_258 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d28f0;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1004d28f0:
  pcVar2 = (char *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_270,0x1dfa546);
  QVariant::QVariant(&local_268,&local_270);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_268);
  if (*(int *)local_270.field0_0x0 != -1) {
    if (*(int *)local_270.field0_0x0 != 0) {
      LOCK();
      *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
      local_38 = *(int *)local_270.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2976;
    }
    QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
  }
LAB_1004d2976:
  QGridLayout::addWidget(param_1[1],param_1[0xb],4,4,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x500000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,6,1,1,4,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0xd] = pQVar6;
  QString::fromUtf8_helper((char *)&local_278,0x1dfa560);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_38 = *(int *)local_278 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2a9d;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1004d2a9d:
  QLabel::setWordWrap(SUB81(param_1[0xd],0));
  QGridLayout::addWidget(param_1[1],param_1[0xd],0,0,1,6,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0xe] = pQVar6;
  QString::fromUtf8_helper((char *)&local_280,0x1dfa571);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_38 = *(int *)local_280 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2b49;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_1004d2b49:
  QLabel::setAlignment(param_1[0xe],0x81);
  QGridLayout::addWidget(param_1[1],param_1[0xe],2,1,1,2,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar7;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x140000001e;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar5;
  QGridLayout::addItem(param_1[1],puVar5,3,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_288,0x1dfa589);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_38 = *(int *)local_288 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004d2c81;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1004d2c81:
  QGridLayout::addWidget(param_1[1],param_1[0x10],7,1,1,2,0);
  QGridLayout::setColumnStretch((int)param_1[1],5);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  FUN_1004d3750(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

