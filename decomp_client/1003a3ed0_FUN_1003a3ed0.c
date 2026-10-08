
void FUN_1003a3ed0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QWidget *pQVar4;
  QVBoxLayout *this;
  QFrame *pQVar5;
  QHBoxLayout *this_00;
  CAuthorizationLock *pCVar6;
  undefined8 *puVar7;
  QGridLayout *this_01;
  QDialogButtonBox *this_02;
  CProgressIndicator *pCVar8;
  undefined *puVar9;
  QArrayData *local_a8;
  uint local_a0 [2];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  uint local_68 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1003a3f26;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003a3f26:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df162d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1003a3f7d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1003a3f7d:
  local_38 = true;
  uStack_37 = 0x1ea000001;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1df1643);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4007;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003a4007:
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)*param_1);
  param_1[1] = this;
  QBoxLayout::setSpacing((int)this);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_58,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4084;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003a4084:
  QLayout::setContentsMargins((int)param_1[1],0,0,0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,*param_1,0);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1df1651);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4107;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003a4107:
  local_68[0] = 0x750000;
  QSizePolicy::setControlType(local_68,1);
  local_68[0] = local_68[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_68[0] = local_68[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,*param_1,0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1df165f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a41c9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003a41c9:
  QFrame::setFrameShape(param_1[3],4);
  QFrame::setFrameShadow(param_1[3],0x30);
  QBoxLayout::addWidget(param_1[1],param_1[3],0,0);
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,*param_1,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_78,0x1df1667);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4267;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003a4267:
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00,(QWidget *)param_1[4]);
  param_1[5] = this_00;
  QString::fromUtf8_helper((char *)&local_80,0x1dc12b3);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a42d7;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003a42d7:
  pCVar6 = operator_new(0x38);
  CAuthorizationLock::CAuthorizationLock(pCVar6,param_1[4],2);
  param_1[6] = pCVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1df1675);
  QObject::setObjectName((QString *)pCVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a434c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003a434c:
  QBoxLayout::addWidget(param_1[5],param_1[6],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[7] = puVar7;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar7);
  this_01 = operator_new(0x20);
  QGridLayout::QGridLayout(this_01);
  param_1[8] = this_01;
  QString::fromUtf8_helper((char *)&local_90,0x1dd67e5);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4444;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003a4444:
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar9;
  *(undefined8 *)((long)puVar7 + 0xc) = 0;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x310000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[9] = puVar7;
  QGridLayout::addItem(param_1[8],puVar7,0,0,1,2,0);
  this_02 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_02,(QWidget *)param_1[4]);
  param_1[10] = this_02;
  QString::fromUtf8_helper((char *)&local_98,0x1dc1c64);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4534;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003a4534:
  local_a0[0] = 0;
  QSizePolicy::setControlType(local_a0,1);
  local_a0[0] = local_a0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_a0[0] = local_a0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QDialogButtonBox::setOrientation(param_1[10],1);
  QDialogButtonBox::setStandardButtons(param_1[10],0x400400);
  QGridLayout::addWidget(param_1[8],param_1[10],1,1,1,1,0);
  pCVar8 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar8,param_1[4],1);
  param_1[0xb] = pCVar8;
  QString::fromUtf8_helper((char *)&local_a8,0x1df1682);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003a4647;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003a4647:
  QGridLayout::addWidget(param_1[8],param_1[0xb],1,0,1,1,0);
  QBoxLayout::addLayout((QLayout *)param_1[5],(int)param_1[8]);
  QBoxLayout::addWidget(param_1[1],param_1[4],0,0);
  QBoxLayout::setStretch((int)param_1[1],0);
  QBoxLayout::setStretch((int)param_1[1],1);
  QMainWindow::setCentralWidget((QWidget *)param_2);
  FUN_1003a4a90(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

