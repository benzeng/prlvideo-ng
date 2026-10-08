
void FUN_1006eb170(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QWidget *pQVar5;
  undefined8 *puVar6;
  QHBoxLayout *this;
  QFormLayout *this_00;
  CProgressIndicator *pCVar7;
  QLabel *pQVar8;
  undefined *puVar9;
  uint local_90 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1006eb1c3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006eb1c3:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e1195e);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1006eb21a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006eb21a:
  local_38 = true;
  uStack_37 = 0x1b2000002;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb2b6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006eb2b6:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb327;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006eb327:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[1]);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1597);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb397;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006eb397:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x7200000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[3] = puVar6;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar6);
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this);
  param_1[4] = this;
  QString::fromUtf8_helper((char *)&local_68,0x1df027f);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb475;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006eb475:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x140000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[5] = puVar6;
  (**(code **)(*(long *)param_1[4] + 0x70))();
  this_00 = operator_new(0x20);
  QFormLayout::QFormLayout(this_00,(QWidget *)0x0);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1df4574);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb54a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006eb54a:
  QFormLayout::setHorizontalSpacing((int)param_1[6]);
  pCVar7 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar7,param_1[1],1);
  param_1[7] = pCVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1df1682);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb5cd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006eb5cd:
  local_80[0] = 0;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QWidget::setMinimumSize((int)param_1[7],0x20);
  QFormLayout::setWidget(param_1[6],0,0,param_1[7]);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[1],0);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_88,0x1e1197b);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006eb6ad;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006eb6ad:
  local_90[0] = 0x530000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QFormLayout::setWidget(param_1[6],0,1,param_1[8]);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[6]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x140000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[9] = puVar6;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar6);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[4]);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar9;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x7200000014;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[10] = puVar6;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar6);
  QWidget::raise();
  QWidget::raise();
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_1006ebac0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

