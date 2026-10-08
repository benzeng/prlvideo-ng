
void FUN_1004e14b0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QGridLayout *this;
  QPushButton *this_00;
  undefined8 *puVar3;
  QVBoxLayout *pQVar4;
  QString *pQVar5;
  QWidget *pQVar6;
  QHBoxLayout *pQVar7;
  CImageButton *pCVar8;
  QStackedWidget *this_01;
  undefined *puVar9;
  QArrayData *local_118;
  uint local_110 [2];
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  QArrayData *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  QArrayData *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  QArrayData *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  QArrayData *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  QArrayData *local_98;
  QIcon local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  uint local_70 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1004e1506;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004e1506:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dfb024);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004e155d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004e155d:
  local_38 = true;
  uStack_37 = 0x1a4000002;
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
      if (local_38) goto LAB_1004e15e5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004e15e5:
  this_00 = operator_new(0x30);
  QPushButton::QPushButton(this_00,(QWidget *)param_2);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1df7292);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1654;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004e1654:
  QGridLayout::addWidget(*param_1,param_1[1],1,2,1,1,0);
  puVar3 = operator_new(0x28);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar3 = puVar9;
  *(undefined8 *)((long)puVar3 + 0xc) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar3 + 0x14,1);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  param_1[2] = puVar3;
  QGridLayout::addItem(*param_1,puVar3,1,1,1,1,0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[3] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar5 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_60,0x1dc1597);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e177e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004e177e:
  pQVar5 = operator_new(0x38);
  FUN_100138970(pQVar5,param_2);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dfb039);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e17ed;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004e17ed:
  local_70[0] = 0x750000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[4],0));
  QBoxLayout::addWidget(param_1[3],param_1[4],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1dfb047);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e18bd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004e18bd:
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[5]);
  param_1[6] = pQVar7;
  QLayout::setContentsMargins((int)pQVar7,0,0,0);
  pQVar5 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_80,0x1dfb057);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1942;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004e1942:
  pCVar8 = operator_new(0x60);
  CImageButton::CImageButton(pCVar8,(QWidget *)param_1[5]);
  param_1[7] = pCVar8;
  QString::fromUtf8_helper((char *)&local_88,0x1dfb05a);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e19b2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004e19b2:
  QWidget::setMinimumSize((int)param_1[7],0x19);
  QWidget::setMaximumSize((int)param_1[7],0x19);
  QIcon::QIcon(local_90);
  QString::fromUtf8_helper((char *)&local_98,0x1dfb062);
  local_a0 = 0xffffffffffffffff;
  QIcon::addFile(local_90,&local_98,&local_a0,0,1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1a5f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004e1a5f:
  QAbstractButton::setIcon((QIcon *)param_1[7]);
  local_a8 = 0x19;
  local_a4 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[7]);
  QBoxLayout::addWidget(param_1[6],param_1[7],0);
  pCVar8 = operator_new(0x60);
  CImageButton::CImageButton(pCVar8,(QWidget *)param_1[5]);
  param_1[8] = pCVar8;
  QString::fromUtf8_helper((char *)&local_b0,0x1dfb08b);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1b1e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004e1b1e:
  QWidget::setMinimumSize((int)param_1[8],0x19);
  QWidget::setMaximumSize((int)param_1[8],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[8]);
  local_b8 = 0x19;
  local_b4 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[8]);
  QBoxLayout::addWidget(param_1[6],param_1[8],0);
  pCVar8 = operator_new(0x60);
  CImageButton::CImageButton(pCVar8,(QWidget *)param_1[5]);
  param_1[9] = pCVar8;
  QString::fromUtf8_helper((char *)&local_c0,0x1dfb096);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1c03;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004e1c03:
  QWidget::setMinimumSize((int)param_1[9],0x19);
  QWidget::setMaximumSize((int)param_1[9],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[9]);
  local_c8 = 0x19;
  local_c4 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[9]);
  QBoxLayout::addWidget(param_1[6],param_1[9],0);
  pCVar8 = operator_new(0x60);
  CImageButton::CImageButton(pCVar8,(QWidget *)param_1[5]);
  param_1[10] = pCVar8;
  QString::fromUtf8_helper((char *)&local_d0,0x1dfb0a0);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1ce8;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004e1ce8:
  QWidget::setMinimumSize((int)param_1[10],0x19);
  QWidget::setMaximumSize((int)param_1[10],0xffffff);
  QAbstractButton::setIcon((QIcon *)param_1[10]);
  local_d8 = 0x19;
  local_d4 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[10]);
  QBoxLayout::addWidget(param_1[6],param_1[10],0);
  pCVar8 = operator_new(0x60);
  CImageButton::CImageButton(pCVar8,(QWidget *)param_1[5]);
  param_1[0xb] = pCVar8;
  QString::fromUtf8_helper((char *)&local_e0,0x1dfb0aa);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1dcd;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004e1dcd:
  QWidget::setMinimumSize((int)param_1[0xb],0x19);
  QWidget::setMaximumSize((int)param_1[0xb],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xb]);
  local_e8 = 0x19;
  local_e4 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xb]);
  QBoxLayout::addWidget(param_1[6],param_1[0xb],0);
  QBoxLayout::addWidget(param_1[3],param_1[5],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_f0,0x1df0c57);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1ec4;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1004e1ec4:
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[0xc]);
  param_1[0xd] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  QLayout::setContentsMargins((int)param_1[0xd],0,0,0);
  pQVar5 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_f8,0x1df025a);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e1f5e;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1004e1f5e:
  QLayout::setSizeConstraint(param_1[0xd],0);
  QBoxLayout::addWidget(param_1[3],param_1[0xc],0,0);
  QGridLayout::addLayout(*param_1,param_1[3],0,0,2,1,0);
  puVar3 = operator_new(0x28);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = puVar9;
  *(undefined8 *)((long)puVar3 + 0xc) = 3;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar3 + 0x14,1);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar3;
  QGridLayout::addItem(*param_1,puVar3,1,3,1,1,0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[0xf] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar5 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_100,0x1dd6e19);
  QObject::setObjectName(pQVar5);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e20a0;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004e20a0:
  QLayout::setContentsMargins((int)param_1[0xf],-1,-1,6);
  this_01 = operator_new(0x30);
  QStackedWidget::QStackedWidget(this_01,(QWidget *)param_2);
  param_1[0x10] = this_01;
  QString::fromUtf8_helper((char *)&local_108,0x1dfb0b4);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e213a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004e213a:
  local_110[0] = 0x750000;
  QSizePolicy::setControlType(local_110,1);
  local_110[0] = CONCAT22(local_110[0]._2_2_,0x100);
  uVar2 = QWidget::sizePolicy();
  local_110[0] = local_110[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QFrame::setFrameShape(param_1[0x10],0);
  QFrame::setLineWidth((int)param_1[0x10]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[0x11] = pQVar6;
  QString::fromUtf8_helper((char *)&local_118,0x1dfb0c8);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004e2227;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1004e2227:
  QStackedWidget::addWidget((QWidget *)param_1[0x10]);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x10],0,0);
  QGridLayout::addLayout(*param_1,param_1[0xf],0,1,1,3,0);
  FUN_1004e2850(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[0x10]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_90);
  return;
}

