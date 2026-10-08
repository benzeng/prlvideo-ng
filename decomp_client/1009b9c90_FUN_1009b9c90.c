
void FUN_1009b9c90(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QGridLayout *this;
  QVBoxLayout *this_00;
  QLabel *pQVar3;
  undefined8 *puVar4;
  CProgressIndicator *pCVar5;
  QDialogButtonBox *this_01;
  undefined *puVar6;
  QArrayData *local_a0;
  QArrayData *local_98;
  uint local_90 [2];
  QArrayData *local_88;
  QFont local_80 [16];
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
      if (*(int *)local_40 != 0) goto LAB_1009b9ce3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009b9ce3:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e3564c);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1009b9d3a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1009b9d3a:
  local_38 = true;
  uStack_37 = 0xc6000002;
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
      if (local_38) goto LAB_1009b9dc2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b9dc2:
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dc1597);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b9e2e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009b9e2e:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_60,0x1e024eb);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b9e9f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009b9e9f:
  QWidget::setMinimumSize((int)param_1[2],0x40);
  QWidget::setMaximumSize((int)param_1[2],0x40);
  QLabel::setScaledContents(SUB81(param_1[2],0));
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[3] = puVar4;
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],puVar4);
  QGridLayout::addLayout(*param_1,param_1[1],0,0,4,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[4] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1e35662);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009b9fea;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009b9fea:
  local_70[0] = 0x570000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  QFont::QFont(local_80);
  QFont::setWeight((int)local_80);
  QFont::setWeight((int)local_80);
  QWidget::setFont((QFont *)param_1[4]);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QGridLayout::addWidget(*param_1,param_1[4],0,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_88,0x1e35670);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009ba101;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1009ba101:
  local_90[0] = 0x5d0000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QLabel::setWordWrap(SUB81(param_1[5],0));
  QGridLayout::addWidget(*param_1,param_1[5],1,1,1,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar6;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[6] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,2,1,1,1,0);
  pCVar5 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar5,param_2,1);
  param_1[7] = pCVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1e3567d);
  QObject::setObjectName((QString *)pCVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009ba28a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1009ba28a:
  QGridLayout::addWidget(*param_1,param_1[7],3,1,1,1,0);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[8] = this_01;
  QString::fromUtf8_helper((char *)&local_a0,0x1e3568b);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1009ba32c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1009ba32c:
  QDialogButtonBox::setStandardButtons(param_1[8],0x414000);
  QGridLayout::addWidget(*param_1,param_1[8],4,0,1,2,0);
  FUN_1009ba620(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_80);
  return;
}

