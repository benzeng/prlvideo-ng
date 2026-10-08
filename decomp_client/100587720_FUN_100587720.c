
void FUN_100587720(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QVBoxLayout *pQVar2;
  QWidget *pQVar3;
  QGridLayout *pQVar4;
  QLabel *pQVar5;
  QPushButton *pQVar6;
  QString *pQVar7;
  undefined8 *puVar8;
  QComboBox *this;
  QFrame *pQVar9;
  QHBoxLayout *this_00;
  undefined *puVar10;
  Connection local_170 [8];
  Connection local_168 [8];
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined8 local_f0;
  QArrayData *local_e8;
  QIcon local_e0 [8];
  QArrayData *local_d8;
  undefined8 local_d0;
  QArrayData *local_c8;
  QIcon local_c0 [8];
  QArrayData *local_b8;
  undefined8 local_b0;
  QArrayData *local_a8;
  QIcon local_a0 [8];
  QArrayData *local_98;
  undefined8 local_90;
  QArrayData *local_88;
  QIcon local_80 [8];
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
      if (*(int *)local_38 != 0) goto LAB_100587774;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100587774:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e02875);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1005877cb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1005877cb:
  local_30 = true;
  uStack_2f = 0xb0000002;
  QWidget::resize(param_2);
  pQVar2 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar2,(QWidget *)param_2);
  *param_1 = pQVar2;
  QBoxLayout::setSpacing((int)pQVar2);
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar7 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1284);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587874;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100587874:
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005878e5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005878e5:
  pQVar2 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar2,(QWidget *)param_1[1]);
  param_1[2] = pQVar2;
  QBoxLayout::setSpacing((int)pQVar2);
  pQVar7 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_58,0x1dd6546);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587966;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100587966:
  QLayout::setContentsMargins((int)param_1[2],9,-1,-1);
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,param_1[1],0);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_60,0x1e0288c);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005879f6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005879f6:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[3]);
  param_1[4] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar7 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587a7b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100587a7b:
  QGridLayout::setHorizontalSpacing((int)param_1[4]);
  QGridLayout::setVerticalSpacing((int)param_1[4]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[3],0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1e02899);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587b09;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100587b09:
  QGridLayout::addWidget(param_1[4],param_1[5],0,0,1,6,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[3]);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1e028a3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587b9d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100587b9d:
  QIcon::QIcon(local_80);
  QString::fromUtf8_helper((char *)&local_88,0x1e028b1);
  local_90 = 0xffffffffffffffff;
  QIcon::addFile(local_80,&local_88,&local_90,0,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587c12;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100587c12:
  QAbstractButton::setIcon((QIcon *)param_1[6]);
  QAbstractButton::setCheckable(SUB81(param_1[6],0));
  QPushButton::setAutoDefault(SUB81(param_1[6],0));
  QGridLayout::addWidget(param_1[4],param_1[6],1,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[3]);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_98,0x1e028e3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587cd9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100587cd9:
  QIcon::QIcon(local_a0);
  QString::fromUtf8_helper((char *)&local_a8,0x1e028f0);
  local_b0 = 0xffffffffffffffff;
  QIcon::addFile(local_a0,&local_a8,&local_b0,0,1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587d60;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100587d60:
  QAbstractButton::setIcon((QIcon *)param_1[7]);
  QAbstractButton::setCheckable(SUB81(param_1[7],0));
  QPushButton::setAutoDefault(SUB81(param_1[7],0));
  QGridLayout::addWidget(param_1[4],param_1[7],1,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[3]);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b8,0x1e02921);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587e2d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100587e2d:
  QIcon::QIcon(local_c0);
  QString::fromUtf8_helper((char *)&local_c8,0x1e0292d);
  local_d0 = 0xffffffffffffffff;
  QIcon::addFile(local_c0,&local_c8,&local_d0,0,1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587eb4;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100587eb4:
  QAbstractButton::setIcon((QIcon *)param_1[8]);
  QAbstractButton::setCheckable(SUB81(param_1[8],0));
  QPushButton::setAutoDefault(SUB81(param_1[8],0));
  QGridLayout::addWidget(param_1[4],param_1[8],1,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[3]);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0295d);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100587f81;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100587f81:
  QIcon::QIcon(local_e0);
  QString::fromUtf8_helper((char *)&local_e8,0x1e02969);
  local_f0 = 0xffffffffffffffff;
  QIcon::addFile(local_e0,&local_e8,&local_f0,0,1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588008;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100588008:
  QAbstractButton::setIcon((QIcon *)param_1[9]);
  QAbstractButton::setCheckable(SUB81(param_1[9],0));
  QPushButton::setAutoDefault(SUB81(param_1[9],0));
  QGridLayout::addWidget(param_1[4],param_1[9],1,3,1,1,0);
  pQVar7 = operator_new(0x38);
  FUN_100139940(pQVar7,param_1[3]);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_f8,0x1e0299d);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_30 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005880d5;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005880d5:
  QWidget::setMinimumSize((int)param_1[10],0x96);
  QLineEdit::setAlignment(param_1[10],0x84);
  QGridLayout::addWidget(param_1[4],param_1[10],1,4,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x140000000a;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar8;
  QGridLayout::addItem(param_1[4],puVar8,1,5,1,1,0);
  QBoxLayout::addWidget(param_1[2],param_1[3],0);
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,param_1[1],0);
  param_1[0xc] = pQVar3;
  QString::fromUtf8_helper((char *)&local_100,0x1e029a7);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_30 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_30) goto LAB_10058823b;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10058823b:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[0xc]);
  param_1[0xd] = pQVar4;
  QGridLayout::setSpacing((int)pQVar4);
  pQVar7 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_108,0x1e029b2);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005882c6;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1005882c6:
  QLayout::setContentsMargins((int)param_1[0xd],0,0,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0xc],0);
  param_1[0xe] = pQVar5;
  QString::fromUtf8_helper((char *)&local_110,0x1e029be);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_30 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588357;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100588357:
  QGridLayout::addWidget(param_1[0xd],param_1[0xe],0,0,1,6,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[0xc]);
  param_1[0xf] = pQVar6;
  QString::fromUtf8_helper((char *)&local_118,0x1e029c6);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_30 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005883f5;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005883f5:
  QAbstractButton::setIcon((QIcon *)param_1[0xf]);
  QAbstractButton::setCheckable(SUB81(param_1[0xf],0));
  QPushButton::setAutoDefault(SUB81(param_1[0xf],0));
  QGridLayout::addWidget(param_1[0xd],param_1[0xf],1,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[0xc]);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_120,0x1e029d2);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_30 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005884bf;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005884bf:
  QAbstractButton::setIcon((QIcon *)param_1[0x10]);
  QAbstractButton::setCheckable(SUB81(param_1[0x10],0));
  QPushButton::setAutoDefault(SUB81(param_1[0x10],0));
  QGridLayout::addWidget(param_1[0xd],param_1[0x10],1,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[0xc]);
  param_1[0x11] = pQVar6;
  QString::fromUtf8_helper((char *)&local_128,0x1e029dd);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_30 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_30) goto LAB_10058859b;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10058859b:
  QAbstractButton::setIcon((QIcon *)param_1[0x11]);
  QAbstractButton::setCheckable(SUB81(param_1[0x11],0));
  QPushButton::setAutoDefault(SUB81(param_1[0x11],0));
  QGridLayout::addWidget(param_1[0xd],param_1[0x11],1,2,1,1,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_1[0xc]);
  param_1[0x12] = pQVar6;
  QString::fromUtf8_helper((char *)&local_130,0x1e029e7);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_30 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588677;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100588677:
  QAbstractButton::setIcon((QIcon *)param_1[0x12]);
  QAbstractButton::setCheckable(SUB81(param_1[0x12],0));
  QPushButton::setAutoDefault(SUB81(param_1[0x12],0));
  QGridLayout::addWidget(param_1[0xd],param_1[0x12],1,3,1,1,0);
  this = operator_new(0x30);
  QComboBox::QComboBox(this,(QWidget *)param_1[0xc]);
  param_1[0x13] = this;
  QString::fromUtf8_helper((char *)&local_138,0x1e029f1);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_30 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588753;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100588753:
  QWidget::setMinimumSize((int)param_1[0x13],200);
  QWidget::setFocusPolicy(param_1[0x13],0xb);
  QComboBox::setEditable(SUB81(param_1[0x13],0));
  QGridLayout::addWidget(param_1[0xd],param_1[0x13],1,4,1,2,0);
  QBoxLayout::addWidget(param_1[2],param_1[0xc],0,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  pQVar9 = operator_new(0x30);
  QFrame::QFrame(pQVar9,param_2,0);
  param_1[0x14] = pQVar9;
  QString::fromUtf8_helper((char *)&local_140,0x1df6bac);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_30 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588854;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100588854:
  QFrame::setFrameShape(param_1[0x14],4);
  QFrame::setFrameShadow(param_1[0x14],0x30);
  QBoxLayout::addWidget(*param_1,param_1[0x14],0,0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[0x15] = this_00;
  QString::fromUtf8_helper((char *)&local_148,0x1dc12b3);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_30 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588902;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100588902:
  QLayout::setContentsMargins((int)param_1[0x15],0xe,8,0xe);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_2);
  param_1[0x16] = pQVar6;
  QString::fromUtf8_helper((char *)&local_150,0x1e029f9);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_30 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_30) goto LAB_10058899f;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10058899f:
  QPushButton::setAutoDefault(SUB81(param_1[0x16],0));
  QBoxLayout::addWidget(param_1[0x15],param_1[0x16],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar8;
  (**(code **)(*(long *)param_1[0x15] + 0x70))((long *)param_1[0x15],puVar8);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_2);
  param_1[0x18] = pQVar6;
  QString::fromUtf8_helper((char *)&local_158,0x1dc12ca);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_30 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588ab3;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100588ab3:
  QPushButton::setAutoDefault(SUB81(param_1[0x18],0));
  QBoxLayout::addWidget(param_1[0x15],param_1[0x18],0,0);
  pQVar6 = operator_new(0x30);
  QPushButton::QPushButton(pQVar6,(QWidget *)param_2);
  param_1[0x19] = pQVar6;
  QString::fromUtf8_helper((char *)&local_160,0x1e02a03);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_30 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_30) goto LAB_100588b54;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100588b54:
  QBoxLayout::addWidget(param_1[0x15],param_1[0x19],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[0x15]);
  FUN_100589820(param_1,param_2);
  QObject::connect(local_168,param_1[0x18],"2clicked()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_168);
  QObject::connect(local_170,param_1[0x19],"2clicked()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_170);
  QPushButton::setDefault(SUB81(param_1[0x19],0));
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_e0);
  QIcon::~QIcon(local_c0);
  QIcon::~QIcon(local_a0);
  QIcon::~QIcon(local_80);
  return;
}

