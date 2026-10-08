
void FUN_100578ca0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QPixmap *pQVar2;
  uint uVar3;
  QGridLayout *pQVar4;
  QLabel *pQVar5;
  undefined8 *puVar6;
  QStackedWidget *this;
  QWidget *pQVar7;
  QHBoxLayout *pQVar8;
  QPushButton *pQVar9;
  QProgressBar *this_00;
  undefined *puVar10;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QFont local_140 [16];
  uint local_130 [2];
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  uint local_e8 [2];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QFont local_d0 [16];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QPixmap local_b0 [32];
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  undefined8 local_60;
  QArrayData *local_58;
  QIcon local_50 [8];
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
      if (*(int *)local_40 != 0) goto LAB_100578cf6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100578cf6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e024ae);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100578d4d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100578d4d:
  local_38 = true;
  uStack_37 = 0x14e000002;
  QWidget::resize(param_2);
  QIcon::QIcon(local_50);
  QString::fromUtf8_helper((char *)&local_58,0x1e024d0);
  local_60 = 0xffffffffffffffff;
  QIcon::addFile(local_50,&local_58,&local_60,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100578dd6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100578dd6:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_70);
  QVariant::QVariant(&local_80,false);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_80);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_88,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100578e92;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100578e92:
  QLayout::setContentsMargins((int)*param_1,-1,-1,-1);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_90,0x1e024eb);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100578f27;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100578f27:
  pQVar2 = (QPixmap *)param_1[1];
  QString::fromUtf8_helper((char *)&local_b8,0x1e024f5);
  QPixmap::QPixmap(local_b0,&local_b8,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100578fab;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100578fab:
  QLabel::setAlignment(param_1[1],0x84);
  QLabel::setIndent((int)param_1[1]);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0xc00000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[2] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,1,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c0,0x1dc128f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005790f2;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005790f2:
  QFont::QFont(local_d0);
  QFont::setPointSize((int)local_d0);
  QWidget::setFont((QFont *)param_1[3]);
  QLabel::setAlignment(param_1[3],0x84);
  QLabel::setIndent((int)param_1[3]);
  QGridLayout::addWidget(*param_1,param_1[3],2,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d8,0x1dfa560);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005791dc;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1005791dc:
  QLabel::setAlignment(param_1[4],0x84);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QGridLayout::addWidget(*param_1,param_1[4],3,0,1,1,0);
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_2);
  param_1[5] = this;
  QString::fromUtf8_helper((char *)&local_e0,0x1e02513);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579297;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100579297:
  local_e8[0] = 0x550000;
  QSizePolicy::setControlType(local_e8,1);
  local_e8[0] = local_e8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_f0,0x1e00cfd);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579360;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100579360:
  uVar3 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[6]);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_f8,0x1df027f);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579404;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100579404:
  QLayout::setSizeConstraint(param_1[7]);
  QLayout::setContentsMargins((int)param_1[7],0,10,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[8] = puVar6;
  (**(code **)(*(long *)param_1[7] + 0x70))((long *)param_1[7],puVar6);
  pQVar9 = operator_new(0x30);
  QPushButton::QPushButton(pQVar9,(QWidget *)param_1[6]);
  param_1[9] = pQVar9;
  QString::fromUtf8_helper((char *)&local_100,0x1e00d0e);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057950b;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10057950b:
  QBoxLayout::addWidget(param_1[7],param_1[9],0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  (**(code **)(*(long *)param_1[7] + 0x70))((long *)param_1[7],puVar6);
  QStackedWidget::addWidget((QWidget *)param_1[5]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[0xb] = pQVar7;
  QString::fromUtf8_helper((char *)&local_108,0x1e00d1a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579606;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100579606:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[0xb]);
  param_1[0xc] = pQVar4;
  QString::fromUtf8_helper((char *)&local_110,0x1e00d29);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579680;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100579680:
  QGridLayout::setVerticalSpacing((int)param_1[0xc]);
  QLayout::setContentsMargins((int)param_1[0xc],0,10,0);
  this_00 = operator_new(0x30);
  QProgressBar::QProgressBar(this_00,(QWidget *)param_1[0xb]);
  param_1[0xd] = this_00;
  QString::fromUtf8_helper((char *)&local_118,0x1e00d3e);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057971d;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10057971d:
  QGridLayout::addWidget(param_1[0xc],param_1[0xd],1,0,1,1,0);
  pQVar9 = operator_new(0x30);
  QPushButton::QPushButton(pQVar9,(QWidget *)param_1[0xb]);
  param_1[0xe] = pQVar9;
  QString::fromUtf8_helper((char *)&local_120,0x1dc12ca);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005797be;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005797be:
  QGridLayout::addWidget(param_1[0xc],param_1[0xe],1,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0xb],0);
  param_1[0xf] = pQVar5;
  QString::fromUtf8_helper((char *)&local_128,0x1e00d53);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579864;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100579864:
  local_130[0] = 0x50000;
  QSizePolicy::setControlType(local_130,1);
  local_130[0] = local_130[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_130[0] = local_130[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  QFont::QFont(local_140);
  QFont::setPointSize((int)local_140);
  QWidget::setFont((QFont *)param_1[0xf]);
  QGridLayout::addWidget(param_1[0xc],param_1[0xf],0,0,1,1,0);
  QStackedWidget::addWidget((QWidget *)param_1[5]);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,0,0);
  param_1[0x10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_148,0x1e00d68);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_10057998e;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10057998e:
  pQVar8 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar8,(QWidget *)param_1[0x10]);
  param_1[0x11] = pQVar8;
  QString::fromUtf8_helper((char *)&local_150,0x1df0473);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579a0e;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100579a0e:
  QLayout::setContentsMargins((int)param_1[0x11],0,10,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar6;
  (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],puVar6);
  pQVar9 = operator_new(0x30);
  QPushButton::QPushButton(pQVar9,(QWidget *)param_1[0x10]);
  param_1[0x13] = pQVar9;
  QString::fromUtf8_helper((char *)&local_158,0x1e00d91);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_100579b0f;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100579b0f:
  QBoxLayout::addWidget(param_1[0x11],param_1[0x13],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar6;
  (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],puVar6);
  QStackedWidget::addWidget((QWidget *)param_1[5]);
  QGridLayout::addWidget(*param_1,param_1[5],4,0,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,5,0,1,1,0);
  QGridLayout::setRowStretch((int)*param_1,5);
  FUN_10057a340(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[5]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_140);
  QFont::~QFont(local_d0);
  QIcon::~QIcon(local_50);
  return;
}

