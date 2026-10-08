
void FUN_1007e7870(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QGridLayout *this;
  QWidget *pQVar5;
  QHBoxLayout *pQVar6;
  undefined8 *puVar7;
  QPushButton *pQVar8;
  QStackedWidget *this_00;
  CProgressIndicator *pCVar9;
  QVBoxLayout *pQVar10;
  QLabel *pQVar11;
  undefined *puVar12;
  uint local_158 [2];
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QPixmap local_138 [32];
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  uint local_f8 [2];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QPixmap local_d8 [32];
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
      if (*(int *)local_40 != 0) goto LAB_1007e78c6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007e78c6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e19846);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1007e791d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1007e791d:
  local_38 = true;
  uStack_37 = 0x5f000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QGridLayout::setSpacing((int)this);
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dd67e5);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e79c3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007e79c3:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1e1985a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7a34;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007e7a34:
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[1]);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_60,0x1df027f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7aa4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007e7aa4:
  QLayout::setContentsMargins((int)param_1[2],-1,0,-1);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar12;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x14000000d5;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[3] = puVar7;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar7);
  pQVar8 = operator_new(0x30);
  QPushButton::QPushButton(pQVar8,(QWidget *)param_1[1]);
  param_1[4] = pQVar8;
  QString::fromUtf8_helper((char *)&local_68,0x1e1986a);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7ba1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007e7ba1:
  QBoxLayout::addWidget(param_1[2],param_1[4],0,0);
  pQVar8 = operator_new(0x30);
  QPushButton::QPushButton(pQVar8,(QWidget *)param_1[1]);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_70,0x1e19877);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7c22;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007e7c22:
  QBoxLayout::addWidget(param_1[2],param_1[5],0,0);
  QGridLayout::addWidget(*param_1,param_1[1],1,0,1,2,0);
  this_00 = operator_new(0x30);
  QStackedWidget::QStackedWidget(this_00,(QWidget *)param_2);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1dd652b);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7cc8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007e7cc8:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,0,0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_80,0x1e19883);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7d38;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007e7d38:
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[7]);
  param_1[8] = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  QLayout::setContentsMargins((int)param_1[8],0xc,0xc,0xc);
  pQVar2 = (QString *)param_1[8];
  QString::fromUtf8_helper((char *)&local_88,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7dd4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007e7dd4:
  pCVar9 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar9,param_1[7],1);
  param_1[9] = pCVar9;
  QString::fromUtf8_helper((char *)&local_90,0x1e19890);
  QObject::setObjectName((QString *)pCVar9);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7e52;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007e7e52:
  QBoxLayout::addWidget(param_1[8],param_1[9],0);
  QStackedWidget::addWidget((QWidget *)param_1[6]);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,0,0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1e198a2);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7ee9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007e7ee9:
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[10]);
  param_1[0xb] = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  QLayout::setContentsMargins((int)param_1[0xb],0,0,0);
  pQVar2 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_a0,0x1df040e);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e7f85;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1007e7f85:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10);
  param_1[0xc] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar2 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_a8,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8008;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007e8008:
  QLayout::setContentsMargins((int)param_1[0xc],10,10,-1);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[10],0);
  param_1[0xd] = pQVar11;
  QString::fromUtf8_helper((char *)&local_b0,0x1e198ac);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e80a1;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1007e80a1:
  local_b8[0] = 0;
  QSizePolicy::setControlType(local_b8,1);
  local_b8[0] = local_b8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  pQVar3 = (QPixmap *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_e0,0x1e198b8);
  QPixmap::QPixmap(local_d8,&local_e0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8173;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1007e8173:
  QBoxLayout::addWidget(param_1[0xc],param_1[0xd],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar12;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x110000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar7;
  (**(code **)(*(long *)param_1[0xc] + 0x70))((long *)param_1[0xc],puVar7);
  QBoxLayout::addLayout((QLayout *)param_1[0xb],(int)param_1[0xc]);
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6);
  param_1[0xf] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1df04e1);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8269;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1007e8269:
  QLayout::setContentsMargins((int)param_1[0xf],-1,0x10,-1);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[10],0);
  param_1[0x10] = pQVar11;
  QString::fromUtf8_helper((char *)&local_f0,0x1e198df);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8305;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1007e8305:
  local_f8[0] = 0x170000;
  QSizePolicy::setControlType(local_f8,1);
  local_f8[0] = local_f8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_f8[0] = local_f8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QLabel::setAlignment(param_1[0x10],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x10],0));
  QBoxLayout::addWidget(param_1[0xf],param_1[0x10],0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar12;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar7;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar7);
  QBoxLayout::addLayout((QLayout *)param_1[0xb],(int)param_1[0xf]);
  QStackedWidget::addWidget((QWidget *)param_1[6]);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,0,0);
  param_1[0x12] = pQVar5;
  QString::fromUtf8_helper((char *)&local_100,0x1e198ea);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e848c;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1007e848c:
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[0x12]);
  param_1[0x13] = pQVar6;
  QLayout::setContentsMargins((int)pQVar6,0,0,0);
  pQVar2 = (QString *)param_1[0x13];
  QString::fromUtf8_helper((char *)&local_108,0x1df0473);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8523;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1007e8523:
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10);
  param_1[0x14] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar2 = (QString *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_110,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e85ac;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1007e85ac:
  QLayout::setContentsMargins((int)param_1[0x14],10,10,-1);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[0x12],0);
  param_1[0x15] = pQVar11;
  QString::fromUtf8_helper((char *)&local_118,0x1e198f6);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e864e;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1007e864e:
  uVar4 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x15]);
  pQVar3 = (QPixmap *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_140,0x1e198b8);
  QPixmap::QPixmap(local_138,&local_140,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_138);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8704;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1007e8704:
  QBoxLayout::addWidget(param_1[0x14],param_1[0x15],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar12;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar7;
  (**(code **)(*(long *)param_1[0x14] + 0x70))((long *)param_1[0x14],puVar7);
  QBoxLayout::addLayout((QLayout *)param_1[0x13],(int)param_1[0x14]);
  pQVar10 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar10);
  param_1[0x17] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar2 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_148,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8820;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1007e8820:
  QLayout::setContentsMargins((int)param_1[0x17],-1,0x10,10);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar12;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar7;
  (**(code **)(*(long *)param_1[0x17] + 0x70))((long *)param_1[0x17],puVar7);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[0x12],0);
  param_1[0x19] = pQVar11;
  QString::fromUtf8_helper((char *)&local_150,0x1e19904);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007e8929;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1007e8929:
  local_158[0] = 0x570000;
  QSizePolicy::setControlType(local_158,1);
  local_158[0] = local_158[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_158[0] = local_158[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x19]);
  QLabel::setAlignment(param_1[0x19],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x19],0));
  QBoxLayout::addWidget(param_1[0x17],param_1[0x19],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x13],(int)param_1[0x17]);
  QStackedWidget::addWidget((QWidget *)param_1[6]);
  QGridLayout::addWidget(*param_1,param_1[6],0,0,1,1,0);
  FUN_1007e91d0(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[6]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

