
void FUN_10057f360(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QLabel *pQVar5;
  QWidget *pQVar6;
  QTreeWidget *this;
  QHBoxLayout *this_00;
  CImageButton *pCVar7;
  QDialogButtonBox *this_01;
  Connection local_120 [8];
  Connection local_118 [8];
  QArrayData *local_110;
  undefined4 local_108;
  undefined4 local_104;
  QArrayData *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0 [2];
  QArrayData *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  QArrayData *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  QArrayData *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  QArrayData *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  QArrayData *local_a0;
  QIcon local_98 [8];
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
      if (*(int *)local_38 != 0) goto LAB_10057f3b4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10057f3b4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e026d0);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10057f40b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10057f40b:
  local_30 = true;
  uStack_2f = 0x107000001;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1597);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f493;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10057f493:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f504;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10057f504:
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_58,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f585;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10057f585:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[2]);
  param_1[3] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  QLayout::setContentsMargins((int)param_1[3],0,0,0);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_60,0x1dc1284);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f615;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10057f615:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[2],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_68,0x1df496a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f687;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10057f687:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[4]);
  param_1[5] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  QLayout::setContentsMargins((int)param_1[5],0,0,0);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_70,0x1dd6546);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f717;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10057f717:
  this = operator_new(0x30);
  QTreeWidget::QTreeWidget(this,(QWidget *)param_1[4]);
  param_1[6] = this;
  QString::fromUtf8_helper((char *)&local_78,0x1e026e4);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f787;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10057f787:
  QWidget::setMinimumSize((int)param_1[6],0);
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[6],0));
  QTreeView::setRootIsDecorated(SUB81(param_1[6],0));
  QTreeView::setAllColumnsShowFocus(SUB81(param_1[6],0));
  QBoxLayout::addWidget(param_1[5],param_1[6],0);
  QBoxLayout::addWidget(param_1[3],param_1[4],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[2],0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1dfb047);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f852;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10057f852:
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00,(QWidget *)param_1[7]);
  param_1[8] = this_00;
  QLayout::setContentsMargins((int)this_00,0,0,0);
  pQVar2 = (QString *)param_1[8];
  QString::fromUtf8_helper((char *)&local_88,0x1dc12b3);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f8d7;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10057f8d7:
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[7]);
  param_1[9] = pCVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1dfb05a);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f950;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10057f950:
  QWidget::setMinimumSize((int)param_1[9],0x19);
  QWidget::setMaximumSize((int)param_1[9],0x19);
  QIcon::QIcon(local_98);
  QString::fromUtf8_helper((char *)&local_a0,0x1e011c3);
  local_a8 = 0xffffffffffffffff;
  QIcon::addFile(local_98,&local_a0,&local_a8,0,1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057f9fd;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10057f9fd:
  QAbstractButton::setIcon((QIcon *)param_1[9]);
  local_b0 = 0x19;
  local_ac = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[9]);
  QBoxLayout::addWidget(param_1[8],param_1[9],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[7]);
  param_1[10] = pCVar7;
  QString::fromUtf8_helper((char *)&local_b8,0x1dfb08b);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057fabc;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10057fabc:
  QWidget::setMinimumSize((int)param_1[10],0x19);
  QWidget::setMaximumSize((int)param_1[10],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[10]);
  local_c0 = 0x19;
  local_bc = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[10]);
  QBoxLayout::addWidget(param_1[8],param_1[10],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[7]);
  param_1[0xb] = pCVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1e0120d);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057fba1;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10057fba1:
  QWidget::setMinimumSize((int)param_1[0xb],0x19);
  QWidget::setMaximumSize((int)param_1[0xb],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xb]);
  local_d0 = 0x19;
  local_cc = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xb]);
  QBoxLayout::addWidget(param_1[8],param_1[0xb],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[7]);
  param_1[0xc] = pCVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1dfb096);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057fc86;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10057fc86:
  QWidget::setMinimumSize((int)param_1[0xc],0x19);
  QWidget::setMaximumSize((int)param_1[0xc],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xc]);
  local_e0 = 0x19;
  local_dc = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xc]);
  QBoxLayout::addWidget(param_1[8],param_1[0xc],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[7]);
  param_1[0xd] = pCVar7;
  QString::fromUtf8_helper((char *)&local_e8,0x1dfb0a0);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057fd6b;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10057fd6b:
  local_f0[0] = 0x30000;
  QSizePolicy::setControlType(local_f0,1);
  local_f0[0] = local_f0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_f0[0] = local_f0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QWidget::setMinimumSize((int)param_1[0xd],0x19);
  QWidget::setMaximumSize((int)param_1[0xd],0xffffff);
  QAbstractButton::setIcon((QIcon *)param_1[0xd]);
  local_f8 = 0x19;
  local_f4 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xd]);
  QBoxLayout::addWidget(param_1[8],param_1[0xd],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_1[7]);
  param_1[0xe] = pCVar7;
  QString::fromUtf8_helper((char *)&local_100,0x1dfb0aa);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_30 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057fe9f;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10057fe9f:
  QWidget::setMinimumSize((int)param_1[0xe],0x19);
  QWidget::setMaximumSize((int)param_1[0xe],0x19);
  QAbstractButton::setIcon((QIcon *)param_1[0xe]);
  local_108 = 0x19;
  local_104 = 0x19;
  QAbstractButton::setIconSize((QSize *)param_1[0xe]);
  QBoxLayout::addWidget(param_1[8],param_1[0xe],0,0);
  QBoxLayout::addWidget(param_1[3],param_1[7],0,0);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[0xf] = this_01;
  QString::fromUtf8_helper((char *)&local_110,0x1dd6e41);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_30 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_30) goto LAB_10057ffa4;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10057ffa4:
  QDialogButtonBox::setStandardButtons(param_1[0xf],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0xf],0,0);
  FUN_1005807f0(param_1,param_2);
  QObject::connect(local_118,param_1[0xf],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_118);
  QObject::connect(local_120,param_1[0xf],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_120);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_98);
  return;
}

