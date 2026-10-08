
void FUN_10058d490(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QWidget *pQVar4;
  QVBoxLayout *pQVar5;
  QHBoxLayout *pQVar6;
  undefined8 *puVar7;
  QPushButton *this;
  CHelpButton *this_00;
  QFrame *pQVar8;
  CAuthorizationLock *pCVar9;
  CProgressIndicator *pCVar10;
  QDialogButtonBox *this_01;
  undefined *puVar11;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined1 local_e0 [16];
  QBrush local_d0 [8];
  undefined1 local_c8 [16];
  QBrush local_b8 [8];
  QPalette local_b0 [16];
  QArrayData *local_a0;
  uint local_98 [2];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  uint local_68 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10058d4e6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10058d4e6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1db97f9);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10058d53d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10058d53d:
  local_38 = true;
  uStack_37 = 0x120000001;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1df1643);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d5c7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10058d5c7:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)*param_1);
  param_1[1] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_58,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d644;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10058d644:
  QLayout::setContentsMargins((int)param_1[1],0,0,0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,*param_1,0);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d6c7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10058d6c7:
  local_68[0] = 0x350000;
  QSizePolicy::setControlType(local_68,1);
  local_68[0] = local_68[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_68[0] = local_68[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,*param_1,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1e02b17);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d789;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10058d789:
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[3]);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1df027f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d7f9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10058d7f9:
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[5] = puVar7;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar7);
  this = operator_new(0x30);
  QPushButton::QPushButton(this,(QWidget *)param_1[3]);
  param_1[6] = this;
  QString::fromUtf8_helper((char *)&local_80,0x1df7292);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d8db;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10058d8db:
  QBoxLayout::addWidget(param_1[4],param_1[6],0,0);
  this_00 = operator_new(0x38);
  CHelpButton::CHelpButton(this_00,(QWidget *)param_1[3]);
  param_1[7] = this_00;
  QString::fromUtf8_helper((char *)&local_88,0x1dd6d8f);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d95c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10058d95c:
  QBoxLayout::addWidget(param_1[4],param_1[7],0,0);
  QBoxLayout::addWidget(param_1[1],param_1[3],0,0);
  pQVar8 = operator_new(0x30);
  QFrame::QFrame(pQVar8,*param_1,0);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_90,0x1df165f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058d9f8;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10058d9f8:
  local_98[0] = 0x510000;
  QSizePolicy::setControlType(local_98,1);
  local_98[0] = local_98[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QFrame::setFrameShape(param_1[8],4);
  QFrame::setFrameShadow(param_1[8],0x30);
  QBoxLayout::addWidget(param_1[1],param_1[8],0,0);
  pQVar8 = operator_new(0x30);
  QFrame::QFrame(pQVar8,*param_1,0);
  param_1[9] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a0,0x1e02b2c);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058daee;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10058daee:
  QPalette::QPalette(local_b0);
  QColor::setRgb((int)local_c8,0xff,0xff,0xff);
  QBrush::QBrush(local_b8,local_c8,1);
  QBrush::setStyle(local_b8,1);
  QPalette::setBrush(local_b0,0,9,local_b8);
  QColor::setRgb((int)local_e0,0xe8,0x91,0x73);
  QBrush::QBrush(local_d0,local_e0,1);
  QBrush::setStyle(local_d0,1);
  QPalette::setBrush(local_b0,0,10,local_d0);
  QPalette::setBrush(local_b0,2,9,local_b8);
  QPalette::setBrush(local_b0,2,10,local_d0);
  QPalette::setBrush(local_b0,1,9,local_d0);
  QPalette::setBrush(local_b0,1,10,local_d0);
  QWidget::setPalette((QPalette *)param_1[9]);
  QWidget::setAutoFillBackground(SUB81(param_1[9],0));
  pQVar6 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar6,(QWidget *)param_1[9]);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1dc12b3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058dccb;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10058dccb:
  QLayout::setContentsMargins((int)param_1[10],0x12,-1,0x12);
  pCVar9 = operator_new(0x38);
  CAuthorizationLock::CAuthorizationLock(pCVar9,param_1[9],2);
  param_1[0xb] = pCVar9;
  QString::fromUtf8_helper((char *)&local_f0,0x1e02b3b);
  QObject::setObjectName((QString *)pCVar9);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058dd68;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10058dd68:
  QWidget::setMinimumSize((int)param_1[0xb],10);
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0);
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
  param_1[0xc] = puVar7;
  (**(code **)(*(long *)param_1[10] + 0x70))((long *)param_1[10],puVar7);
  pCVar10 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar10,param_1[9],1);
  param_1[0xd] = pCVar10;
  QString::fromUtf8_helper((char *)&local_f8,0x1df0c9b);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058de75;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10058de75:
  QBoxLayout::addWidget(param_1[10],param_1[0xd],0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_1[9],0);
  param_1[0xe] = pQVar4;
  QString::fromUtf8_helper((char *)&local_100,0x1e02b48);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058df02;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10058df02:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0xe]);
  param_1[0xf] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_108,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058df8a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10058df8a:
  QLayout::setContentsMargins((int)param_1[0xf],0,0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x10000008a;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x310000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar7;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar7);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_1[0xe]);
  param_1[0x11] = this_01;
  QString::fromUtf8_helper((char *)&local_110,0x1dc15a6);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_10058e089;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10058e089:
  QDialogButtonBox::setStandardButtons(param_1[0x11],0x400400);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x11],0,0);
  QBoxLayout::addWidget(param_1[10],param_1[0xe],0,0);
  QBoxLayout::setStretch((int)param_1[10],0);
  QBoxLayout::addWidget(param_1[1],param_1[9],0,0);
  QBoxLayout::setStretch((int)param_1[1],0);
  QMainWindow::setCentralWidget((QWidget *)param_2);
  FUN_10058e680(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QBrush::~QBrush(local_d0);
  QBrush::~QBrush(local_b8);
  QPalette::~QPalette(local_b0);
  return;
}

