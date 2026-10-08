
void FUN_100426bc0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QFrame *pQVar5;
  QHBoxLayout *this;
  QGridLayout *this_00;
  QLabel *pQVar6;
  QString *pQVar7;
  undefined8 *puVar8;
  CPrlFileDevSelectorWidget *this_01;
  QDoubleSpinBox *this_02;
  CMemorySlider *this_03;
  QCheckBox *pQVar9;
  QWidget *pQVar10;
  void *pvVar11;
  QTreeWidgetItem *this_04;
  QLineEdit *this_05;
  QProgressBar *this_06;
  QDialogButtonBox *this_07;
  undefined *puVar12;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  uint local_e0 [2];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  uint local_90 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  bool local_48;
  undefined7 uStack_47;
  QVariant local_40;
  
  QObject::objectName();
  iVar1 = *(int *)(local_50 + 4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      _local_48 = CONCAT71(uStack_47,*(int *)local_50 != 0);
      if (*(int *)local_50 != 0) goto LAB_100426c16;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100426c16:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_58,0x1df3ac8);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        _local_48 = CONCAT71(uStack_47,*(int *)local_58 != 0);
        if (*(int *)local_58 != 0) goto LAB_100426c6d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100426c6d:
  local_48 = true;
  uStack_47 = 0x1d7000001;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1597);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_48 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_48) goto LAB_100426cf6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100426cf6:
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1df3add);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_48 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_48) goto LAB_100426d68;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100426d68:
  QWidget::setAutoFillBackground(SUB81(param_1[1],0));
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this,(QWidget *)param_1[1]);
  param_1[2] = this;
  QLayout::setContentsMargins((int)this,0,0,0);
  pQVar7 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_70,0x1df027f);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_48 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_48) goto LAB_100426dff;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100426dff:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[3] = this_00;
  QString::fromUtf8_helper((char *)&local_78,0x1dc1bb6);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_48 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_48) goto LAB_100426e6c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100426e6c:
  QLayout::setContentsMargins((int)param_1[3],4,-1,4);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1df3af0);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_48 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_48) goto LAB_100426eff;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100426eff:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[3],param_1[4],0,0,1,1,0);
  pQVar7 = operator_new(0x48);
  FUN_1001326c0(pQVar7,param_1[1]);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_88,0x1df3afa);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_48 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_48) goto LAB_100426fa6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100426fa6:
  local_90[0] = 0x70000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QGridLayout::addWidget(param_1[3],param_1[5],0,1,1,2,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar12 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar12;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x140000001e;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[6] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,0,3,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1bd0);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_48 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_48) goto LAB_10042712a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10042712a:
  QLabel::setAlignment(param_1[7],0x82);
  QGridLayout::addWidget(param_1[3],param_1[7],2,0,1,1,0);
  this_01 = operator_new(0x38);
  CPrlFileDevSelectorWidget::CPrlFileDevSelectorWidget(this_01,(QWidget *)param_1[1]);
  param_1[8] = this_01;
  QString::fromUtf8_helper((char *)&local_a0,0x1df3b04);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_48 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_48) goto LAB_1004271dd;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004271dd:
  uVar3 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[8]);
  QGridLayout::addWidget(param_1[3],param_1[8],2,1,1,2,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar12;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x140000001e;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[9] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,2,3,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a8,0x1df3b12);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_48 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427337;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100427337:
  QLabel::setAlignment(param_1[10],0x82);
  QGridLayout::addWidget(param_1[3],param_1[10],6,0,1,1,0);
  this_02 = operator_new(0x30);
  QDoubleSpinBox::QDoubleSpinBox(this_02,(QWidget *)param_1[1]);
  param_1[0xb] = this_02;
  QString::fromUtf8_helper((char *)&local_b0,0x1df3b24);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_48 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_48) goto LAB_1004273ea;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004273ea:
  QDoubleSpinBox::setDecimals((int)param_1[0xb]);
  QDoubleSpinBox::setMinimum(DAT_100e150e8);
  QDoubleSpinBox::setMaximum(DAT_100e1e230);
  QDoubleSpinBox::setValue(DAT_100e11070);
  QGridLayout::addWidget(param_1[3],param_1[0xb],6,1,1,1,0);
  this_03 = operator_new(0x38);
  CMemorySlider::CMemorySlider(this_03,(QWidget *)param_1[1]);
  param_1[0xc] = this_03;
  QString::fromUtf8_helper((char *)&local_b8,0x1df3b35);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_48 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_48) goto LAB_1004274d6;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004274d6:
  QAbstractSlider::setMinimum((int)param_1[0xc]);
  QAbstractSlider::setMaximum((int)param_1[0xc]);
  QAbstractSlider::setSingleStep((int)param_1[0xc]);
  QAbstractSlider::setPageStep((int)param_1[0xc]);
  QAbstractSlider::setValue((int)param_1[0xc]);
  QAbstractSlider::setOrientation(param_1[0xc],1);
  QSlider::setTickPosition(param_1[0xc],2);
  QGridLayout::addWidget(param_1[3],param_1[0xc],7,1,1,3,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[1]);
  param_1[0xd] = pQVar9;
  QString::fromUtf8_helper((char *)&local_c0,0x1df3b4a);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_48 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_48) goto LAB_1004275e6;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004275e6:
  QGridLayout::addWidget(param_1[3],param_1[0xd],10,1,1,3,0);
  pQVar9 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar9,(QWidget *)param_1[1]);
  param_1[0xe] = pQVar9;
  QString::fromUtf8_helper((char *)&local_c8,0x1df3b58);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_48 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_48) goto LAB_10042768d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10042768d:
  QGridLayout::addWidget(param_1[3],param_1[0xe],0xb,1,2,3,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_1[1],0);
  param_1[0xf] = pQVar10;
  QString::fromUtf8_helper((char *)&local_d0,0x1df3b67);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_48 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427736;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100427736:
  QWidget::setMinimumSize((int)param_1[0xf],0);
  QWidget::setMaximumSize((int)param_1[0xf],0xffffff);
  QGridLayout::addWidget(param_1[3],param_1[0xf],8,0,1,4,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_1[1],0);
  param_1[0x10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_d8,0x1df3b77);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_48 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427804;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100427804:
  local_e0[0] = 0x570000;
  QSizePolicy::setControlType(local_e0,1);
  local_e0[0] = local_e0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_e0[0] = local_e0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x10]);
  QGridLayout::addWidget(param_1[3],param_1[0x10],6,2,1,1,0);
  pQVar10 = operator_new(0x30);
  QWidget::QWidget(pQVar10,param_1[1],0);
  param_1[0x11] = pQVar10;
  QString::fromUtf8_helper((char *)&local_e8,0x1df3b87);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_48 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_48) goto LAB_10042790a;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10042790a:
  QWidget::setMinimumSize((int)param_1[0x11],0);
  QWidget::setMaximumSize((int)param_1[0x11],0xffffff);
  QWidget::setAutoFillBackground(SUB81(param_1[0x11],0));
  QGridLayout::addWidget(param_1[3],param_1[0x11],5,0,1,4,0);
  pvVar11 = operator_new(0x48);
  FUN_10013a440(pvVar11);
  param_1[0x12] = pvVar11;
  this_04 = operator_new(0x40);
  QTreeWidgetItem::QTreeWidgetItem(this_04,0);
  QString::fromUtf8_helper((char *)&local_f0,0x1df3872);
  pcVar2 = *(code **)(*(long *)this_04 + 0x20);
  QVariant::QVariant(&local_40,&local_f0);
  (*pcVar2)(this_04,0,0,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_48 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427a31;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100427a31:
  QTreeWidget::setHeaderItem((QTreeWidgetItem *)param_1[0x12]);
  pQVar7 = (QString *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_f8,0x1df3b97);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_48 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427aac;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100427aac:
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[0x12],0));
  QTreeView::setRootIsDecorated(SUB81(param_1[0x12],0));
  QTreeView::setItemsExpandable(SUB81(param_1[0x12],0));
  QTreeView::setExpandsOnDoubleClick(SUB81(param_1[0x12],0));
  QGridLayout::addWidget(param_1[3],param_1[0x12],9,0,1,4,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[0x13] = pQVar6;
  QString::fromUtf8_helper((char *)&local_100,0x1df3ba7);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_48 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427b97;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100427b97:
  QGridLayout::addWidget(param_1[3],param_1[0x13],3,0,1,1,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar12;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x140000001e;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar8;
  QGridLayout::addItem(param_1[3],puVar8,3,3,1,1,0);
  this_05 = operator_new(0x30);
  QLineEdit::QLineEdit(this_05,(QWidget *)param_1[1]);
  param_1[0x15] = this_05;
  QString::fromUtf8_helper((char *)&local_108,0x1df3bb5);
  QObject::setObjectName((QString *)this_05);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_48 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427cc9;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100427cc9:
  QLineEdit::setEchoMode(param_1[0x15],2);
  QGridLayout::addWidget(param_1[3],param_1[0x15],3,1,1,2,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[0x16] = pQVar6;
  QString::fromUtf8_helper((char *)&local_110,0x1df3bc3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_48 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427d8a;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100427d8a:
  QLabel::setAlignment(param_1[0x16],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x16],0));
  QGridLayout::addWidget(param_1[3],param_1[0x16],4,1,1,2,0);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[3]);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[0x17] = pQVar5;
  QString::fromUtf8_helper((char *)&local_118,0x1df3bd6);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_48 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427e7e;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100427e7e:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[0x17]);
  param_1[0x18] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  QLayout::setContentsMargins((int)param_1[0x18],0,0,0);
  pQVar7 = (QString *)param_1[0x18];
  QString::fromUtf8_helper((char *)&local_120,0x1dd6e19);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_48 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427f27;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100427f27:
  this_06 = operator_new(0x30);
  QProgressBar::QProgressBar(this_06,(QWidget *)param_1[0x17]);
  param_1[0x19] = this_06;
  QString::fromUtf8_helper((char *)&local_128,0x1df3be6);
  QObject::setObjectName((QString *)this_06);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_48 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_48) goto LAB_100427fa8;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100427fa8:
  QProgressBar::setValue((int)param_1[0x19]);
  QBoxLayout::addWidget(param_1[0x18],param_1[0x19],0,0);
  QBoxLayout::addWidget(*param_1,param_1[0x17],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar12;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x1a] = puVar8;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar8);
  this_07 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_07,(QWidget *)param_2);
  param_1[0x1b] = this_07;
  QString::fromUtf8_helper((char *)&local_130,0x1dc1c64);
  QObject::setObjectName((QString *)this_07);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_48 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_48) goto LAB_1004280cc;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1004280cc:
  QDialogButtonBox::setOrientation(param_1[0x1b],1);
  QDialogButtonBox::setStandardButtons(param_1[0x1b],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[0x1b],0,0);
  FUN_100428970(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

