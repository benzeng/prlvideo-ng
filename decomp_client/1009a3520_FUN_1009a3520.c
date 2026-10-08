
void FUN_1009a3520(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QLabel *pQVar6;
  undefined8 *puVar7;
  QFrame *pQVar8;
  QGridLayout *this;
  CPrlFileDevSelectorWidget *this_00;
  QWidget *pQVar9;
  QHBoxLayout *pQVar10;
  QLineEdit *this_01;
  QPushButton *this_02;
  undefined *puVar11;
  uint local_f8 [2];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
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
      if (*(int *)local_40 != 0) goto LAB_1009a3576;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a3576:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e339ea);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1009a35cd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1009a35cd:
  local_38 = true;
  uStack_37 = 0x1d1000002;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1e339fc);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3662;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a3662:
  QLayout::setContentsMargins((int)*param_1,0x50,-1,0x50);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_58,0x1dc128f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a36ed;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a36ed:
  QLabel::setAlignment(param_1[1],0x84);
  QLabel::setWordWrap(SUB81(param_1[1],0));
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x2d00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[2] = puVar7;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar7);
  pQVar8 = operator_new(0x30);
  QFrame::QFrame(pQVar8,param_2,0);
  param_1[3] = pQVar8;
  QString::fromUtf8_helper((char *)&local_60,0x1e33a0a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a37fb;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009a37fb:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[3]);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1e33a12);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a386b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009a386b:
  QLayout::setContentsMargins((int)param_1[4],0,0,0);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this);
  param_1[5] = this;
  QString::fromUtf8_helper((char *)&local_70,0x1e33a20);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a38e9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1009a38e9:
  QGridLayout::setVerticalSpacing((int)param_1[5]);
  this_00 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_00,(QWidget *)param_1[3]);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1e33a2f);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3964;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009a3964:
  QGridLayout::addWidget(param_1[5],param_1[6],2,2,1,1,0x80);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_1[3],0);
  param_1[7] = pQVar9;
  QString::fromUtf8_helper((char *)&local_80,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3a00;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1009a3a00:
  pQVar10 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar10,(QWidget *)param_1[7]);
  param_1[8] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar2 = (QString *)param_1[8];
  QString::fromUtf8_helper((char *)&local_88,0x1df027f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3a7e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1009a3a7e:
  QLayout::setContentsMargins((int)param_1[8],0,0,0);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[9] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[9];
  QString::fromUtf8_helper((char *)&local_90,0x1e33a3f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3b16;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1009a3b16:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_98,0x1e33a55);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3b91;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1009a3b91:
  pcVar3 = (char *)param_1[10];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar3,(QVariant *)"highlightColor");
  QVariant::~QVariant(&local_a8);
  QBoxLayout::addWidget(param_1[9],param_1[10],0,0);
  pQVar10 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar10);
  param_1[0xb] = pQVar10;
  QString::fromUtf8_helper((char *)&local_b0,0x1df040e);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3c4d;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1009a3c4d:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b8,0x1e33a62);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3cc8;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1009a3cc8:
  QBoxLayout::addWidget(param_1[0xb],param_1[0xc],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[0xd] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c0,0x1e33a70);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3d54;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1009a3d54:
  QBoxLayout::addWidget(param_1[0xb],param_1[0xd],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[9],(int)param_1[0xb]);
  QBoxLayout::addLayout((QLayout *)param_1[8],(int)param_1[9]);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar7;
  (**(code **)(*(long *)param_1[8] + 0x70))((long *)param_1[8],puVar7);
  QGridLayout::addWidget(param_1[5],param_1[7],4,2,1,1,0x20);
  this_01 = operator_new(0x30);
  QLineEdit::QLineEdit(this_01,(QWidget *)param_1[3]);
  param_1[0xf] = this_01;
  QString::fromUtf8_helper((char *)&local_c8,0x1e33a81);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3e8d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1009a3e8d:
  QWidget::setMinimumSize((int)param_1[0xf],0x1a4);
  QGridLayout::addWidget(param_1[5],param_1[0xf],0,2,1,1,0x80);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[3],0);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d0,0x1df5e4a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a3f42;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1009a3f42:
  QLabel::setAlignment(param_1[0x10],0x82);
  QGridLayout::addWidget(param_1[5],param_1[0x10],0,1,1,1,0x80);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1a00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar7;
  QGridLayout::addItem(param_1[5],puVar7,8,2,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1700000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar7;
  QGridLayout::addItem(param_1[5],puVar7,3,2,1,1,0);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_1[3],0);
  param_1[0x13] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d8,0x1e33a8c);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a4107;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1009a4107:
  QGridLayout::addWidget(param_1[5],param_1[0x13],5,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[3],0);
  param_1[0x14] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e0,0x1e33a9e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a41b2;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1009a41b2:
  QLabel::setAlignment(param_1[0x14],0x82);
  QGridLayout::addWidget(param_1[5],param_1[0x14],2,1,1,1,0x80);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,param_1[3],0);
  param_1[0x15] = pQVar9;
  QString::fromUtf8_helper((char *)&local_e8,0x1e33aae);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a426e;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1009a426e:
  QGridLayout::addWidget(param_1[5],param_1[0x15],6,2,1,1,0);
  this_02 = operator_new(0x30);
  QPushButton::QPushButton(this_02,(QWidget *)param_1[3]);
  param_1[0x16] = this_02;
  QString::fromUtf8_helper((char *)&local_f0,0x1e33abc);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009a4317;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1009a4317:
  local_f8[0] = 0x10000;
  QSizePolicy::setControlType(local_f8,1);
  local_f8[0] = local_f8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_f8[0] = local_f8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x16]);
  QGridLayout::addWidget(param_1[5],param_1[0x16],9,2,1,1,1);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar7;
  QGridLayout::addItem(param_1[5],puVar7,0,0,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar7;
  QGridLayout::addItem(param_1[5],puVar7,0,3,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xf00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x19] = puVar7;
  QGridLayout::addItem(param_1[5],puVar7,1,2,1,1,0);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[5]);
  QBoxLayout::addWidget(*param_1,param_1[3],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x1a] = puVar7;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar7);
  FUN_1009a5630(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

