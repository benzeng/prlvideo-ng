
void FUN_1001a35e0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QPixmap *pQVar2;
  uint uVar3;
  QGridLayout *this;
  QHBoxLayout *this_00;
  undefined8 *puVar4;
  QLabel *pQVar5;
  QVBoxLayout *this_01;
  CProgressIndicator *pCVar6;
  QPushButton *pQVar7;
  undefined *puVar8;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QFont local_128 [16];
  QArrayData *local_118;
  QFont local_110 [16];
  uint local_100 [2];
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QPixmap local_e0 [32];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QPixmap local_b0 [32];
  QArrayData *local_90;
  QArrayData *local_88;
  QPixmap local_80 [32];
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
      if (*(int *)local_40 != 0) goto LAB_1001a3636;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a3636:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dd67cf);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1001a368d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1001a368d:
  local_38 = true;
  uStack_37 = 0xfe000001;
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
      if (local_38) goto LAB_1001a3715;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001a3715:
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dc12b3);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3781;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001a3781:
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x2900000015;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[2] = puVar4;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar4);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1dd67f0);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3864;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001a3864:
  pQVar2 = (QPixmap *)param_1[3];
  QString::fromUtf8_helper((char *)&local_88,0x1dd67fd);
  QPixmap::QPixmap(local_80,&local_88,0,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a38d5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1001a38d5:
  QBoxLayout::addWidget(param_1[1],param_1[3],0,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_90,0x1dd681a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3960;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001a3960:
  pQVar2 = (QPixmap *)param_1[4];
  QString::fromUtf8_helper((char *)&local_b8,0x1dd6822);
  QPixmap::QPixmap(local_b0,&local_b8,0,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a39e3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1001a39e3:
  QBoxLayout::addWidget(param_1[1],param_1[4],0,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c0,0x1dd6841);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3a6e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1001a3a6e:
  pQVar2 = (QPixmap *)param_1[5];
  QString::fromUtf8_helper((char *)&local_e8,0x1dd684d);
  QPixmap::QPixmap(local_e0,&local_e8,0,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3afb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1001a3afb:
  QBoxLayout::addWidget(param_1[1],param_1[5],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x2900000015;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[6] = puVar4;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar4);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,3,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar8;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x800000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[7] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,1,0,1,1,0);
  this_01 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_01);
  param_1[8] = this_01;
  QString::fromUtf8_helper((char *)&local_f0,0x1dc1284);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3c80;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1001a3c80:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[9] = pQVar5;
  QString::fromUtf8_helper((char *)&local_f8,0x1dd686e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3cfa;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1001a3cfa:
  local_100[0] = 0x570000;
  QSizePolicy::setControlType(local_100,1);
  local_100[0] = local_100[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_100[0] = local_100[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QFont::QFont(local_110);
  QFont::setWeight((int)local_110);
  QFont::setWeight((int)local_110);
  QWidget::setFont((QFont *)param_1[9]);
  QLabel::setWordWrap(SUB81(param_1[9],0));
  QBoxLayout::addWidget(param_1[8],param_1[9],0,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_118,0x1dc12be);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3e20;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1001a3e20:
  QFont::QFont(local_128);
  QFont::setPointSize((int)local_128);
  QWidget::setFont((QFont *)param_1[10]);
  QWidget::setLayoutDirection(param_1[10],0);
  QLabel::setAlignment(param_1[10],0x88);
  QLabel::setWordWrap(SUB81(param_1[10],0));
  QBoxLayout::addWidget(param_1[8],param_1[10],0,0);
  pCVar6 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar6,param_2,1);
  param_1[0xb] = pCVar6;
  QString::fromUtf8_helper((char *)&local_130,0x1dd6876);
  QObject::setObjectName((QString *)pCVar6);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a3f03;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1001a3f03:
  QBoxLayout::addWidget(param_1[8],param_1[0xb],0,0);
  QGridLayout::addLayout(*param_1,param_1[8],2,0,1,3,0);
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
  param_1[0xc] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,3,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[0xd] = pQVar7;
  QString::fromUtf8_helper((char *)&local_138,0x1dc12ca);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a4038;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1001a4038:
  QPushButton::setAutoDefault(SUB81(param_1[0xd],0));
  QGridLayout::addWidget(*param_1,param_1[0xd],4,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[0xe] = pQVar7;
  QString::fromUtf8_helper((char *)&local_140,0x1dd6881);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a40e5;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1001a40e5:
  QGridLayout::addWidget(*param_1,param_1[0xe],4,2,1,1,0);
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
  param_1[0xf] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,4,0,1,1,0);
  FUN_1001a4710(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_128);
  QFont::~QFont(local_110);
  return;
}

