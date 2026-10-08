
void FUN_10064c1f0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QGridLayout *pQVar4;
  QHBoxLayout *pQVar5;
  undefined8 *puVar6;
  QLabel *pQVar7;
  QWidget *pQVar8;
  QRadioButton *pQVar9;
  CImageButtonComplex *this;
  QLineEdit *pQVar10;
  QVBoxLayout *this_00;
  QPushButton *pQVar11;
  QArrayData *pQVar12;
  undefined *puVar13;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  uint local_108 [2];
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  uint local_b0 [2];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  uint local_80 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10064c246;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10064c246:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0ad0d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10064c29d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10064c29d:
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
      if (local_38) goto LAB_10064c327;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10064c327:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c395;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10064c395:
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
      if (local_38) goto LAB_10064c408;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10064c408:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar13 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xa0000005a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[2] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar6);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1dc128f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c4ef;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10064c4ef:
  local_80[0] = 0x530000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QLabel::setTextFormat(param_1[3],1);
  QLabel::setAlignment(param_1[3],0x84);
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QBoxLayout::addWidget(param_1[1],param_1[3],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xa0000005a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[4] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar6);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2200000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[5] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,1,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[6] = pQVar8;
  QString::fromUtf8_helper((char *)&local_88,0x1e0ad35);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c6de;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10064c6de:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[6]);
  param_1[7] = pQVar4;
  QString::fromUtf8_helper((char *)&local_90,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c757;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10064c757:
  pQVar9 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar9,(QWidget *)param_1[6]);
  param_1[8] = pQVar9;
  QString::fromUtf8_helper((char *)&local_98,0x1e0ad49);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c7d0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10064c7d0:
  QAbstractButton::setCheckable(SUB81(param_1[8],0));
  QAbstractButton::setAutoExclusive(SUB81(param_1[8],0));
  QGridLayout::addWidget(param_1[7],param_1[8],1,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QRadioButton::QRadioButton(pQVar9,(QWidget *)param_1[6]);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_a0,0x1e0ad59);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c88f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10064c88f:
  QAbstractButton::setCheckable(SUB81(param_1[9],0));
  QAbstractButton::setChecked(SUB81(param_1[9],0));
  QAbstractButton::setAutoExclusive(SUB81(param_1[9],0));
  QGridLayout::addWidget(param_1[7],param_1[9],2,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[6],0);
  param_1[10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0ad6a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064c95e;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10064c95e:
  local_b0[0] = 0x570000;
  QSizePolicy::setControlType(local_b0,1);
  local_b0[0] = local_b0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QGridLayout::addWidget(param_1[7],param_1[10],4,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[6],0);
  param_1[0xb] = pQVar8;
  QString::fromUtf8_helper((char *)&local_b8,0x1e0ad7f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064ca4f;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10064ca4f:
  uVar3 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QGridLayout::addWidget(param_1[7],param_1[0xb],4,3,1,1,0);
  this = operator_new(0x78);
  CImageButtonComplex::CImageButtonComplex(this,(QWidget *)param_1[6]);
  param_1[0xc] = this;
  QString::fromUtf8_helper((char *)&local_c0,0x1e0ad95);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cb1c;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10064cb1c:
  pQVar2 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_c8,0x1e0ad9f);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cb7c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10064cb7c:
  QGridLayout::addWidget(param_1[7],param_1[0xc],4,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[6],0);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d0,0x1e0adb9);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cc21;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10064cc21:
  QLabel::setAlignment(param_1[0xd],0x82);
  QGridLayout::addWidget(param_1[7],param_1[0xd],3,0,1,1,0);
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_1[6]);
  param_1[0xe] = pQVar10;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0adcc);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cccf;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10064cccf:
  local_e0[0] = 0x50000;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = local_e0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  QWidget::setMinimumSize((int)param_1[0xe],0x15d);
  QWidget::setMaximumSize((int)param_1[0xe],0x15d);
  QLineEdit::setMaxLength((int)param_1[0xe]);
  QGridLayout::addWidget(param_1[7],param_1[0xe],0,1,1,2,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[6],0);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_e8,0x1e0addc);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cdf1;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10064cdf1:
  QLabel::setAlignment(param_1[0xf],0x82);
  QGridLayout::addWidget(param_1[7],param_1[0xf],0,0,1,1,0);
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[0x10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_f0,0x1df0473);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064ce9b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10064ce9b:
  pQVar10 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar10,(QWidget *)param_1[6]);
  param_1[0x11] = pQVar10;
  QString::fromUtf8_helper((char *)&local_f8,0x1e0adeb);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cf17;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10064cf17:
  QLineEdit::setEchoMode(param_1[0x11],2);
  QBoxLayout::addWidget(param_1[0x10],param_1[0x11],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[6],0);
  param_1[0x12] = pQVar7;
  QString::fromUtf8_helper((char *)&local_100,0x1e0adfa);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064cfbd;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10064cfbd:
  local_108[0] = 0x510000;
  QSizePolicy::setControlType(local_108,1);
  local_108[0] = local_108[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_108[0] = local_108[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QBoxLayout::addWidget(param_1[0x10],param_1[0x12],0,0);
  QGridLayout::addLayout(param_1[7],param_1[0x10],3,1,1,2,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar6;
  QGridLayout::addItem(param_1[7],puVar6,4,1,1,1,0);
  QGridLayout::setColumnStretch((int)param_1[7],0);
  QGridLayout::setColumnStretch((int)param_1[7],3);
  QGridLayout::addWidget(*param_1,param_1[6],2,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x4b00000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,3,0,1,1,0);
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00);
  param_1[0x15] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  pQVar2 = (QString *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_110,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d233;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10064d233:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0x16] = pQVar7;
  QString::fromUtf8_helper((char *)&local_118,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d2b4;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10064d2b4:
  QLabel::setAlignment(param_1[0x16],0x84);
  QBoxLayout::addWidget(param_1[0x15],param_1[0x16],0,0);
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[0x17] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_120,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d368;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10064d368:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14000000f8;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar6;
  (**(code **)(*(long *)param_1[0x17] + 0x70))((long *)param_1[0x17],puVar6);
  pQVar11 = operator_new(0x30);
  QPushButton::QPushButton(pQVar11,(QWidget *)param_2);
  param_1[0x19] = pQVar11;
  QString::fromUtf8_helper((char *)&local_128,0x1e0ae0f);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d45e;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10064d45e:
  pQVar2 = (QString *)param_1[0x19];
  local_130 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QPushButton { \t\n\tmin-height: 25;\n\tborder-width: 4 4 4 4;\n\tborder-image: url(:/SocialButtons/FB_btn_norm.png);\n}\n\nQPushButton:hover { border-image: url(:/SocialButtons/FB_btn_hover.png) 4 4 4 4 }\nQPushButton:pressed { border-image: url(:/SocialButtons/FB_btn_press.png) 4 4 4 4 } \nQPushButton:checked { border-image: url(:/SocialButtons/FB_btn_disable.png) 4 4 4 4 }"
                         ,0x16d);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d4c2;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10064d4c2:
  QBoxLayout::addWidget(param_1[0x17],param_1[0x19],0,0);
  pQVar11 = operator_new(0x30);
  QPushButton::QPushButton(pQVar11,(QWidget *)param_2);
  param_1[0x1a] = pQVar11;
  QString::fromUtf8_helper((char *)&local_138,0x1e0af8e);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d554;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10064d554:
  pQVar2 = (QString *)param_1[0x1a];
  pQVar12 = (QArrayData *)
            QString::fromLatin1_helper
                      ("QPushButton { \t\n\tmin-height: 25;\n\tborder-width: 4 4 4 4;\n\tborder-image: url(:/SocialButtons/Google_btn_norm.png);\n}\n\nQPushButton:hover { border-image: url(:/SocialButtons/Google_btn_hover.png) 4 4 4 4 }\nQPushButton:pressed { border-image: url(:/SocialButtons/Google_btn_press.png) 4 4 4 4 } \nQPushButton:checked { border-image: url(:/SocialButtons/Google_btn_disable.png) 4 4 4 4 }"
                       ,0x17d);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_38 = *(int *)pQVar12 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064d5b8;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_10064d5b8:
  QBoxLayout::addWidget(param_1[0x17],param_1[0x1a],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar13;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14000000f8;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x1b] = puVar6;
  (**(code **)(*(long *)param_1[0x17] + 0x70))((long *)param_1[0x17],puVar6);
  QBoxLayout::addLayout((QLayout *)param_1[0x15],(int)param_1[0x17]);
  QGridLayout::addLayout(*param_1,param_1[0x15],4,0,1,1,0);
  QWidget::setTabOrder((QWidget *)param_1[0xe],(QWidget *)param_1[8]);
  QWidget::setTabOrder((QWidget *)param_1[8],(QWidget *)param_1[9]);
  QWidget::setTabOrder((QWidget *)param_1[9],(QWidget *)param_1[0x11]);
  QWidget::setTabOrder((QWidget *)param_1[0x11],(QWidget *)param_1[0xc]);
  QWidget::setTabOrder((QWidget *)param_1[0xc],(QWidget *)param_1[0x19]);
  QWidget::setTabOrder((QWidget *)param_1[0x19],(QWidget *)param_1[0x1a]);
  FUN_10064df50(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

