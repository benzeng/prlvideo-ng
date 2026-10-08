
void FUN_100633ed0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QWidget *pQVar6;
  QGridLayout *this;
  QCheckBox *this_00;
  QStackedWidget *this_01;
  QHBoxLayout *pQVar7;
  CProgressIndicator *pCVar8;
  QLabel *pQVar9;
  undefined8 *puVar10;
  QPushButton *pQVar11;
  undefined *puVar12;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QPixmap local_110 [32];
  QArrayData *local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  QArrayData *local_d0;
  uint local_c8 [2];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  uint local_a0 [2];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  uint local_50 [2];
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
      if (*(int *)local_40 != 0) goto LAB_100633f26;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100633f26:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e09396);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100633f7d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100633f7d:
  local_38 = true;
  uStack_37 = 0xbd000002;
  QWidget::resize(param_2);
  local_50[0] = 0x500000;
  QSizePolicy::setControlType(local_50,1);
  local_50[0] = local_50[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e19);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634043;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100634043:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_60,0x1e093aa);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006340b4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006340b4:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_1[1]);
  param_1[2] = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d5e);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634124;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100634124:
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  this_00 = operator_new(0x30);
  QCheckBox::QCheckBox(this_00,(QWidget *)param_1[1]);
  param_1[3] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1e093b3);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006341a6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006341a6:
  QGridLayout::addWidget(param_1[2],param_1[3],2,1,1,1,0);
  this_01 = operator_new(0x30);
  QStackedWidget::QStackedWidget(this_01,(QWidget *)param_1[1]);
  param_1[4] = this_01;
  QString::fromUtf8_helper((char *)&local_78,0x1e02513);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634240;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100634240:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1e093c3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006342b0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006342b0:
  QStackedWidget::addWidget((QWidget *)param_1[4]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1df3d04);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063432d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10063432d:
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[6]);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1df027f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006343a6;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1006343a6:
  QLayout::setContentsMargins((int)param_1[7],0,0,0);
  pCVar8 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar8,param_1[6],1);
  param_1[8] = pCVar8;
  QString::fromUtf8_helper((char *)&local_98,0x1df0c9b);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634436;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100634436:
  local_a0[0] = 0x150000;
  QSizePolicy::setControlType(local_a0,1);
  local_a0[0] = local_a0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_a0[0] = local_a0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QWidget::setMinimumSize((int)param_1[8],0);
  QWidget::setMaximumSize((int)param_1[8],0xffffff);
  QBoxLayout::addWidget(param_1[7],param_1[8],0);
  QStackedWidget::addWidget((QWidget *)param_1[4]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a8,0x1e093d5);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10063453f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10063453f:
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[9]);
  param_1[10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df025a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006345b8;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1006345b8:
  QLayout::setContentsMargins((int)param_1[10],0,0,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[9],0);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b8,0x1e093e1);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634645;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100634645:
  QWidget::setMaximumSize((int)param_1[0xb],0x20);
  QLabel::setAlignment(param_1[0xb],0x84);
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[9],0);
  param_1[0xc] = pQVar9;
  QString::fromUtf8_helper((char *)&local_c0,0x1e093ef);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006346f2;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006346f2:
  local_c8[0] = 0x570000;
  QSizePolicy::setControlType(local_c8,1);
  local_c8[0] = local_c8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_c8[0] = local_c8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  QBoxLayout::addWidget(param_1[10],param_1[0xc],0,0);
  QStackedWidget::addWidget((QWidget *)param_1[4]);
  QGridLayout::addWidget(param_1[2],param_1[4],3,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[1],0);
  param_1[0xd] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d0,0x1e093fb);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634804;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100634804:
  uVar4 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QWidget::setMinimumSize((int)param_1[0xd],0x1a4);
  QWidget::setMaximumSize((int)param_1[0xd],0x1a4);
  QLabel::setWordWrap(SUB81(param_1[0xd],0));
  QGridLayout::addWidget(param_1[2],param_1[0xd],0,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[1],0);
  param_1[0xe] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d8,0x1e0940a);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006348fb;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1006348fb:
  local_e0[0] = 0x700000;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = local_e0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  QWidget::setMinimumSize((int)param_1[0xe],0x1a4);
  QWidget::setMaximumSize((int)param_1[0xe],0x1a4);
  QLabel::setWordWrap(SUB81(param_1[0xe],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[0xe],0));
  QLabel::setTextInteractionFlags(param_1[0xe],5);
  QGridLayout::addWidget(param_1[2],param_1[0xe],1,1,1,1,0);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[0xf] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_e8,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634a44;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100634a44:
  QLayout::setContentsMargins((int)param_1[0xf],0,0,6);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[1],0);
  param_1[0x10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_f0,0x1df07d5);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634ad7;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100634ad7:
  QWidget::setMinimumSize((int)param_1[0x10],0x40);
  QWidget::setMaximumSize((int)param_1[0x10],0x40);
  pQVar3 = (QPixmap *)param_1[0x10];
  QString::fromUtf8_helper((char *)&local_118,0x1e09418);
  QPixmap::QPixmap(local_110,&local_118,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_110);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634b90;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100634b90:
  QLabel::setScaledContents(SUB81(param_1[0x10],0));
  QLabel::setAlignment(param_1[0x10],0x84);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x10],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar10 = puVar12;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar10;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar10);
  QGridLayout::addLayout(param_1[2],param_1[0xf],0,0,4,1,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[0x12] = pQVar7;
  QString::fromUtf8_helper((char *)&local_120,0x1e0943f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634ce7;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100634ce7:
  pQVar11 = operator_new(0x30);
  QPushButton::QPushButton(pQVar11,(QWidget *)param_2);
  param_1[0x13] = pQVar11;
  QString::fromUtf8_helper((char *)&local_128,0x1e0944f);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634d66;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100634d66:
  QPushButton::setAutoDefault(SUB81(param_1[0x13],0));
  QBoxLayout::addWidget(param_1[0x12],param_1[0x13],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar12;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar10;
  (**(code **)(*(long *)param_1[0x12] + 0x70))((long *)param_1[0x12],puVar10);
  pQVar11 = operator_new(0x30);
  QPushButton::QPushButton(pQVar11,(QWidget *)param_2);
  param_1[0x15] = pQVar11;
  QString::fromUtf8_helper((char *)&local_130,0x1e0945e);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634e70;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100634e70:
  QPushButton::setAutoDefault(SUB81(param_1[0x15],0));
  QBoxLayout::addWidget(param_1[0x12],param_1[0x15],0,0);
  pQVar11 = operator_new(0x30);
  QPushButton::QPushButton(pQVar11,(QWidget *)param_2);
  param_1[0x16] = pQVar11;
  QString::fromUtf8_helper((char *)&local_138,0x1e09466);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_100634f10;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100634f10:
  QPushButton::setAutoDefault(SUB81(param_1[0x16],0));
  QBoxLayout::addWidget(param_1[0x12],param_1[0x16],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[0x12]);
  FUN_100635680(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[4]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

