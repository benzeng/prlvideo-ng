
void FUN_10063a990(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *pQVar3;
  QHBoxLayout *this;
  QLabel *pQVar4;
  undefined8 *puVar5;
  QDialogButtonBox *this_00;
  Connection local_98 [8];
  Connection local_90 [8];
  QArrayData *local_88;
  uint local_80 [2];
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
      if (*(int *)local_38 != 0) goto LAB_10063a9e1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10063a9e1:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e099e5);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10063aa38;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10063aa38:
  local_30 = true;
  uStack_2f = 0x9e000001;
  QWidget::resize(param_2);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1284);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063aac0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10063aac0:
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dc12b3);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063ab2c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10063ab2c:
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6546);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063ab98;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10063ab98:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1e099f9);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063ac09;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10063ac09:
  QWidget::setMinimumSize((int)param_1[3],0x20);
  QWidget::setMaximumSize((int)param_1[3],0x20);
  QLabel::setScaledContents(SUB81(param_1[3],0));
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar5 + 0xc) = 0xa00000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x310000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[4] = puVar5;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar5);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[2]);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1dd656e);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063ad3b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10063ad3b:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[6] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dc128f);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063adac;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10063adac:
  QLabel::setWordWrap(SUB81(param_1[6],0));
  QBoxLayout::addWidget(param_1[5],param_1[6],0,0);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[7] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1dfa560);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063ae3c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10063ae3c:
  local_80[0] = 0x330000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QLabel::setWordWrap(SUB81(param_1[7],0));
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[5]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  this_00 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_00,(QWidget *)param_2);
  param_1[8] = this_00;
  QString::fromUtf8_helper((char *)&local_88,0x1dd6e41);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063af27;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10063af27:
  QDialogButtonBox::setOrientation(param_1[8],1);
  QDialogButtonBox::setStandardButtons(param_1[8],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[8],0,0);
  FUN_10063b270(param_1,param_2);
  QObject::connect(local_90,param_1[8],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_90);
  QObject::connect(local_98,param_1[8],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_98);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

