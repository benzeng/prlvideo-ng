
void FUN_10072ae90(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  char *pcVar4;
  uint uVar5;
  QVBoxLayout *pQVar6;
  QWidget *pQVar7;
  CProgressIndicator *pCVar8;
  QHBoxLayout *pQVar9;
  undefined8 *puVar10;
  QLabel *pQVar11;
  CElidedLabel *this;
  QPushButton *this_00;
  undefined *puVar12;
  uint local_f8 [2];
  QArrayData *local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QPixmap local_b0 [32];
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
      if (*(int *)local_40 != 0) goto LAB_10072aee6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10072aee6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e13dae);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10072af3d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10072af3d:
  local_38 = true;
  uStack_37 = 0x120000000;
  QWidget::resize(param_2);
  local_50[0] = 0x770000;
  QSizePolicy::setControlType(local_50,1);
  local_50[0] = local_50[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setMinimumSize((int)param_2,0xd8);
  QWidget::setMaximumSize((int)param_2,500);
  QWidget::setContextMenuPolicy(param_2,0);
  QString::fromUtf8_helper((char *)&local_58,0x1e41978);
  QWidget::setStyleSheet((QString *)param_2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b010;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10072b010:
  QDialog::setModal(SUB81(param_2,0));
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6,(QWidget *)param_2);
  *param_1 = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b098;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10072b098:
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[1] = pQVar7;
  QString::fromUtf8_helper((char *)&local_68,0x1e13dc1);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b11a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10072b11a:
  uVar5 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[1]);
  QWidget::setMinimumSize((int)param_1[1],0xd8);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_70,0x1e41978);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b1a2;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10072b1a2:
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6,(QWidget *)param_1[1]);
  param_1[2] = pQVar6;
  QBoxLayout::setSpacing((int)pQVar6);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_78,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b223;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10072b223:
  QLayout::setContentsMargins((int)param_1[2],9,0x12,9);
  pCVar8 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar8,param_1[1],1);
  param_1[3] = pCVar8;
  QString::fromUtf8_helper((char *)&local_80,0x1dd6876);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b2b6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10072b2b6:
  QWidget::setMinimumSize((int)param_1[3],10);
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[4] = pQVar9;
  QString::fromUtf8_helper((char *)&local_88,0x1df0473);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b343;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10072b343:
  QLayout::setContentsMargins((int)param_1[4],-1,0,-1);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar10 = puVar12;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[5] = puVar10;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar10);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[1],0);
  param_1[6] = pQVar11;
  QString::fromUtf8_helper((char *)&local_90,0x1e13dcd);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b44b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10072b44b:
  pQVar3 = (QPixmap *)param_1[6];
  QString::fromUtf8_helper((char *)&local_b8,0x1e13dd6);
  QPixmap::QPixmap(local_b0,&local_b8,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b4ce;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10072b4ce:
  QLabel::setAlignment(param_1[6],0x82);
  QBoxLayout::addWidget(param_1[4],param_1[6],0,0);
  this = operator_new(0x38);
  CElidedLabel::CElidedLabel(this,(QWidget *)param_1[1]);
  param_1[7] = this;
  QString::fromUtf8_helper((char *)&local_c0,0x1e13e0e);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b566;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10072b566:
  QLabel::setAlignment(param_1[7],0x81);
  pcVar4 = (char *)param_1[7];
  QVariant::QVariant(&local_d0,true);
  QObject::setProperty(pcVar4,(QVariant *)"highlightColor");
  QVariant::~QVariant(&local_d0);
  QBoxLayout::addWidget(param_1[4],param_1[7],0,0);
  puVar10 = operator_new(0x28);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = puVar12;
  *(undefined8 *)((long)puVar10 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar10 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar10 + 0x14,1);
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + 0x24) = 0xffffffff;
  param_1[8] = puVar10;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar10);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[4]);
  pQVar11 = operator_new(0x30);
  QLabel::QLabel(pQVar11,param_1[1],0);
  param_1[9] = pQVar11;
  QString::fromUtf8_helper((char *)&local_d8,0x1e13e17);
  QObject::setObjectName((QString *)pQVar11);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b6ac;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10072b6ac:
  local_e0[0] = 0x570000;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = local_e0[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QLabel::setAlignment(param_1[9],0x84);
  QBoxLayout::addWidget(param_1[2],param_1[9],0,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[10] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[10];
  QString::fromUtf8_helper((char *)&local_e8,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b79d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10072b79d:
  QLayout::setContentsMargins((int)param_1[10],-1,6,-1);
  this_00 = operator_new(0x30);
  QPushButton::QPushButton(this_00,(QWidget *)param_1[1]);
  param_1[0xb] = this_00;
  QString::fromUtf8_helper((char *)&local_f0,0x1e13e26);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10072b834;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10072b834:
  local_f8[0] = 0x330000;
  QSizePolicy::setControlType(local_f8,1);
  local_f8[0] = local_f8[0] & 0xffff0000;
  uVar5 = QWidget::sizePolicy();
  local_f8[0] = local_f8[0] & 0xdfffffff | uVar5 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QWidget::setMinimumSize((int)param_1[0xb],0xa0);
  QWidget::setMaximumSize((int)param_1[0xb],0xa0);
  QAbstractButton::setChecked(SUB81(param_1[0xb],0));
  QAbstractButton::setAutoExclusive(SUB81(param_1[0xb],0));
  QBoxLayout::addWidget(param_1[10],param_1[0xb],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[10]);
  QBoxLayout::setStretch((int)param_1[2],0);
  QBoxLayout::setStretch((int)param_1[2],3);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_10072bd90(param_1,param_2);
  QPushButton::setDefault(SUB81(param_1[0xb],0));
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

