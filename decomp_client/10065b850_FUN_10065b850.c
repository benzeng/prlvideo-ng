
void FUN_10065b850(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QVBoxLayout *this;
  undefined8 *puVar4;
  QGridLayout *this_00;
  QLabel *pQVar5;
  QLineEdit *pQVar6;
  QString *pQVar7;
  undefined *puVar8;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QVariant local_1c8;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QArrayData *local_190;
  QVariant local_188;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QVariant local_148;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QVariant local_100;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  uint local_88 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10065b8a6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10065b8a6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0b6e7);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10065b8fd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10065b8fd:
  local_38 = true;
  uStack_37 = 0x1a0000003;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1e0ad20);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065b987;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10065b987:
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
      if (local_38) goto LAB_10065b9f5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10065b9f5:
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xc00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[1] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[2] = this_00;
  QGridLayout::setSpacing((int)this_00);
  pQVar7 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_70,0x1e01191);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bae3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10065bae3:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1e0b701);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bb54;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10065bb54:
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(param_1[2],param_1[3],0,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar6,(QWidget *)param_2);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1e0b709);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bbf8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10065bbf8:
  local_88[0] = 0x50000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QWidget::setMinimumSize((int)param_1[4],0xf0);
  QWidget::setMaximumSize((int)param_1[4],0xf0);
  pQVar7 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_90,0x1e0b612);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bcbb;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10065bcbb:
  QLineEdit::setMaxLength((int)param_1[4]);
  QGridLayout::addWidget(param_1[2],param_1[4],0,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1e0b716);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bd6a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10065bd6a:
  pQVar7 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_a0,0x1e0b72a);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bdca;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10065bdca:
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar2,(QVariant *)"warning");
  QVariant::~QVariant(&local_b0);
  QGridLayout::addWidget(param_1[2],param_1[5],0,3,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[6] = pQVar5;
  QString::fromUtf8_helper((char *)&local_b8,0x1e0b790);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bea1;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10065bea1:
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[2],param_1[6],1,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar6,(QWidget *)param_2);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c0,0x1e0b79e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bf51;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10065bf51:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QWidget::setMinimumSize((int)param_1[7],0xf0);
  QWidget::setMaximumSize((int)param_1[7],0xf0);
  pQVar7 = (QString *)param_1[7];
  QString::fromUtf8_helper((char *)&local_c8,0x1e0b612);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065bff8;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10065bff8:
  QLineEdit::setMaxLength((int)param_1[7]);
  QGridLayout::addWidget(param_1[2],param_1[7],1,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d0,0x1df4ccc);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c0aa;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10065c0aa:
  QLabel::setAlignment(param_1[8],0x82);
  QGridLayout::addWidget(param_1[2],param_1[8],2,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar6,(QWidget *)param_2);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0b7ac);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c15a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10065c15a:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QWidget::setMaximumSize((int)param_1[9],0xf0);
  pQVar7 = (QString *)param_1[9];
  QString::fromUtf8_helper((char *)&local_e0,0x1e0b612);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c1f1;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10065c1f1:
  QLineEdit::setMaxLength((int)param_1[9]);
  QGridLayout::addWidget(param_1[2],param_1[9],2,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_e8,0x1e0b7b6);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c2a3;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10065c2a3:
  pQVar7 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_f0,0x1e0b72a);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c303;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10065c303:
  pcVar2 = (char *)param_1[10];
  QVariant::QVariant(&local_100,true);
  QObject::setProperty(pcVar2,(QVariant *)"warning");
  QVariant::~QVariant(&local_100);
  QGridLayout::addWidget(param_1[2],param_1[10],2,3,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_108,0x1e0b7c7);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c3dd;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10065c3dd:
  QLabel::setAlignment(param_1[0xb],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0xb],3,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar6,(QWidget *)param_2);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_110,0x1e0b7d0);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c48d;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10065c48d:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  QWidget::setMaximumSize((int)param_1[0xc],0xf0);
  pQVar7 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_118,0x1e0b612);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c524;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10065c524:
  QLineEdit::setMaxLength((int)param_1[0xc]);
  QGridLayout::addWidget(param_1[2],param_1[0xc],3,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xd] = pQVar5;
  QString::fromUtf8_helper((char *)&local_120,0x1df667a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c5d6;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10065c5d6:
  QLabel::setAlignment(param_1[0xd],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0xd],4,1,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_2);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_128,0x1e0b7d9);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c686;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10065c686:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  QWidget::setMaximumSize((int)param_1[0xe],0xf0);
  QComboBox::setSizeAdjustPolicy(param_1[0xe],2);
  QGridLayout::addWidget(param_1[2],param_1[0xe],4,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0xf] = pQVar5;
  QString::fromUtf8_helper((char *)&local_130,0x1e0b7e6);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c76f;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10065c76f:
  pQVar7 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_138,0x1e0b72a);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c7cf;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10065c7cf:
  pcVar2 = (char *)param_1[0xf];
  QVariant::QVariant(&local_148,true);
  QObject::setProperty(pcVar2,(QVariant *)"warning");
  QVariant::~QVariant(&local_148);
  QGridLayout::addWidget(param_1[2],param_1[0xf],4,3,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_150,0x1e0b7fa);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c8ac;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10065c8ac:
  QLabel::setAlignment(param_1[0x10],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0x10],7,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x11] = pQVar5;
  QString::fromUtf8_helper((char *)&local_158,0x1e0b803);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065c967;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10065c967:
  QLabel::setAlignment(param_1[0x11],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0x11],8,1,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_2);
  param_1[0x12] = pQVar7;
  QString::fromUtf8_helper((char *)&local_160,0x1e0b80c);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065ca20;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10065ca20:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QWidget::setMaximumSize((int)param_1[0x12],0xf0);
  QGridLayout::addWidget(param_1[2],param_1[0x12],7,2,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_2);
  param_1[0x13] = pQVar7;
  QString::fromUtf8_helper((char *)&local_168,0x1e0b818);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cb08;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10065cb08:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x13]);
  QWidget::setMaximumSize((int)param_1[0x13],0xf0);
  QComboBox::setSizeAdjustPolicy(param_1[0x13],2);
  QGridLayout::addWidget(param_1[2],param_1[0x13],8,2,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x14] = pQVar5;
  QString::fromUtf8_helper((char *)&local_170,0x1e0b824);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cc03;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10065cc03:
  pQVar7 = (QString *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_178,0x1e0b72a);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cc66;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10065cc66:
  pcVar2 = (char *)param_1[0x14];
  QVariant::QVariant(&local_188,true);
  QObject::setProperty(pcVar2,(QVariant *)"warning");
  QVariant::~QVariant(&local_188);
  QGridLayout::addWidget(param_1[2],param_1[0x14],7,3,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x15] = pQVar5;
  QString::fromUtf8_helper((char *)&local_190,0x1e0b837);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_38 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cd49;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10065cd49:
  pQVar7 = (QString *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_198,0x1e0b72a);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cdac;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10065cdac:
  pcVar2 = (char *)param_1[0x15];
  QVariant::QVariant(&local_1a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"warning");
  QVariant::~QVariant(&local_1a8);
  QGridLayout::addWidget(param_1[2],param_1[0x15],8,3,1,1,0);
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
  param_1[0x16] = puVar4;
  QGridLayout::addItem(param_1[2],puVar4,7,4,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x17] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1b0,0x1e0b84a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_38 = *(int *)local_1b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cf1c;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_10065cf1c:
  pQVar7 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_1b8,0x1e0b72a);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065cf7f;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10065cf7f:
  pcVar2 = (char *)param_1[0x17];
  QVariant::QVariant(&local_1c8,true);
  QObject::setProperty(pcVar2,(QVariant *)"warning");
  QVariant::~QVariant(&local_1c8);
  QGridLayout::addWidget(param_1[2],param_1[0x17],5,3,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[0x18] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1d0,0x1e0b85c);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_38 = *(int *)local_1d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065d062;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_10065d062:
  QLabel::setAlignment(param_1[0x18],0x82);
  QGridLayout::addWidget(param_1[2],param_1[0x18],5,1,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_2);
  param_1[0x19] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1d8,0x1e0b867);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_38 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10065d11e;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_10065d11e:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x19]);
  QWidget::setMaximumSize((int)param_1[0x19],0xf0);
  QComboBox::setSizeAdjustPolicy(param_1[0x19],2);
  QGridLayout::addWidget(param_1[2],param_1[0x19],5,2,1,1,0);
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
  param_1[0x1a] = puVar4;
  QGridLayout::addItem(param_1[2],puVar4,7,0,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x800000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x1b] = puVar4;
  QGridLayout::addItem(param_1[2],puVar4,6,2,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xbe00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x1c] = puVar4;
  QGridLayout::addItem(param_1[2],puVar4,0,0,7,1,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[2]);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xa00000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[0x1d] = puVar4;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar4);
  QLabel::setBuddy((QWidget *)param_1[5]);
  QLabel::setBuddy((QWidget *)param_1[10]);
  QLabel::setBuddy((QWidget *)param_1[0xf]);
  QLabel::setBuddy((QWidget *)param_1[0x14]);
  QLabel::setBuddy((QWidget *)param_1[0x15]);
  QLabel::setBuddy((QWidget *)param_1[0x17]);
  QWidget::setTabOrder((QWidget *)param_1[4],(QWidget *)param_1[7]);
  QWidget::setTabOrder((QWidget *)param_1[7],(QWidget *)param_1[9]);
  QWidget::setTabOrder((QWidget *)param_1[9],(QWidget *)param_1[0xc]);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[0xe]);
  QWidget::setTabOrder((QWidget *)param_1[0xe],(QWidget *)param_1[0x19]);
  FUN_10065e250(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

