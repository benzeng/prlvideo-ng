
void FUN_100395530(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QFrame *pQVar5;
  QLabel *pQVar6;
  undefined8 *puVar7;
  QWidget *pQVar8;
  QGridLayout *pQVar9;
  QHBoxLayout *pQVar10;
  undefined *puVar11;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  uint local_c0 [2];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  uint local_88 [2];
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
      if (*(int *)local_40 != 0) goto LAB_100395586;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100395586:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df0d76);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1003955dd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1003955dd:
  local_38 = true;
  uStack_37 = 0x159000001;
  QWidget::resize(param_2);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395679;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100395679:
  pQVar5 = operator_new(0x30);
  QFrame::QFrame(pQVar5,param_2,0);
  param_1[1] = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1df0d90);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003956ea;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003956ea:
  QFrame::setFrameShape(param_1[1],0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[1]);
  param_1[2] = pQVar4;
  QLayout::setContentsMargins((int)pQVar4,0,0,0);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_60,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039577a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10039577a:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_68,0x1df0d9c);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003957ec;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003957ec:
  local_70[0] = 0x50000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QLabel::setTextInteractionFlags(param_1[3],5);
  QBoxLayout::addWidget(param_1[2],param_1[3],0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_78,0x1df0dad);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003958bd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003958bd:
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QBoxLayout::addWidget(param_1[2],param_1[4],0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar11 = PTR_vtable_1021e17a0 + 0x10;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x200000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[5] = puVar7;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar7);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_80,0x1df0dc0);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003959c0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003959c0:
  local_88[0] = 0x550000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QLabel::setWordWrap(SUB81(param_1[6],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[6],0));
  QBoxLayout::addWidget(param_1[2],param_1[6],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[1],0);
  param_1[7] = pQVar8;
  QString::fromUtf8_helper((char *)&local_90,0x1df0dd0);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395aa8;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100395aa8:
  pQVar9 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar9,(QWidget *)param_1[7]);
  param_1[8] = pQVar9;
  QString::fromUtf8_helper((char *)&local_98,0x1df0de0);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395b21;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100395b21:
  QGridLayout::setVerticalSpacing((int)param_1[8]);
  QLayout::setContentsMargins((int)param_1[8],0,5,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a0,0x1df0de3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395bbc;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100395bbc:
  QGridLayout::addWidget(param_1[8],param_1[9],1,0,1,1,0);
  pQVar9 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar9);
  param_1[10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_a8,0x1df0df5);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395c58;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100395c58:
  QGridLayout::setVerticalSpacing((int)param_1[10]);
  pQVar10 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar10);
  param_1[0xb] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar2 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_b0,0x1df0df8);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395ce9;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100395ce9:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[0xc] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b8,0x1df0dfb);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395d64;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100395d64:
  local_c0[0] = 0x530000;
  QSizePolicy::setControlType(local_c0,1);
  local_c0[0] = local_c0[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_c0[0] = local_c0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  QBoxLayout::addWidget(param_1[0xb],param_1[0xc],0,0);
  QGridLayout::addLayout(param_1[10],param_1[0xb],0,0,1,1,0);
  pQVar10 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar10);
  param_1[0xd] = pQVar10;
  QBoxLayout::setSpacing((int)pQVar10);
  pQVar2 = (QString *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_c8,0x1df0e0c);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395e6e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100395e6e:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[0xe] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d0,0x1df0e0f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100395ee9;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100395ee9:
  uVar3 = QWidget::sizePolicy();
  local_c0[0] = local_c0[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xe]);
  QBoxLayout::addWidget(param_1[0xd],param_1[0xe],0,0);
  QGridLayout::addLayout(param_1[10],param_1[0xd],1,0,1,1,0);
  QGridLayout::addLayout(param_1[8],param_1[10],6,0,1,1,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x200000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar7;
  QGridLayout::addItem(param_1[8],puVar7,0,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d8,0x1df0e1f);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039606d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10039606d:
  QLabel::setWordWrap(SUB81(param_1[0x10],0));
  QGridLayout::addWidget(param_1[8],param_1[0x10],2,0,1,1,0);
  QBoxLayout::addWidget(param_1[2],param_1[7],0,0);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[0x11] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_e0,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_38 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100396142;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100396142:
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x200000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar7;
  (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],puVar7);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[1],0);
  param_1[0x13] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1df0e30);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_38 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039622d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10039622d:
  QLabel::setOpenExternalLinks(SUB81(param_1[0x13],0));
  QBoxLayout::addWidget(param_1[0x11],param_1[0x13],0,0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = puVar11;
  *(undefined8 *)((long)puVar7 + 0xc) = 0x400000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar7;
  (**(code **)(*(long *)param_1[0x11] + 0x70))((long *)param_1[0x11],puVar7);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[0x11]);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_1003968b0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

