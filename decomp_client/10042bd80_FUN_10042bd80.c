
void FUN_10042bd80(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QStackedWidget *this;
  QWidget *pQVar5;
  QGridLayout *pQVar6;
  QLabel *pQVar7;
  QDoubleSpinBox *this_00;
  undefined8 *puVar8;
  CMemorySlider *this_01;
  QCheckBox *pQVar9;
  CProgressIndicator *pCVar10;
  QProgressBar *this_02;
  QDialogButtonBox *this_03;
  undefined *puVar11;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  uint local_a8 [2];
  QArrayData *local_a0;
  uint local_98 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10042bdd6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10042bdd6:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df3c8c);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10042be2d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10042be2d:
  QWidget::setWindowModality(param_2,0);
  local_38 = true;
  uStack_37 = 0x122000001;
  QWidget::resize(param_2);
  local_50[0] = 0x550000;
  QSizePolicy::setControlType(local_50,1);
  local_50[0] = local_50[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setAttribute(param_2,2,0);
  QWidget::setFocusPolicy(param_2,0);
  QDialog::setModal(SUB81(param_2,0));
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e2a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042bf20;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10042bf20:
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_2);
  param_1[1] = this;
  QString::fromUtf8_helper((char *)&local_60,0x1dbaf2a);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042bf8f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10042bf8f:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,0,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1df3ca1);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042bfff;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10042bfff:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[2]);
  param_1[3] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_70,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c084;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10042c084:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[2],0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1df3cb0);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c0f6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10042c0f6:
  pQVar6 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar6,(QWidget *)param_1[4]);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c166;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10042c166:
  QLayout::setContentsMargins((int)param_1[5],0,-1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[4],0);
  param_1[6] = pQVar7;
  QString::fromUtf8_helper((char *)&local_88,0x1df3cc1);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c1f0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10042c1f0:
  uVar3 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QWidget::setLayoutDirection(param_1[6],0);
  QLabel::setAlignment(param_1[6],0x82);
  QGridLayout::addWidget(param_1[5],param_1[6],0,0,1,1,0);
  this_00 = operator_new(0x30);
  QDoubleSpinBox::QDoubleSpinBox(this_00,(QWidget *)param_1[4]);
  param_1[7] = this_00;
  QString::fromUtf8_helper((char *)&local_90,0x1df3ccb);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c2ca;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10042c2ca:
  local_98[0] = 0x10000;
  QSizePolicy::setControlType(local_98,1);
  local_98[0] = local_98[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[7]);
  QWidget::setMinimumSize((int)param_1[7],0x51);
  QDoubleSpinBox::setDecimals((int)param_1[7]);
  QDoubleSpinBox::setMinimum(DAT_100e150e8);
  QDoubleSpinBox::setMaximum(DAT_100e1e230);
  QDoubleSpinBox::setSingleStep(DAT_100e11050);
  QDoubleSpinBox::setValue(DAT_100e12b90);
  QGridLayout::addWidget(param_1[5],param_1[7],0,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x14000000f8;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,0,2,1,1,0);
  this_01 = operator_new(0x38);
  CMemorySlider::CMemorySlider(this_01,(QWidget *)param_1[4]);
  param_1[9] = this_01;
  QString::fromUtf8_helper((char *)&local_a0,0x1df3cda);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c4a6;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10042c4a6:
  local_a8[0] = 0x70000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = local_a8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[9]);
  QAbstractSlider::setMinimum((int)param_1[9]);
  QAbstractSlider::setMaximum((int)param_1[9]);
  QAbstractSlider::setSingleStep((int)param_1[9]);
  QAbstractSlider::setPageStep((int)param_1[9]);
  QAbstractSlider::setOrientation(param_1[9],1);
  QSlider::setTickPosition(param_1[9],2);
  QSlider::setTickInterval((int)param_1[9]);
  QGridLayout::addWidget(param_1[5],param_1[9],1,1,1,2,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1c00000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[10] = puVar8;
  QGridLayout::addItem(param_1[5],puVar8,2,1,1,1,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[4]);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b0,0x1df3ceb);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c67a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10042c67a:
  QGridLayout::addWidget(param_1[5],param_1[0xb],3,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[4]);
  param_1[0xc] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b8,0x1df3b58);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c71d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10042c71d:
  QGridLayout::addWidget(param_1[5],param_1[0xc],4,1,1,2,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[4]);
  param_1[0xd] = pQVar9;
  QString::fromUtf8_helper((char *)&local_c0,0x1df3cf9);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c7c0;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10042c7c0:
  QGridLayout::addWidget(param_1[5],param_1[0xd],5,1,1,2,0);
  QBoxLayout::addWidget(param_1[3],param_1[4],0);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,0,0);
  param_1[0xe] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c8,0x1df3d04);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c881;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10042c881:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[0xe]);
  param_1[0xf] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_d0,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c90f;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10042c90f:
  pQVar5 = operator_new(0x30);
  QWidget::QWidget(pQVar5,param_1[0xe],0);
  param_1[0x10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d8,0x1df3d13);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042c98d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10042c98d:
  pQVar6 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar6,(QWidget *)param_1[0x10]);
  param_1[0x11] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e0,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042ca0c;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10042ca0c:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar8;
  QGridLayout::addItem(param_1[0x11],puVar8,0,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x13] = puVar8;
  QGridLayout::addItem(param_1[0x11],puVar8,1,0,1,1,0);
  pCVar10 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar10,param_1[0x10],1);
  param_1[0x14] = pCVar10;
  QString::fromUtf8_helper((char *)&local_e8,0x1df3d23);
  QObject::setObjectName((QString *)pCVar10);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042cbb0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10042cbb0:
  QGridLayout::addWidget(param_1[0x11],param_1[0x14],1,1,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar8;
  QGridLayout::addItem(param_1[0x11],puVar8,1,2,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar8;
  QGridLayout::addItem(param_1[0x11],puVar8,2,1,1,1,0);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x10],0,0);
  QStackedWidget::addWidget((QWidget *)param_1[1]);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_02 = operator_new(0x30);
  QProgressBar::QProgressBar(this_02,(QWidget *)param_2);
  param_1[0x17] = this_02;
  QString::fromUtf8_helper((char *)&local_f0,0x1dd6876);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042cd98;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10042cd98:
  QBoxLayout::addWidget(*param_1,param_1[0x17],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar11;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x400000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar8;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar8);
  this_03 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_03,(QWidget *)param_2);
  param_1[0x19] = this_03;
  QString::fromUtf8_helper((char *)&local_f8,0x1dc1c64);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10042ce8f;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10042ce8f:
  QDialogButtonBox::setStandardButtons(param_1[0x19],0x6600000);
  QBoxLayout::addWidget(*param_1,param_1[0x19],0,0);
  FUN_10042d690(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[1]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

