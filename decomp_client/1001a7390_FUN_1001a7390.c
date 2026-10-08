
void FUN_1001a7390(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QGridLayout *pQVar3;
  QWidget *pQVar4;
  QLabel *pQVar5;
  undefined8 *puVar6;
  QLineEdit *pQVar7;
  CHelpButton *this;
  QDialogButtonBox *this_00;
  undefined *puVar8;
  Connection local_c0 [8];
  Connection local_b8 [8];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QFont local_78 [16];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  uint local_48 [2];
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
      if (*(int *)local_38 != 0) goto LAB_1001a73e4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001a73e4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1dd6d3c);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1001a743b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1001a743b:
  local_30 = true;
  uStack_2f = 0xd9000001;
  QWidget::resize(param_2);
  local_48[0] = 0;
  QSizePolicy::setControlType(local_48,1);
  local_48[0] = local_48[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setMinimumSize((int)param_2,0x1b3);
  QWidget::setMaximumSize((int)param_2,0x1b3);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6d51);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7525;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001a7525:
  QGridLayout::setHorizontalSpacing((int)*param_1);
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,0xe,0xf,-1);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a75c8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001a75c8:
  QGridLayout::setHorizontalSpacing((int)param_1[1]);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6d6b);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7647;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001a7647:
  uVar2 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QWidget::setMinimumSize((int)param_1[2],0x40);
  QWidget::setMaximumSize((int)param_1[2],0x40);
  QGridLayout::addWidget(param_1[1],param_1[2],0,0,2,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d75);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7726;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001a7726:
  QFont::QFont(local_78);
  QFont::setWeight((int)local_78);
  QFont::setWeight((int)local_78);
  QWidget::setFont((QFont *)param_1[3]);
  QLabel::setWordWrap(SUB81(param_1[3],0));
  QGridLayout::addWidget(param_1[1],param_1[3],0,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[4] = puVar6;
  QGridLayout::addItem(param_1[1],puVar6,1,1,1,1,0);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,3,0);
  pQVar3 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar3);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_80,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a78a7;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001a78a7:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[6] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1dd681a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7916;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1001a7916:
  QWidget::setMinimumSize((int)param_1[6],0x9b);
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[5],param_1[6],0,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar7,(QWidget *)param_2);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_90,0x1dc1c16);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a79d1;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001a79d1:
  QGridLayout::addWidget(param_1[5],param_1[7],0,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1dd6d7d);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7a73;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001a7a73:
  QWidget::setMinimumSize((int)param_1[8],0x9b);
  QLabel::setAlignment(param_1[8],0x82);
  QGridLayout::addWidget(param_1[5],param_1[8],1,0,1,1,0);
  pQVar7 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar7,(QWidget *)param_2);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1dd6d85);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7b31;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1001a7b31:
  QLineEdit::setEchoMode(param_1[9],2);
  QGridLayout::addWidget(param_1[5],param_1[9],1,1,1,1,0);
  QGridLayout::addLayout(*param_1,param_1[5],1,0,1,3,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,2,0,1,3,0);
  this = operator_new(0x38);
  CHelpButton::CHelpButton(this,(QWidget *)param_2);
  param_1[0xb] = this;
  QString::fromUtf8_helper((char *)&local_a8,0x1dd6d8f);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7c8a;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1001a7c8a:
  QGridLayout::addWidget(*param_1,param_1[0xb],3,1,1,1,0);
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[0xc] = this_00;
  QString::fromUtf8_helper((char *)&local_b0,0x1dc1c64);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_30 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001a7d2c;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1001a7d2c:
  QDialogButtonBox::setOrientation(param_1[0xc],1);
  QDialogButtonBox::setStandardButtons(param_1[0xc],0x400400);
  QGridLayout::addWidget(*param_1,param_1[0xc],3,2,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar6;
  QGridLayout::addItem(*param_1,puVar6,3,0,1,1,0);
  FUN_1001a8260(param_1,param_2);
  QObject::connect(local_b8,param_1[0xc],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_b8);
  QObject::connect(local_c0,param_1[0xc],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_c0);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_78);
  return;
}

