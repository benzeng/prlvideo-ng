
void FUN_100436970(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QGridLayout *pQVar5;
  QGroupBox *this;
  undefined8 *puVar6;
  QCheckBox *pQVar7;
  QVBoxLayout *this_00;
  QHBoxLayout *this_01;
  QWidget *pQVar8;
  QLabel *pQVar9;
  QDialogButtonBox *this_02;
  undefined *puVar10;
  Connection local_130 [8];
  Connection local_128 [8];
  QArrayData *local_120;
  QFont local_118 [16];
  QArrayData *local_108;
  QArrayData *local_100;
  QPixmap local_f8 [32];
  uint local_d8 [2];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  uint local_b8 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1004369c6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004369c6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df427d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100436a1d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100436a1d:
  local_38 = true;
  uStack_37 = 0xe9000001;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QGridLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1df4296);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436ab5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100436ab5:
  this = operator_new(0x30);
  QGroupBox::QGroupBox(this,(QWidget *)param_2);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_58,0x1df42a3);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436b24;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100436b24:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436b94;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100436b94:
  QLayout::setContentsMargins((int)param_1[2],0,-1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x140000002d;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[3] = puVar6;
  QGridLayout::addItem(param_1[2],puVar6,0,0,1,1,0);
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436ca0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100436ca0:
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[1]);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_70,0x1df42ae);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436d10;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100436d10:
  QGridLayout::addWidget(param_1[4],param_1[5],0,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[1]);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1df42bb);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436da4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100436da4:
  QGridLayout::addWidget(param_1[4],param_1[6],0,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[1]);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1df42c6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436e3b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100436e3b:
  QGridLayout::addWidget(param_1[4],param_1[7],1,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[1]);
  param_1[8] = pQVar7;
  QString::fromUtf8_helper((char *)&local_88,0x1df42d5);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436ed2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100436ed2:
  QGridLayout::addWidget(param_1[4],param_1[8],1,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[1]);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1df42e1);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100436f75;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100436f75:
  QGridLayout::addWidget(param_1[4],param_1[9],2,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_1[1]);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_98,0x1df42ef);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100437015;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100437015:
  QGridLayout::addWidget(param_1[4],param_1[10],2,2,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar6;
  QGridLayout::addItem(param_1[4],puVar6,1,1,1,1,0);
  QGridLayout::addLayout(param_1[2],param_1[4],0,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x140000002c;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar6;
  QGridLayout::addItem(param_1[2],puVar6,0,2,1,1,0);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00);
  param_1[0xd] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  pQVar2 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_a0,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10043720f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10043720f:
  QLayout::setContentsMargins((int)param_1[0xd],-1,10,-1);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01);
  param_1[0xe] = this_01;
  QString::fromUtf8_helper((char *)&local_a8,0x1df027f);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004372a2;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004372a2:
  pQVar7 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar7,(QWidget *)param_2);
  param_1[0xf] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df42fe);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10043731a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10043731a:
  local_b8[0] = 0x10000;
  QSizePolicy::setControlType(local_b8,1);
  local_b8[0] = local_b8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  QBoxLayout::addWidget(param_1[0xe],param_1[0xf],0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar6;
  (**(code **)(*(long *)param_1[0xe] + 0x70))((long *)param_1[0xe],puVar6);
  QBoxLayout::addLayout((QLayout *)param_1[0xd],(int)param_1[0xe]);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0x11] = pQVar8;
  QString::fromUtf8_helper((char *)&local_c0,0x1df430f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10043746a;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10043746a:
  pQVar5 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar5,(QWidget *)param_1[0x11]);
  param_1[0x12] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c8,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004374e9;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004374e9:
  QGridLayout::setHorizontalSpacing((int)param_1[0x12]);
  QLayout::setContentsMargins((int)param_1[0x12],0,6,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[0x11],0);
  param_1[0x13] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d0,0x1df431b);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100437593;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100437593:
  local_d8[0] = 0;
  QSizePolicy::setControlType(local_d8,1);
  local_d8[0] = local_d8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_d8[0] = local_d8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x13]);
  QWidget::setMinimumSize((int)param_1[0x13],0x10);
  QWidget::setMaximumSize((int)param_1[0x13],0x10);
  pQVar3 = (QPixmap *)param_1[0x13];
  QString::fromUtf8_helper((char *)&local_100,0x1df432b);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10043769a;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10043769a:
  QLabel::setScaledContents(SUB81(param_1[0x13],0));
  QLabel::setAlignment(param_1[0x13],0x82);
  QGridLayout::addWidget(param_1[0x12],param_1[0x13],0,0,1,1,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[0x11],0);
  param_1[0x14] = pQVar9;
  QString::fromUtf8_helper((char *)&local_108,0x1df4347);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_100437764;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100437764:
  QFont::QFont(local_118);
  QFont::setPointSize((int)local_118);
  QWidget::setFont((QFont *)param_1[0x14]);
  QGridLayout::addWidget(param_1[0x12],param_1[0x14],0,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1c;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar6;
  QGridLayout::addItem(param_1[0x12],puVar6,0,2,1,1,0);
  QBoxLayout::addWidget(param_1[0xd],param_1[0x11],0,0);
  QGridLayout::addLayout(*param_1,param_1[0xd],1,0,1,1,0);
  this_02 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_02,(QWidget *)param_2);
  param_1[0x16] = this_02;
  QString::fromUtf8_helper((char *)&local_120,0x1dc1c64);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004378f9;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1004378f9:
  QDialogButtonBox::setOrientation(param_1[0x16],1);
  QDialogButtonBox::setStandardButtons(param_1[0x16],0x400400);
  QGridLayout::addWidget(*param_1,param_1[0x16],3,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,2,0,1,1,0);
  FUN_100438100(param_1,param_2);
  QObject::connect(local_128,param_1[0x16],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_128);
  QObject::connect(local_130,param_1[0x16],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_130);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_118);
  return;
}

