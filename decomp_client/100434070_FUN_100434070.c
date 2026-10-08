
void FUN_100434070(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  bool bVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QLabel *pQVar6;
  QTreeView *this;
  QHBoxLayout *this_00;
  CImageButton *pCVar7;
  undefined8 *puVar8;
  QDialogButtonBox *this_01;
  QArrayData *local_e0;
  QArrayData *local_d8;
  undefined8 local_d0;
  QArrayData *local_c8;
  QIcon local_c0 [8];
  uint local_b8 [2];
  QArrayData *local_b0;
  QArrayData *local_a8;
  undefined1 local_a0 [16];
  QBrush local_90 [8];
  undefined1 local_88 [16];
  QBrush local_78 [8];
  QPalette local_70 [16];
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
      if (*(int *)local_38 != 0) goto LAB_1004340c4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004340c4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df3fde);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10043411b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10043411b:
  local_30 = true;
  uStack_2f = 0x122000001;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_48,0x1dc1597);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004341a3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004341a3:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[1] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_50,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100434220;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100434220:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[2] = pQVar6;
  QString::fromUtf8_helper((char *)&local_58,0x1df3ff5);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_100434291;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100434291:
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  this = operator_new(0x30);
  QTreeView::QTreeView(this,(QWidget *)param_2);
  param_1[3] = this;
  QString::fromUtf8_helper((char *)&local_60,0x1df400d);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_100434311;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100434311:
  QWidget::setMinimumSize((int)param_1[3],0);
  QPalette::QPalette(local_70);
  QColor::setRgb((int)local_88,0xaf,0xaf,0xaf);
  QBrush::QBrush(local_78,local_88,1);
  QBrush::setStyle(local_78,1);
  QPalette::setBrush(local_70,0,0,local_78);
  QPalette::setBrush(local_70,2,0,local_78);
  QColor::setRgb((int)local_a0,0x80,0x80,0x80);
  QBrush::QBrush(local_90,local_a0,1);
  QBrush::setStyle(local_90,1);
  QPalette::setBrush(local_70,1,0,local_90);
  QWidget::setPalette((QPalette *)param_1[3]);
  QFrame::setFrameShape(param_1[3],1);
  QFrame::setFrameShadow(param_1[3],0x10);
  QTreeView::setRootIsDecorated(SUB81(param_1[3],0));
  QTreeView::setItemsExpandable(SUB81(param_1[3],0));
  QTreeView::setExpandsOnDoubleClick(SUB81(param_1[3],0));
  bVar3 = (bool)QTreeView::header();
  QHeaderView::setStretchLastSection(bVar3);
  QBoxLayout::addWidget(param_1[1],param_1[3],0,0);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[4] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_a8,0x1df401b);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004344e3;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004344e3:
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_2);
  param_1[5] = pCVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1df4027);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_30 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043455c;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10043455c:
  local_b8[0] = 0;
  QSizePolicy::setControlType(local_b8,1);
  local_b8[0] = local_b8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QWidget::setMinimumSize((int)param_1[5],0x19);
  QWidget::setMaximumSize((int)param_1[5],0x1a);
  QIcon::QIcon(local_c0);
  QString::fromUtf8_helper((char *)&local_c8,0x1e41978);
  local_d0 = 0xffffffffffffffff;
  QIcon::addFile(local_c0,&local_c8,&local_d0,0,1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100434655;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100434655:
  QAbstractButton::setIcon((QIcon *)param_1[5]);
  QBoxLayout::addWidget(param_1[4],param_1[5],0,0);
  pCVar7 = operator_new(0x60);
  CImageButton::CImageButton(pCVar7,(QWidget *)param_2);
  param_1[6] = pCVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1df4035);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004346ef;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004346ef:
  uVar4 = QWidget::sizePolicy();
  local_b8[0] = local_b8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QWidget::setMinimumSize((int)param_1[6],0x19);
  QWidget::setMaximumSize((int)param_1[6],0x1a);
  QAbstractButton::setIcon((QIcon *)param_1[6]);
  QBoxLayout::addWidget(param_1[4],param_1[6],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[7] = puVar8;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar8);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[4]);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[8] = this_01;
  QString::fromUtf8_helper((char *)&local_e0,0x1dc1c64);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10043486e;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10043486e:
  QDialogButtonBox::setOrientation(param_1[8],1);
  QDialogButtonBox::setStandardButtons(param_1[8],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[8],0,0);
  FUN_100434c20(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QIcon::~QIcon(local_c0);
  QBrush::~QBrush(local_90);
  QBrush::~QBrush(local_78);
  QPalette::~QPalette(local_70);
  return;
}

