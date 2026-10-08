
void FUN_1001a8950(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QGridLayout *this;
  QVBoxLayout *pQVar4;
  QWidget *pQVar5;
  undefined8 *puVar6;
  QLabel *pQVar7;
  QDialogButtonBox *this_00;
  undefined *puVar8;
  Connection local_c8 [8];
  Connection local_c0 [8];
  QArrayData *local_b8;
  QFont local_b0 [16];
  QArrayData *local_a0;
  QFont local_98 [16];
  uint local_88 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1001a89a6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a89a6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dd6dfd);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1001a89fd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1001a89fd:
  QWidget::setEnabled(SUB81(param_2,0));
  local_38 = true;
  uStack_37 = 0x82000001;
  QWidget::resize(param_2);
  local_50[0] = 0;
  QSizePolicy::setControlType(local_50,1);
  local_50[0] = local_50[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setMinimumSize((int)param_2,0x1a4);
  QWidget::setMaximumSize((int)param_2,0x1a4);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_58,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8af4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001a8af4:
  QGridLayout::setHorizontalSpacing((int)*param_1);
  QGridLayout::setVerticalSpacing((int)*param_1);
  QLayout::setContentsMargins((int)*param_1,0x14,0xe,-1);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[1] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_60,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8ba2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001a8ba2:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6d6b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8c13;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001a8c13:
  uVar3 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QWidget::setMinimumSize((int)param_1[2],0x40);
  QWidget::setMaximumSize((int)param_1[2],0x40);
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
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
  param_1[3] = puVar6;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar6);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,1,1,0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[4] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_70,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8d77;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001a8d77:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[5] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_78,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8df4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001a8df4:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8e65;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001a8e65:
  local_88[0] = 0x530000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QFont::QFont(local_98);
  QFont::setWeight((int)local_98);
  QFont::setWeight((int)local_98);
  QWidget::setFont((QFont *)param_1[6]);
  QLabel::setWordWrap(SUB81(param_1[6],0));
  QBoxLayout::addWidget(param_1[5],param_1[6],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1dd681a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a8f7c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1001a8f7c:
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QFont::QFont(local_b0);
  QFont::setPointSize((int)local_b0);
  QFont::setStrikeOut(SUB81(local_b0,0));
  QFont::setKerning(SUB81(local_b0,0));
  QWidget::setFont((QFont *)param_1[7]);
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[5]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar8;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[8] = puVar6;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar6);
  QGridLayout::addLayout(*param_1,param_1[4],0,1,1,1,0);
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[9] = this_00;
  QString::fromUtf8_helper((char *)&local_b8,0x1dd6e41);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1001a9112;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1001a9112:
  QDialogButtonBox::setOrientation(param_1[9],1);
  QDialogButtonBox::setStandardButtons(param_1[9],0x400);
  QGridLayout::addWidget(*param_1,param_1[9],1,0,1,2,0);
  FUN_1001a94f0(param_1,param_2);
  QObject::connect(local_c0,param_1[9],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_c0);
  QObject::connect(local_c8,param_1[9],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_c8);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_b0);
  QFont::~QFont(local_98);
  return;
}

