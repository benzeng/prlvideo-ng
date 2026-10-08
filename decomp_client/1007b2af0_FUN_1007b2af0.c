
void FUN_1007b2af0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QGridLayout *this;
  QLabel *pQVar3;
  QLineEdit *this_00;
  QTextEdit *this_01;
  undefined8 *puVar4;
  QHBoxLayout *this_02;
  QDialogButtonBox *this_03;
  undefined *puVar5;
  uint local_88 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1007b2b43;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007b2b43:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e17e04);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1007b2b9a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1007b2b9a:
  local_38 = true;
  uStack_37 = 0x15e000002;
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
      if (local_38) goto LAB_1007b2c22;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007b2c22:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b2c93;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007b2c93:
  QWidget::setMinimumSize((int)param_1[1],0x73);
  QLabel::setAlignment(param_1[1],0x82);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  this_00 = operator_new(0x30);
  QLineEdit::QLineEdit(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_60,0x1e17e1b);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b2d43;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007b2d43:
  QGridLayout::addWidget(*param_1,param_1[2],0,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[3] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1dd681a);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b2dda;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007b2dda:
  QWidget::setMinimumSize((int)param_1[3],0x73);
  QLabel::setAlignment(param_1[3],0x82);
  QGridLayout::addWidget(*param_1,param_1[3],1,0,1,1,0);
  this_01 = operator_new(0x30);
  QTextEdit::QTextEdit(this_01,(QWidget *)param_2);
  param_1[4] = this_01;
  QString::fromUtf8_helper((char *)&local_70,0x1e17e26);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b2e8d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007b2e8d:
  QGridLayout::addWidget(*param_1,param_1[4],1,1,2,1,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar5 = PTR_vtable_1021e17a0 + 0x10;
  *puVar4 = puVar5;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[5] = puVar4;
  QGridLayout::addItem(*param_1,puVar4,2,0,1,1,0);
  this_02 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_02);
  param_1[6] = this_02;
  QString::fromUtf8_helper((char *)&local_78,0x1dc12b3);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b2fac;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007b2fac:
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = puVar5;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1a000000ab;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[7] = puVar4;
  (**(code **)(*(long *)param_1[6] + 0x70))((long *)param_1[6],puVar4);
  this_03 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_03,(QWidget *)param_2);
  param_1[8] = this_03;
  QString::fromUtf8_helper((char *)&local_80,0x1e17e38);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b3082;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007b3082:
  local_88[0] = 0x30000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QDialogButtonBox::setStandardButtons(param_1[8],0x400400);
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  QGridLayout::addLayout(*param_1,param_1[6],3,0,1,2,0);
  FUN_1007b3390(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

