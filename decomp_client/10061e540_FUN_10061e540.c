
void FUN_10061e540(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *this;
  QWidget *pQVar4;
  QHBoxLayout *pQVar5;
  undefined8 *puVar6;
  CSearchLineEdit *pCVar7;
  CProgressIndicator *pCVar8;
  QLabel *pQVar9;
  QGridLayout *this_00;
  undefined *puVar10;
  uint local_d8 [2];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
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
      if (*(int *)local_40 != 0) goto LAB_10061e596;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10061e596:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0815a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10061e5ed;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10061e5ed:
  local_38 = true;
  uStack_37 = 0xb0000003;
  QWidget::resize(param_2);
  QWidget::setMinimumSize((int)param_2,0);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QBoxLayout::setSpacing((int)this);
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061e6a2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10061e6a2:
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_58,0x1e0816a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061e713;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10061e713:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_60,0x1df027f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061e794;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10061e794:
  QLayout::setContentsMargins((int)param_1[2],0,4,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[3] = puVar6;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar6);
  pCVar7 = operator_new(0x38);
  CSearchLineEdit::CSearchLineEdit(pCVar7,(QWidget *)param_1[1]);
  param_1[4] = pCVar7;
  QString::fromUtf8_helper((char *)&local_68,0x1e0817d);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061e88e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10061e88e:
  QLineEdit::setMaxLength((int)param_1[4]);
  QLineEdit::setAlignment(param_1[4],0x84);
  QBoxLayout::addWidget(param_1[2],param_1[4],0,0);
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[5] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_70,0x1df0473);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061e935;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10061e935:
  QLayout::setContentsMargins((int)param_1[5],8,-1,-1);
  pCVar8 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar8,param_1[1],1);
  param_1[6] = pCVar8;
  QString::fromUtf8_helper((char *)&local_78,0x1e0818e);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061e9c8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10061e9c8:
  QWidget::setMinimumSize((int)param_1[6],0x16);
  QBoxLayout::addWidget(param_1[5],param_1[6],0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[1],0);
  param_1[7] = pQVar9;
  QString::fromUtf8_helper((char *)&local_80,0x1e081b4);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061ea5b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10061ea5b:
  QLabel::setAlignment(param_1[7],0x84);
  QBoxLayout::addWidget(param_1[5],param_1[7],0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[8] = puVar6;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar6);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[5]);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[9] = pQVar4;
  QString::fromUtf8_helper((char *)&local_88,0x1e081cc);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061eb71;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10061eb71:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00,(QWidget *)param_1[9]);
  param_1[10] = this_00;
  QString::fromUtf8_helper((char *)&local_90,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061ebea;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10061ebea:
  QGridLayout::setHorizontalSpacing((int)param_1[10]);
  QLayout::setContentsMargins((int)param_1[10],0,6,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[9],0);
  param_1[0xb] = pQVar9;
  QString::fromUtf8_helper((char *)&local_98,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061ec8b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10061ec8b:
  QLabel::setAlignment(param_1[0xb],0x84);
  QLabel::setWordWrap(SUB81(param_1[0xb],0));
  QGridLayout::addWidget(param_1[10],param_1[0xb],0,0,1,3,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar6;
  QGridLayout::addItem(param_1[10],puVar6,1,0,1,1,0);
  pCVar7 = operator_new(0x38);
  CSearchLineEdit::CSearchLineEdit(pCVar7,(QWidget *)param_1[9]);
  param_1[0xd] = pCVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1e081e1);
  QObject::setObjectName((QString *)pCVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061edc4;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10061edc4:
  QLineEdit::setMaxLength((int)param_1[0xd]);
  QLineEdit::setAlignment(param_1[0xd],0x84);
  QGridLayout::addWidget(param_1[10],param_1[0xd],1,1,1,1,0);
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[0xe] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_a8,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061ee8d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10061ee8d:
  QLayout::setContentsMargins((int)param_1[0xe],8,-1,-1);
  pCVar8 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar8,param_1[9],1);
  param_1[0xf] = pCVar8;
  QString::fromUtf8_helper((char *)&local_b0,0x1e081f4);
  QObject::setObjectName((QString *)pCVar8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061ef29;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10061ef29:
  QWidget::setMinimumSize((int)param_1[0xf],0x16);
  QBoxLayout::addWidget(param_1[0xe],param_1[0xf],0,0);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[9],0);
  param_1[0x10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_b8,0x1e0821c);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061efc8;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10061efc8:
  QLabel::setAlignment(param_1[0x10],0x84);
  QBoxLayout::addWidget(param_1[0xe],param_1[0x10],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x11] = puVar6;
  (**(code **)(*(long *)param_1[0xe] + 0x70))((long *)param_1[0xe],puVar6);
  QGridLayout::addLayout(param_1[10],param_1[0xe],1,2,1,1,0);
  QBoxLayout::addWidget(*param_1,param_1[9],0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[0x12] = pQVar4;
  QString::fromUtf8_helper((char *)&local_c0,0x1e08236);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061f10e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10061f10e:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5,(QWidget *)param_1[0x12]);
  param_1[0x13] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c8,0x1df04e1);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061f194;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10061f194:
  QLayout::setContentsMargins((int)param_1[0x13],0,8,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000005a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar6;
  (**(code **)(*(long *)param_1[0x13] + 0x70))((long *)param_1[0x13],puVar6);
  pQVar9 = operator_new(0x30);
  QLabel::QLabel(pQVar9,param_1[0x12],0);
  param_1[0x15] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d0,0x1e08244);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10061f29a;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10061f29a:
  local_d8[0] = 0x350000;
  QSizePolicy::setControlType(local_d8,1);
  local_d8[0] = local_d8[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_d8[0] = local_d8[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x15]);
  QWidget::setMinimumSize((int)param_1[0x15],0);
  QLabel::setAlignment(param_1[0x15],0x24);
  QLabel::setWordWrap(SUB81(param_1[0x15],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[0x15],0));
  QBoxLayout::addWidget(param_1[0x13],param_1[0x15],0,0);
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = puVar10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x10000005a;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[0x16] = puVar6;
  (**(code **)(*(long *)param_1[0x13] + 0x70))((long *)param_1[0x13],puVar6);
  QBoxLayout::addWidget(*param_1,param_1[0x12],0,0);
  FUN_10061f9b0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

