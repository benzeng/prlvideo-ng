
void FUN_1007b0ab0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QGridLayout *pQVar4;
  QWidget *pQVar5;
  QFrame *pQVar6;
  QPushButton *pQVar7;
  undefined8 *puVar8;
  CHelpButton *this;
  undefined *puVar9;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  uint local_98 [2];
  QArrayData *local_90;
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
      if (*(int *)local_40 != 0) goto LAB_1007b0b06;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007b0b06:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1db9830);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1007b0b5d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1007b0b5d:
  local_38 = true;
  uStack_37 = 0x222000003;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6d5e);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b0bf9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007b0bf9:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1e119ab);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b0c6a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007b0c6a:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[1]);
  param_1[2] = pQVar4;
  QGridLayout::setSpacing((int)pQVar4);
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
      if (local_38) goto LAB_1007b0cfa;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007b0cfa:
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_68,0x1e17d83);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b0d6c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007b0d6c:
  local_70[0] = 0x770000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QWidget::setFocusPolicy(param_1[3],0xb);
  QFrame::setLineWidth((int)param_1[3]);
  QGridLayout::addWidget(param_1[2],param_1[3],0,0,1,1,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[1],0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1e17d94);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b0e5b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007b0e5b:
  QWidget::setMinimumSize((int)param_1[4],0);
  QWidget::setMaximumSize((int)param_1[4],0xffffff);
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[4]);
  param_1[5] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_80,0x1dd6d51);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b0f03;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007b0f03:
  QGridLayout::setHorizontalSpacing((int)param_1[5]);
  QGridLayout::setVerticalSpacing((int)param_1[5]);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[4]);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_88,0x1e17da2);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b0f8c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007b0f8c:
  QGridLayout::addWidget(param_1[5],param_1[6],3,7,1,1,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[4],0);
  param_1[7] = pQVar5;
  QString::fromUtf8_helper((char *)&local_90,0x1e17daa);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b1038;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007b1038:
  local_98[0] = 0x570000;
  QSizePolicy::setControlType(local_98,1);
  local_98[0] = local_98[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QWidget::setMinimumSize((int)param_1[7],0);
  QWidget::setMaximumSize((int)param_1[7],0xffffff);
  QGridLayout::addWidget(param_1[5],param_1[7],1,0,1,9,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,2,7,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[9] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,4,7,1,1,0);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[4],0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a0,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b1253;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1007b1253:
  uVar3 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QWidget::setMinimumSize((int)param_1[10],0);
  QWidget::setMaximumSize((int)param_1[10],0xffffff);
  QGridLayout::addWidget(param_1[5],param_1[10],5,0,1,9,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[4]);
  param_1[0xb] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0120d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b1340;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007b1340:
  QGridLayout::addWidget(param_1[5],param_1[0xb],3,4,1,1,0);
  this = operator_new(0x38);
  CHelpButton::CHelpButton(this,(QWidget *)param_1[4]);
  param_1[0xc] = this;
  QString::fromUtf8_helper((char *)&local_b0,0x1dd6d8f);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b13e3;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1007b13e3:
  QGridLayout::addWidget(param_1[5],param_1[0xc],3,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,3,0,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,3,8,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar9;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000000;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,3,3,1,1,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[4]);
  param_1[0x10] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b8,0x1e17db6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b1602;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1007b1602:
  QGridLayout::addWidget(param_1[5],param_1[0x10],3,6,1,1,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[4]);
  param_1[0x11] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c0,0x1e17dbf);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b16ab;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007b16ab:
  QGridLayout::addWidget(param_1[5],param_1[0x11],3,5,1,1,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_1[4]);
  param_1[0x12] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1e17dca);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1007b1754;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1007b1754:
  QGridLayout::addWidget(param_1[5],param_1[0x12],3,2,1,1,0);
  QGridLayout::addWidget(param_1[2],param_1[4],1,0,1,1,0);
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  FUN_1007b1d60(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

