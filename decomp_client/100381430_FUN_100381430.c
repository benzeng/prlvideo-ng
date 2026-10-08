
void FUN_100381430(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *this;
  QFrame *pQVar4;
  QGridLayout *this_00;
  QWidget *pQVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  QArrayData *local_98;
  uint local_90 [2];
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
      if (*(int *)local_40 != 0) goto LAB_100381483;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100381483:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1defd8e);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1003814da;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1003814da:
  local_38 = true;
  uStack_37 = 0x14d000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QBoxLayout::setSpacing((int)this);
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1bb6);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_100381580;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100381580:
  pQVar4 = operator_new(0x30);
  QFrame::QFrame(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_58,0x1defd9f);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003815f1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003815f1:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00,(QWidget *)param_1[1]);
  param_1[2] = this_00;
  QGridLayout::setSpacing((int)this_00);
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_60,0x1dd67e5);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_100381681;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100381681:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[1],0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1defdab);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003816fa;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003816fa:
  local_70[0] = 0x50000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QGridLayout::addWidget(param_1[2],param_1[3],0,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000080;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[4] = puVar6;
  QGridLayout::addItem(param_1[2],puVar6,0,2,3,1,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[1],0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1defdbc);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038185e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10038185e:
  QWidget::setAutoFillBackground(SUB81(param_1[5],0));
  QGridLayout::addWidget(param_1[2],param_1[5],1,1,1,1,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[1],0);
  param_1[6] = pQVar5;
  QString::fromUtf8_helper((char *)&local_80,0x1defdca);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100381908;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100381908:
  uVar3 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QGridLayout::addWidget(param_1[2],param_1[6],2,1,1,1,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar7;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000080;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[7] = puVar6;
  QGridLayout::addItem(param_1[2],puVar6,0,0,3,1,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[8] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1defdde);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100381a51;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100381a51:
  local_90[0] = 0x350000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QBoxLayout::addWidget(*param_1,param_1[8],0,0);
  pQVar4 = operator_new(0x30);
  QFrame::QFrame(pQVar4,param_2,0);
  param_1[9] = pQVar4;
  QString::fromUtf8_helper((char *)&local_98,0x1defded);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100381b2a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100381b2a:
  uVar3 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QBoxLayout::addWidget(*param_1,param_1[9],0,0);
  FUN_100381e40(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

